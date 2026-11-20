#include "machine/register_pressure.h"

namespace machine {

void PressureTree::build(const std::vector<int32_t>& base)
{
	size_ = 1;
	while (size_ < base.size())
		size_ <<= 1;
	max_.assign(2 * size_, 0);
	add_.assign(2 * size_, 0);
	cover_.assign(2 * size_, 0);
	below_.assign(2 * size_, 0);
	for (size_t i = 0; i < base.size(); ++i)
		max_[size_ + i] = base[i];
	for (size_t i = size_; i-- > 1;)
		max_[i] = max_[2 * i] > max_[2 * i + 1] ? max_[2 * i] : max_[2 * i + 1];
}

int32_t PressureTree::max(uint32_t first, uint32_t last) const
{
	if (first > last || last >= size_)
		return query(1, 0, size_ - 1, first, last);
	const int32_t none = INT32_MIN / 2;
	int32_t left = none, right = none;
	size_t l = first + size_, r = last + size_;
	// Node zero represents an inactive boundary; shifting keeps it inactive.
	size_t la = first == 0 ? 0 : first + size_ - 1;
	size_t ra = last + 1 == size_ ? 0 : last + size_ + 1;
	while (l <= r)
	{
		if (l & 1)
		{
			left = max_[l] > left ? max_[l] : left;
			++l;
		}
		if (!(r & 1))
		{
			right = max_[r] > right ? max_[r] : right;
			--r;
		}
		l >>= 1;
		r >>= 1;
		la >>= 1;
		ra >>= 1;
		if (la != 0 && left != none)
			left += add_[la];
		if (ra != 0 && right != none)
			right += add_[ra];
	}
	// Above the last level both sides share their ancestors.
	for (; la > 1 && left != none;)
	{
		la >>= 1;
		left += add_[la];
	}
	for (; ra > 1 && right != none;)
	{
		ra >>= 1;
		right += add_[ra];
	}
	return left > right ? left : right;
}

void PressureTree::add(uint32_t first, uint32_t last, int32_t delta, uint32_t regs)
{
	if (first > last || last >= size_)
	{
		update(1, 0, size_ - 1, first, last, delta, regs);
		return;
	}
	size_t l = first + size_, r = last + size_;
	const size_t l0 = l, r0 = r;
	auto cover = [&](size_t node) {
		max_[node] += delta;
		add_[node] += delta;
		cover_[node] |= regs;
		below_[node] |= regs;
	};
	while (l <= r)
	{
		if (l & 1)
			cover(l++);
		if (!(r & 1))
			cover(r--);
		l >>= 1;
		r >>= 1;
	}
	// Rebuild separate boundary paths up to their join, then their common path.
	auto pull = [&](size_t node) {
		max_[node] = (max_[2 * node] > max_[2 * node + 1] ? max_[2 * node] : max_[2 * node + 1]) + add_[node];
		below_[node] = below_[2 * node] | below_[2 * node + 1] | cover_[node];
	};
	size_t left = l0 >> 1, right = r0 >> 1;
	while (left != right)
	{
		pull(left);
		pull(right);
		left >>= 1;
		right >>= 1;
	}
	for (; left != 0; left >>= 1)
		pull(left);
}

void PressureTree::build_regs(size_t slots)
{
	size_ = 1;
	while (size_ < slots)
		size_ <<= 1;
	cover_.assign(2 * size_, 0);
	below_.assign(2 * size_, 0);
}

void PressureTree::add_regs(uint32_t first, uint32_t last, uint32_t regs)
{
	if (first > last)
		return;
	if (last >= size_)
		last = static_cast<uint32_t>(size_ - 1);
	size_t l = first + size_, r = last + size_;
	const size_t l0 = l, r0 = r;
	while (l <= r)
	{
		if (l & 1)
		{
			cover_[l] |= regs;
			below_[l++] |= regs;
		}
		if (!(r & 1))
		{
			cover_[r] |= regs;
			below_[r--] |= regs;
		}
		l >>= 1;
		r >>= 1;
	}
	for (size_t left = l0 >> 1; left != 0; left >>= 1)
		below_[left] |= regs;
	for (size_t right = r0 >> 1; right != 0; right >>= 1)
		below_[right] |= regs;
}

uint32_t PressureTree::regs(uint32_t first, uint32_t last) const
{
	if (first > last || last >= size_)
		return regs_of(1, 0, size_ - 1, first, last);
	uint32_t mask = 0;
	bool left = false, right = false;
	size_t l = first + size_, r = last + size_;
	// Node zero represents an inactive boundary; shifting keeps it inactive.
	size_t la = first == 0 ? 0 : first + size_ - 1;
	size_t ra = last + 1 == size_ ? 0 : last + size_ + 1;
	while (l <= r)
	{
		if (l & 1)
		{
			mask |= below_[l++];
			left = true;
		}
		if (!(r & 1))
		{
			mask |= below_[r--];
			right = true;
		}
		l >>= 1;
		r >>= 1;
		la >>= 1;
		ra >>= 1;
		if (left && la != 0)
			mask |= cover_[la];
		if (right && ra != 0)
			mask |= cover_[ra];
	}
	for (; la > 1 && left;)
		mask |= cover_[la >>= 1];
	for (; ra > 1 && right;)
		mask |= cover_[ra >>= 1];
	return mask;
}

int32_t PressureTree::query(size_t node, size_t lo, size_t hi, size_t first, size_t last) const
{
	if (last < lo || hi < first)
		return INT32_MIN / 2;
	if (first <= lo && hi <= last)
		return max_[node];
	const size_t mid = (lo + hi) / 2;
	const int32_t a = query(2 * node, lo, mid, first, last);
	const int32_t b = query(2 * node + 1, mid + 1, hi, first, last);
	return (a > b ? a : b) + add_[node];
}

void PressureTree::update(size_t node, size_t lo, size_t hi, size_t first, size_t last, int32_t delta, uint32_t regs)
{
	if (last < lo || hi < first)
		return;
	if (first <= lo && hi <= last)
	{
		max_[node] += delta;
		add_[node] += delta;
		cover_[node] |= regs;
		below_[node] |= regs;
		return;
	}
	const size_t mid = (lo + hi) / 2;
	update(2 * node, lo, mid, first, last, delta, regs);
	update(2 * node + 1, mid + 1, hi, first, last, delta, regs);
	max_[node] = (max_[2 * node] > max_[2 * node + 1] ? max_[2 * node] : max_[2 * node + 1]) + add_[node];
	below_[node] = below_[2 * node] | below_[2 * node + 1] | cover_[node];
}

uint32_t PressureTree::regs_of(size_t node, size_t lo, size_t hi, size_t first, size_t last) const
{
	if (last < lo || hi < first)
		return 0;
	if (first <= lo && hi <= last)
		return below_[node];
	const size_t mid = (lo + hi) / 2;
	return regs_of(2 * node, lo, mid, first, last) | regs_of(2 * node + 1, mid + 1, hi, first, last) | cover_[node];
}

} // namespace machine
