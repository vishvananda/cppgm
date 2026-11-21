# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.750012 | 4.833865 | 4.346872 | 0.002372 | 0.002170 | 0.002223 |
| any_completion_executor_select.test | RUN | 0.765930 | 4.881228 | 4.591217 | 0.002498 | 0.002329 | 0.002278 |
| any_completion_handler.test | RUN | 0.818425 | 4.376166 | 3.954477 | 0.002002 | 0.001372 | 0.001673 |
| any_completion_handler_select.test | RUN | 0.839760 | 4.446206 | 4.150575 | 0.001776 | 0.001818 | 0.001758 |
| any_io_executor.test | RUN | 0.791057 | 5.149778 | 4.794668 | 0.002163 | 0.002088 | 0.002471 |
| any_io_executor_select.test | RUN | 0.798134 | 5.131206 | 4.936349 | 0.002020 | 0.002205 | 0.002019 |
| append.test | RUN | 0.714930 | 4.080182 | 3.548683 | 0.001589 | 0.001829 | 0.001821 |
| append_select.test | RUN | 0.725048 | 4.168813 | 3.473014 | 0.001776 | 0.001836 | 0.001725 |
| as_tuple.test | RUN | 0.923203 | 4.918125 | 4.876583 | 0.001845 | 0.001874 | 0.001865 |
| as_tuple_select.test | RUN | 0.925679 | 4.893375 | 4.871540 | 0.001720 | 0.001786 | 0.001684 |
| associated_allocator.test | LINK | 0.188912 | 0.425899 | 0.527838 | — | — | — |
| associated_allocator_select.test | LINK | 0.188445 | 0.424611 | 0.526982 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.205158 | 0.468708 | 0.575840 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.208458 | 0.459114 | 0.573031 | — | — | — |
| associated_executor.test | LINK | 0.302300 | 0.797955 | 0.934990 | — | — | — |
| associated_executor_select.test | LINK | 0.302321 | 0.802967 | 0.939276 | — | — | — |
| associated_immediate_executor.test | LINK | 0.276346 | 0.747087 | 0.858071 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.276879 | 0.749352 | 0.860257 | — | — | — |
| associator.test | LINK | 0.153942 | 0.367342 | 0.448376 | — | — | — |
| associator_select.test | LINK | 0.152534 | 0.365209 | 0.457197 | — | — | — |
| awaitable.test | LINK | 0.154153 | 0.360483 | 0.442289 | — | — | — |
| awaitable_select.test | LINK | 0.157533 | 0.362214 | 0.444839 | — | — | — |
| basic_datagram_socket.test | LINK | 0.468245 | 1.132859 | 1.748631 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.479120 | 1.174306 | 1.792107 | — | — | — |
| basic_deadline_timer.test | LINK | 0.563827 | 1.331605 | 1.964818 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.578158 | 1.378803 | 2.010694 | — | — | — |
| basic_file.test | LINK | 0.152185 | 0.358975 | 0.451905 | — | — | — |
| basic_file_select.test | LINK | 0.155596 | 0.362843 | 0.451699 | — | — | — |
| basic_random_access_file.test | LINK | 0.154767 | 0.359705 | 0.445750 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.155997 | 0.350689 | 0.453263 | — | — | — |
| basic_raw_socket.test | LINK | 0.476881 | 1.134311 | 1.726648 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.486353 | 1.153109 | 1.760788 | — | — | — |
| basic_readable_pipe.test | LINK | 0.461358 | 1.086940 | 1.478294 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.481897 | 1.139355 | 1.832857 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.473492 | 1.120084 | 1.716655 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.484986 | 1.141632 | 1.784168 | — | — | — |
| basic_signal_set.test | LINK | 0.441936 | 1.044089 | 1.325488 | — | — | — |
| basic_signal_set_select.test | LINK | 0.466928 | 1.097080 | 1.648105 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.489292 | 1.124432 | 1.753471 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.498989 | 1.170043 | 1.763839 | — | — | — |
| basic_stream_file.test | LINK | 0.156076 | 0.360437 | 0.455872 | — | — | — |
| basic_stream_file_select.test | LINK | 0.158199 | 0.362119 | 0.448806 | — | — | — |
| basic_stream_socket.test | LINK | 0.480170 | 1.150533 | 1.740604 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.487438 | 1.155174 | 1.763738 | — | — | — |
| basic_streambuf.test | LINK | 0.233614 | 0.538819 | 0.674281 | — | — | — |
| basic_streambuf_select.test | LINK | 0.236846 | 0.535198 | 0.671320 | — | — | — |
| basic_waitable_timer.test | LINK | 0.445089 | 1.072192 | 1.624980 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.452973 | 1.102918 | 1.643686 | — | — | — |
| basic_writable_pipe.test | LINK | 0.454564 | 1.079271 | 1.491095 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.474716 | 1.141547 | 1.827074 | — | — | — |
| bind_allocator.test | RUN | 0.764474 | 4.138784 | 3.778482 | 0.002132 | 0.002110 | 0.002115 |
| bind_allocator_select.test | RUN | 0.784692 | 4.206535 | 3.860010 | 0.002092 | 0.001501 | 0.001496 |
| bind_cancellation_slot.test | RUN | 0.784711 | 4.219993 | 3.812605 | 0.001275 | 0.001279 | 0.001086 |
| bind_cancellation_slot_select.test | RUN | 0.776213 | 4.169445 | 3.692717 | 0.001306 | 0.001194 | 0.001227 |
| bind_executor.test | RUN | 0.488383 | 2.699789 | 2.296448 | 0.001871 | 0.002128 | 0.001801 |
| bind_executor_select.test | RUN | 0.502851 | 2.743048 | 2.332269 | 0.001671 | 0.002268 | 0.001773 |
| bind_immediate_executor.test | RUN | 0.368481 | 2.277334 | 1.479688 | 0.001179 | 0.001148 | 0.001192 |
| bind_immediate_executor_select.test | RUN | 0.376490 | 2.245056 | 1.669640 | 0.001191 | 0.001261 | 0.001172 |
| buffer.test | RUN | 0.227634 | 0.932768 | 0.924834 | 0.001176 | 0.001125 | 0.001119 |
| buffer_select.test | RUN | 0.221083 | 0.944010 | 0.931710 | 0.001245 | 0.001205 | 0.001150 |
| buffer_registration.test | LINK | 0.169163 | 0.467554 | 0.532704 | — | — | — |
| buffer_registration_select.test | LINK | 0.171024 | 0.473983 | 0.541744 | — | — | — |
| buffered_read_stream.test | RUN | 0.838055 | 6.423725 | 5.462514 | 0.001404 | 0.002116 | 0.002160 |
| buffered_read_stream_select.test | RUN | 0.855838 | 6.740437 | 6.109564 | 0.001480 | 0.002136 | 0.002092 |
| buffered_stream.test | RUN | 1.413903 | 10.030208 | 9.434806 | 0.002106 | 0.002078 | 0.002110 |
| buffered_stream_select.test | RUN | 1.477722 | 10.022430 | 9.175659 | 0.002068 | 0.002110 | 0.002116 |
| buffered_write_stream.test | RUN | 1.499286 | 8.560964 | 8.133306 | 0.002092 | 0.002146 | 0.002102 |
| buffered_write_stream_select.test | RUN | 1.521573 | 8.736271 | 7.863626 | 0.001905 | 0.002068 | 0.002050 |
| buffers_iterator.test | RUN | 0.462841 | 0.841774 | 1.340245 | 0.001578 | 0.001722 | 0.001608 |
| buffers_iterator_select.test | RUN | 0.453005 | 0.828090 | 1.371341 | 0.001574 | 0.001594 | 0.001647 |
| cancel_after.test | RUN | 1.241054 | 6.738083 | 5.922483 | 0.003610 | 0.003624 | 0.004033 |
| cancel_after_select.test | RUN | 1.254444 | 6.664250 | 5.926454 | 0.002735 | 0.003647 | 0.003105 |
| cancel_at.test | RUN | 1.245716 | 5.695801 | 5.562279 | 0.003153 | 0.002966 | 0.003324 |
| cancel_at_select.test | RUN | 1.252124 | 5.477646 | 5.258592 | 0.002874 | 0.002820 | 0.002962 |
| cancellation_signal.test | LINK | 0.132880 | 0.275519 | 0.334509 | — | — | — |
| cancellation_signal_select.test | LINK | 0.200656 | 0.280606 | 0.342627 | — | — | — |
| cancellation_state.test | LINK | 0.198953 | 0.276318 | 0.337965 | — | — | — |
| cancellation_state_select.test | LINK | 0.203235 | 0.279310 | 0.345528 | — | — | — |
| cancellation_type.test | LINK | 0.154696 | 0.221660 | 0.394829 | — | — | — |
| cancellation_type_select.test | LINK | 0.154837 | 0.219298 | 0.392197 | — | — | — |
| co_composed.test | RUN | 0.153436 | 0.221649 | 0.307403 | 0.001383 | 0.001097 | 0.001428 |
| co_composed_select.test | RUN | 0.154301 | 0.219152 | 0.436023 | 0.001402 | 0.001148 | 0.001416 |
| co_spawn.test | LINK | 0.153646 | 0.220708 | 0.431661 | — | — | — |
| co_spawn_select.test | LINK | 0.154742 | 0.228541 | 0.437750 | — | — | — |
| completion_condition.test | LINK | 0.195780 | 0.542371 | 0.588637 | — | — | — |
| completion_condition_select.test | LINK | 0.198420 | 0.541353 | 0.596646 | — | — | — |
| compose.test | RUN | 0.939180 | 5.038500 | 4.739009 | 0.001999 | 0.002144 | 0.002081 |
| compose_select.test | RUN | 0.958327 | 5.056395 | 4.722252 | 0.001679 | 0.001654 | 0.002113 |
| composed.test | RUN | 0.923810 | 5.120540 | 4.730658 | 0.001728 | 0.001792 | 0.001750 |
| composed_select.test | RUN | 0.912282 | 5.081886 | 4.549533 | 0.001588 | 0.001869 | 0.001773 |
| config.test | RUN | 0.400850 | 3.121859 | 2.029361 | 0.001712 | 0.001828 | 0.001726 |
| config_select.test | RUN | 0.530301 | 3.493834 | 2.497892 | 0.001764 | 0.001727 | 0.001668 |
| connect.test | LINK | 1.494334 | 11.005545 | 10.028619 | — | — | — |
| connect_select.test | LINK | 1.514308 | 11.044411 | 10.199434 | — | — | — |
| connect_pipe.test | RUN | 0.812726 | 4.197832 | 3.649590 | 0.001731 | 0.001880 | 0.001807 |
| connect_pipe_select.test | RUN | 0.841496 | 4.392425 | 4.017032 | 0.001557 | 0.001882 | 0.001726 |
| consign.test | RUN | 0.705156 | 4.090545 | 3.375803 | 0.001758 | 0.001748 | 0.001649 |
| consign_select.test | RUN | 0.721423 | 4.195634 | 3.405911 | 0.001600 | 0.001745 | 0.001645 |
| coroutine.test | LINK | 0.160446 | 0.411234 | 0.493141 | — | — | — |
| coroutine_select.test | LINK | 0.159948 | 0.425139 | 0.502073 | — | — | — |
| deadline_timer.test | RUN | 1.043115 | 5.315667 | 4.855782 | 0.002896 | 0.003269 | 0.003282 |
| deadline_timer_select.test | RUN | 1.050090 | 5.240839 | 4.910411 | 0.002933 | 0.003040 | 0.003061 |
| deferred.test | RUN | 0.169333 | 0.389456 | 0.492156 | 0.001655 | 0.001588 | 0.001579 |
| deferred_select.test | RUN | 0.169311 | 0.393179 | 0.487137 | 0.001518 | 0.001576 | 0.001595 |
| detached.test | LINK | 0.194341 | 0.434837 | 0.552218 | — | — | — |
| detached_select.test | LINK | 0.194136 | 0.442161 | 0.534538 | — | — | — |
| disposition.test | RUN | 0.233863 | 1.015874 | 0.984481 | 0.001237 | 0.001728 | 0.001658 |
| disposition_select.test | RUN | 0.166505 | 1.019406 | 0.982352 | 0.001155 | 0.001743 | 0.001575 |
| error.test | RUN | 0.147780 | 0.997814 | 0.919157 | 0.001205 | 0.001608 | 0.001662 |
| error_select.test | RUN | 0.150645 | 0.990052 | 0.877003 | 0.001202 | 0.001665 | 0.001584 |
| file_base.test | LINK | 0.186735 | 0.825947 | 0.919529 | — | — | — |
| file_base_select.test | LINK | 0.185146 | 0.810946 | 0.786510 | — | — | — |
| fwd_first.test | LINK | 0.422642 | 1.189501 | 1.696697 | — | — | — |
| fwd_last.test | LINK | 0.425898 | 1.064261 | 1.659549 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.158344 | 0.441161 | 0.615337 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.159040 | 0.441909 | 0.624984 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.725594 | 3.867392 | 3.317309 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.731477 | 4.038592 | 3.228354 | — | — | — |
| generic_raw_protocol.test | LINK | 0.710700 | 3.903599 | 3.298120 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.700710 | 4.062813 | 3.205633 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.610251 | 3.264504 | 2.789243 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.607500 | 3.342732 | 2.830457 | — | — | — |
| generic_stream_protocol.test | LINK | 0.653380 | 3.527164 | 2.999530 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.647922 | 3.645707 | 3.056000 | — | — | — |
| high_resolution_timer.test | LINK | 0.269975 | 0.646292 | 0.953246 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.277927 | 0.664056 | 0.991044 | — | — | — |
| immediate.test | LINK | 0.190807 | 0.500162 | 0.575768 | — | — | — |
| immediate_select.test | LINK | 0.186958 | 0.502847 | 0.588052 | — | — | — |
| inline_executor.test | RUN | 0.238998 | 0.768509 | 0.856800 | 0.001227 | 0.001208 | 0.001181 |
| inline_executor_select.test | RUN | 0.231179 | 0.779598 | 0.871414 | 0.001194 | 0.001141 | 0.001126 |
| inline_or_executor.test | RUN | 0.386857 | 2.287009 | 1.651112 | 0.001214 | 0.001150 | 0.001206 |
| inline_or_executor_select.test | RUN | 0.392926 | 2.365848 | 1.862250 | 0.001198 | 0.001233 | 0.001200 |
| io_context.test | RUN | 0.571079 | 3.509273 | 2.903196 | 0.002133 | 0.002012 | 0.002208 |
| io_context_select.test | RUN | 0.569301 | 3.489650 | 2.951871 | 0.002080 | 0.001881 | 0.002086 |
| io_context_strand.test | RUN | 0.536636 | 3.933953 | 2.565460 | 0.002073 | 0.002392 | 0.002165 |
| io_context_strand_select.test | RUN | 0.540602 | 4.300396 | 2.582926 | 0.002078 | 0.001919 | 0.001947 |
| ip_address.test | LINK | 0.189732 | 1.105043 | 0.757483 | — | — | — |
| ip_address_select.test | LINK | 0.196150 | 1.127598 | 0.761456 | — | — | — |
| ip_address_v4.test | LINK | 0.212265 | 1.212866 | 0.834687 | — | — | — |
| ip_address_v4_select.test | LINK | 0.193861 | 1.211390 | 0.835586 | — | — | — |
| ip_address_v6.test | LINK | 0.226829 | 1.081985 | 1.022729 | — | — | — |
| ip_address_v6_select.test | LINK | 0.220210 | 1.308588 | 1.016242 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.169538 | 0.462568 | 0.657282 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.165842 | 0.467292 | 0.661041 | — | — | — |
| ip_basic_resolver.test | LINK | 0.292461 | 0.658538 | 0.967555 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.288508 | 0.688047 | 0.996434 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.090848 | 0.216387 | 0.275651 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.092591 | 0.221940 | 0.273961 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.167388 | 0.455692 | 0.647308 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.165947 | 0.453294 | 0.648108 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.157107 | 0.438249 | 0.624084 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.171930 | 0.433622 | 0.617373 | — | — | — |
| ip_host_name.test | RUN | 0.172524 | 0.593138 | 0.709107 | 0.001093 | 0.001214 | 0.001624 |
| ip_host_name_select.test | RUN | 0.172266 | 0.585065 | 0.770236 | 0.001187 | 0.001199 | 0.001643 |
| ip_icmp.test | RUN | 0.884154 | 6.497540 | 6.977805 | 0.001144 | 0.001712 | 0.001640 |
| ip_icmp_select.test | RUN | 0.891521 | 7.172784 | 6.912260 | 0.001248 | 0.001791 | 0.001637 |
| ip_multicast.test | RUN | 0.491533 | 4.434687 | 4.073171 | 0.001309 | 0.001912 | 0.001526 |
| ip_multicast_select.test | RUN | 0.503720 | 4.394557 | 4.041737 | 0.001261 | 0.001910 | 0.001537 |
| ip_resolver_query_base.test | LINK | 0.105507 | 0.408449 | 0.480584 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.105698 | 0.385130 | 0.483406 | — | — | — |
| ip_tcp.test | RUN | 1.318781 | 12.749955 | 10.875789 | 0.001577 | 0.002499 | 0.002444 |
| ip_tcp_select.test | RUN | 1.330755 | 13.357489 | 10.560736 | 0.001594 | 0.002446 | 0.002330 |
| ip_udp.test | RUN | 0.943067 | 9.071231 | 7.535687 | 0.001301 | 0.001993 | 0.001770 |
| ip_udp_select.test | RUN | 0.939320 | 9.425546 | 7.294549 | 0.001378 | 0.001929 | 0.001904 |
| ip_unicast.test | RUN | 0.449500 | 3.956637 | 3.579900 | 0.001313 | 0.001726 | 0.001551 |
| ip_unicast_select.test | RUN | 0.459987 | 4.091598 | 3.562098 | 0.001283 | 0.001890 | 0.001734 |
| ip_v6_only.test | RUN | 0.477254 | 4.175679 | 3.705208 | 0.001230 | 0.001830 | 0.001801 |
| ip_v6_only_select.test | RUN | 0.481017 | 4.230244 | 3.706047 | 0.001218 | 0.001813 | 0.001772 |
| is_read_buffered.test | RUN | 0.318107 | 1.313157 | 2.029013 | 0.001201 | 0.001704 | 0.001678 |
| is_read_buffered_select.test | RUN | 0.323991 | 1.334358 | 2.065652 | 0.001178 | 0.001644 | 0.001644 |
| is_write_buffered.test | RUN | 0.324051 | 1.304692 | 1.983723 | 0.001203 | 0.001667 | 0.001514 |
| is_write_buffered_select.test | RUN | 0.324116 | 1.326885 | 2.038262 | 0.001172 | 0.001702 | 0.001658 |
| local_basic_endpoint.test | LINK | 0.158010 | 0.732950 | 1.063425 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.157682 | 0.719998 | 1.060142 | — | — | — |
| local_connect_pair.test | LINK | 0.493589 | 4.018502 | 3.405567 | — | — | — |
| local_connect_pair_select.test | LINK | 0.646111 | 4.038869 | 3.402776 | — | — | — |
| local_datagram_protocol.test | LINK | 0.949261 | 5.178056 | 4.757241 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.956464 | 5.230051 | 4.701077 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.968118 | 5.116503 | 4.711907 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.972032 | 5.255819 | 4.736063 | — | — | — |
| local_stream_protocol.test | LINK | 0.901514 | 4.902373 | 4.519357 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.920061 | 4.960039 | 4.511829 | — | — | — |
| placeholders.test | LINK | 0.169090 | 0.384763 | 0.507521 | — | — | — |
| placeholders_select.test | LINK | 0.166186 | 0.383407 | 0.490598 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.465422 | 1.069521 | 1.501996 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.482328 | 1.133546 | 1.855730 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.452084 | 1.090839 | 1.490438 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.461555 | 1.150830 | 1.850812 | — | — | — |
| posix_descriptor_base.test | LINK | 0.185262 | 0.407814 | 0.499056 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.182540 | 0.402017 | 0.483880 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.947060 | 4.988798 | 4.385652 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.965270 | 5.100550 | 4.559790 | — | — | — |
| prepend.test | RUN | 0.706842 | 4.075164 | 3.527861 | 0.001790 | 0.001776 | 0.001700 |
| prepend_select.test | RUN | 0.721513 | 4.160435 | 3.506231 | 0.001680 | 0.001752 | 0.001549 |
| random_access_file.test | LINK | 0.411889 | 0.963780 | 1.165369 | — | — | — |
| random_access_file_select.test | LINK | 0.433851 | 1.031705 | 1.537722 | — | — | — |
| read.test | RUN | 2.299726 | 25.648618 | 20.625516 | 0.002443 | 0.002397 | 0.002284 |
| read_select.test | RUN | 2.318178 | 25.604312 | 21.006509 | 0.002427 | 0.002292 | 0.002444 |
| read_at.test | RUN | 2.320782 | 34.252731 | 28.112601 | 0.002976 | 0.003163 | 0.002750 |
| read_at_select.test | RUN | 2.348673 | 34.265606 | 28.622707 | 0.002928 | 0.003072 | 0.002835 |
| read_until.test | RUN | 1.192662 | 9.840222 | 7.576329 | 0.001810 | 0.002044 | 0.001948 |
| read_until_select.test | RUN | 1.207636 | 10.057847 | 7.881536 | 0.001936 | 0.002046 | 0.001826 |
| readable_pipe.test | LINK | 0.742515 | 4.121084 | 3.450865 | — | — | — |
| readable_pipe_select.test | LINK | 0.768099 | 4.363662 | 3.738605 | — | — | — |
| recycling_allocator.test | RUN | 0.225340 | 0.612360 | 0.699601 | 0.001604 | 0.001700 | 0.001536 |
| recycling_allocator_select.test | RUN | 0.221373 | 0.617820 | 0.709714 | 0.001446 | 0.001682 | 0.001530 |
| redirect_disposition.test | LINK | 0.953792 | 5.863052 | 5.301839 | — | — | — |
| redirect_disposition_select.test | LINK | 0.969009 | 5.741704 | 5.320847 | — | — | — |
| redirect_error.test | LINK | 0.865136 | 4.798920 | 4.639135 | — | — | — |
| redirect_error_select.test | LINK | 0.871948 | 4.835033 | 4.651827 | — | — | — |
| registered_buffer.test | LINK | 0.218202 | 0.523447 | 0.659435 | — | — | — |
| registered_buffer_select.test | LINK | 0.217360 | 0.516277 | 0.653459 | — | — | — |
| signal_set.test | RUN | 0.717735 | 4.007439 | 3.250621 | 0.001611 | 0.001759 | 0.001712 |
| signal_set_select.test | RUN | 0.741715 | 4.205919 | 3.589453 | 0.001673 | 0.001733 | 0.001653 |
| signal_set_base.test | LINK | 0.180312 | 0.403278 | 0.481739 | — | — | — |
| signal_set_base_select.test | LINK | 0.179687 | 0.403548 | 0.476837 | — | — | — |
| socket_base.test | RUN | 0.864890 | 6.025709 | 5.055430 | 0.001855 | 0.001877 | 0.001755 |
| socket_base_select.test | RUN | 0.879919 | 5.772801 | 5.053223 | 0.001707 | 0.001916 | 0.001771 |
| spawn.test | RUN | 1.484977 | 9.659424 | 8.474819 | 0.001884 | 0.002063 | 0.001956 |
| spawn_select.test | RUN | 1.519507 | 9.637328 | 8.375625 | 0.002014 | 0.002034 | 0.002036 |
| static_thread_pool.test | RUN | 0.407926 | 0.932859 | 1.146186 | 0.001610 | 0.001656 | 0.001646 |
| static_thread_pool_select.test | RUN | 0.427004 | 0.988818 | 1.523066 | 0.001592 | 0.001746 | 0.001636 |
| steady_timer.test | LINK | 0.444306 | 1.073607 | 1.679770 | — | — | — |
| steady_timer_select.test | LINK | 0.453893 | 1.112604 | 1.671416 | — | — | — |
| strand.test | RUN | 0.943344 | 5.475851 | 5.141794 | 0.002292 | 0.002390 | 0.002425 |
| strand_select.test | RUN | 0.957475 | 5.487434 | 5.133858 | 0.002328 | 0.002313 | 0.002081 |
| stream_file.test | LINK | 0.423191 | 0.991246 | 1.186784 | — | — | — |
| stream_file_select.test | LINK | 0.439159 | 1.045393 | 1.562423 | — | — | — |
| streambuf.test | RUN | 0.254862 | 0.778005 | 0.876531 | 0.001158 | 0.001747 | 0.001668 |
| streambuf_select.test | RUN | 0.205709 | 0.526176 | 0.849122 | 0.001089 | 0.001149 | 0.001206 |
| system_timer.test | LINK | 0.565114 | 3.265844 | 3.404413 | — | — | — |
| system_timer_select.test | LINK | 0.578113 | 3.262449 | 2.898936 | — | — | — |
| system_context.test | LINK | 0.239046 | 0.576475 | 0.692504 | — | — | — |
| system_context_select.test | LINK | 0.252050 | 0.627559 | 0.884079 | — | — | — |
| system_executor.test | LINK | 0.332897 | 1.876785 | 1.336856 | — | — | — |
| system_executor_select.test | LINK | 0.340150 | 1.860382 | 1.500251 | — | — | — |
| this_coro.test | LINK | 0.093008 | 0.218624 | 0.275649 | — | — | — |
| this_coro_select.test | LINK | 0.091821 | 0.223302 | 0.271645 | — | — | — |
| thread_pool.test | RUN | 0.394203 | 3.051865 | 1.716300 | 0.002326 | 0.002919 | 0.002378 |
| thread_pool_select.test | RUN | 0.410968 | 3.304191 | 1.924058 | 0.002426 | 0.003233 | 0.002434 |
| time_traits.test | LINK | 0.223169 | 0.757564 | 0.773888 | — | — | — |
| time_traits_select.test | LINK | 0.207546 | 0.763647 | 0.794816 | — | — | — |
| ts_buffer.test | LINK | 0.200404 | 0.840242 | 0.757894 | — | — | — |
| ts_buffer_select.test | LINK | 0.197628 | 0.833679 | 0.996923 | — | — | — |
| ts_executor.test | LINK | 0.282321 | 1.125075 | 1.537660 | — | — | — |
| ts_executor_select.test | LINK | 0.295979 | 1.202730 | 1.896741 | — | — | — |
| ts_internet.test | LINK | 0.310820 | 1.266630 | 1.954842 | — | — | — |
| ts_internet_select.test | LINK | 0.319214 | 1.297929 | 1.986372 | — | — | — |
| ts_io_context.test | LINK | 0.251061 | 0.968005 | 1.163926 | — | — | — |
| ts_io_context_select.test | LINK | 0.267357 | 1.019132 | 1.517684 | — | — | — |
| ts_net.test | LINK | 0.370203 | 1.526972 | 2.374217 | — | — | — |
| ts_net_select.test | LINK | 0.380572 | 1.544011 | 2.439587 | — | — | — |
| ts_netfwd.test | LINK | 0.372906 | 1.520402 | 2.389589 | — | — | — |
| ts_netfwd_select.test | LINK | 0.386431 | 1.544037 | 2.420401 | — | — | — |
| ts_socket.test | LINK | 0.306624 | 1.200866 | 1.853551 | — | — | — |
| ts_socket_select.test | LINK | 0.315485 | 1.218687 | 1.910820 | — | — | — |
| ts_timer.test | LINK | 0.267054 | 1.068007 | 1.640697 | — | — | — |
| ts_timer_select.test | LINK | 0.283081 | 1.105389 | 1.631959 | — | — | — |
| use_awaitable.test | LINK | 0.092679 | 0.367426 | 0.452450 | — | — | — |
| use_awaitable_select.test | LINK | 0.091452 | 0.365099 | 0.445358 | — | — | — |
| wait_traits.test | LINK | 0.094590 | 0.362260 | 0.451846 | — | — | — |
| wait_traits_select.test | LINK | 0.090981 | 0.366243 | 0.447255 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.091831 | 0.358410 | 0.452065 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.092890 | 0.358779 | 0.448700 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.090821 | 0.364377 | 0.448604 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.091236 | 0.362733 | 0.452610 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.092017 | 0.362853 | 0.452063 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.093387 | 0.363809 | 0.450579 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.091292 | 0.362663 | 0.450102 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.092331 | 0.364741 | 0.450877 | — | — | — |
| windows_object_handle.test | LINK | 0.297353 | 0.965985 | 1.172334 | — | — | — |
| windows_object_handle_select.test | LINK | 0.384238 | 1.033055 | 1.531943 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.437915 | 1.028613 | 1.284729 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.453661 | 1.102320 | 1.647925 | — | — | — |
| windows_random_access_handle.test | LINK | 0.414146 | 0.969126 | 1.173472 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.433363 | 1.030088 | 1.534807 | — | — | — |
| windows_stream_handle.test | LINK | 0.412794 | 0.977021 | 1.184416 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.427946 | 1.050770 | 1.528392 | — | — | — |
| writable_pipe.test | LINK | 0.751051 | 4.065228 | 3.564092 | — | — | — |
| writable_pipe_select.test | LINK | 0.779064 | 4.290498 | 3.835496 | — | — | — |
| write.test | RUN | 2.284198 | 21.290922 | 20.183671 | 0.002489 | 0.002449 | 0.002403 |
| write_select.test | RUN | 2.309090 | 21.616018 | 20.424907 | 0.002476 | 0.002482 | 0.002523 |
| write_at.test | RUN | 2.385815 | 28.983967 | 26.348587 | 0.002671 | 0.002632 | 0.002631 |
| write_at_select.test | RUN | 2.413336 | 28.998422 | 26.553697 | 0.002749 | 0.002696 | 0.002615 |
| any_executor.test | RUN | 0.957662 | 9.669523 | 8.244353 | 0.002309 | 0.002214 | 0.002392 |
| blocking.test | RUN | 2.348917 | 12.267378 | 16.972233 | 0.005361 | 0.005318 | 0.005162 |
| blocking_adaptation.test | RUN | 1.141999 | 5.237951 | 7.613217 | 0.003112 | 0.003144 | 0.003118 |
| context_as.test | RUN | 0.602170 | 3.665198 | 2.495604 | 0.001846 | 0.001887 | 0.001772 |
| executor.test | RUN | 0.160525 | 0.357004 | 0.468344 | 0.001455 | 0.001631 | 0.001627 |
| inline_exception_handling.test | RUN | 2.347366 | 10.861514 | 16.191164 | 0.003228 | 0.003215 | 0.003285 |
| invocable_archetype.test | RUN | 0.151901 | 0.364693 | 0.475797 | 0.001543 | 0.001668 | 0.001624 |
| mapping.test | RUN | 2.020916 | 11.366709 | 16.708688 | 0.003300 | 0.003305 | 0.003271 |
| outstanding_work.test | RUN | 1.079161 | 5.084424 | 7.351429 | 0.003152 | 0.002969 | 0.003121 |
| prefer_only.test | RUN | 0.319082 | 2.085771 | 1.676152 | 0.001573 | 0.001692 | 0.001605 |
| relationship.test | RUN | 0.914197 | 4.650635 | 6.365474 | 0.001994 | 0.003138 | 0.002015 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.005×, 0.997× | 1.001× |
| clang | 0.990× | 0.986×, 0.993× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001694s | 0.001659s | 0.001644s | byte equality observed |
| any_completion_executor_select.test | 6 | 0.001655s | 0.001623s | 0.001632s | byte equality observed |
| any_completion_handler.test | 9 | 0.001338s | 0.001351s | 0.001335s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001345s | 0.001343s | 0.001320s | byte equality observed |
| any_io_executor.test | 3 | 0.001618s | 0.001655s | 0.001633s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001668s | 0.001618s | 0.001610s | byte equality observed |
| append.test | 8 | 0.001284s | 0.001291s | 0.001248s | byte equality observed |
| append_select.test | 9 | 0.001274s | 0.001247s | 0.001237s | byte equality observed |
| as_tuple.test | 9 | 0.001353s | 0.001361s | 0.001327s | byte equality observed |
| as_tuple_select.test | 9 | 0.001302s | 0.001290s | 0.001273s | byte equality observed |
| bind_allocator.test | 1 | 0.001683s | 0.001667s | 0.001687s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001485s | 0.001509s | 0.001459s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001057s | 0.001069s | 0.001032s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000990s | 0.000990s | 0.000961s | byte equality observed |
| bind_executor.test | 1 | 0.001609s | 0.001567s | 0.001589s | byte equality observed |
| bind_executor_select.test | 1 | 0.001661s | 0.001737s | 0.001690s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001156s | 0.001150s | 0.001123s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001043s | 0.001058s | 0.001101s | byte equality observed |
| buffer.test | 10 | 0.001042s | 0.001032s | 0.001046s | byte equality observed |
| buffer_select.test | 10 | 0.001000s | 0.001012s | 0.000977s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001246s | 0.001263s | 0.001244s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001266s | 0.001266s | 0.001290s | byte equality observed |
| buffered_stream.test | 10 | 0.001248s | 0.001274s | 0.001217s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001251s | 0.001224s | 0.001188s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001258s | 0.001255s | 0.001223s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001240s | 0.001203s | 0.001201s | byte equality observed |
| buffers_iterator.test | 10 | 0.000999s | 0.000989s | 0.000963s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000956s | 0.000940s | 0.000923s | byte equality observed |
| cancel_after.test | 1 | 0.003165s | 0.003156s | 0.003079s | byte equality observed |
| cancel_after_select.test | 1 | 0.002677s | 0.002854s | 0.002691s | byte equality observed |
| cancel_at.test | 1 | 0.003487s | 0.003514s | 0.003304s | byte equality observed |
| cancel_at_select.test | 1 | 0.003439s | 0.003371s | 0.003393s | byte equality observed |
| co_composed.test | 10 | 0.001084s | 0.001099s | 0.001100s | byte equality observed |
| co_composed_select.test | 10 | 0.000986s | 0.000993s | 0.000966s | byte equality observed |
| compose.test | 1 | 0.001643s | 0.001606s | 0.001587s | byte equality observed |
| compose_select.test | 1 | 0.001352s | 0.001425s | 0.001405s | byte equality observed |
| composed.test | 1 | 0.001916s | 0.001940s | 0.001898s | byte equality observed |
| composed_select.test | 1 | 0.001699s | 0.001686s | 0.001730s | byte equality observed |
| config.test | 8 | 0.001215s | 0.001152s | 0.001198s | byte equality observed |
| config_select.test | 10 | 0.001104s | 0.001095s | 0.001079s | byte equality observed |
| connect_pipe.test | 10 | 0.001052s | 0.001077s | 0.001068s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001084s | 0.001059s | 0.001054s | byte equality observed |
| consign.test | 10 | 0.001067s | 0.001111s | 0.001060s | byte equality observed |
| consign_select.test | 10 | 0.000969s | 0.000978s | 0.000977s | byte equality observed |
| deadline_timer.test | 1 | 0.002156s | 0.002156s | 0.002194s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002039s | 0.002073s | 0.002022s | byte equality observed |
| deferred.test | 10 | 0.001033s | 0.001037s | 0.001049s | byte equality observed |
| deferred_select.test | 10 | 0.000899s | 0.000889s | 0.000870s | byte equality observed |
| disposition.test | 10 | 0.000956s | 0.000942s | 0.000920s | byte equality observed |
| disposition_select.test | 10 | 0.000945s | 0.000941s | 0.000916s | byte equality observed |
| error.test | 10 | 0.000927s | 0.000918s | 0.000898s | byte equality observed |
| error_select.test | 10 | 0.000929s | 0.000921s | 0.000894s | byte equality observed |
| inline_executor.test | 10 | 0.000931s | 0.000930s | 0.000909s | byte equality observed |
| inline_executor_select.test | 10 | 0.000930s | 0.000925s | 0.000909s | byte equality observed |
| inline_or_executor.test | 10 | 0.000930s | 0.000930s | 0.000915s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000937s | 0.000937s | 0.000910s | byte equality observed |
| io_context.test | 1 | 0.001877s | 0.001843s | 0.001833s | byte equality observed |
| io_context_select.test | 1 | 0.002269s | 0.002234s | 0.002312s | byte equality observed |
| io_context_strand.test | 1 | 0.002307s | 0.002274s | 0.002263s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001997s | 0.002018s | 0.001998s | byte equality observed |
| ip_host_name.test | 10 | 0.001048s | 0.001024s | 0.001073s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000901s | 0.000894s | 0.000903s | byte equality observed |
| ip_icmp.test | 10 | 0.000932s | 0.000937s | 0.000905s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000935s | 0.000937s | 0.000911s | byte equality observed |
| ip_multicast.test | 10 | 0.000992s | 0.000993s | 0.001008s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000984s | 0.000975s | 0.000979s | byte equality observed |
| ip_tcp.test | 10 | 0.001279s | 0.001270s | 0.001285s | byte equality observed |
| ip_tcp_select.test | 6 | 0.001238s | 0.001232s | 0.001231s | byte equality observed |
| ip_udp.test | 10 | 0.001008s | 0.001016s | 0.001007s | byte equality observed |
| ip_udp_select.test | 10 | 0.001004s | 0.001007s | 0.000994s | byte equality observed |
| ip_unicast.test | 10 | 0.000968s | 0.000972s | 0.000971s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000959s | 0.000955s | 0.000955s | byte equality observed |
| ip_v6_only.test | 10 | 0.000981s | 0.000969s | 0.000958s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000964s | 0.000959s | 0.000946s | byte equality observed |
| is_read_buffered.test | 10 | 0.000907s | 0.000891s | 0.000890s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000905s | 0.000890s | 0.000881s | byte equality observed |
| is_write_buffered.test | 10 | 0.000905s | 0.000884s | 0.000892s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000908s | 0.000891s | 0.000877s | byte equality observed |
| prepend.test | 10 | 0.000968s | 0.001000s | 0.000957s | byte equality observed |
| prepend_select.test | 10 | 0.000941s | 0.001029s | 0.000939s | byte equality observed |
| read.test | 10 | 0.001318s | 0.001446s | 0.001284s | byte equality observed |
| read_at.test | 10 | 0.001654s | 0.001864s | 0.001634s | byte equality observed |
| read_at_select.test | 10 | 0.001671s | 0.001906s | 0.001634s | byte equality observed |
| read_select.test | 8 | 0.001382s | 0.001470s | 0.001291s | byte equality observed |
| read_until.test | 10 | 0.001207s | 0.001198s | 0.001079s | byte equality observed |
| read_until_select.test | 10 | 0.001188s | 0.001209s | 0.001130s | byte equality observed |
| recycling_allocator.test | 10 | 0.001022s | 0.000992s | 0.000981s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000999s | 0.000984s | 0.000964s | byte equality observed |
| signal_set.test | 10 | 0.001033s | 0.001014s | 0.000964s | byte equality observed |
| signal_set_select.test | 10 | 0.000996s | 0.001009s | 0.000995s | byte equality observed |
| socket_base.test | 10 | 0.001102s | 0.001095s | 0.001094s | byte equality observed |
| socket_base_select.test | 10 | 0.001102s | 0.001053s | 0.001069s | byte equality observed |
| spawn.test | 10 | 0.001205s | 0.001209s | 0.001205s | byte equality observed |
| spawn_select.test | 10 | 0.001252s | 0.001192s | 0.001195s | byte equality observed |
| static_thread_pool.test | 10 | 0.000983s | 0.000966s | 0.001004s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000961s | 0.000961s | 0.000925s | byte equality observed |
| strand.test | 1 | 0.001858s | 0.001850s | 0.001919s | byte equality observed |
| strand_select.test | 1 | 0.001664s | 0.001608s | 0.001703s | byte equality observed |
| streambuf.test | 10 | 0.001126s | 0.001125s | 0.001092s | byte equality observed |
| streambuf_select.test | 10 | 0.001114s | 0.001115s | 0.001090s | byte equality observed |
| thread_pool.test | 9 | 0.002246s | 0.002239s | 0.002235s | byte equality observed |
| thread_pool_select.test | 9 | 0.002209s | 0.002237s | 0.002200s | byte equality observed |
| write.test | 10 | 0.001498s | 0.001458s | 0.001494s | byte equality observed |
| write_at.test | 10 | 0.001621s | 0.001603s | 0.001584s | byte equality observed |
| write_at_select.test | 10 | 0.001587s | 0.001631s | 0.001645s | byte equality observed |
| write_select.test | 10 | 0.001465s | 0.001430s | 0.001411s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
