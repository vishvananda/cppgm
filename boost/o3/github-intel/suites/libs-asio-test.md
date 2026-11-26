# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.704233 | 4.710250 | 3.908708 | 0.002529 | 0.002430 | 0.002416 |
| any_completion_executor_select.test | RUN | 0.717706 | 4.720887 | 4.063438 | 0.002147 | 0.002839 | 0.002000 |
| any_completion_handler.test | RUN | 0.805043 | 4.199552 | 3.581167 | 0.001894 | 0.001932 | 0.001904 |
| any_completion_handler_select.test | RUN | 0.835722 | 4.307512 | 3.810060 | 0.001673 | 0.001952 | 0.001933 |
| any_io_executor.test | RUN | 0.748713 | 4.973683 | 4.164157 | 0.002138 | 0.002508 | 0.002202 |
| any_io_executor_select.test | RUN | 0.770094 | 4.868382 | 4.387871 | 0.002110 | 0.002300 | 0.002275 |
| append.test | RUN | 0.680277 | 4.020785 | 3.209332 | 0.001503 | 0.001977 | 0.001619 |
| append_select.test | RUN | 0.708710 | 4.055414 | 3.187903 | 0.001639 | 0.001864 | 0.001718 |
| as_tuple.test | RUN | 0.889593 | 4.841050 | 4.395950 | 0.001866 | 0.001744 | 0.001658 |
| as_tuple_select.test | RUN | 0.914491 | 4.732767 | 4.449097 | 0.001624 | 0.001910 | 0.001732 |
| associated_allocator.test | LINK | 0.174620 | 0.386510 | 0.483984 | — | — | — |
| associated_allocator_select.test | LINK | 0.177899 | 0.399886 | 0.481928 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.190012 | 0.434813 | 0.515462 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.193455 | 0.437792 | 0.521730 | — | — | — |
| associated_executor.test | LINK | 0.278517 | 0.752175 | 0.874491 | — | — | — |
| associated_executor_select.test | LINK | 0.279224 | 0.774710 | 0.877747 | — | — | — |
| associated_immediate_executor.test | LINK | 0.257060 | 0.713172 | 0.757745 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.260629 | 0.703786 | 0.769174 | — | — | — |
| associator.test | LINK | 0.141665 | 0.334496 | 0.392772 | — | — | — |
| associator_select.test | LINK | 0.142380 | 0.336255 | 0.389934 | — | — | — |
| awaitable.test | LINK | 0.141526 | 0.331884 | 0.397163 | — | — | — |
| awaitable_select.test | LINK | 0.144081 | 0.333658 | 0.376720 | — | — | — |
| basic_datagram_socket.test | LINK | 0.445077 | 1.060275 | 1.455994 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.452029 | 1.064362 | 1.500700 | — | — | — |
| basic_deadline_timer.test | LINK | 0.524998 | 1.239757 | 1.675717 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.542217 | 1.274472 | 1.681155 | — | — | — |
| basic_file.test | LINK | 0.143790 | 0.325175 | 0.386817 | — | — | — |
| basic_file_select.test | LINK | 0.143144 | 0.343609 | 0.390978 | — | — | — |
| basic_random_access_file.test | LINK | 0.145805 | 0.348403 | 0.385530 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.142238 | 0.326855 | 0.383021 | — | — | — |
| basic_raw_socket.test | LINK | 0.439368 | 1.048263 | 1.488409 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.458157 | 1.073919 | 1.530941 | — | — | — |
| basic_readable_pipe.test | LINK | 0.432979 | 1.007590 | 1.267250 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.445309 | 1.058633 | 1.547687 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.446501 | 1.050994 | 1.491195 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.449056 | 1.061849 | 1.525732 | — | — | — |
| basic_signal_set.test | LINK | 0.409397 | 0.965436 | 1.151596 | — | — | — |
| basic_signal_set_select.test | LINK | 0.431853 | 1.023210 | 1.427671 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.447383 | 1.046452 | 1.459940 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.457905 | 1.066199 | 1.518769 | — | — | — |
| basic_stream_file.test | LINK | 0.142128 | 0.335746 | 0.403355 | — | — | — |
| basic_stream_file_select.test | LINK | 0.143101 | 0.338206 | 0.390178 | — | — | — |
| basic_stream_socket.test | LINK | 0.439282 | 1.058525 | 1.482249 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.454802 | 1.062586 | 1.490921 | — | — | — |
| basic_streambuf.test | LINK | 0.216487 | 0.481558 | 0.577752 | — | — | — |
| basic_streambuf_select.test | LINK | 0.221815 | 0.486417 | 0.579731 | — | — | — |
| basic_waitable_timer.test | LINK | 0.417005 | 0.984481 | 1.362576 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.421765 | 0.998563 | 1.419318 | — | — | — |
| basic_writable_pipe.test | LINK | 0.427601 | 1.003625 | 1.292249 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.450485 | 1.048256 | 1.529700 | — | — | — |
| bind_allocator.test | RUN | 0.737149 | 4.041874 | 3.472889 | 0.002052 | 0.002366 | 0.002062 |
| bind_allocator_select.test | RUN | 0.763174 | 4.115023 | 3.457214 | 0.001908 | 0.002100 | 0.001588 |
| bind_cancellation_slot.test | RUN | 0.760195 | 4.107299 | 3.536802 | 0.001284 | 0.001362 | 0.001339 |
| bind_cancellation_slot_select.test | RUN | 0.782765 | 4.103079 | 3.354629 | 0.001246 | 0.001421 | 0.001253 |
| bind_executor.test | RUN | 0.488864 | 2.745123 | 2.193276 | 0.001944 | 0.002487 | 0.001860 |
| bind_executor_select.test | RUN | 0.510836 | 2.726598 | 2.120014 | 0.001793 | 0.001967 | 0.001774 |
| bind_immediate_executor.test | RUN | 0.374496 | 2.330592 | 1.391249 | 0.001280 | 0.001429 | 0.001274 |
| bind_immediate_executor_select.test | RUN | 0.380450 | 2.227298 | 1.476366 | 0.001209 | 0.001257 | 0.001191 |
| buffer.test | RUN | 0.224958 | 0.920048 | 0.819847 | 0.001249 | 0.001296 | 0.001210 |
| buffer_select.test | RUN | 0.220547 | 0.896956 | 0.799110 | 0.001237 | 0.001246 | 0.001188 |
| buffer_registration.test | LINK | 0.170813 | 0.460254 | 0.480360 | — | — | — |
| buffer_registration_select.test | LINK | 0.169000 | 0.450229 | 0.467667 | — | — | — |
| buffered_read_stream.test | RUN | 0.872946 | 6.474584 | 5.216880 | 0.001574 | 0.002282 | 0.002122 |
| buffered_read_stream_select.test | RUN | 0.874873 | 6.540392 | 5.166125 | 0.001528 | 0.002062 | 0.001987 |
| buffered_stream.test | RUN | 1.496484 | 9.794763 | 8.679095 | 0.002200 | 0.002200 | 0.002108 |
| buffered_stream_select.test | RUN | 1.591586 | 9.983515 | 8.584373 | 0.002140 | 0.002218 | 0.002044 |
| buffered_write_stream.test | RUN | 1.504253 | 8.513324 | 7.639873 | 0.002052 | 0.002552 | 0.002164 |
| buffered_write_stream_select.test | RUN | 1.505371 | 8.677484 | 7.152168 | 0.002016 | 0.002336 | 0.002013 |
| buffers_iterator.test | RUN | 0.430607 | 0.765527 | 1.181099 | 0.001802 | 0.001778 | 0.001444 |
| buffers_iterator_select.test | RUN | 0.436430 | 0.773208 | 1.198815 | 0.001671 | 0.001790 | 0.001583 |
| cancel_after.test | RUN | 1.235501 | 6.639674 | 5.445123 | 0.003880 | 0.004293 | 0.003845 |
| cancel_after_select.test | RUN | 1.250916 | 6.654804 | 5.501307 | 0.003546 | 0.004354 | 0.004033 |
| cancel_at.test | RUN | 1.234740 | 5.524218 | 5.192831 | 0.003287 | 0.003764 | 0.003452 |
| cancel_at_select.test | RUN | 1.208323 | 5.567730 | 5.085031 | 0.003202 | 0.003663 | 0.003246 |
| cancellation_signal.test | LINK | 0.120967 | 0.260878 | 0.305823 | — | — | — |
| cancellation_signal_select.test | LINK | 0.139481 | 0.264301 | 0.306470 | — | — | — |
| cancellation_state.test | LINK | 0.187369 | 0.270367 | 0.328299 | — | — | — |
| cancellation_state_select.test | LINK | 0.181829 | 0.266670 | 0.444877 | — | — | — |
| cancellation_type.test | LINK | 0.143488 | 0.214655 | 0.395113 | — | — | — |
| cancellation_type_select.test | LINK | 0.146047 | 0.209622 | 0.373061 | — | — | — |
| co_composed.test | RUN | 0.139535 | 0.216029 | 0.390410 | 0.001574 | 0.001285 | 0.001569 |
| co_composed_select.test | RUN | 0.148092 | 0.208663 | 0.390050 | 0.001589 | 0.001292 | 0.001803 |
| co_spawn.test | LINK | 0.143672 | 0.213144 | 0.389875 | — | — | — |
| co_spawn_select.test | LINK | 0.143347 | 0.212254 | 0.385848 | — | — | — |
| completion_condition.test | LINK | 0.184145 | 0.397529 | 0.525139 | — | — | — |
| completion_condition_select.test | LINK | 0.189445 | 0.483249 | 0.526970 | — | — | — |
| compose.test | RUN | 0.922658 | 4.995352 | 4.418733 | 0.002266 | 0.002384 | 0.002144 |
| compose_select.test | RUN | 0.941677 | 5.043110 | 4.402955 | 0.001708 | 0.001963 | 0.002276 |
| composed.test | RUN | 0.906327 | 5.002184 | 4.330755 | 0.001862 | 0.002115 | 0.001820 |
| composed_select.test | RUN | 0.897702 | 4.978942 | 4.246368 | 0.001717 | 0.001933 | 0.001726 |
| config.test | RUN | 0.419319 | 3.074225 | 1.868865 | 0.001600 | 0.001982 | 0.001709 |
| config_select.test | RUN | 0.451966 | 3.447887 | 2.201344 | 0.001548 | 0.001818 | 0.001788 |
| connect.test | LINK | 1.496155 | 10.592290 | 9.221233 | — | — | — |
| connect_select.test | LINK | 1.519931 | 10.705292 | 9.450901 | — | — | — |
| connect_pipe.test | RUN | 0.794427 | 4.087876 | 3.417946 | 0.001835 | 0.001924 | 0.001749 |
| connect_pipe_select.test | RUN | 0.823943 | 4.217554 | 3.685257 | 0.001745 | 0.001844 | 0.001817 |
| consign.test | RUN | 0.679741 | 4.030269 | 3.119538 | 0.001955 | 0.001846 | 0.001677 |
| consign_select.test | RUN | 0.700743 | 4.057185 | 3.112227 | 0.001611 | 0.001715 | 0.001532 |
| coroutine.test | LINK | 0.148101 | 0.392395 | 0.433490 | — | — | — |
| coroutine_select.test | LINK | 0.159949 | 0.386184 | 0.441050 | — | — | — |
| deadline_timer.test | RUN | 1.031625 | 5.204223 | 4.529599 | 0.002928 | 0.003541 | 0.003117 |
| deadline_timer_select.test | RUN | 1.038526 | 5.168142 | 4.428661 | 0.003127 | 0.003702 | 0.002863 |
| deferred.test | RUN | 0.158613 | 0.361481 | 0.436102 | 0.001440 | 0.001826 | 0.001584 |
| deferred_select.test | RUN | 0.168719 | 0.359412 | 0.421927 | 0.001555 | 0.001724 | 0.001486 |
| detached.test | LINK | 0.181049 | 0.404302 | 0.478264 | — | — | — |
| detached_select.test | LINK | 0.181575 | 0.404487 | 0.476732 | — | — | — |
| disposition.test | RUN | 0.214530 | 0.962328 | 0.883652 | 0.001259 | 0.001836 | 0.001808 |
| disposition_select.test | RUN | 0.165791 | 0.953161 | 0.883523 | 0.001213 | 0.001842 | 0.001842 |
| error.test | RUN | 0.147420 | 0.938376 | 0.802453 | 0.001246 | 0.001802 | 0.001706 |
| error_select.test | RUN | 0.150510 | 0.918107 | 0.778496 | 0.001177 | 0.001832 | 0.001688 |
| file_base.test | LINK | 0.182154 | 0.768280 | 0.784602 | — | — | — |
| file_base_select.test | LINK | 0.185759 | 0.746808 | 0.699614 | — | — | — |
| fwd_first.test | LINK | 0.419941 | 1.190377 | 1.484766 | — | — | — |
| fwd_last.test | LINK | 0.426713 | 1.024223 | 1.524057 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.154911 | 0.429476 | 0.532012 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.158707 | 0.419243 | 0.539296 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.735375 | 3.998686 | 3.163470 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.739670 | 4.037031 | 3.197741 | — | — | — |
| generic_raw_protocol.test | LINK | 0.727648 | 3.967002 | 3.144243 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.734434 | 4.013398 | 3.173984 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.638545 | 3.382489 | 2.688022 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.625035 | 3.372984 | 2.725548 | — | — | — |
| generic_stream_protocol.test | LINK | 0.673836 | 3.631297 | 2.854040 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.667408 | 3.651045 | 2.902996 | — | — | — |
| high_resolution_timer.test | LINK | 0.271488 | 0.630070 | 0.841103 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.274859 | 0.651363 | 0.870563 | — | — | — |
| immediate.test | LINK | 0.185203 | 0.494389 | 0.507513 | — | — | — |
| immediate_select.test | LINK | 0.183855 | 0.479918 | 0.519119 | — | — | — |
| inline_executor.test | RUN | 0.234061 | 0.765757 | 0.772052 | 0.001225 | 0.001334 | 0.001184 |
| inline_executor_select.test | RUN | 0.227873 | 0.744551 | 0.785384 | 0.001159 | 0.001284 | 0.001224 |
| inline_or_executor.test | RUN | 0.387657 | 2.281514 | 1.546260 | 0.001249 | 0.001324 | 0.001188 |
| inline_or_executor_select.test | RUN | 0.393452 | 2.295314 | 1.711307 | 0.001182 | 0.001372 | 0.001247 |
| io_context.test | RUN | 0.570111 | 3.556160 | 2.707694 | 0.002190 | 0.002355 | 0.002216 |
| io_context_select.test | RUN | 0.587451 | 3.427508 | 2.743106 | 0.001942 | 0.002220 | 0.002048 |
| io_context_strand.test | RUN | 0.547783 | 3.973887 | 2.356603 | 0.002118 | 0.002688 | 0.002298 |
| io_context_strand_select.test | RUN | 0.545900 | 4.086666 | 2.397116 | 0.001956 | 0.002720 | 0.002062 |
| ip_address.test | LINK | 0.187696 | 1.041229 | 0.655393 | — | — | — |
| ip_address_select.test | LINK | 0.189502 | 1.056352 | 0.664289 | — | — | — |
| ip_address_v4.test | LINK | 0.191283 | 1.108406 | 0.726686 | — | — | — |
| ip_address_v4_select.test | LINK | 0.193033 | 1.123438 | 0.711670 | — | — | — |
| ip_address_v6.test | LINK | 0.220242 | 1.261210 | 0.868184 | — | — | — |
| ip_address_v6_select.test | LINK | 0.223070 | 1.145998 | 0.879777 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.162434 | 0.438832 | 0.572512 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.164361 | 0.444415 | 0.556088 | — | — | — |
| ip_basic_resolver.test | LINK | 0.272306 | 0.635157 | 0.836068 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.282454 | 0.640035 | 0.876497 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.091274 | 0.204498 | 0.240620 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.093111 | 0.208819 | 0.235857 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.165114 | 0.425387 | 0.553093 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.164917 | 0.434491 | 0.538565 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.156000 | 0.478659 | 0.540324 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.159458 | 0.406424 | 0.529594 | — | — | — |
| ip_host_name.test | RUN | 0.171207 | 0.563712 | 0.930722 | 0.001229 | 0.001262 | 0.001581 |
| ip_host_name_select.test | RUN | 0.172733 | 0.570921 | 1.008156 | 0.001163 | 0.001187 | 0.001592 |
| ip_icmp.test | RUN | 0.932154 | 6.457302 | 6.454990 | 0.001203 | 0.001823 | 0.001618 |
| ip_icmp_select.test | RUN | 0.914915 | 6.657293 | 6.470252 | 0.001233 | 0.001778 | 0.001672 |
| ip_multicast.test | RUN | 0.500153 | 4.202705 | 3.687321 | 0.001288 | 0.002026 | 0.001782 |
| ip_multicast_select.test | RUN | 0.502339 | 4.206264 | 3.734756 | 0.001304 | 0.002012 | 0.001847 |
| ip_resolver_query_base.test | LINK | 0.103202 | 0.364279 | 0.420430 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.105554 | 0.367919 | 0.421977 | — | — | — |
| ip_tcp.test | RUN | 1.362042 | 12.558084 | 10.107824 | 0.001699 | 0.002431 | 0.002217 |
| ip_tcp_select.test | RUN | 1.387307 | 13.008301 | 9.907454 | 0.001554 | 0.002480 | 0.002542 |
| ip_udp.test | RUN | 1.000991 | 8.974526 | 7.132126 | 0.001361 | 0.001995 | 0.001908 |
| ip_udp_select.test | RUN | 0.972228 | 9.181139 | 6.843281 | 0.001326 | 0.002130 | 0.001941 |
| ip_unicast.test | RUN | 0.454762 | 3.894117 | 3.287847 | 0.001308 | 0.001897 | 0.001865 |
| ip_unicast_select.test | RUN | 0.468362 | 3.980443 | 3.266233 | 0.001285 | 0.001808 | 0.001859 |
| ip_v6_only.test | RUN | 0.472146 | 3.953082 | 3.360406 | 0.001350 | 0.001842 | 0.001503 |
| ip_v6_only_select.test | RUN | 0.490371 | 4.115205 | 3.364078 | 0.001306 | 0.001803 | 0.001588 |
| is_read_buffered.test | RUN | 0.320674 | 1.204942 | 1.729459 | 0.001289 | 0.001753 | 0.001565 |
| is_read_buffered_select.test | RUN | 0.323055 | 1.217183 | 1.786499 | 0.001158 | 0.001648 | 0.001493 |
| is_write_buffered.test | RUN | 0.315151 | 1.189261 | 1.695901 | 0.001242 | 0.001750 | 0.001661 |
| is_write_buffered_select.test | RUN | 0.323587 | 1.191508 | 1.724733 | 0.001123 | 0.001644 | 0.001448 |
| local_basic_endpoint.test | LINK | 0.182230 | 0.668066 | 0.886561 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.195685 | 0.655414 | 0.887541 | — | — | — |
| local_connect_pair.test | LINK | 0.679760 | 3.899509 | 3.095829 | — | — | — |
| local_connect_pair_select.test | LINK | 0.681971 | 3.868573 | 3.052814 | — | — | — |
| local_datagram_protocol.test | LINK | 0.927684 | 5.166262 | 4.313770 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.935669 | 5.121537 | 4.217204 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.956068 | 5.016675 | 4.369873 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.949276 | 5.109009 | 4.347405 | — | — | — |
| local_stream_protocol.test | LINK | 0.863765 | 4.830621 | 4.069429 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.893634 | 4.764167 | 4.017938 | — | — | — |
| placeholders.test | LINK | 0.155376 | 0.359961 | 0.427598 | — | — | — |
| placeholders_select.test | LINK | 0.154975 | 0.362665 | 0.426990 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.436351 | 0.991331 | 1.301500 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.441383 | 1.060299 | 1.569745 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.436799 | 1.002675 | 1.301291 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.443737 | 1.071637 | 1.570856 | — | — | — |
| posix_descriptor_base.test | LINK | 0.171830 | 0.376276 | 0.417112 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.171434 | 0.378024 | 0.421907 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.939893 | 4.842423 | 4.155138 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.940508 | 4.897510 | 4.153036 | — | — | — |
| prepend.test | RUN | 0.692656 | 3.961624 | 3.274406 | 0.001701 | 0.001764 | 0.001832 |
| prepend_select.test | RUN | 0.698295 | 4.018940 | 3.194570 | 0.001506 | 0.001752 | 0.001682 |
| random_access_file.test | LINK | 0.396258 | 0.904301 | 1.053080 | — | — | — |
| random_access_file_select.test | LINK | 0.407923 | 0.960460 | 1.307882 | — | — | — |
| read.test | RUN | 2.246230 | 24.588472 | 19.106360 | 0.002361 | 0.002424 | 0.002496 |
| read_select.test | RUN | 2.257398 | 24.113507 | 19.070635 | 0.002208 | 0.002433 | 0.002333 |
| read_at.test | RUN | 2.236421 | 32.190598 | 25.724812 | 0.002839 | 0.003168 | 0.002950 |
| read_at_select.test | RUN | 2.237599 | 32.792636 | 25.499694 | 0.002791 | 0.003072 | 0.002813 |
| read_until.test | RUN | 1.170477 | 9.466634 | 7.007400 | 0.001868 | 0.002026 | 0.001954 |
| read_until_select.test | RUN | 1.188848 | 9.540709 | 7.119762 | 0.002088 | 0.002126 | 0.002118 |
| readable_pipe.test | LINK | 0.720175 | 4.045978 | 3.253441 | — | — | — |
| readable_pipe_select.test | LINK | 0.748366 | 4.218787 | 3.460951 | — | — | — |
| recycling_allocator.test | RUN | 0.207287 | 0.567214 | 0.633039 | 0.001598 | 0.001710 | 0.001494 |
| recycling_allocator_select.test | RUN | 0.212183 | 0.577478 | 0.635254 | 0.001545 | 0.001788 | 0.001526 |
| redirect_disposition.test | LINK | 0.950578 | 5.529653 | 4.837344 | — | — | — |
| redirect_disposition_select.test | LINK | 0.944066 | 5.604663 | 4.794862 | — | — | — |
| redirect_error.test | LINK | 0.831572 | 4.656306 | 4.272542 | — | — | — |
| redirect_error_select.test | LINK | 0.853621 | 4.649487 | 4.248532 | — | — | — |
| registered_buffer.test | LINK | 0.208803 | 0.465930 | 0.573778 | — | — | — |
| registered_buffer_select.test | LINK | 0.209917 | 0.464304 | 0.574372 | — | — | — |
| signal_set.test | RUN | 0.692354 | 3.917038 | 2.994028 | 0.001640 | 0.001863 | 0.001782 |
| signal_set_select.test | RUN | 0.727592 | 4.048745 | 3.266629 | 0.001804 | 0.001874 | 0.001596 |
| signal_set_base.test | LINK | 0.164224 | 0.370675 | 0.404793 | — | — | — |
| signal_set_base_select.test | LINK | 0.164671 | 0.373406 | 0.410157 | — | — | — |
| socket_base.test | RUN | 0.853743 | 5.773030 | 4.566485 | 0.001836 | 0.001998 | 0.001918 |
| socket_base_select.test | RUN | 0.855519 | 5.616845 | 4.534136 | 0.001578 | 0.001911 | 0.001814 |
| spawn.test | RUN | 1.476740 | 9.367252 | 7.746081 | 0.001934 | 0.002077 | 0.002112 |
| spawn_select.test | RUN | 1.492494 | 9.340206 | 7.759007 | 0.001870 | 0.002169 | 0.001984 |
| static_thread_pool.test | RUN | 0.375105 | 0.874913 | 1.018008 | 0.001536 | 0.001555 | 0.001698 |
| static_thread_pool_select.test | RUN | 0.397443 | 0.923671 | 1.318512 | 0.001415 | 0.001464 | 0.001680 |
| steady_timer.test | LINK | 0.417655 | 0.980182 | 1.411982 | — | — | — |
| steady_timer_select.test | LINK | 0.421679 | 1.012814 | 1.439120 | — | — | — |
| strand.test | RUN | 0.925211 | 5.293303 | 4.767311 | 0.002631 | 0.002660 | 0.002344 |
| strand_select.test | RUN | 0.945406 | 5.272726 | 4.735686 | 0.002336 | 0.002132 | 0.002718 |
| stream_file.test | LINK | 0.389917 | 0.897311 | 1.030989 | — | — | — |
| stream_file_select.test | LINK | 0.402076 | 0.960872 | 1.324231 | — | — | — |
| streambuf.test | RUN | 0.245189 | 0.694488 | 0.738023 | 0.001762 | 0.001325 | 0.001656 |
| streambuf_select.test | RUN | 0.243031 | 0.488753 | 0.740374 | 0.001125 | 0.001298 | 0.001611 |
| system_timer.test | LINK | 0.591296 | 3.292880 | 2.983219 | — | — | — |
| system_timer_select.test | LINK | 0.585523 | 3.310471 | 2.854054 | — | — | — |
| system_context.test | LINK | 0.242124 | 0.558287 | 0.628577 | — | — | — |
| system_context_select.test | LINK | 0.256018 | 0.610789 | 0.789120 | — | — | — |
| system_executor.test | LINK | 0.331953 | 1.865688 | 1.248973 | — | — | — |
| system_executor_select.test | LINK | 0.355229 | 1.850406 | 1.425724 | — | — | — |
| this_coro.test | LINK | 0.091967 | 0.204684 | 0.241771 | — | — | — |
| this_coro_select.test | LINK | 0.092419 | 0.207623 | 0.242538 | — | — | — |
| thread_pool.test | RUN | 0.400577 | 3.154933 | 1.645203 | 0.002419 | 0.003522 | 0.002538 |
| thread_pool_select.test | RUN | 0.414964 | 3.244372 | 1.819910 | 0.002368 | 0.003358 | 0.002438 |
| time_traits.test | LINK | 0.205169 | 0.701146 | 0.504845 | — | — | — |
| time_traits_select.test | LINK | 0.207063 | 0.689557 | 0.564073 | — | — | — |
| ts_buffer.test | LINK | 0.199373 | 0.775363 | 0.737325 | — | — | — |
| ts_buffer_select.test | LINK | 0.196537 | 0.769965 | 0.651991 | — | — | — |
| ts_executor.test | LINK | 0.289417 | 1.055944 | 1.390298 | — | — | — |
| ts_executor_select.test | LINK | 0.294241 | 1.106088 | 1.636133 | — | — | — |
| ts_internet.test | LINK | 0.313244 | 1.172658 | 1.679502 | — | — | — |
| ts_internet_select.test | LINK | 0.322047 | 1.195411 | 1.746915 | — | — | — |
| ts_io_context.test | LINK | 0.253125 | 0.896034 | 1.040367 | — | — | — |
| ts_io_context_select.test | LINK | 0.266180 | 0.940343 | 1.309894 | — | — | — |
| ts_net.test | LINK | 0.371195 | 1.413880 | 2.108397 | — | — | — |
| ts_net_select.test | LINK | 0.384270 | 1.430751 | 2.153658 | — | — | — |
| ts_netfwd.test | LINK | 0.371645 | 1.390877 | 2.118028 | — | — | — |
| ts_netfwd_select.test | LINK | 0.386719 | 1.443238 | 2.143487 | — | — | — |
| ts_socket.test | LINK | 0.305112 | 1.101474 | 1.606679 | — | — | — |
| ts_socket_select.test | LINK | 0.315472 | 1.120054 | 1.649093 | — | — | — |
| ts_timer.test | LINK | 0.275034 | 0.979102 | 1.421053 | — | — | — |
| ts_timer_select.test | LINK | 0.287182 | 1.023492 | 1.419223 | — | — | — |
| use_awaitable.test | LINK | 0.091069 | 0.336629 | 0.401788 | — | — | — |
| use_awaitable_select.test | LINK | 0.094379 | 0.320115 | 0.401487 | — | — | — |
| wait_traits.test | LINK | 0.092509 | 0.323198 | 0.404186 | — | — | — |
| wait_traits_select.test | LINK | 0.095334 | 0.316990 | 0.394021 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.090970 | 0.317945 | 0.402904 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.093726 | 0.323521 | 0.402196 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.091860 | 0.325042 | 0.394694 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.096965 | 0.319343 | 0.391315 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.098103 | 0.314585 | 0.403776 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.092880 | 0.320416 | 0.401695 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.091253 | 0.323250 | 0.393739 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.093053 | 0.330758 | 0.391046 | — | — | — |
| windows_object_handle.test | LINK | 0.317418 | 0.888044 | 1.062394 | — | — | — |
| windows_object_handle_select.test | LINK | 0.382646 | 0.945028 | 1.328754 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.421265 | 0.938946 | 1.144403 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.427747 | 1.024093 | 1.421283 | — | — | — |
| windows_random_access_handle.test | LINK | 0.400256 | 0.896903 | 1.040709 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.429138 | 0.946529 | 1.330925 | — | — | — |
| windows_stream_handle.test | LINK | 0.408029 | 0.887393 | 1.060352 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.411856 | 0.957214 | 1.328083 | — | — | — |
| writable_pipe.test | LINK | 0.750589 | 3.931478 | 3.371357 | — | — | — |
| writable_pipe_select.test | LINK | 0.779077 | 4.148335 | 3.583106 | — | — | — |
| write.test | RUN | 2.257191 | 19.838806 | 18.722886 | 0.002279 | 0.002484 | 0.002584 |
| write_select.test | RUN | 2.291201 | 20.097416 | 19.176932 | 0.002372 | 0.002543 | 0.002526 |
| write_at.test | RUN | 2.300576 | 27.586776 | 23.994464 | 0.002674 | 0.002662 | 0.002622 |
| write_at_select.test | RUN | 2.324230 | 27.520902 | 24.433840 | 0.002646 | 0.002859 | 0.002730 |
| any_executor.test | RUN | 0.919569 | 9.237968 | 7.787789 | 0.002624 | 0.002987 | 0.002616 |
| blocking.test | RUN | 2.045964 | 11.963653 | 15.447828 | 0.005135 | 0.005095 | 0.005031 |
| blocking_adaptation.test | RUN | 1.036980 | 5.188324 | 7.117868 | 0.002900 | 0.003284 | 0.003111 |
| context_as.test | RUN | 0.586533 | 3.641264 | 2.356295 | 0.001907 | 0.002274 | 0.001951 |
| executor.test | RUN | 0.150972 | 0.347828 | 0.420825 | 0.001640 | 0.001681 | 0.001734 |
| inline_exception_handling.test | RUN | 2.018310 | 11.098956 | 15.306656 | 0.005093 | 0.003354 | 0.003406 |
| invocable_archetype.test | RUN | 0.144687 | 0.339394 | 0.421595 | 0.001625 | 0.001782 | 0.001729 |
| mapping.test | RUN | 1.905465 | 11.228143 | 15.436138 | 0.003594 | 0.003526 | 0.003525 |
| outstanding_work.test | RUN | 0.961902 | 4.930281 | 6.823812 | 0.003137 | 0.002985 | 0.003193 |
| prefer_only.test | RUN | 0.297814 | 1.990308 | 1.468188 | 0.001696 | 0.001863 | 0.001664 |
| relationship.test | RUN | 0.815209 | 4.010786 | 5.978184 | 0.002024 | 0.002187 | 0.002122 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.018×, 1.004× | 0.999× |
| clang | 0.990× | 1.002×, 0.978× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001649s | 0.001660s | 0.001670s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001634s | 0.001605s | 0.001669s | byte equality observed |
| any_completion_handler.test | 8 | 0.001343s | 0.001370s | 0.001360s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001304s | 0.001355s | 0.001334s | byte equality observed |
| any_io_executor.test | 5 | 0.001653s | 0.001631s | 0.001680s | byte equality observed |
| any_io_executor_select.test | 9 | 0.001638s | 0.001697s | 0.001646s | byte equality observed |
| append.test | 9 | 0.001249s | 0.001271s | 0.001298s | byte equality observed |
| append_select.test | 9 | 0.001210s | 0.001265s | 0.001260s | byte equality observed |
| as_tuple.test | 10 | 0.001325s | 0.001336s | 0.001346s | byte equality observed |
| as_tuple_select.test | 9 | 0.001235s | 0.001278s | 0.001263s | byte equality observed |
| bind_allocator.test | 1 | 0.001672s | 0.001699s | 0.001710s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001289s | 0.001464s | 0.001450s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001149s | 0.001157s | 0.001125s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001049s | 0.001040s | 0.001017s | byte equality observed |
| bind_executor.test | 1 | 0.001679s | 0.001638s | 0.001627s | byte equality observed |
| bind_executor_select.test | 1 | 0.001829s | 0.001819s | 0.001820s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001189s | 0.001147s | 0.001095s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001169s | 0.001145s | 0.001112s | byte equality observed |
| buffer.test | 10 | 0.001096s | 0.001072s | 0.001079s | byte equality observed |
| buffer_select.test | 10 | 0.001073s | 0.001053s | 0.001071s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001353s | 0.001351s | 0.001364s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001320s | 0.001343s | 0.001293s | byte equality observed |
| buffered_stream.test | 10 | 0.001338s | 0.001354s | 0.001325s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001302s | 0.001337s | 0.001302s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001347s | 0.001359s | 0.001303s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001316s | 0.001360s | 0.001326s | byte equality observed |
| buffers_iterator.test | 10 | 0.001042s | 0.001040s | 0.001023s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001023s | 0.001024s | 0.001000s | byte equality observed |
| cancel_after.test | 1 | 0.003230s | 0.003330s | 0.003135s | byte equality observed |
| cancel_after_select.test | 1 | 0.002830s | 0.002780s | 0.002829s | byte equality observed |
| cancel_at.test | 1 | 0.003380s | 0.003313s | 0.003450s | byte equality observed |
| cancel_at_select.test | 1 | 0.003268s | 0.003111s | 0.003124s | byte equality observed |
| co_composed.test | 10 | 0.001071s | 0.001131s | 0.001065s | byte equality observed |
| co_composed_select.test | 10 | 0.001061s | 0.001056s | 0.001028s | byte equality observed |
| compose.test | 1 | 0.001713s | 0.001713s | 0.001765s | byte equality observed |
| compose_select.test | 1 | 0.001424s | 0.001430s | 0.001410s | byte equality observed |
| composed.test | 1 | 0.001877s | 0.001923s | 0.001858s | byte equality observed |
| composed_select.test | 1 | 0.001582s | 0.001526s | 0.001576s | byte equality observed |
| config.test | 10 | 0.001176s | 0.001172s | 0.001112s | byte equality observed |
| config_select.test | 10 | 0.001174s | 0.001150s | 0.001147s | byte equality observed |
| connect_pipe.test | 10 | 0.001154s | 0.001154s | 0.001150s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001125s | 0.001192s | 0.001193s | byte equality observed |
| consign.test | 10 | 0.001129s | 0.001141s | 0.001139s | byte equality observed |
| consign_select.test | 10 | 0.001125s | 0.001100s | 0.001048s | byte equality observed |
| deadline_timer.test | 1 | 0.002236s | 0.002372s | 0.002382s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002248s | 0.002038s | 0.002188s | byte equality observed |
| deferred.test | 10 | 0.001023s | 0.001010s | 0.001039s | byte equality observed |
| deferred_select.test | 10 | 0.000924s | 0.000925s | 0.000961s | byte equality observed |
| disposition.test | 10 | 0.001011s | 0.000987s | 0.001030s | byte equality observed |
| disposition_select.test | 10 | 0.000988s | 0.001007s | 0.001006s | byte equality observed |
| error.test | 10 | 0.001001s | 0.000982s | 0.000976s | byte equality observed |
| error_select.test | 10 | 0.000981s | 0.000975s | 0.000997s | byte equality observed |
| inline_executor.test | 10 | 0.000990s | 0.001010s | 0.000998s | byte equality observed |
| inline_executor_select.test | 10 | 0.000998s | 0.000994s | 0.000987s | byte equality observed |
| inline_or_executor.test | 10 | 0.001019s | 0.001006s | 0.001006s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001006s | 0.001004s | 0.001013s | byte equality observed |
| io_context.test | 1 | 0.001998s | 0.001950s | 0.002014s | byte equality observed |
| io_context_select.test | 1 | 0.002221s | 0.002243s | 0.002210s | byte equality observed |
| io_context_strand.test | 1 | 0.002223s | 0.002297s | 0.002214s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001931s | 0.002005s | 0.001997s | byte equality observed |
| ip_host_name.test | 10 | 0.001046s | 0.001028s | 0.001039s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000982s | 0.000973s | 0.000981s | byte equality observed |
| ip_icmp.test | 10 | 0.001025s | 0.001041s | 0.001001s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001020s | 0.001017s | 0.000995s | byte equality observed |
| ip_multicast.test | 10 | 0.001093s | 0.001104s | 0.001086s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001071s | 0.001073s | 0.001068s | byte equality observed |
| ip_tcp.test | 10 | 0.001376s | 0.001376s | 0.001367s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001331s | 0.001330s | 0.001340s | byte equality observed |
| ip_udp.test | 10 | 0.001117s | 0.001094s | 0.001091s | byte equality observed |
| ip_udp_select.test | 10 | 0.001094s | 0.001108s | 0.001081s | byte equality observed |
| ip_unicast.test | 10 | 0.001056s | 0.001073s | 0.001056s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001045s | 0.001054s | 0.001033s | byte equality observed |
| ip_v6_only.test | 10 | 0.001060s | 0.001059s | 0.001056s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001057s | 0.001063s | 0.001052s | byte equality observed |
| is_read_buffered.test | 10 | 0.000979s | 0.001019s | 0.000968s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000972s | 0.001072s | 0.000963s | byte equality observed |
| is_write_buffered.test | 10 | 0.000976s | 0.001058s | 0.000977s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000975s | 0.001106s | 0.000996s | byte equality observed |
| prepend.test | 10 | 0.001044s | 0.001158s | 0.001022s | byte equality observed |
| prepend_select.test | 10 | 0.001035s | 0.001115s | 0.001002s | byte equality observed |
| read.test | 10 | 0.001502s | 0.001562s | 0.001413s | byte equality observed |
| read_at.test | 10 | 0.001947s | 0.002019s | 0.001873s | byte equality observed |
| read_at_select.test | 10 | 0.001913s | 0.002019s | 0.001880s | byte equality observed |
| read_select.test | 10 | 0.001528s | 0.001484s | 0.001513s | byte equality observed |
| read_until.test | 10 | 0.001272s | 0.001238s | 0.001266s | byte equality observed |
| read_until_select.test | 10 | 0.001278s | 0.001247s | 0.001246s | byte equality observed |
| recycling_allocator.test | 10 | 0.001039s | 0.001043s | 0.001067s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001049s | 0.001055s | 0.001088s | byte equality observed |
| signal_set.test | 10 | 0.001080s | 0.001108s | 0.001079s | byte equality observed |
| signal_set_select.test | 10 | 0.001049s | 0.001084s | 0.001054s | byte equality observed |
| socket_base.test | 10 | 0.001209s | 0.001177s | 0.001151s | byte equality observed |
| socket_base_select.test | 10 | 0.001195s | 0.001175s | 0.001135s | byte equality observed |
| spawn.test | 10 | 0.001270s | 0.001277s | 0.001294s | byte equality observed |
| spawn_select.test | 10 | 0.001290s | 0.001234s | 0.001296s | byte equality observed |
| static_thread_pool.test | 10 | 0.001041s | 0.001050s | 0.001050s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001020s | 0.001027s | 0.001003s | byte equality observed |
| strand.test | 1 | 0.001991s | 0.001993s | 0.001989s | byte equality observed |
| strand_select.test | 1 | 0.001692s | 0.001750s | 0.001649s | byte equality observed |
| streambuf.test | 10 | 0.001117s | 0.001112s | 0.001089s | byte equality observed |
| streambuf_select.test | 10 | 0.001105s | 0.001118s | 0.001093s | byte equality observed |
| thread_pool.test | 8 | 0.002420s | 0.002421s | 0.002455s | byte equality observed |
| thread_pool_select.test | 9 | 0.002386s | 0.002446s | 0.002403s | byte equality observed |
| write.test | 10 | 0.001605s | 0.001580s | 0.001558s | byte equality observed |
| write_at.test | 10 | 0.001682s | 0.001726s | 0.001724s | byte equality observed |
| write_at_select.test | 10 | 0.001707s | 0.001706s | 0.001658s | byte equality observed |
| write_select.test | 10 | 0.001586s | 0.001592s | 0.001544s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
