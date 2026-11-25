# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.532412 | 3.591108 | 3.011129 | 0.001908 | 0.001948 | 0.002167 |
| any_completion_executor_select.test | RUN | 0.559106 | 3.574976 | 3.151531 | 0.001835 | 0.001818 | 0.001800 |
| any_completion_handler.test | RUN | 0.582826 | 3.258732 | 2.828118 | 0.001655 | 0.001557 | 0.001458 |
| any_completion_handler_select.test | RUN | 0.614813 | 3.367854 | 2.955679 | 0.001663 | 0.001811 | 0.001516 |
| any_io_executor.test | RUN | 0.579053 | 3.810923 | 3.313912 | 0.001618 | 0.001818 | 0.001565 |
| any_io_executor_select.test | RUN | 0.578754 | 3.731226 | 3.424336 | 0.001767 | 0.002154 | 0.001608 |
| append.test | RUN | 0.525478 | 3.034355 | 2.475481 | 0.001240 | 0.001644 | 0.001430 |
| append_select.test | RUN | 0.532135 | 3.143793 | 2.497920 | 0.001338 | 0.001460 | 0.001490 |
| as_tuple.test | RUN | 0.681825 | 3.715507 | 3.515863 | 0.001375 | 0.001781 | 0.001562 |
| as_tuple_select.test | RUN | 0.690594 | 3.657799 | 3.463372 | 0.001283 | 0.001612 | 0.001329 |
| associated_allocator.test | LINK | 0.130159 | 0.302895 | 0.370770 | — | — | — |
| associated_allocator_select.test | LINK | 0.128580 | 0.300147 | 0.367688 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.145610 | 0.323472 | 0.400973 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.145172 | 0.328626 | 0.418369 | — | — | — |
| associated_executor.test | LINK | 0.210195 | 0.562939 | 0.657799 | — | — | — |
| associated_executor_select.test | LINK | 0.210216 | 0.561357 | 0.670714 | — | — | — |
| associated_immediate_executor.test | LINK | 0.192910 | 0.519232 | 0.621922 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.191488 | 0.521628 | 0.586579 | — | — | — |
| associator.test | LINK | 0.105690 | 0.241072 | 0.308713 | — | — | — |
| associator_select.test | LINK | 0.106668 | 0.245130 | 0.300932 | — | — | — |
| awaitable.test | LINK | 0.106631 | 0.245916 | 0.309141 | — | — | — |
| awaitable_select.test | LINK | 0.107704 | 0.245266 | 0.306018 | — | — | — |
| basic_datagram_socket.test | LINK | 0.332053 | 0.789149 | 1.151833 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.340137 | 0.815426 | 1.173361 | — | — | — |
| basic_deadline_timer.test | LINK | 0.397877 | 0.923800 | 1.316706 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.397058 | 0.942710 | 1.331502 | — | — | — |
| basic_file.test | LINK | 0.110625 | 0.247960 | 0.306702 | — | — | — |
| basic_file_select.test | LINK | 0.111075 | 0.245717 | 0.303223 | — | — | — |
| basic_random_access_file.test | LINK | 0.105441 | 0.246733 | 0.305160 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.105370 | 0.242871 | 0.300503 | — | — | — |
| basic_raw_socket.test | LINK | 0.336136 | 0.787917 | 1.130835 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.341395 | 0.806341 | 1.168127 | — | — | — |
| basic_readable_pipe.test | LINK | 0.320595 | 0.749218 | 0.983369 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.333363 | 0.790010 | 1.196834 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.336547 | 0.780647 | 1.139344 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.340990 | 0.799421 | 1.172983 | — | — | — |
| basic_signal_set.test | LINK | 0.307262 | 0.712173 | 0.895970 | — | — | — |
| basic_signal_set_select.test | LINK | 0.319582 | 0.765728 | 1.115697 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.342769 | 0.789813 | 1.142643 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.347926 | 0.802250 | 1.169271 | — | — | — |
| basic_stream_file.test | LINK | 0.104468 | 0.245478 | 0.304974 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105182 | 0.243555 | 0.305747 | — | — | — |
| basic_stream_socket.test | LINK | 0.335684 | 0.791156 | 1.133412 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.343559 | 0.805844 | 1.160954 | — | — | — |
| basic_streambuf.test | LINK | 0.162340 | 0.354999 | 0.440712 | — | — | — |
| basic_streambuf_select.test | LINK | 0.160962 | 0.355528 | 0.441777 | — | — | — |
| basic_waitable_timer.test | LINK | 0.313334 | 0.743717 | 1.066376 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.318104 | 0.773235 | 1.097509 | — | — | — |
| basic_writable_pipe.test | LINK | 0.320305 | 0.753467 | 0.987586 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.330602 | 0.795967 | 1.206622 | — | — | — |
| bind_allocator.test | RUN | 0.571211 | 3.059444 | 2.674836 | 0.001829 | 0.001892 | 0.001816 |
| bind_allocator_select.test | RUN | 0.583390 | 3.101810 | 2.721456 | 0.001342 | 0.002056 | 0.002038 |
| bind_cancellation_slot.test | RUN | 0.582059 | 3.110014 | 2.726019 | 0.001053 | 0.001128 | 0.001065 |
| bind_cancellation_slot_select.test | RUN | 0.597388 | 3.127206 | 2.646662 | 0.000985 | 0.001069 | 0.001067 |
| bind_executor.test | RUN | 0.392418 | 2.129459 | 1.725999 | 0.001774 | 0.001791 | 0.001685 |
| bind_executor_select.test | RUN | 0.399949 | 2.156989 | 1.713786 | 0.001523 | 0.001685 | 0.001479 |
| bind_immediate_executor.test | RUN | 0.289484 | 1.748302 | 1.093430 | 0.001019 | 0.001025 | 0.001047 |
| bind_immediate_executor_select.test | RUN | 0.299089 | 1.698893 | 1.197630 | 0.000955 | 0.000977 | 0.001030 |
| buffer.test | RUN | 0.173365 | 0.718073 | 0.635833 | 0.000932 | 0.000985 | 0.000993 |
| buffer_select.test | RUN | 0.174440 | 0.716011 | 0.629167 | 0.000924 | 0.000997 | 0.000966 |
| buffer_registration.test | LINK | 0.134156 | 0.354601 | 0.376143 | — | — | — |
| buffer_registration_select.test | LINK | 0.132534 | 0.355359 | 0.374259 | — | — | — |
| buffered_read_stream.test | RUN | 0.673054 | 4.727334 | 3.949683 | 0.001253 | 0.001820 | 0.001636 |
| buffered_read_stream_select.test | RUN | 0.687070 | 4.876364 | 3.780053 | 0.001210 | 0.001791 | 0.001789 |
| buffered_stream.test | RUN | 0.955450 | 7.491414 | 6.950607 | 0.001956 | 0.002008 | 0.001808 |
| buffered_stream_select.test | RUN | 0.997068 | 7.549553 | 6.693024 | 0.001850 | 0.001734 | 0.001740 |
| buffered_write_stream.test | RUN | 1.142774 | 6.514611 | 5.934603 | 0.001990 | 0.001898 | 0.001738 |
| buffered_write_stream_select.test | RUN | 1.152656 | 6.594721 | 5.644563 | 0.001736 | 0.001722 | 0.001704 |
| buffers_iterator.test | RUN | 0.325578 | 0.563870 | 0.900328 | 0.001473 | 0.001564 | 0.001308 |
| buffers_iterator_select.test | RUN | 0.314559 | 0.569507 | 0.909006 | 0.001057 | 0.001495 | 0.001433 |
| cancel_after.test | RUN | 0.943206 | 5.029808 | 4.307721 | 0.004057 | 0.003938 | 0.004137 |
| cancel_after_select.test | RUN | 0.946964 | 5.007953 | 4.169525 | 0.004028 | 0.004035 | 0.003352 |
| cancel_at.test | RUN | 0.851124 | 4.523844 | 4.207586 | 0.003453 | 0.003494 | 0.003434 |
| cancel_at_select.test | RUN | 0.853839 | 4.381149 | 4.169676 | 0.003532 | 0.003366 | 0.003598 |
| cancellation_signal.test | LINK | 0.093833 | 0.204761 | 0.278353 | — | — | — |
| cancellation_signal_select.test | LINK | 0.097595 | 0.206753 | 0.291170 | — | — | — |
| cancellation_state.test | LINK | 0.121135 | 0.205162 | 0.362502 | — | — | — |
| cancellation_state_select.test | LINK | 0.138528 | 0.204137 | 0.375015 | — | — | — |
| cancellation_type.test | LINK | 0.105891 | 0.160206 | 0.302518 | — | — | — |
| cancellation_type_select.test | LINK | 0.109925 | 0.160851 | 0.295444 | — | — | — |
| co_composed.test | RUN | 0.111032 | 0.162978 | 0.296680 | 0.001222 | 0.000970 | 0.001405 |
| co_composed_select.test | RUN | 0.106301 | 0.163456 | 0.297955 | 0.001344 | 0.001597 | 0.001167 |
| co_spawn.test | LINK | 0.109935 | 0.172296 | 0.294190 | — | — | — |
| co_spawn_select.test | LINK | 0.102876 | 0.214211 | 0.295330 | — | — | — |
| completion_condition.test | LINK | 0.136560 | 0.377078 | 0.397096 | — | — | — |
| completion_condition_select.test | LINK | 0.136677 | 0.375851 | 0.402014 | — | — | — |
| compose.test | RUN | 0.698443 | 3.822320 | 3.374070 | 0.001828 | 0.002042 | 0.001847 |
| compose_select.test | RUN | 0.710465 | 3.795402 | 3.342313 | 0.001540 | 0.001598 | 0.001294 |
| composed.test | RUN | 0.678419 | 3.742313 | 3.317547 | 0.001710 | 0.001398 | 0.001780 |
| composed_select.test | RUN | 0.667035 | 3.722331 | 3.257811 | 0.001588 | 0.001554 | 0.001414 |
| config.test | RUN | 0.326959 | 2.367618 | 1.443611 | 0.001556 | 0.001454 | 0.001309 |
| config_select.test | RUN | 0.356707 | 2.522888 | 1.592258 | 0.001318 | 0.001544 | 0.001288 |
| connect.test | LINK | 1.139112 | 8.091553 | 7.097098 | — | — | — |
| connect_select.test | LINK | 1.152652 | 8.126087 | 7.143420 | — | — | — |
| connect_pipe.test | RUN | 0.596823 | 3.048890 | 2.622281 | 0.001635 | 0.001592 | 0.001422 |
| connect_pipe_select.test | RUN | 0.616403 | 3.188820 | 2.790533 | 0.001354 | 0.001650 | 0.001508 |
| consign.test | RUN | 0.524830 | 2.974704 | 2.431967 | 0.001524 | 0.001360 | 0.001474 |
| consign_select.test | RUN | 0.530731 | 3.014599 | 2.394859 | 0.001376 | 0.001491 | 0.001322 |
| coroutine.test | LINK | 0.112850 | 0.283181 | 0.338813 | — | — | — |
| coroutine_select.test | LINK | 0.111653 | 0.279239 | 0.332287 | — | — | — |
| deadline_timer.test | RUN | 0.769939 | 3.931717 | 3.500529 | 0.003003 | 0.003258 | 0.002799 |
| deadline_timer_select.test | RUN | 0.773645 | 3.881174 | 3.492463 | 0.002309 | 0.002816 | 0.003142 |
| deferred.test | RUN | 0.118616 | 0.257417 | 0.331081 | 0.001415 | 0.001398 | 0.001404 |
| deferred_select.test | RUN | 0.118462 | 0.262397 | 0.329292 | 0.001214 | 0.001319 | 0.001291 |
| detached.test | LINK | 0.132722 | 0.288850 | 0.358047 | — | — | — |
| detached_select.test | LINK | 0.132729 | 0.289274 | 0.361349 | — | — | — |
| disposition.test | RUN | 0.140339 | 0.707583 | 0.675178 | 0.000951 | 0.001290 | 0.001526 |
| disposition_select.test | RUN | 0.140068 | 0.698971 | 0.671402 | 0.001046 | 0.001375 | 0.001278 |
| error.test | RUN | 0.116642 | 0.676454 | 0.621723 | 0.000965 | 0.001441 | 0.001423 |
| error_select.test | RUN | 0.116594 | 0.683634 | 0.612491 | 0.000937 | 0.001308 | 0.001318 |
| file_base.test | LINK | 0.147546 | 0.555369 | 0.665273 | — | — | — |
| file_base_select.test | LINK | 0.151613 | 0.560254 | 0.623631 | — | — | — |
| fwd_first.test | LINK | 0.333651 | 1.000717 | 1.176164 | — | — | — |
| fwd_last.test | LINK | 0.334533 | 0.860127 | 1.170431 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.125869 | 0.322293 | 0.418417 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.125794 | 0.320674 | 0.414868 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.573735 | 3.050787 | 2.475163 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.567045 | 3.146097 | 2.471726 | — | — | — |
| generic_raw_protocol.test | LINK | 0.574081 | 3.055156 | 2.494875 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.571516 | 3.153697 | 2.487387 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.494684 | 2.581840 | 2.117153 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.497491 | 2.616206 | 2.107747 | — | — | — |
| generic_stream_protocol.test | LINK | 0.526991 | 2.782920 | 2.249735 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.530542 | 2.869074 | 2.264410 | — | — | — |
| high_resolution_timer.test | LINK | 0.216263 | 0.488198 | 0.654097 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.216064 | 0.507763 | 0.670800 | — | — | — |
| immediate.test | LINK | 0.148190 | 0.374290 | 0.405261 | — | — | — |
| immediate_select.test | LINK | 0.146249 | 0.373158 | 0.406213 | — | — | — |
| inline_executor.test | RUN | 0.184609 | 0.586380 | 0.620766 | 0.001037 | 0.001039 | 0.000989 |
| inline_executor_select.test | RUN | 0.184262 | 0.584986 | 0.617970 | 0.001061 | 0.000969 | 0.000955 |
| inline_or_executor.test | RUN | 0.307889 | 1.787222 | 1.226154 | 0.001122 | 0.000946 | 0.000966 |
| inline_or_executor_select.test | RUN | 0.316646 | 1.822562 | 1.326810 | 0.000954 | 0.000992 | 0.000993 |
| io_context.test | RUN | 0.459020 | 2.729368 | 2.136466 | 0.002143 | 0.001993 | 0.002023 |
| io_context_select.test | RUN | 0.457843 | 2.669719 | 2.142129 | 0.001813 | 0.001887 | 0.001985 |
| io_context_strand.test | RUN | 0.428781 | 2.288450 | 1.879637 | 0.001885 | 0.001809 | 0.001785 |
| io_context_strand_select.test | RUN | 0.433353 | 2.273110 | 1.864900 | 0.001676 | 0.001815 | 0.001829 |
| ip_address.test | LINK | 0.149520 | 0.514026 | 0.518300 | — | — | — |
| ip_address_select.test | LINK | 0.149997 | 0.520141 | 0.513473 | — | — | — |
| ip_address_v4.test | LINK | 0.153374 | 0.549275 | 0.701401 | — | — | — |
| ip_address_v4_select.test | LINK | 0.153520 | 0.542842 | 0.808197 | — | — | — |
| ip_address_v6.test | LINK | 0.175293 | 0.721028 | 1.136171 | — | — | — |
| ip_address_v6_select.test | LINK | 0.175475 | 0.715687 | 1.130090 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.130947 | 0.339314 | 0.718444 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.130909 | 0.335676 | 0.716509 | — | — | — |
| ip_basic_resolver.test | LINK | 0.217164 | 0.494640 | 1.071262 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.220787 | 0.501640 | 1.097040 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.074151 | 0.168340 | 0.300885 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.072952 | 0.168961 | 0.304760 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.130481 | 0.378850 | 0.693321 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.130301 | 0.493059 | 0.687921 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.125201 | 0.477868 | 0.674967 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.125623 | 0.480406 | 0.664351 | — | — | — |
| ip_host_name.test | RUN | 0.135601 | 0.654251 | 0.759707 | 0.000953 | 0.001270 | 0.001268 |
| ip_host_name_select.test | RUN | 0.134576 | 0.664590 | 0.758578 | 0.000932 | 0.001499 | 0.001327 |
| ip_icmp.test | RUN | 0.720041 | 6.419329 | 5.169903 | 0.000976 | 0.001493 | 0.001509 |
| ip_icmp_select.test | RUN | 0.714364 | 6.566710 | 5.034212 | 0.000989 | 0.001400 | 0.001233 |
| ip_multicast.test | RUN | 0.396345 | 3.158774 | 2.839709 | 0.001136 | 0.001463 | 0.001428 |
| ip_multicast_select.test | RUN | 0.403837 | 3.157977 | 2.816509 | 0.001008 | 0.001403 | 0.001671 |
| ip_resolver_query_base.test | LINK | 0.084807 | 0.262228 | 0.322448 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.083611 | 0.264053 | 0.317770 | — | — | — |
| ip_tcp.test | RUN | 1.072227 | 9.450478 | 7.981867 | 0.001359 | 0.002096 | 0.001815 |
| ip_tcp_select.test | RUN | 1.081688 | 9.905725 | 7.705792 | 0.001266 | 0.001919 | 0.001726 |
| ip_udp.test | RUN | 0.775504 | 6.736354 | 5.423128 | 0.001229 | 0.001507 | 0.001457 |
| ip_udp_select.test | RUN | 0.773902 | 6.895268 | 5.315634 | 0.001093 | 0.001412 | 0.001478 |
| ip_unicast.test | RUN | 0.367745 | 2.896793 | 2.514137 | 0.001055 | 0.001355 | 0.001505 |
| ip_unicast_select.test | RUN | 0.374140 | 2.873877 | 2.474374 | 0.001038 | 0.001398 | 0.001499 |
| ip_v6_only.test | RUN | 0.376914 | 2.967641 | 2.642692 | 0.001074 | 0.001334 | 0.001511 |
| ip_v6_only_select.test | RUN | 0.383307 | 3.069876 | 2.622035 | 0.001027 | 0.001477 | 0.001340 |
| is_read_buffered.test | RUN | 0.256463 | 0.882853 | 1.362162 | 0.000934 | 0.001318 | 0.001346 |
| is_read_buffered_select.test | RUN | 0.259676 | 0.886553 | 1.370600 | 0.000970 | 0.001300 | 0.001315 |
| is_write_buffered.test | RUN | 0.256132 | 0.876582 | 1.301420 | 0.000992 | 0.001223 | 0.001310 |
| is_write_buffered_select.test | RUN | 0.258970 | 0.882917 | 1.343010 | 0.001002 | 0.001256 | 0.001267 |
| local_basic_endpoint.test | LINK | 0.128642 | 0.492146 | 0.678794 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.127690 | 0.481824 | 0.685253 | — | — | — |
| local_connect_pair.test | LINK | 0.360784 | 2.932603 | 2.397145 | — | — | — |
| local_connect_pair_select.test | LINK | 0.364503 | 2.905313 | 2.371289 | — | — | — |
| local_datagram_protocol.test | LINK | 0.488855 | 3.859692 | 3.384510 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.495971 | 3.855763 | 3.349283 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.502984 | 3.767419 | 3.424370 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.504364 | 3.842468 | 3.397761 | — | — | — |
| local_stream_protocol.test | LINK | 0.461630 | 3.599804 | 3.249854 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.471960 | 3.609505 | 3.206481 | — | — | — |
| placeholders.test | LINK | 0.080490 | 0.261387 | 0.334273 | — | — | — |
| placeholders_select.test | LINK | 0.080713 | 0.263900 | 0.329008 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.222691 | 0.735000 | 1.008312 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.229804 | 0.779840 | 1.215104 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.223811 | 0.737222 | 0.996352 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.230497 | 0.782629 | 1.202223 | — | — | — |
| posix_descriptor_base.test | LINK | 0.088510 | 0.275655 | 0.330491 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.086822 | 0.277181 | 0.330167 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.645412 | 3.662232 | 3.179121 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.640097 | 3.688824 | 3.230297 | — | — | — |
| prepend.test | RUN | 0.523861 | 2.939630 | 2.480105 | 0.001419 | 0.001382 | 0.001448 |
| prepend_select.test | RUN | 0.529704 | 2.991080 | 2.460250 | 0.001378 | 0.001498 | 0.001419 |
| random_access_file.test | LINK | 0.295526 | 0.660003 | 0.811874 | — | — | — |
| random_access_file_select.test | LINK | 0.311394 | 0.700112 | 1.012152 | — | — | — |
| read.test | RUN | 1.738072 | 18.612723 | 14.813967 | 0.002025 | 0.001819 | 0.002126 |
| read_select.test | RUN | 1.755838 | 18.510036 | 14.995573 | 0.001929 | 0.001749 | 0.001945 |
| read_at.test | RUN | 1.738051 | 24.259196 | 19.632278 | 0.002239 | 0.002398 | 0.002168 |
| read_at_select.test | RUN | 1.734142 | 24.156057 | 19.678276 | 0.002241 | 0.002428 | 0.002476 |
| read_until.test | RUN | 0.901054 | 7.235385 | 5.521786 | 0.001510 | 0.001592 | 0.001798 |
| read_until_select.test | RUN | 0.910704 | 7.282690 | 5.678996 | 0.001729 | 0.001618 | 0.001593 |
| readable_pipe.test | LINK | 0.547309 | 3.036357 | 2.496833 | — | — | — |
| readable_pipe_select.test | LINK | 0.570030 | 3.142241 | 2.648480 | — | — | — |
| recycling_allocator.test | RUN | 0.160091 | 0.419510 | 0.476124 | 0.001319 | 0.001221 | 0.001503 |
| recycling_allocator_select.test | RUN | 0.162675 | 0.417029 | 0.482170 | 0.001352 | 0.001383 | 0.001475 |
| redirect_disposition.test | LINK | 0.724338 | 4.209459 | 3.796775 | — | — | — |
| redirect_disposition_select.test | LINK | 0.729299 | 4.145760 | 3.753555 | — | — | — |
| redirect_error.test | LINK | 0.642894 | 3.470594 | 3.319395 | — | — | — |
| redirect_error_select.test | LINK | 0.651354 | 3.446826 | 3.294691 | — | — | — |
| registered_buffer.test | LINK | 0.157889 | 0.342083 | 0.429817 | — | — | — |
| registered_buffer_select.test | LINK | 0.158037 | 0.341158 | 0.430958 | — | — | — |
| signal_set.test | RUN | 0.531220 | 2.897034 | 2.343088 | 0.001466 | 0.001331 | 0.001463 |
| signal_set_select.test | RUN | 0.553796 | 3.030027 | 2.537329 | 0.001372 | 0.001457 | 0.001330 |
| signal_set_base.test | LINK | 0.120377 | 0.261272 | 0.320418 | — | — | — |
| signal_set_base_select.test | LINK | 0.125173 | 0.262452 | 0.312274 | — | — | — |
| socket_base.test | RUN | 0.650431 | 4.273351 | 3.541253 | 0.001686 | 0.001354 | 0.001396 |
| socket_base_select.test | RUN | 0.657619 | 4.156985 | 3.524579 | 0.001510 | 0.001310 | 0.001599 |
| spawn.test | RUN | 1.146738 | 7.071668 | 6.191432 | 0.001572 | 0.001658 | 0.001828 |
| spawn_select.test | RUN | 1.149237 | 7.008350 | 6.158585 | 0.001709 | 0.001561 | 0.001619 |
| static_thread_pool.test | RUN | 0.280612 | 0.645798 | 0.787994 | 0.001237 | 0.001195 | 0.001374 |
| static_thread_pool_select.test | RUN | 0.288464 | 0.697972 | 0.986697 | 0.001323 | 0.001209 | 0.001420 |
| steady_timer.test | LINK | 0.316759 | 0.727237 | 1.131988 | — | — | — |
| steady_timer_select.test | LINK | 0.327780 | 0.747390 | 1.151953 | — | — | — |
| strand.test | RUN | 0.707796 | 3.948285 | 3.663165 | 0.002111 | 0.002069 | 0.002182 |
| strand_select.test | RUN | 0.720544 | 3.948950 | 3.657457 | 0.002127 | 0.001784 | 0.001784 |
| stream_file.test | LINK | 0.297194 | 0.663391 | 0.847761 | — | — | — |
| stream_file_select.test | LINK | 0.310195 | 0.574319 | 1.050304 | — | — | — |
| streambuf.test | RUN | 0.184301 | 0.368976 | 0.570223 | 0.001359 | 0.000932 | 0.001502 |
| streambuf_select.test | RUN | 0.188967 | 0.369762 | 0.563256 | 0.000948 | 0.000938 | 0.000981 |
| system_timer.test | LINK | 0.462298 | 2.536593 | 2.150726 | — | — | — |
| system_timer_select.test | LINK | 0.466250 | 2.500427 | 2.089015 | — | — | — |
| system_context.test | LINK | 0.196595 | 0.425647 | 0.484419 | — | — | — |
| system_context_select.test | LINK | 0.206868 | 0.457696 | 0.606365 | — | — | — |
| system_executor.test | LINK | 0.266697 | 1.446068 | 0.984688 | — | — | — |
| system_executor_select.test | LINK | 0.274349 | 1.413958 | 1.093278 | — | — | — |
| this_coro.test | LINK | 0.073618 | 0.160210 | 0.188749 | — | — | — |
| this_coro_select.test | LINK | 0.072942 | 0.161610 | 0.188952 | — | — | — |
| thread_pool.test | RUN | 0.321684 | 1.851881 | 1.282926 | 0.001746 | 0.001692 | 0.001658 |
| thread_pool_select.test | RUN | 0.329868 | 1.873347 | 1.377800 | 0.001743 | 0.001540 | 0.001902 |
| time_traits.test | LINK | 0.164230 | 0.391013 | 0.393188 | — | — | — |
| time_traits_select.test | LINK | 0.165572 | 0.511503 | 0.388209 | — | — | — |
| ts_buffer.test | LINK | 0.160156 | 0.530729 | 0.416233 | — | — | — |
| ts_buffer_select.test | LINK | 0.158904 | 0.568083 | 0.415713 | — | — | — |
| ts_executor.test | LINK | 0.227926 | 0.802485 | 0.651677 | — | — | — |
| ts_executor_select.test | LINK | 0.238749 | 0.844388 | 0.802138 | — | — | — |
| ts_internet.test | LINK | 0.251461 | 0.873806 | 1.226487 | — | — | — |
| ts_internet_select.test | LINK | 0.253976 | 0.904627 | 1.301008 | — | — | — |
| ts_io_context.test | LINK | 0.202623 | 0.661853 | 0.648694 | — | — | — |
| ts_io_context_select.test | LINK | 0.209737 | 0.704382 | 0.992733 | — | — | — |
| ts_net.test | LINK | 0.300033 | 1.043706 | 1.600729 | — | — | — |
| ts_net_select.test | LINK | 0.307279 | 1.076307 | 1.609688 | — | — | — |
| ts_netfwd.test | LINK | 0.295251 | 1.043850 | 1.598529 | — | — | — |
| ts_netfwd_select.test | LINK | 0.301212 | 1.073439 | 1.620898 | — | — | — |
| ts_socket.test | LINK | 0.246476 | 0.815527 | 1.216976 | — | — | — |
| ts_socket_select.test | LINK | 0.250287 | 0.834445 | 1.233202 | — | — | — |
| ts_timer.test | LINK | 0.220140 | 0.734660 | 1.050963 | — | — | — |
| ts_timer_select.test | LINK | 0.222626 | 0.745773 | 1.069883 | — | — | — |
| use_awaitable.test | LINK | 0.073488 | 0.240311 | 0.295767 | — | — | — |
| use_awaitable_select.test | LINK | 0.075657 | 0.239682 | 0.295531 | — | — | — |
| wait_traits.test | LINK | 0.075279 | 0.244251 | 0.292535 | — | — | — |
| wait_traits_select.test | LINK | 0.072692 | 0.239841 | 0.295862 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.072064 | 0.240620 | 0.290002 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.072466 | 0.238904 | 0.294689 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.073361 | 0.244685 | 0.294731 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.072726 | 0.239585 | 0.295127 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.072477 | 0.240537 | 0.295540 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.072582 | 0.238297 | 0.293498 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.072227 | 0.240911 | 0.295354 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.073221 | 0.242825 | 0.299064 | — | — | — |
| windows_object_handle.test | LINK | 0.203697 | 0.666689 | 0.816739 | — | — | — |
| windows_object_handle_select.test | LINK | 0.213261 | 0.702823 | 1.027023 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.214130 | 0.714223 | 0.875248 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.221608 | 0.756189 | 1.090799 | — | — | — |
| windows_random_access_handle.test | LINK | 0.205373 | 0.665745 | 0.817732 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.211565 | 0.707140 | 1.008510 | — | — | — |
| windows_stream_handle.test | LINK | 0.205264 | 0.669083 | 0.815906 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.212769 | 0.717540 | 1.008344 | — | — | — |
| writable_pipe.test | LINK | 0.391440 | 2.996752 | 2.562032 | — | — | — |
| writable_pipe_select.test | LINK | 0.501235 | 3.132914 | 2.693588 | — | — | — |
| write.test | RUN | 1.730689 | 15.715930 | 14.077815 | 0.001800 | 0.002098 | 0.001783 |
| write_select.test | RUN | 1.740294 | 15.739913 | 14.169678 | 0.001686 | 0.001871 | 0.001904 |
| write_at.test | RUN | 1.773513 | 21.144473 | 17.869903 | 0.002084 | 0.001972 | 0.002193 |
| write_at_select.test | RUN | 1.783582 | 21.181209 | 18.063246 | 0.002106 | 0.002038 | 0.002300 |
| any_executor.test | RUN | 0.679959 | 6.852047 | 5.985796 | 0.001691 | 0.001676 | 0.001632 |
| blocking.test | RUN | 1.518764 | 9.246080 | 11.778068 | 0.003440 | 0.003212 | 0.003402 |
| blocking_adaptation.test | RUN | 0.762673 | 3.895550 | 5.188431 | 0.002230 | 0.002215 | 0.002233 |
| context_as.test | RUN | 0.440741 | 2.719836 | 1.795821 | 0.001423 | 0.001469 | 0.001418 |
| executor.test | RUN | 0.112990 | 0.252805 | 0.308263 | 0.001088 | 0.001292 | 0.001378 |
| inline_exception_handling.test | RUN | 1.366536 | 8.638071 | 11.078248 | 0.002434 | 0.002410 | 0.002431 |
| invocable_archetype.test | RUN | 0.104832 | 0.244771 | 0.315596 | 0.001350 | 0.001312 | 0.001217 |
| mapping.test | RUN | 1.529859 | 8.290786 | 11.769891 | 0.002438 | 0.002374 | 0.002439 |
| outstanding_work.test | RUN | 0.682235 | 3.619716 | 5.022395 | 0.002110 | 0.001966 | 0.002246 |
| prefer_only.test | RUN | 0.222712 | 1.442119 | 1.118741 | 0.001329 | 0.001307 | 0.001282 |
| relationship.test | RUN | 0.583248 | 3.535566 | 4.918067 | 0.001562 | 0.002070 | 0.001551 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.994×, 1.005× | 1.004× |
| clang | 0.997× | 0.995×, 0.998× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001262s | 0.001240s | 0.001253s | byte equality observed |
| any_completion_executor_select.test | 6 | 0.001231s | 0.001217s | 0.001277s | byte equality observed |
| any_completion_handler.test | 10 | 0.001037s | 0.001032s | 0.001035s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001037s | 0.000996s | 0.001041s | byte equality observed |
| any_io_executor.test | 6 | 0.001234s | 0.001208s | 0.001260s | byte equality observed |
| any_io_executor_select.test | 7 | 0.001234s | 0.001203s | 0.001263s | byte equality observed |
| append.test | 10 | 0.001001s | 0.000977s | 0.000996s | byte equality observed |
| append_select.test | 10 | 0.000972s | 0.000974s | 0.000974s | byte equality observed |
| as_tuple.test | 10 | 0.001054s | 0.001037s | 0.001050s | byte equality observed |
| as_tuple_select.test | 8 | 0.000997s | 0.000968s | 0.000995s | byte equality observed |
| bind_allocator.test | 1 | 0.001523s | 0.001469s | 0.001531s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001220s | 0.001152s | 0.001203s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000931s | 0.000912s | 0.000911s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000813s | 0.000802s | 0.000816s | byte equality observed |
| bind_executor.test | 1 | 0.001527s | 0.001536s | 0.001525s | byte equality observed |
| bind_executor_select.test | 1 | 0.001842s | 0.001726s | 0.001756s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000941s | 0.000907s | 0.000902s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000877s | 0.000891s | 0.000866s | byte equality observed |
| buffer.test | 10 | 0.000857s | 0.000870s | 0.000832s | byte equality observed |
| buffer_select.test | 10 | 0.000869s | 0.000845s | 0.000831s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001068s | 0.001057s | 0.001045s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001050s | 0.001028s | 0.001018s | byte equality observed |
| buffered_stream.test | 10 | 0.001036s | 0.001009s | 0.001009s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001024s | 0.001011s | 0.000996s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001023s | 0.001015s | 0.001035s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001011s | 0.001024s | 0.001011s | byte equality observed |
| buffers_iterator.test | 10 | 0.000824s | 0.000834s | 0.000855s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000808s | 0.000777s | 0.000791s | byte equality observed |
| cancel_after.test | 1 | 0.003359s | 0.003331s | 0.003510s | byte equality observed |
| cancel_after_select.test | 1 | 0.002762s | 0.002753s | 0.002898s | byte equality observed |
| cancel_at.test | 1 | 0.003391s | 0.003649s | 0.003803s | byte equality observed |
| cancel_at_select.test | 1 | 0.003415s | 0.003333s | 0.003552s | byte equality observed |
| co_composed.test | 10 | 0.000871s | 0.000852s | 0.000853s | byte equality observed |
| co_composed_select.test | 10 | 0.000828s | 0.000799s | 0.000794s | byte equality observed |
| compose.test | 1 | 0.001541s | 0.001552s | 0.001668s | byte equality observed |
| compose_select.test | 1 | 0.001259s | 0.001233s | 0.001275s | byte equality observed |
| composed.test | 1 | 0.001850s | 0.001791s | 0.001902s | byte equality observed |
| composed_select.test | 1 | 0.001452s | 0.001430s | 0.001343s | byte equality observed |
| config.test | 10 | 0.000953s | 0.000920s | 0.000943s | byte equality observed |
| config_select.test | 10 | 0.000918s | 0.000869s | 0.000856s | byte equality observed |
| connect_pipe.test | 10 | 0.000898s | 0.000898s | 0.000881s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000886s | 0.000894s | 0.000891s | byte equality observed |
| consign.test | 10 | 0.000898s | 0.000902s | 0.000884s | byte equality observed |
| consign_select.test | 10 | 0.000867s | 0.000838s | 0.000853s | byte equality observed |
| deadline_timer.test | 1 | 0.002341s | 0.002230s | 0.002336s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002009s | 0.001976s | 0.002044s | byte equality observed |
| deferred.test | 10 | 0.000839s | 0.000837s | 0.000848s | byte equality observed |
| deferred_select.test | 10 | 0.000756s | 0.000751s | 0.000762s | byte equality observed |
| disposition.test | 10 | 0.000802s | 0.000797s | 0.000814s | byte equality observed |
| disposition_select.test | 10 | 0.000793s | 0.000808s | 0.000797s | byte equality observed |
| error.test | 10 | 0.000779s | 0.000776s | 0.000786s | byte equality observed |
| error_select.test | 10 | 0.000780s | 0.000768s | 0.000781s | byte equality observed |
| inline_executor.test | 10 | 0.000785s | 0.000777s | 0.000785s | byte equality observed |
| inline_executor_select.test | 10 | 0.000782s | 0.000782s | 0.000787s | byte equality observed |
| inline_or_executor.test | 10 | 0.000790s | 0.000783s | 0.000783s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000794s | 0.000802s | 0.000788s | byte equality observed |
| io_context.test | 1 | 0.001855s | 0.001816s | 0.001860s | byte equality observed |
| io_context_select.test | 1 | 0.002202s | 0.002112s | 0.002180s | byte equality observed |
| io_context_strand.test | 1 | 0.002136s | 0.002031s | 0.002206s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001812s | 0.001776s | 0.001812s | byte equality observed |
| ip_host_name.test | 10 | 0.000862s | 0.000859s | 0.000871s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000778s | 0.000783s | 0.000767s | byte equality observed |
| ip_icmp.test | 10 | 0.000794s | 0.000791s | 0.000794s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000791s | 0.000811s | 0.000782s | byte equality observed |
| ip_multicast.test | 10 | 0.000870s | 0.000861s | 0.000855s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000843s | 0.000839s | 0.000838s | byte equality observed |
| ip_tcp.test | 10 | 0.001059s | 0.001064s | 0.001058s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001029s | 0.001016s | 0.001021s | byte equality observed |
| ip_udp.test | 10 | 0.000881s | 0.000866s | 0.000876s | byte equality observed |
| ip_udp_select.test | 10 | 0.000863s | 0.000866s | 0.000858s | byte equality observed |
| ip_unicast.test | 10 | 0.000833s | 0.000832s | 0.000817s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000822s | 0.000820s | 0.000808s | byte equality observed |
| ip_v6_only.test | 10 | 0.000832s | 0.000827s | 0.000824s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000819s | 0.000823s | 0.000810s | byte equality observed |
| is_read_buffered.test | 10 | 0.000773s | 0.000768s | 0.000757s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000761s | 0.000759s | 0.000754s | byte equality observed |
| is_write_buffered.test | 10 | 0.000763s | 0.000759s | 0.000760s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000766s | 0.000754s | 0.000764s | byte equality observed |
| prepend.test | 10 | 0.000825s | 0.000829s | 0.000815s | byte equality observed |
| prepend_select.test | 10 | 0.000802s | 0.000868s | 0.000796s | byte equality observed |
| read.test | 10 | 0.001111s | 0.001191s | 0.001099s | byte equality observed |
| read_at.test | 10 | 0.001334s | 0.001435s | 0.001337s | byte equality observed |
| read_at_select.test | 10 | 0.001333s | 0.001465s | 0.001344s | byte equality observed |
| read_select.test | 10 | 0.001109s | 0.001164s | 0.001081s | byte equality observed |
| read_until.test | 10 | 0.000936s | 0.000975s | 0.000909s | byte equality observed |
| read_until_select.test | 10 | 0.000989s | 0.000967s | 0.000944s | byte equality observed |
| recycling_allocator.test | 10 | 0.000825s | 0.000815s | 0.000825s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000833s | 0.000809s | 0.000851s | byte equality observed |
| signal_set.test | 10 | 0.000848s | 0.000845s | 0.000884s | byte equality observed |
| signal_set_select.test | 10 | 0.000829s | 0.000830s | 0.000839s | byte equality observed |
| socket_base.test | 10 | 0.000924s | 0.000928s | 0.000938s | byte equality observed |
| socket_base_select.test | 10 | 0.000918s | 0.000890s | 0.000925s | byte equality observed |
| spawn.test | 10 | 0.000983s | 0.001008s | 0.001018s | byte equality observed |
| spawn_select.test | 10 | 0.000985s | 0.001020s | 0.001001s | byte equality observed |
| static_thread_pool.test | 10 | 0.000828s | 0.000821s | 0.000829s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000777s | 0.000787s | 0.000782s | byte equality observed |
| strand.test | 1 | 0.001803s | 0.001775s | 0.001785s | byte equality observed |
| strand_select.test | 1 | 0.001500s | 0.001495s | 0.001546s | byte equality observed |
| streambuf.test | 10 | 0.000886s | 0.000870s | 0.000888s | byte equality observed |
| streambuf_select.test | 10 | 0.000854s | 0.000877s | 0.000860s | byte equality observed |
| thread_pool.test | 10 | 0.001588s | 0.001550s | 0.001586s | byte equality observed |
| thread_pool_select.test | 10 | 0.001556s | 0.001576s | 0.001587s | byte equality observed |
| write.test | 10 | 0.001223s | 0.001214s | 0.001177s | byte equality observed |
| write_at.test | 10 | 0.001310s | 0.001324s | 0.001325s | byte equality observed |
| write_at_select.test | 10 | 0.001307s | 0.001322s | 0.001278s | byte equality observed |
| write_select.test | 10 | 0.001209s | 0.001164s | 0.001201s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
