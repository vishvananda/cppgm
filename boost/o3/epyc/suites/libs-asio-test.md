# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.875359 | 5.197989 | 5.335756 | 0.002656 | 0.002902 | 0.002961 |
| any_completion_executor_select.test | RUN | 0.887665 | 5.234979 | 5.830039 | 0.002755 | 0.003042 | 0.002797 |
| any_completion_handler.test | RUN | 0.877590 | 4.599771 | 4.957127 | 0.002072 | 0.002378 | 0.002150 |
| any_completion_handler_select.test | RUN | 0.997230 | 4.732720 | 5.102315 | 0.002140 | 0.002488 | 0.002301 |
| any_io_executor.test | RUN | 0.769363 | 5.648860 | 5.830454 | 0.002560 | 0.002958 | 0.002887 |
| any_io_executor_select.test | RUN | 0.929176 | 5.535886 | 6.119248 | 0.002603 | 0.003108 | 0.002958 |
| append.test | RUN | 0.815953 | 4.344891 | 4.427223 | 0.002432 | 0.002280 | 0.002157 |
| append_select.test | RUN | 0.803924 | 4.443831 | 4.394390 | 0.002222 | 0.002311 | 0.002310 |
| as_tuple.test | RUN | 1.062096 | 5.301254 | 5.999987 | 0.002520 | 0.002688 | 0.002577 |
| as_tuple_select.test | RUN | 1.074369 | 5.211895 | 5.868746 | 0.002270 | 0.002354 | 0.001920 |
| associated_allocator.test | LINK | 0.241807 | 0.515364 | 0.724883 | — | — | — |
| associated_allocator_select.test | LINK | 0.230859 | 0.493710 | 0.733368 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.250904 | 0.544055 | 0.812425 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.246269 | 0.565188 | 0.772653 | — | — | — |
| associated_executor.test | LINK | 0.359657 | 0.908916 | 1.287021 | — | — | — |
| associated_executor_select.test | LINK | 0.361996 | 0.923719 | 1.235364 | — | — | — |
| associated_immediate_executor.test | LINK | 0.327664 | 0.835661 | 1.179612 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.334072 | 0.853918 | 1.151271 | — | — | — |
| associator.test | LINK | 0.182083 | 0.394416 | 0.607263 | — | — | — |
| associator_select.test | LINK | 0.185292 | 0.400773 | 0.543652 | — | — | — |
| awaitable.test | LINK | 0.182942 | 0.389654 | 0.560951 | — | — | — |
| awaitable_select.test | LINK | 0.194359 | 0.397629 | 0.589157 | — | — | — |
| basic_datagram_socket.test | LINK | 0.554061 | 1.236679 | 2.304706 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.579454 | 1.291847 | 2.419671 | — | — | — |
| basic_deadline_timer.test | LINK | 0.681578 | 1.485304 | 2.636882 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.691966 | 1.525836 | 2.676134 | — | — | — |
| basic_file.test | LINK | 0.200196 | 0.417444 | 0.596069 | — | — | — |
| basic_file_select.test | LINK | 0.193933 | 0.393212 | 0.603455 | — | — | — |
| basic_random_access_file.test | LINK | 0.199527 | 0.382103 | 0.602286 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.187039 | 0.391870 | 0.586443 | — | — | — |
| basic_raw_socket.test | LINK | 0.559426 | 1.245622 | 2.328043 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.575933 | 1.289116 | 2.386255 | — | — | — |
| basic_readable_pipe.test | LINK | 0.540474 | 1.225982 | 1.989895 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.587446 | 1.263918 | 2.491713 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.577636 | 1.255381 | 2.288053 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.560327 | 1.268919 | 2.403195 | — | — | — |
| basic_signal_set.test | LINK | 0.511181 | 1.163139 | 1.746239 | — | — | — |
| basic_signal_set_select.test | LINK | 0.563732 | 1.223157 | 2.254792 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.549578 | 1.264522 | 2.337652 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.558586 | 1.293396 | 2.329532 | — | — | — |
| basic_stream_file.test | LINK | 0.191571 | 0.396080 | 0.620201 | — | — | — |
| basic_stream_file_select.test | LINK | 0.182862 | 0.400078 | 0.612546 | — | — | — |
| basic_stream_socket.test | LINK | 0.558331 | 1.221343 | 2.352204 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.564842 | 1.289195 | 2.299461 | — | — | — |
| basic_streambuf.test | LINK | 0.286965 | 0.588115 | 0.907086 | — | — | — |
| basic_streambuf_select.test | LINK | 0.275563 | 0.581713 | 0.928719 | — | — | — |
| basic_waitable_timer.test | LINK | 0.518832 | 1.165353 | 2.136259 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.533235 | 1.199810 | 2.222180 | — | — | — |
| basic_writable_pipe.test | LINK | 0.546890 | 1.213305 | 1.954719 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.609546 | 1.253034 | 2.469142 | — | — | — |
| bind_allocator.test | RUN | 0.877456 | 4.417170 | 4.812181 | 0.002345 | 0.002860 | 0.002617 |
| bind_allocator_select.test | RUN | 0.946728 | 4.471609 | 4.920104 | 0.002449 | 0.002535 | 0.002488 |
| bind_cancellation_slot.test | RUN | 0.897501 | 4.377582 | 4.797098 | 0.002448 | 0.001655 | 0.001627 |
| bind_cancellation_slot_select.test | RUN | 0.870069 | 4.424088 | 4.599919 | 0.002240 | 0.001598 | 0.001636 |
| bind_executor.test | RUN | 0.661839 | 3.006646 | 2.835280 | 0.002617 | 0.003036 | 0.003077 |
| bind_executor_select.test | RUN | 0.635114 | 3.281692 | 3.277271 | 0.002367 | 0.002880 | 0.002890 |
| bind_immediate_executor.test | RUN | 0.426755 | 2.738425 | 2.306165 | 0.001678 | 0.001829 | 0.001588 |
| bind_immediate_executor_select.test | RUN | 0.443222 | 2.586178 | 2.077112 | 0.001682 | 0.001672 | 0.001567 |
| buffer.test | RUN | 0.265754 | 1.027882 | 1.145736 | 0.001631 | 0.001513 | 0.001430 |
| buffer_select.test | RUN | 0.268555 | 1.038423 | 1.157627 | 0.001622 | 0.001504 | 0.001570 |
| buffer_registration.test | LINK | 0.218881 | 0.533709 | 0.670676 | — | — | — |
| buffer_registration_select.test | LINK | 0.211995 | 0.533537 | 0.674345 | — | — | — |
| buffered_read_stream.test | RUN | 0.940015 | 7.037666 | 6.940163 | 0.002065 | 0.002410 | 0.002697 |
| buffered_read_stream_select.test | RUN | 0.945184 | 7.367485 | 7.900109 | 0.002048 | 0.002609 | 0.002686 |
| buffered_stream.test | RUN | 1.709594 | 10.566699 | 11.488366 | 0.002636 | 0.002486 | 0.003010 |
| buffered_stream_select.test | RUN | 1.819675 | 10.548865 | 11.085059 | 0.002932 | 0.002964 | 0.002818 |
| buffered_write_stream.test | RUN | 1.650385 | 8.933922 | 9.777448 | 0.002751 | 0.002742 | 0.002721 |
| buffered_write_stream_select.test | RUN | 1.675394 | 9.078071 | 9.463273 | 0.002722 | 0.002973 | 0.002844 |
| buffers_iterator.test | RUN | 0.503358 | 0.892861 | 1.684685 | 0.002002 | 0.002206 | 0.001825 |
| buffers_iterator_select.test | RUN | 0.512907 | 0.906823 | 1.700323 | 0.002226 | 0.002236 | 0.002113 |
| cancel_after.test | RUN | 1.353728 | 7.099177 | 7.068809 | 0.004776 | 0.004714 | 0.004710 |
| cancel_after_select.test | RUN | 1.386170 | 7.070270 | 6.882211 | 0.004746 | 0.004050 | 0.004386 |
| cancel_at.test | RUN | 1.342645 | 5.963626 | 6.397682 | 0.004237 | 0.004060 | 0.004218 |
| cancel_at_select.test | RUN | 1.237523 | 5.831117 | 6.216033 | 0.004185 | 0.003951 | 0.003995 |
| cancellation_signal.test | LINK | 0.154035 | 0.315106 | 0.450329 | — | — | — |
| cancellation_signal_select.test | LINK | 0.221598 | 0.325618 | 0.445871 | — | — | — |
| cancellation_state.test | LINK | 0.186102 | 0.316352 | 0.442822 | — | — | — |
| cancellation_state_select.test | LINK | 0.250659 | 0.328206 | 0.438245 | — | — | — |
| cancellation_type.test | LINK | 0.183121 | 0.255587 | 0.360768 | — | — | — |
| cancellation_type_select.test | LINK | 0.188429 | 0.251168 | 0.345969 | — | — | — |
| co_composed.test | RUN | 0.182879 | 0.259206 | 0.380696 | 0.001840 | 0.001575 | 0.001540 |
| co_composed_select.test | RUN | 0.187096 | 0.257186 | 0.451212 | 0.001866 | 0.001629 | 0.002110 |
| co_spawn.test | LINK | 0.184717 | 0.259661 | 0.605745 | — | — | — |
| co_spawn_select.test | LINK | 0.186279 | 0.256593 | 0.546041 | — | — | — |
| completion_condition.test | LINK | 0.240534 | 0.480396 | 0.733036 | — | — | — |
| completion_condition_select.test | LINK | 0.243409 | 0.451249 | 0.818576 | — | — | — |
| compose.test | RUN | 1.067681 | 5.493585 | 6.110964 | 0.002664 | 0.002691 | 0.002764 |
| compose_select.test | RUN | 1.081449 | 5.393453 | 5.982070 | 0.002333 | 0.002308 | 0.002624 |
| composed.test | RUN | 1.044594 | 5.427768 | 5.898828 | 0.002464 | 0.002325 | 0.002322 |
| composed_select.test | RUN | 1.037925 | 5.359626 | 5.788775 | 0.002180 | 0.002168 | 0.002308 |
| config.test | RUN | 0.479749 | 3.575813 | 2.630689 | 0.002184 | 0.002382 | 0.002360 |
| config_select.test | RUN | 0.643945 | 3.797744 | 3.246053 | 0.002224 | 0.001935 | 0.002300 |
| connect.test | LINK | 1.668845 | 11.726173 | 12.589470 | — | — | — |
| connect_select.test | LINK | 1.670038 | 11.730422 | 12.619540 | — | — | — |
| connect_pipe.test | RUN | 0.935732 | 4.359025 | 4.635217 | 0.002243 | 0.002247 | 0.002441 |
| connect_pipe_select.test | RUN | 0.951272 | 4.542694 | 5.066648 | 0.002207 | 0.002422 | 0.002216 |
| consign.test | RUN | 0.828882 | 4.263858 | 4.161027 | 0.002143 | 0.002061 | 0.002178 |
| consign_select.test | RUN | 0.838880 | 4.349991 | 4.132400 | 0.002303 | 0.002243 | 0.001968 |
| coroutine.test | LINK | 0.196976 | 0.458066 | 0.627699 | — | — | — |
| coroutine_select.test | LINK | 0.191565 | 0.468765 | 0.655560 | — | — | — |
| deadline_timer.test | RUN | 1.170293 | 5.598648 | 6.148334 | 0.003716 | 0.004087 | 0.004121 |
| deadline_timer_select.test | RUN | 1.178137 | 5.507373 | 6.053782 | 0.003785 | 0.003760 | 0.003320 |
| deferred.test | RUN | 0.199338 | 0.420662 | 0.671536 | 0.002135 | 0.002090 | 0.002121 |
| deferred_select.test | RUN | 0.217063 | 0.440290 | 0.671813 | 0.002126 | 0.002084 | 0.002230 |
| detached.test | LINK | 0.229298 | 0.489757 | 0.759347 | — | — | — |
| detached_select.test | LINK | 0.229061 | 0.501151 | 0.732870 | — | — | — |
| disposition.test | RUN | 0.228733 | 1.126819 | 1.287522 | 0.001695 | 0.002182 | 0.002326 |
| disposition_select.test | RUN | 0.199346 | 1.107159 | 1.282273 | 0.001654 | 0.002193 | 0.002330 |
| error.test | RUN | 0.185418 | 1.067681 | 1.110354 | 0.001623 | 0.002147 | 0.002345 |
| error_select.test | RUN | 0.187027 | 1.062758 | 1.115995 | 0.001656 | 0.002377 | 0.002256 |
| file_base.test | LINK | 0.233401 | 0.877320 | 1.224059 | — | — | — |
| file_base_select.test | LINK | 0.242257 | 0.823505 | 1.034687 | — | — | — |
| fwd_first.test | LINK | 0.535413 | 1.280538 | 2.114270 | — | — | — |
| fwd_last.test | LINK | 0.530600 | 1.216665 | 2.148467 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.205993 | 0.506403 | 0.755649 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.207824 | 0.496984 | 0.794115 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.794638 | 4.223709 | 3.922466 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.786552 | 4.335129 | 3.984157 | — | — | — |
| generic_raw_protocol.test | LINK | 0.805211 | 4.243025 | 3.952489 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.804109 | 4.335284 | 3.897798 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.694173 | 3.586257 | 3.401502 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.697244 | 3.624421 | 3.376486 | — | — | — |
| generic_stream_protocol.test | LINK | 0.746065 | 3.854272 | 3.596018 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.743572 | 3.934613 | 3.667104 | — | — | — |
| high_resolution_timer.test | LINK | 0.333004 | 0.757916 | 1.207117 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.345587 | 0.776733 | 1.243675 | — | — | — |
| immediate.test | LINK | 0.229374 | 0.589877 | 0.740034 | — | — | — |
| immediate_select.test | LINK | 0.235598 | 0.572689 | 0.761099 | — | — | — |
| inline_executor.test | RUN | 0.287687 | 0.879511 | 1.101774 | 0.001698 | 0.001664 | 0.001547 |
| inline_executor_select.test | RUN | 0.293400 | 0.879130 | 1.110408 | 0.001718 | 0.001618 | 0.001578 |
| inline_or_executor.test | RUN | 0.460751 | 2.533003 | 2.067658 | 0.001630 | 0.001726 | 0.001586 |
| inline_or_executor_select.test | RUN | 0.472479 | 2.604353 | 2.229679 | 0.001699 | 0.001698 | 0.001568 |
| io_context.test | RUN | 0.647633 | 3.861527 | 3.538934 | 0.002932 | 0.002670 | 0.002693 |
| io_context_select.test | RUN | 0.661221 | 3.763324 | 3.500558 | 0.002684 | 0.002731 | 0.002572 |
| io_context_strand.test | RUN | 0.615311 | 3.930479 | 3.376691 | 0.002841 | 0.002709 | 0.003090 |
| io_context_strand_select.test | RUN | 0.631772 | 4.193252 | 3.799933 | 0.002641 | 0.002842 | 0.003030 |
| ip_address.test | LINK | 0.245706 | 1.232875 | 1.691700 | — | — | — |
| ip_address_select.test | LINK | 0.246093 | 1.203398 | 1.285389 | — | — | — |
| ip_address_v4.test | LINK | 0.239960 | 1.267188 | 1.030887 | — | — | — |
| ip_address_v4_select.test | LINK | 0.255216 | 1.089707 | 1.036929 | — | — | — |
| ip_address_v6.test | LINK | 0.279477 | 1.086625 | 1.260920 | — | — | — |
| ip_address_v6_select.test | LINK | 0.284076 | 1.086475 | 1.235175 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.222833 | 0.545010 | 0.837852 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.223303 | 0.542898 | 0.822330 | — | — | — |
| ip_basic_resolver.test | LINK | 0.341105 | 0.767006 | 1.236604 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.354116 | 0.813847 | 1.232806 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.120186 | 0.255161 | 0.340903 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.123497 | 0.254800 | 0.346447 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.221595 | 0.524470 | 0.796314 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.218652 | 0.525377 | 0.801588 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.206934 | 0.502574 | 0.765735 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.209448 | 0.503815 | 0.779332 | — | — | — |
| ip_host_name.test | RUN | 0.222264 | 0.665721 | 1.543048 | 0.001548 | 0.001575 | 0.001866 |
| ip_host_name_select.test | RUN | 0.220688 | 0.661833 | 1.578274 | 0.001710 | 0.001615 | 0.001831 |
| ip_icmp.test | RUN | 1.005185 | 8.030985 | 8.548691 | 0.001699 | 0.002208 | 0.002264 |
| ip_icmp_select.test | RUN | 0.989889 | 8.364996 | 8.515643 | 0.001696 | 0.002287 | 0.002146 |
| ip_multicast.test | RUN | 0.583638 | 4.597019 | 5.088829 | 0.001772 | 0.002508 | 0.002053 |
| ip_multicast_select.test | RUN | 0.598422 | 4.676526 | 5.023055 | 0.001776 | 0.002342 | 0.002026 |
| ip_resolver_query_base.test | LINK | 0.142431 | 0.430510 | 0.613372 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.140073 | 0.428849 | 0.630678 | — | — | — |
| ip_tcp.test | RUN | 1.451547 | 13.391743 | 13.195201 | 0.002414 | 0.003279 | 0.002640 |
| ip_tcp_select.test | RUN | 1.445643 | 13.900337 | 12.827731 | 0.002284 | 0.002956 | 0.002818 |
| ip_udp.test | RUN | 1.053211 | 9.517972 | 9.131414 | 0.001719 | 0.002329 | 0.002184 |
| ip_udp_select.test | RUN | 1.131060 | 9.823919 | 8.833618 | 0.002362 | 0.002425 | 0.002050 |
| ip_unicast.test | RUN | 0.834658 | 4.125575 | 4.360920 | 0.002206 | 0.002268 | 0.001886 |
| ip_unicast_select.test | RUN | 0.843639 | 4.288492 | 4.256000 | 0.002281 | 0.002228 | 0.001994 |
| ip_v6_only.test | RUN | 0.854402 | 4.381691 | 4.594980 | 0.002134 | 0.002559 | 0.002016 |
| ip_v6_only_select.test | RUN | 0.879553 | 4.570010 | 4.584543 | 0.002368 | 0.002239 | 0.002310 |
| is_read_buffered.test | RUN | 0.619968 | 1.403400 | 2.676393 | 0.002106 | 0.002109 | 0.001554 |
| is_read_buffered_select.test | RUN | 0.631049 | 1.484774 | 2.675156 | 0.002029 | 0.002031 | 0.002042 |
| is_write_buffered.test | RUN | 0.619034 | 1.469871 | 2.540752 | 0.001902 | 0.001998 | 0.002281 |
| is_write_buffered_select.test | RUN | 0.642943 | 1.432780 | 2.701285 | 0.001778 | 0.001911 | 0.002017 |
| local_basic_endpoint.test | LINK | 0.322100 | 0.759022 | 1.488080 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.322203 | 0.781407 | 1.461787 | — | — | — |
| local_connect_pair.test | LINK | 0.810820 | 4.252778 | 4.428368 | — | — | — |
| local_connect_pair_select.test | LINK | 0.824764 | 4.250572 | 4.327638 | — | — | — |
| local_datagram_protocol.test | LINK | 1.076440 | 5.529197 | 6.011737 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.087551 | 5.540372 | 5.781527 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.081381 | 5.539538 | 5.763991 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.080366 | 5.558331 | 5.892763 | — | — | — |
| local_stream_protocol.test | LINK | 0.996680 | 5.269387 | 5.544115 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.031164 | 5.309639 | 5.607850 | — | — | — |
| placeholders.test | LINK | 0.200048 | 0.439844 | 0.652809 | — | — | — |
| placeholders_select.test | LINK | 0.195661 | 0.449750 | 0.681539 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.545118 | 1.160209 | 1.847279 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.568883 | 1.249816 | 2.509468 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.560359 | 1.186142 | 1.981391 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.563241 | 1.285679 | 2.441714 | — | — | — |
| posix_descriptor_base.test | LINK | 0.227026 | 0.469078 | 0.672924 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.227851 | 0.472558 | 0.620787 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.054807 | 5.233591 | 5.425025 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.051648 | 5.347381 | 5.676136 | — | — | — |
| prepend.test | RUN | 0.808773 | 4.315476 | 4.479158 | 0.002176 | 0.002144 | 0.002038 |
| prepend_select.test | RUN | 0.850884 | 4.400621 | 4.356468 | 0.001946 | 0.001912 | 0.001756 |
| random_access_file.test | LINK | 0.490952 | 1.073772 | 1.504018 | — | — | — |
| random_access_file_select.test | LINK | 0.516300 | 1.163886 | 2.084498 | — | — | — |
| read.test | RUN | 2.484289 | 26.500442 | 24.088089 | 0.002792 | 0.002875 | 0.002808 |
| read_select.test | RUN | 2.513952 | 26.394317 | 24.665317 | 0.002630 | 0.003090 | 0.003103 |
| read_at.test | RUN | 2.543797 | 36.609176 | 33.481832 | 0.003426 | 0.003312 | 0.003311 |
| read_at_select.test | RUN | 2.566233 | 36.769793 | 34.314670 | 0.003522 | 0.003716 | 0.003390 |
| read_until.test | RUN | 1.299440 | 10.364424 | 8.672273 | 0.002222 | 0.002385 | 0.002256 |
| read_until_select.test | RUN | 1.321800 | 10.414457 | 9.133203 | 0.002438 | 0.002091 | 0.002556 |
| readable_pipe.test | LINK | 0.851305 | 4.381041 | 4.202727 | — | — | — |
| readable_pipe_select.test | LINK | 0.880041 | 4.615118 | 4.778028 | — | — | — |
| recycling_allocator.test | RUN | 0.267993 | 0.657308 | 0.930023 | 0.002073 | 0.002142 | 0.002118 |
| recycling_allocator_select.test | RUN | 0.275690 | 0.689171 | 0.959266 | 0.002072 | 0.002200 | 0.002044 |
| redirect_disposition.test | LINK | 1.091529 | 6.183978 | 6.848974 | — | — | — |
| redirect_disposition_select.test | LINK | 1.111915 | 6.137968 | 6.578410 | — | — | — |
| redirect_error.test | LINK | 0.993662 | 5.102184 | 5.824447 | — | — | — |
| redirect_error_select.test | LINK | 1.005759 | 5.019473 | 5.879338 | — | — | — |
| registered_buffer.test | LINK | 0.261445 | 0.535208 | 0.849152 | — | — | — |
| registered_buffer_select.test | LINK | 0.271717 | 0.536359 | 0.836482 | — | — | — |
| signal_set.test | RUN | 0.805357 | 4.307736 | 3.967728 | 0.002104 | 0.002384 | 0.002228 |
| signal_set_select.test | RUN | 0.836000 | 4.565549 | 4.544119 | 0.002114 | 0.002130 | 0.002188 |
| signal_set_base.test | LINK | 0.225106 | 0.414248 | 0.652864 | — | — | — |
| signal_set_base_select.test | LINK | 0.231687 | 0.425143 | 0.640082 | — | — | — |
| socket_base.test | RUN | 1.017517 | 6.765748 | 6.426179 | 0.002312 | 0.002143 | 0.002423 |
| socket_base_select.test | RUN | 1.028491 | 6.440316 | 6.360744 | 0.002356 | 0.002480 | 0.002524 |
| spawn.test | RUN | 1.671183 | 10.289947 | 10.504773 | 0.002346 | 0.002518 | 0.002724 |
| spawn_select.test | RUN | 1.688387 | 10.125552 | 10.389915 | 0.002522 | 0.002516 | 0.002590 |
| static_thread_pool.test | RUN | 0.484627 | 1.083218 | 1.555085 | 0.002032 | 0.002144 | 0.002051 |
| static_thread_pool_select.test | RUN | 0.506223 | 1.112588 | 2.049066 | 0.002072 | 0.002051 | 0.002063 |
| steady_timer.test | LINK | 0.535939 | 1.168377 | 2.144238 | — | — | — |
| steady_timer_select.test | LINK | 0.550887 | 1.194544 | 2.097870 | — | — | — |
| strand.test | RUN | 1.093714 | 5.861267 | 6.305653 | 0.002938 | 0.003164 | 0.003031 |
| strand_select.test | RUN | 1.121629 | 5.761661 | 6.031178 | 0.002434 | 0.003218 | 0.003170 |
| stream_file.test | LINK | 0.479722 | 1.067071 | 1.579856 | — | — | — |
| stream_file_select.test | LINK | 0.511097 | 1.165857 | 2.063921 | — | — | — |
| streambuf.test | RUN | 0.288860 | 0.886226 | 1.117479 | 0.001596 | 0.002056 | 0.002156 |
| streambuf_select.test | RUN | 0.209164 | 0.812317 | 1.063916 | 0.001595 | 0.001660 | 0.001529 |
| system_timer.test | LINK | 0.656314 | 3.721504 | 4.282638 | — | — | — |
| system_timer_select.test | LINK | 0.656377 | 3.536882 | 3.719685 | — | — | — |
| system_context.test | LINK | 0.296645 | 0.661862 | 0.900048 | — | — | — |
| system_context_select.test | LINK | 0.312086 | 0.708644 | 1.126111 | — | — | — |
| system_executor.test | LINK | 0.408488 | 2.050924 | 1.668260 | — | — | — |
| system_executor_select.test | LINK | 0.424370 | 2.040605 | 1.858892 | — | — | — |
| this_coro.test | LINK | 0.118672 | 0.248932 | 0.353042 | — | — | — |
| this_coro_select.test | LINK | 0.126150 | 0.250507 | 0.356780 | — | — | — |
| thread_pool.test | RUN | 0.471346 | 3.451218 | 2.566623 | 0.003212 | 0.003570 | 0.003818 |
| thread_pool_select.test | RUN | 0.486002 | 3.814893 | 3.697760 | 0.003250 | 0.003796 | 0.003750 |
| time_traits.test | LINK | 0.269053 | 0.864207 | 1.324809 | — | — | — |
| time_traits_select.test | LINK | 0.265191 | 0.857836 | 1.275271 | — | — | — |
| ts_buffer.test | LINK | 0.251468 | 0.918804 | 1.303734 | — | — | — |
| ts_buffer_select.test | LINK | 0.258440 | 0.910688 | 1.285076 | — | — | — |
| ts_executor.test | LINK | 0.353306 | 1.241072 | 1.964121 | — | — | — |
| ts_executor_select.test | LINK | 0.372682 | 1.327902 | 2.556607 | — | — | — |
| ts_internet.test | LINK | 0.386388 | 1.400738 | 2.611301 | — | — | — |
| ts_internet_select.test | LINK | 0.398046 | 1.394841 | 2.694860 | — | — | — |
| ts_io_context.test | LINK | 0.310212 | 1.068308 | 1.586979 | — | — | — |
| ts_io_context_select.test | LINK | 0.323910 | 1.121151 | 2.064329 | — | — | — |
| ts_net.test | LINK | 0.468894 | 1.674401 | 3.120866 | — | — | — |
| ts_net_select.test | LINK | 0.472773 | 1.675802 | 3.311279 | — | — | — |
| ts_netfwd.test | LINK | 0.459238 | 1.651125 | 3.198466 | — | — | — |
| ts_netfwd_select.test | LINK | 0.481246 | 1.706056 | 3.251275 | — | — | — |
| ts_socket.test | LINK | 0.383810 | 1.321289 | 2.428984 | — | — | — |
| ts_socket_select.test | LINK | 0.381186 | 1.317112 | 2.553777 | — | — | — |
| ts_timer.test | LINK | 0.342964 | 1.165669 | 2.230420 | — | — | — |
| ts_timer_select.test | LINK | 0.360396 | 1.175225 | 2.183321 | — | — | — |
| use_awaitable.test | LINK | 0.149880 | 0.414166 | 0.561701 | — | — | — |
| use_awaitable_select.test | LINK | 0.142162 | 0.393447 | 0.601840 | — | — | — |
| wait_traits.test | LINK | 0.183143 | 0.386585 | 0.571003 | — | — | — |
| wait_traits_select.test | LINK | 0.188259 | 0.400440 | 0.562584 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.186444 | 0.387163 | 0.601835 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.189479 | 0.398271 | 0.552632 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.185322 | 0.394006 | 0.605112 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.191128 | 0.387389 | 0.601807 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.194675 | 0.394523 | 0.590441 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.189476 | 0.401137 | 0.585206 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.187837 | 0.380775 | 0.606403 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.186064 | 0.402185 | 0.603195 | — | — | — |
| windows_object_handle.test | LINK | 0.503978 | 1.059040 | 1.572234 | — | — | — |
| windows_object_handle_select.test | LINK | 0.512719 | 1.122465 | 2.064424 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.531348 | 1.148918 | 1.731604 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.533141 | 1.179578 | 2.214010 | — | — | — |
| windows_random_access_handle.test | LINK | 0.496889 | 1.063611 | 1.568490 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.511343 | 1.146798 | 2.107895 | — | — | — |
| windows_stream_handle.test | LINK | 0.493732 | 1.057939 | 1.517739 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.516398 | 1.126138 | 2.061721 | — | — | — |
| writable_pipe.test | LINK | 0.848456 | 4.339268 | 4.604894 | — | — | — |
| writable_pipe_select.test | LINK | 0.903841 | 4.478285 | 4.948790 | — | — | — |
| write.test | RUN | 2.506690 | 22.169768 | 24.084935 | 0.003075 | 0.002746 | 0.003007 |
| write_select.test | RUN | 2.542229 | 22.359232 | 24.708642 | 0.003027 | 0.002808 | 0.003105 |
| write_at.test | RUN | 2.632343 | 32.049293 | 30.025196 | 0.003376 | 0.003402 | 0.002992 |
| write_at_select.test | RUN | 2.622171 | 30.858136 | 30.418880 | 0.003196 | 0.003514 | 0.003328 |
| any_executor.test | RUN | 1.044255 | 10.216767 | 10.532347 | 0.002738 | 0.002752 | 0.003179 |
| blocking.test | RUN | 2.761244 | 12.446499 | 20.800987 | 0.008622 | 0.008753 | 0.008645 |
| blocking_adaptation.test | RUN | 1.399344 | 5.435424 | 9.447314 | 0.004702 | 0.004890 | 0.004720 |
| context_as.test | RUN | 0.681892 | 3.789770 | 3.203408 | 0.002381 | 0.002328 | 0.002362 |
| executor.test | RUN | 0.204044 | 0.422829 | 0.626776 | 0.002072 | 0.002108 | 0.002190 |
| inline_exception_handling.test | RUN | 2.766164 | 11.579939 | 19.676560 | 0.005911 | 0.005768 | 0.008314 |
| invocable_archetype.test | RUN | 0.197298 | 0.418203 | 0.598638 | 0.002022 | 0.002169 | 0.002176 |
| mapping.test | RUN | 2.587376 | 11.873609 | 19.888419 | 0.006068 | 0.006034 | 0.005903 |
| outstanding_work.test | RUN | 1.264897 | 5.119908 | 9.043924 | 0.004695 | 0.004723 | 0.004944 |
| prefer_only.test | RUN | 0.391204 | 2.188841 | 2.103561 | 0.001969 | 0.002293 | 0.002122 |
| relationship.test | RUN | 0.781445 | 4.274515 | 7.951192 | 0.003510 | 0.003423 | 0.003295 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.999×, 1.009× | 1.009× |
| clang | 0.986× | 0.988×, 0.985× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.002031s | 0.002060s | 0.002025s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.002084s | 0.002026s | 0.002054s | byte equality observed |
| any_completion_handler.test | 7 | 0.001626s | 0.001496s | 0.001555s | byte equality observed |
| any_completion_handler_select.test | 7 | 0.001600s | 0.001528s | 0.001574s | byte equality observed |
| any_io_executor.test | 6 | 0.002004s | 0.002002s | 0.001971s | byte equality observed |
| any_io_executor_select.test | 4 | 0.002029s | 0.001948s | 0.001991s | byte equality observed |
| append.test | 8 | 0.001520s | 0.001539s | 0.001511s | byte equality observed |
| append_select.test | 9 | 0.001466s | 0.001497s | 0.001464s | byte equality observed |
| as_tuple.test | 7 | 0.001646s | 0.001629s | 0.001678s | byte equality observed |
| as_tuple_select.test | 7 | 0.001517s | 0.001504s | 0.001525s | byte equality observed |
| bind_allocator.test | 1 | 0.002019s | 0.001876s | 0.001963s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001723s | 0.001599s | 0.001751s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001397s | 0.001396s | 0.001416s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001287s | 0.001273s | 0.001262s | byte equality observed |
| bind_executor.test | 1 | 0.001981s | 0.002025s | 0.001926s | byte equality observed |
| bind_executor_select.test | 1 | 0.002198s | 0.002193s | 0.002191s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001377s | 0.001435s | 0.001365s | byte equality observed |
| bind_immediate_executor_select.test | 8 | 0.001353s | 0.001362s | 0.001333s | byte equality observed |
| buffer.test | 10 | 0.001338s | 0.001324s | 0.001359s | byte equality observed |
| buffer_select.test | 10 | 0.001275s | 0.001329s | 0.001298s | byte equality observed |
| buffered_read_stream.test | 9 | 0.001685s | 0.001693s | 0.001646s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001671s | 0.001710s | 0.001663s | byte equality observed |
| buffered_stream.test | 10 | 0.001631s | 0.001657s | 0.001632s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001666s | 0.001692s | 0.001665s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001651s | 0.001684s | 0.001715s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001653s | 0.001643s | 0.001616s | byte equality observed |
| buffers_iterator.test | 10 | 0.001341s | 0.001260s | 0.001263s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001259s | 0.001203s | 0.001258s | byte equality observed |
| cancel_after.test | 1 | 0.004065s | 0.004078s | 0.004085s | byte equality observed |
| cancel_after_select.test | 1 | 0.003410s | 0.003413s | 0.003500s | byte equality observed |
| cancel_at.test | 1 | 0.004247s | 0.004144s | 0.004227s | byte equality observed |
| cancel_at_select.test | 1 | 0.004018s | 0.003881s | 0.003880s | byte equality observed |
| co_composed.test | 10 | 0.001334s | 0.001391s | 0.001358s | byte equality observed |
| co_composed_select.test | 10 | 0.001272s | 0.001252s | 0.001261s | byte equality observed |
| compose.test | 1 | 0.002048s | 0.002008s | 0.002090s | byte equality observed |
| compose_select.test | 1 | 0.001684s | 0.001630s | 0.001650s | byte equality observed |
| composed.test | 1 | 0.002285s | 0.002296s | 0.002220s | byte equality observed |
| composed_select.test | 1 | 0.001943s | 0.001860s | 0.001896s | byte equality observed |
| config.test | 10 | 0.001411s | 0.001436s | 0.001399s | byte equality observed |
| config_select.test | 10 | 0.001384s | 0.001423s | 0.001302s | byte equality observed |
| connect_pipe.test | 10 | 0.001433s | 0.001410s | 0.001431s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001370s | 0.001462s | 0.001367s | byte equality observed |
| consign.test | 10 | 0.001366s | 0.001385s | 0.001376s | byte equality observed |
| consign_select.test | 10 | 0.001318s | 0.001388s | 0.001321s | byte equality observed |
| deadline_timer.test | 1 | 0.002915s | 0.002808s | 0.002745s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002574s | 0.002548s | 0.002502s | byte equality observed |
| deferred.test | 10 | 0.001238s | 0.001280s | 0.001216s | byte equality observed |
| deferred_select.test | 10 | 0.001156s | 0.001164s | 0.001137s | byte equality observed |
| disposition.test | 10 | 0.001220s | 0.001229s | 0.001207s | byte equality observed |
| disposition_select.test | 10 | 0.001232s | 0.001229s | 0.001210s | byte equality observed |
| error.test | 10 | 0.001190s | 0.001194s | 0.001178s | byte equality observed |
| error_select.test | 10 | 0.001192s | 0.001181s | 0.001184s | byte equality observed |
| inline_executor.test | 10 | 0.001214s | 0.001183s | 0.001185s | byte equality observed |
| inline_executor_select.test | 10 | 0.001199s | 0.001198s | 0.001178s | byte equality observed |
| inline_or_executor.test | 10 | 0.001200s | 0.001195s | 0.001186s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001202s | 0.001198s | 0.001188s | byte equality observed |
| io_context.test | 1 | 0.002268s | 0.002257s | 0.002280s | byte equality observed |
| io_context_select.test | 1 | 0.002573s | 0.002623s | 0.002613s | byte equality observed |
| io_context_strand.test | 1 | 0.002573s | 0.002569s | 0.002581s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002352s | 0.002307s | 0.002355s | byte equality observed |
| ip_host_name.test | 10 | 0.001246s | 0.001245s | 0.001231s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001162s | 0.001179s | 0.001145s | byte equality observed |
| ip_icmp.test | 10 | 0.001215s | 0.001221s | 0.001180s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001210s | 0.001198s | 0.001181s | byte equality observed |
| ip_multicast.test | 10 | 0.001295s | 0.001286s | 0.001309s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001267s | 0.001275s | 0.001264s | byte equality observed |
| ip_tcp.test | 9 | 0.001787s | 0.001858s | 0.001799s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001741s | 0.001843s | 0.001715s | byte equality observed |
| ip_udp.test | 10 | 0.001301s | 0.001430s | 0.001300s | byte equality observed |
| ip_udp_select.test | 10 | 0.001311s | 0.001462s | 0.001285s | byte equality observed |
| ip_unicast.test | 10 | 0.001276s | 0.001389s | 0.001234s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001243s | 0.001385s | 0.001219s | byte equality observed |
| ip_v6_only.test | 10 | 0.001267s | 0.001452s | 0.001228s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001247s | 0.001372s | 0.001264s | byte equality observed |
| is_read_buffered.test | 10 | 0.001204s | 0.001348s | 0.001252s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001298s | 0.001280s | 0.001289s | byte equality observed |
| is_write_buffered.test | 10 | 0.001310s | 0.001335s | 0.001260s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001263s | 0.001287s | 0.001280s | byte equality observed |
| prepend.test | 10 | 0.001382s | 0.001396s | 0.001344s | byte equality observed |
| prepend_select.test | 10 | 0.001309s | 0.001303s | 0.001275s | byte equality observed |
| read.test | 10 | 0.001836s | 0.001760s | 0.001738s | byte equality observed |
| read_at.test | 9 | 0.002257s | 0.002268s | 0.002197s | byte equality observed |
| read_at_select.test | 9 | 0.002223s | 0.002307s | 0.002251s | byte equality observed |
| read_select.test | 10 | 0.001776s | 0.001786s | 0.001708s | byte equality observed |
| read_until.test | 10 | 0.001522s | 0.001543s | 0.001508s | byte equality observed |
| read_until_select.test | 10 | 0.001523s | 0.001472s | 0.001472s | byte equality observed |
| recycling_allocator.test | 10 | 0.001250s | 0.001324s | 0.001274s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001272s | 0.001293s | 0.001268s | byte equality observed |
| signal_set.test | 10 | 0.001319s | 0.001309s | 0.001275s | byte equality observed |
| signal_set_select.test | 10 | 0.001277s | 0.001297s | 0.001328s | byte equality observed |
| socket_base.test | 10 | 0.001430s | 0.001443s | 0.001382s | byte equality observed |
| socket_base_select.test | 10 | 0.001409s | 0.001383s | 0.001387s | byte equality observed |
| spawn.test | 10 | 0.001536s | 0.001471s | 0.001582s | byte equality observed |
| spawn_select.test | 10 | 0.001518s | 0.001488s | 0.001520s | byte equality observed |
| static_thread_pool.test | 10 | 0.001297s | 0.001277s | 0.001274s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001247s | 0.001224s | 0.001226s | byte equality observed |
| strand.test | 1 | 0.002394s | 0.002325s | 0.002360s | byte equality observed |
| strand_select.test | 1 | 0.001987s | 0.001975s | 0.001945s | byte equality observed |
| streambuf.test | 10 | 0.001395s | 0.001307s | 0.001353s | byte equality observed |
| streambuf_select.test | 10 | 0.001320s | 0.001246s | 0.001357s | byte equality observed |
| thread_pool.test | 7 | 0.002939s | 0.002920s | 0.002948s | byte equality observed |
| thread_pool_select.test | 7 | 0.002892s | 0.002953s | 0.002972s | byte equality observed |
| write.test | 9 | 0.001839s | 0.001829s | 0.001829s | byte equality observed |
| write_at.test | 9 | 0.002028s | 0.001992s | 0.002003s | byte equality observed |
| write_at_select.test | 9 | 0.001975s | 0.002034s | 0.001926s | byte equality observed |
| write_select.test | 10 | 0.001891s | 0.001833s | 0.001886s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
