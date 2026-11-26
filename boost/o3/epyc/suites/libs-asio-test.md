# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.833024 | 5.091797 | 5.456624 | 0.002853 | 0.002974 | 0.002756 |
| any_completion_executor_select.test | RUN | 0.873396 | 5.106479 | 5.923757 | 0.002646 | 0.002894 | 0.002767 |
| any_completion_handler.test | RUN | 0.996799 | 4.549140 | 4.915662 | 0.002326 | 0.002316 | 0.002412 |
| any_completion_handler_select.test | RUN | 0.981892 | 4.625731 | 5.394840 | 0.002077 | 0.002498 | 0.002428 |
| any_io_executor.test | RUN | 0.885004 | 5.477206 | 5.895945 | 0.002680 | 0.002832 | 0.002845 |
| any_io_executor_select.test | RUN | 0.937548 | 5.401963 | 6.052532 | 0.002717 | 0.002970 | 0.003119 |
| append.test | RUN | 0.847656 | 4.199903 | 4.518974 | 0.002078 | 0.002226 | 0.002356 |
| append_select.test | RUN | 0.855759 | 4.459066 | 4.527354 | 0.002229 | 0.002306 | 0.002265 |
| as_tuple.test | RUN | 1.035520 | 5.158744 | 6.258730 | 0.002367 | 0.002324 | 0.002353 |
| as_tuple_select.test | RUN | 1.082459 | 5.097969 | 6.187389 | 0.002136 | 0.002152 | 0.001948 |
| associated_allocator.test | LINK | 0.236345 | 0.518058 | 0.677373 | — | — | — |
| associated_allocator_select.test | LINK | 0.238367 | 0.487808 | 0.707831 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.254475 | 0.538204 | 0.740917 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.251444 | 0.551496 | 0.752175 | — | — | — |
| associated_executor.test | LINK | 0.362395 | 0.886342 | 1.225633 | — | — | — |
| associated_executor_select.test | LINK | 0.363522 | 0.906755 | 1.247932 | — | — | — |
| associated_immediate_executor.test | LINK | 0.338128 | 0.804842 | 1.128310 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.333171 | 0.819979 | 1.125272 | — | — | — |
| associator.test | LINK | 0.189621 | 0.398150 | 0.594042 | — | — | — |
| associator_select.test | LINK | 0.188366 | 0.378799 | 0.613921 | — | — | — |
| awaitable.test | LINK | 0.189520 | 0.393541 | 0.598958 | — | — | — |
| awaitable_select.test | LINK | 0.186881 | 0.385799 | 0.599707 | — | — | — |
| basic_datagram_socket.test | LINK | 0.567527 | 1.225623 | 2.334255 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.585298 | 1.284052 | 2.436478 | — | — | — |
| basic_deadline_timer.test | LINK | 0.663133 | 1.434379 | 2.677625 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.679908 | 1.493544 | 2.662182 | — | — | — |
| basic_file.test | LINK | 0.187408 | 0.388501 | 0.605705 | — | — | — |
| basic_file_select.test | LINK | 0.188046 | 0.394008 | 0.595880 | — | — | — |
| basic_random_access_file.test | LINK | 0.189279 | 0.381617 | 0.596799 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.191979 | 0.382185 | 0.620190 | — | — | — |
| basic_raw_socket.test | LINK | 0.564929 | 1.226115 | 2.314566 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.569641 | 1.258078 | 2.428161 | — | — | — |
| basic_readable_pipe.test | LINK | 0.544231 | 1.184474 | 1.969303 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.584802 | 1.259065 | 2.466692 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.570282 | 1.222181 | 2.390151 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.573569 | 1.258876 | 2.378174 | — | — | — |
| basic_signal_set.test | LINK | 0.528003 | 1.154466 | 1.805550 | — | — | — |
| basic_signal_set_select.test | LINK | 0.541792 | 1.214412 | 2.351027 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.562685 | 1.208143 | 2.342168 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.582373 | 1.251814 | 2.422810 | — | — | — |
| basic_stream_file.test | LINK | 0.186401 | 0.394002 | 0.629351 | — | — | — |
| basic_stream_file_select.test | LINK | 0.189343 | 0.412306 | 0.629023 | — | — | — |
| basic_stream_socket.test | LINK | 0.558311 | 1.247752 | 2.371340 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.575907 | 1.221883 | 2.369207 | — | — | — |
| basic_streambuf.test | LINK | 0.286795 | 0.582699 | 0.911558 | — | — | — |
| basic_streambuf_select.test | LINK | 0.284710 | 0.587922 | 0.893126 | — | — | — |
| basic_waitable_timer.test | LINK | 0.516417 | 1.139427 | 2.180365 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.533920 | 1.173446 | 2.264747 | — | — | — |
| basic_writable_pipe.test | LINK | 0.546968 | 1.197527 | 1.992544 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.568014 | 1.255329 | 2.521026 | — | — | — |
| bind_allocator.test | RUN | 0.877831 | 4.337874 | 4.883415 | 0.002542 | 0.002575 | 0.002525 |
| bind_allocator_select.test | RUN | 0.900483 | 4.425544 | 4.933669 | 0.002452 | 0.001930 | 0.002054 |
| bind_cancellation_slot.test | RUN | 0.881182 | 4.382362 | 4.992422 | 0.001593 | 0.001595 | 0.001710 |
| bind_cancellation_slot_select.test | RUN | 0.881525 | 4.438569 | 4.601160 | 0.001483 | 0.001584 | 0.001635 |
| bind_executor.test | RUN | 0.552325 | 2.997416 | 2.941127 | 0.002312 | 0.003004 | 0.002802 |
| bind_executor_select.test | RUN | 0.566952 | 2.998400 | 3.415464 | 0.002158 | 0.002803 | 0.002795 |
| bind_immediate_executor.test | RUN | 0.420744 | 2.548248 | 2.003048 | 0.001648 | 0.001522 | 0.001708 |
| bind_immediate_executor_select.test | RUN | 0.443507 | 2.480419 | 2.586866 | 0.001650 | 0.001597 | 0.001570 |
| buffer.test | RUN | 0.259186 | 1.038480 | 1.145691 | 0.002296 | 0.001467 | 0.001530 |
| buffer_select.test | RUN | 0.267479 | 1.025979 | 1.152129 | 0.001540 | 0.001485 | 0.001511 |
| buffer_registration.test | LINK | 0.210659 | 0.529347 | 0.699598 | — | — | — |
| buffer_registration_select.test | LINK | 0.215503 | 0.535631 | 0.691011 | — | — | — |
| buffered_read_stream.test | RUN | 0.926005 | 6.978945 | 7.566482 | 0.001986 | 0.002926 | 0.002853 |
| buffered_read_stream_select.test | RUN | 0.948857 | 7.028199 | 7.270032 | 0.001936 | 0.002718 | 0.002644 |
| buffered_stream.test | RUN | 1.657917 | 10.344957 | 11.733517 | 0.002671 | 0.002787 | 0.002770 |
| buffered_stream_select.test | RUN | 1.830057 | 10.364181 | 11.347526 | 0.002506 | 0.002458 | 0.002813 |
| buffered_write_stream.test | RUN | 1.660961 | 8.739577 | 9.920155 | 0.002521 | 0.002747 | 0.002825 |
| buffered_write_stream_select.test | RUN | 1.655827 | 8.831127 | 9.733011 | 0.002314 | 0.002391 | 0.002871 |
| buffers_iterator.test | RUN | 0.511382 | 0.892967 | 1.644867 | 0.002056 | 0.002102 | 0.001974 |
| buffers_iterator_select.test | RUN | 0.525564 | 0.894701 | 1.747212 | 0.002126 | 0.002010 | 0.001805 |
| cancel_after.test | RUN | 1.375520 | 7.026573 | 7.547722 | 0.003960 | 0.004267 | 0.004690 |
| cancel_after_select.test | RUN | 1.358847 | 7.011625 | 7.261246 | 0.004046 | 0.004232 | 0.004792 |
| cancel_at.test | RUN | 1.348173 | 5.752720 | 6.549466 | 0.003783 | 0.003888 | 0.004254 |
| cancel_at_select.test | RUN | 1.181280 | 5.748138 | 6.401598 | 0.003999 | 0.003513 | 0.004003 |
| cancellation_signal.test | LINK | 0.147029 | 0.313744 | 0.446092 | — | — | — |
| cancellation_signal_select.test | LINK | 0.147595 | 0.314322 | 0.447313 | — | — | — |
| cancellation_state.test | LINK | 0.181237 | 0.307189 | 0.452749 | — | — | — |
| cancellation_state_select.test | LINK | 0.231977 | 0.311759 | 0.434257 | — | — | — |
| cancellation_type.test | LINK | 0.184473 | 0.243954 | 0.342295 | — | — | — |
| cancellation_type_select.test | LINK | 0.195916 | 0.245684 | 0.530660 | — | — | — |
| co_composed.test | RUN | 0.197014 | 0.243738 | 0.385675 | 0.002040 | 0.001550 | 0.001972 |
| co_composed_select.test | RUN | 0.193695 | 0.245529 | 0.606261 | 0.001773 | 0.001396 | 0.002156 |
| co_spawn.test | LINK | 0.176677 | 0.245833 | 0.583879 | — | — | — |
| co_spawn_select.test | LINK | 0.183447 | 0.243614 | 0.555250 | — | — | — |
| completion_condition.test | LINK | 0.235275 | 0.489210 | 0.797559 | — | — | — |
| completion_condition_select.test | LINK | 0.238808 | 0.503538 | 0.741332 | — | — | — |
| compose.test | RUN | 1.058808 | 5.471272 | 6.095215 | 0.002427 | 0.002531 | 0.002637 |
| compose_select.test | RUN | 1.080382 | 5.410432 | 6.038300 | 0.002443 | 0.002536 | 0.002701 |
| composed.test | RUN | 1.063634 | 5.366596 | 6.036958 | 0.002174 | 0.002084 | 0.002281 |
| composed_select.test | RUN | 0.982979 | 5.286901 | 5.947270 | 0.001878 | 0.002255 | 0.002241 |
| config.test | RUN | 0.480669 | 3.535745 | 2.803084 | 0.002060 | 0.002017 | 0.002264 |
| config_select.test | RUN | 0.563353 | 3.696008 | 3.225500 | 0.002122 | 0.001961 | 0.002322 |
| connect.test | LINK | 1.676627 | 11.094962 | 12.556382 | — | — | — |
| connect_select.test | LINK | 1.689298 | 11.065778 | 12.684373 | — | — | — |
| connect_pipe.test | RUN | 0.942406 | 4.332874 | 4.834509 | 0.002194 | 0.002046 | 0.002198 |
| connect_pipe_select.test | RUN | 0.964172 | 4.509361 | 5.243502 | 0.002211 | 0.002081 | 0.002252 |
| consign.test | RUN | 0.800749 | 4.246044 | 4.231008 | 0.002198 | 0.002160 | 0.002274 |
| consign_select.test | RUN | 0.812690 | 4.354374 | 4.200904 | 0.002240 | 0.002328 | 0.002004 |
| coroutine.test | LINK | 0.196325 | 0.451832 | 0.659328 | — | — | — |
| coroutine_select.test | LINK | 0.189758 | 0.449870 | 0.662108 | — | — | — |
| deadline_timer.test | RUN | 1.198611 | 5.491061 | 6.226418 | 0.003826 | 0.003907 | 0.004164 |
| deadline_timer_select.test | RUN | 1.189401 | 5.415700 | 6.125156 | 0.003037 | 0.003806 | 0.003720 |
| deferred.test | RUN | 0.216120 | 0.415948 | 0.677567 | 0.002044 | 0.002074 | 0.002262 |
| deferred_select.test | RUN | 0.216534 | 0.424170 | 0.682366 | 0.002020 | 0.001892 | 0.002172 |
| detached.test | LINK | 0.235500 | 0.458210 | 0.757926 | — | — | — |
| detached_select.test | LINK | 0.237172 | 0.467470 | 0.747172 | — | — | — |
| disposition.test | RUN | 0.199698 | 1.069095 | 1.293131 | 0.001599 | 0.002184 | 0.002328 |
| disposition_select.test | RUN | 0.202961 | 1.071392 | 1.301826 | 0.001682 | 0.002268 | 0.002213 |
| error.test | RUN | 0.185876 | 1.046247 | 1.137302 | 0.001555 | 0.002085 | 0.002262 |
| error_select.test | RUN | 0.184623 | 1.040334 | 1.132048 | 0.001644 | 0.002064 | 0.002250 |
| file_base.test | LINK | 0.227923 | 0.807641 | 1.164616 | — | — | — |
| file_base_select.test | LINK | 0.237824 | 0.715435 | 1.044099 | — | — | — |
| fwd_first.test | LINK | 0.537589 | 1.182682 | 2.154577 | — | — | — |
| fwd_last.test | LINK | 0.528365 | 1.184884 | 2.082416 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.208174 | 0.486426 | 0.787926 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.206039 | 0.490571 | 0.786196 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.793101 | 4.107187 | 3.985657 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.784855 | 4.266865 | 3.967619 | — | — | — |
| generic_raw_protocol.test | LINK | 0.781922 | 4.101437 | 4.091722 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.776830 | 4.257323 | 4.065788 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.698282 | 3.514090 | 3.461805 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.692099 | 3.563957 | 3.431583 | — | — | — |
| generic_stream_protocol.test | LINK | 0.731012 | 3.774284 | 3.719566 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.719257 | 3.893930 | 3.751662 | — | — | — |
| high_resolution_timer.test | LINK | 0.324448 | 0.729531 | 1.235474 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.332858 | 0.752040 | 1.273146 | — | — | — |
| immediate.test | LINK | 0.229319 | 0.552580 | 0.736560 | — | — | — |
| immediate_select.test | LINK | 0.231663 | 0.560147 | 0.747883 | — | — | — |
| inline_executor.test | RUN | 0.291540 | 0.847769 | 1.123623 | 0.001577 | 0.001639 | 0.001591 |
| inline_executor_select.test | RUN | 0.292742 | 0.863999 | 1.116398 | 0.001639 | 0.001607 | 0.001608 |
| inline_or_executor.test | RUN | 0.476558 | 2.474036 | 2.077078 | 0.001543 | 0.001575 | 0.001621 |
| inline_or_executor_select.test | RUN | 0.481954 | 2.566754 | 2.273687 | 0.001690 | 0.001570 | 0.001563 |
| io_context.test | RUN | 0.656508 | 3.737611 | 3.601772 | 0.002622 | 0.002475 | 0.002714 |
| io_context_select.test | RUN | 0.663123 | 3.677078 | 3.566145 | 0.002802 | 0.002282 | 0.002735 |
| io_context_strand.test | RUN | 0.597225 | 4.032703 | 3.393119 | 0.002504 | 0.002998 | 0.002984 |
| io_context_strand_select.test | RUN | 0.600757 | 4.290095 | 3.417397 | 0.002230 | 0.003082 | 0.003224 |
| ip_address.test | LINK | 0.230774 | 1.225379 | 1.328137 | — | — | — |
| ip_address_select.test | LINK | 0.234031 | 1.188214 | 1.233304 | — | — | — |
| ip_address_v4.test | LINK | 0.231691 | 1.290886 | 1.023231 | — | — | — |
| ip_address_v4_select.test | LINK | 0.240826 | 1.208634 | 1.049960 | — | — | — |
| ip_address_v6.test | LINK | 0.265000 | 1.205720 | 1.286453 | — | — | — |
| ip_address_v6_select.test | LINK | 0.268005 | 1.041969 | 1.254401 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.206522 | 0.519678 | 0.815145 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.206418 | 0.528604 | 0.813059 | — | — | — |
| ip_basic_resolver.test | LINK | 0.326531 | 0.754161 | 1.199417 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.350363 | 0.761699 | 1.277283 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.117716 | 0.243718 | 0.353801 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.117067 | 0.243719 | 0.346910 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.202172 | 0.506640 | 0.807498 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.206957 | 0.504167 | 0.818898 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.198218 | 0.498836 | 0.778178 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.200101 | 0.486345 | 1.073857 | — | — | — |
| ip_host_name.test | RUN | 0.208643 | 0.642503 | 1.622794 | 0.001538 | 0.001466 | 0.001965 |
| ip_host_name_select.test | RUN | 0.210197 | 0.639004 | 1.565015 | 0.001467 | 0.001524 | 0.002042 |
| ip_icmp.test | RUN | 0.962162 | 7.476143 | 8.902754 | 0.001624 | 0.002015 | 0.001850 |
| ip_icmp_select.test | RUN | 0.943869 | 7.906126 | 8.692704 | 0.001582 | 0.002069 | 0.002250 |
| ip_multicast.test | RUN | 0.566329 | 4.564138 | 5.146306 | 0.001666 | 0.002056 | 0.002429 |
| ip_multicast_select.test | RUN | 0.564180 | 4.513327 | 5.239482 | 0.001630 | 0.001922 | 0.002004 |
| ip_resolver_query_base.test | LINK | 0.135747 | 0.414235 | 0.623105 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.138398 | 0.424844 | 0.616693 | — | — | — |
| ip_tcp.test | RUN | 1.410480 | 12.994899 | 13.059728 | 0.002198 | 0.003310 | 0.003393 |
| ip_tcp_select.test | RUN | 1.400978 | 13.500748 | 12.643629 | 0.002146 | 0.002898 | 0.003228 |
| ip_udp.test | RUN | 1.024119 | 9.371850 | 9.304390 | 0.001658 | 0.002464 | 0.001992 |
| ip_udp_select.test | RUN | 1.010592 | 9.568025 | 8.980690 | 0.001654 | 0.002036 | 0.002074 |
| ip_unicast.test | RUN | 0.610186 | 4.116487 | 4.619415 | 0.002204 | 0.002389 | 0.002198 |
| ip_unicast_select.test | RUN | 0.686496 | 4.274514 | 4.550049 | 0.002303 | 0.002358 | 0.001967 |
| ip_v6_only.test | RUN | 0.866451 | 4.356198 | 4.791371 | 0.002280 | 0.002224 | 0.002169 |
| ip_v6_only_select.test | RUN | 0.889808 | 4.448721 | 4.702487 | 0.001919 | 0.002179 | 0.002372 |
| is_read_buffered.test | RUN | 0.632500 | 1.447028 | 2.669259 | 0.001832 | 0.002175 | 0.001882 |
| is_read_buffered_select.test | RUN | 0.630914 | 1.478405 | 2.772488 | 0.002031 | 0.002066 | 0.001943 |
| is_write_buffered.test | RUN | 0.614140 | 1.371096 | 2.588120 | 0.001883 | 0.002144 | 0.002258 |
| is_write_buffered_select.test | RUN | 0.623591 | 1.436994 | 2.730374 | 0.001803 | 0.001982 | 0.002224 |
| local_basic_endpoint.test | LINK | 0.316479 | 0.769401 | 1.511045 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.326064 | 0.788063 | 1.499144 | — | — | — |
| local_connect_pair.test | LINK | 0.812190 | 4.239654 | 4.492769 | — | — | — |
| local_connect_pair_select.test | LINK | 0.821512 | 4.221181 | 4.467438 | — | — | — |
| local_datagram_protocol.test | LINK | 1.039051 | 5.493601 | 6.079390 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.062336 | 5.530393 | 5.945044 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.089409 | 5.405257 | 5.913307 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.095449 | 5.545191 | 5.963589 | — | — | — |
| local_stream_protocol.test | LINK | 1.000357 | 5.136438 | 5.663951 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.018701 | 5.168526 | 5.598928 | — | — | — |
| placeholders.test | LINK | 0.202173 | 0.419873 | 0.689159 | — | — | — |
| placeholders_select.test | LINK | 0.203042 | 0.415389 | 0.655958 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.544171 | 1.158414 | 1.962107 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.555520 | 1.240930 | 2.516579 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.545568 | 1.217103 | 1.961746 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.562582 | 1.221576 | 2.451009 | — | — | — |
| posix_descriptor_base.test | LINK | 0.224229 | 0.460961 | 0.668374 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.227901 | 0.431291 | 0.618463 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.048207 | 5.169638 | 5.479667 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.092074 | 5.315302 | 5.708608 | — | — | — |
| prepend.test | RUN | 0.836244 | 4.246094 | 4.507894 | 0.002101 | 0.002152 | 0.002045 |
| prepend_select.test | RUN | 0.830918 | 4.344904 | 4.513976 | 0.001934 | 0.001999 | 0.001888 |
| random_access_file.test | LINK | 0.486470 | 1.046604 | 1.576000 | — | — | — |
| random_access_file_select.test | LINK | 0.512643 | 1.137921 | 2.081047 | — | — | — |
| read.test | RUN | 2.523130 | 25.806451 | 24.508459 | 0.003012 | 0.002764 | 0.002759 |
| read_select.test | RUN | 2.563900 | 25.793461 | 24.729866 | 0.002752 | 0.002961 | 0.003181 |
| read_at.test | RUN | 2.554820 | 34.792693 | 33.002972 | 0.003643 | 0.003570 | 0.003576 |
| read_at_select.test | RUN | 2.575001 | 34.543990 | 33.247028 | 0.003702 | 0.003280 | 0.003752 |
| read_until.test | RUN | 1.318059 | 10.298894 | 9.662802 | 0.002348 | 0.002375 | 0.002430 |
| read_until_select.test | RUN | 1.330016 | 10.357297 | 10.044935 | 0.002464 | 0.002464 | 0.002535 |
| readable_pipe.test | LINK | 0.844635 | 4.242903 | 4.387421 | — | — | — |
| readable_pipe_select.test | LINK | 0.863847 | 4.459735 | 4.775540 | — | — | — |
| recycling_allocator.test | RUN | 0.279510 | 0.643469 | 0.997929 | 0.002071 | 0.002104 | 0.002278 |
| recycling_allocator_select.test | RUN | 0.269583 | 0.647918 | 0.989523 | 0.001866 | 0.002176 | 0.002214 |
| redirect_disposition.test | LINK | 1.102844 | 6.001466 | 6.946933 | — | — | — |
| redirect_disposition_select.test | LINK | 1.101940 | 5.963551 | 6.889891 | — | — | — |
| redirect_error.test | LINK | 0.991009 | 4.979065 | 5.995135 | — | — | — |
| redirect_error_select.test | LINK | 0.993964 | 4.971646 | 5.976412 | — | — | — |
| registered_buffer.test | LINK | 0.266942 | 0.538869 | 0.908379 | — | — | — |
| registered_buffer_select.test | LINK | 0.266346 | 0.537803 | 0.834807 | — | — | — |
| signal_set.test | RUN | 0.818110 | 4.205458 | 4.056373 | 0.001994 | 0.002178 | 0.002276 |
| signal_set_select.test | RUN | 0.851690 | 4.360457 | 4.606121 | 0.002091 | 0.002256 | 0.001929 |
| signal_set_base.test | LINK | 0.219721 | 0.450001 | 0.665054 | — | — | — |
| signal_set_base_select.test | LINK | 0.222639 | 0.451223 | 0.644396 | — | — | — |
| socket_base.test | RUN | 0.995280 | 6.419373 | 6.510132 | 0.002190 | 0.001967 | 0.002472 |
| socket_base_select.test | RUN | 1.007269 | 6.169341 | 6.541510 | 0.002230 | 0.002480 | 0.002272 |
| spawn.test | RUN | 1.669759 | 9.859293 | 10.606347 | 0.002299 | 0.002385 | 0.002620 |
| spawn_select.test | RUN | 1.684421 | 9.829162 | 10.638903 | 0.002203 | 0.002547 | 0.002315 |
| static_thread_pool.test | RUN | 0.468754 | 1.061074 | 1.574826 | 0.001933 | 0.002110 | 0.002110 |
| static_thread_pool_select.test | RUN | 0.488684 | 1.103389 | 2.038780 | 0.001779 | 0.002064 | 0.002160 |
| steady_timer.test | LINK | 0.527387 | 1.150301 | 2.201114 | — | — | — |
| steady_timer_select.test | LINK | 0.542811 | 1.197405 | 2.203721 | — | — | — |
| strand.test | RUN | 1.065041 | 5.675023 | 6.496418 | 0.003102 | 0.002873 | 0.003372 |
| strand_select.test | RUN | 1.092422 | 5.644649 | 6.514702 | 0.002413 | 0.002940 | 0.003339 |
| stream_file.test | LINK | 0.501701 | 1.037699 | 1.632322 | — | — | — |
| stream_file_select.test | LINK | 0.532095 | 1.114743 | 2.099678 | — | — | — |
| streambuf.test | RUN | 0.287035 | 0.880227 | 1.154182 | 0.001487 | 0.001476 | 0.001952 |
| streambuf_select.test | RUN | 0.266846 | 0.544675 | 0.896957 | 0.001539 | 0.001577 | 0.001608 |
| system_timer.test | LINK | 0.657157 | 3.481956 | 4.167908 | — | — | — |
| system_timer_select.test | LINK | 0.655670 | 3.434186 | 3.566469 | — | — | — |
| system_context.test | LINK | 0.312191 | 0.647850 | 0.890071 | — | — | — |
| system_context_select.test | LINK | 0.321319 | 0.701625 | 1.150187 | — | — | — |
| system_executor.test | LINK | 0.389958 | 2.029072 | 1.657194 | — | — | — |
| system_executor_select.test | LINK | 0.399614 | 1.991315 | 1.916948 | — | — | — |
| this_coro.test | LINK | 0.121931 | 0.244740 | 0.346571 | — | — | — |
| this_coro_select.test | LINK | 0.121544 | 0.251040 | 0.356929 | — | — | — |
| thread_pool.test | RUN | 0.455362 | 3.635793 | 3.372415 | 0.003220 | 0.003789 | 0.003920 |
| thread_pool_select.test | RUN | 0.467957 | 3.851761 | 3.955021 | 0.003390 | 0.003287 | 0.004066 |
| time_traits.test | LINK | 0.262262 | 0.862780 | 0.716461 | — | — | — |
| time_traits_select.test | LINK | 0.267854 | 0.871432 | 1.188750 | — | — | — |
| ts_buffer.test | LINK | 0.245277 | 0.911388 | 1.314235 | — | — | — |
| ts_buffer_select.test | LINK | 0.250022 | 0.913077 | 1.306495 | — | — | — |
| ts_executor.test | LINK | 0.346065 | 1.239831 | 2.018231 | — | — | — |
| ts_executor_select.test | LINK | 0.364350 | 1.288681 | 2.600227 | — | — | — |
| ts_internet.test | LINK | 0.381649 | 1.371611 | 2.678398 | — | — | — |
| ts_internet_select.test | LINK | 0.381377 | 1.387060 | 2.686712 | — | — | — |
| ts_io_context.test | LINK | 0.317475 | 1.036215 | 1.599479 | — | — | — |
| ts_io_context_select.test | LINK | 0.328556 | 1.117244 | 2.117282 | — | — | — |
| ts_net.test | LINK | 0.447991 | 1.623096 | 3.283646 | — | — | — |
| ts_net_select.test | LINK | 0.448952 | 1.667140 | 3.292178 | — | — | — |
| ts_netfwd.test | LINK | 0.462801 | 1.649027 | 3.285456 | — | — | — |
| ts_netfwd_select.test | LINK | 0.500455 | 1.695897 | 3.349577 | — | — | — |
| ts_socket.test | LINK | 0.382018 | 1.285848 | 2.476305 | — | — | — |
| ts_socket_select.test | LINK | 0.388011 | 1.318149 | 2.609467 | — | — | — |
| ts_timer.test | LINK | 0.337589 | 1.173135 | 2.238425 | — | — | — |
| ts_timer_select.test | LINK | 0.340740 | 1.207607 | 2.265322 | — | — | — |
| use_awaitable.test | LINK | 0.115858 | 0.386606 | 0.555710 | — | — | — |
| use_awaitable_select.test | LINK | 0.157099 | 0.395535 | 0.572923 | — | — | — |
| wait_traits.test | LINK | 0.193915 | 0.400083 | 0.638008 | — | — | — |
| wait_traits_select.test | LINK | 0.166013 | 0.382853 | 0.556513 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.180748 | 0.388508 | 0.576822 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.191880 | 0.393951 | 0.558902 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.186983 | 0.393908 | 0.553058 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.194466 | 0.383963 | 0.570385 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.188448 | 0.387044 | 0.571618 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.192568 | 0.393249 | 0.562413 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.186396 | 0.398254 | 0.571767 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.192769 | 0.385044 | 0.573734 | — | — | — |
| windows_object_handle.test | LINK | 0.502494 | 1.047393 | 1.577423 | — | — | — |
| windows_object_handle_select.test | LINK | 0.529125 | 1.110650 | 2.064099 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.519380 | 1.130213 | 1.730952 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.542645 | 1.204309 | 2.275284 | — | — | — |
| windows_random_access_handle.test | LINK | 0.501121 | 1.044866 | 1.560996 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.517919 | 1.109494 | 2.126715 | — | — | — |
| windows_stream_handle.test | LINK | 0.517336 | 1.052010 | 1.591339 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.540504 | 1.135542 | 2.099979 | — | — | — |
| writable_pipe.test | LINK | 0.888478 | 4.299833 | 4.587655 | — | — | — |
| writable_pipe_select.test | LINK | 0.917000 | 4.420744 | 4.981865 | — | — | — |
| write.test | RUN | 2.518686 | 21.536790 | 23.708358 | 0.002751 | 0.002866 | 0.003171 |
| write_select.test | RUN | 2.539757 | 21.742414 | 24.082486 | 0.003034 | 0.003074 | 0.002886 |
| write_at.test | RUN | 2.628220 | 30.918892 | 32.003375 | 0.003205 | 0.003428 | 0.003268 |
| write_at_select.test | RUN | 2.660183 | 29.673827 | 31.971986 | 0.003228 | 0.002840 | 0.003350 |
| any_executor.test | RUN | 1.116736 | 9.833997 | 9.197526 | 0.002934 | 0.002854 | 0.002801 |
| blocking.test | RUN | 2.787271 | 12.298904 | 20.065908 | 0.008963 | 0.008108 | 0.008779 |
| blocking_adaptation.test | RUN | 1.411393 | 5.487316 | 9.358711 | 0.004952 | 0.004753 | 0.005560 |
| context_as.test | RUN | 0.737239 | 3.901152 | 3.105435 | 0.002230 | 0.002392 | 0.002258 |
| executor.test | RUN | 0.218864 | 0.426669 | 0.641515 | 0.002185 | 0.002144 | 0.002148 |
| inline_exception_handling.test | RUN | 2.866526 | 11.970197 | 19.131926 | 0.005717 | 0.005840 | 0.005772 |
| invocable_archetype.test | RUN | 0.191766 | 0.417745 | 0.629398 | 0.001938 | 0.002198 | 0.002039 |
| mapping.test | RUN | 2.589534 | 11.296195 | 19.430000 | 0.006039 | 0.006054 | 0.005930 |
| outstanding_work.test | RUN | 1.314251 | 5.079582 | 9.214680 | 0.005020 | 0.004786 | 0.004955 |
| prefer_only.test | RUN | 0.406264 | 2.080695 | 2.065493 | 0.002060 | 0.002113 | 0.002110 |
| relationship.test | RUN | 0.919611 | 5.129945 | 7.800203 | 0.004746 | 0.004785 | 0.003672 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.999×, 1.000× | 0.999× |
| clang | 0.999× | 1.006×, 0.993× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002017s | 0.002107s | 0.002034s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001992s | 0.002055s | 0.002046s | byte equality observed |
| any_completion_handler.test | 3 | 0.001537s | 0.001622s | 0.001534s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001553s | 0.001577s | 0.001554s | byte equality observed |
| any_io_executor.test | 6 | 0.002047s | 0.002002s | 0.002034s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001955s | 0.002021s | 0.001976s | byte equality observed |
| append.test | 10 | 0.001507s | 0.001506s | 0.001504s | byte equality observed |
| append_select.test | 6 | 0.001509s | 0.001471s | 0.001434s | byte equality observed |
| as_tuple.test | 6 | 0.001753s | 0.001714s | 0.001712s | byte equality observed |
| as_tuple_select.test | 7 | 0.001528s | 0.001505s | 0.001529s | byte equality observed |
| bind_allocator.test | 1 | 0.001974s | 0.001934s | 0.002025s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001497s | 0.001603s | 0.001598s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001338s | 0.001362s | 0.001349s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001261s | 0.001265s | 0.001247s | byte equality observed |
| bind_executor.test | 1 | 0.001907s | 0.001837s | 0.001894s | byte equality observed |
| bind_executor_select.test | 1 | 0.002145s | 0.002123s | 0.002135s | byte equality observed |
| bind_immediate_executor.test | 9 | 0.001365s | 0.001327s | 0.001329s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001339s | 0.001338s | 0.001339s | byte equality observed |
| buffer.test | 10 | 0.001267s | 0.001302s | 0.001278s | byte equality observed |
| buffer_select.test | 10 | 0.001277s | 0.001272s | 0.001257s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001670s | 0.001632s | 0.001610s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001614s | 0.001611s | 0.001580s | byte equality observed |
| buffered_stream.test | 10 | 0.001670s | 0.001615s | 0.001644s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001607s | 0.001683s | 0.001616s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001657s | 0.001647s | 0.001663s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001626s | 0.001605s | 0.001641s | byte equality observed |
| buffers_iterator.test | 10 | 0.001254s | 0.001228s | 0.001287s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001233s | 0.001220s | 0.001210s | byte equality observed |
| cancel_after.test | 1 | 0.003711s | 0.003733s | 0.003697s | byte equality observed |
| cancel_after_select.test | 1 | 0.003101s | 0.003171s | 0.003125s | byte equality observed |
| cancel_at.test | 1 | 0.003829s | 0.003907s | 0.003764s | byte equality observed |
| cancel_at_select.test | 1 | 0.003564s | 0.003647s | 0.003663s | byte equality observed |
| co_composed.test | 10 | 0.001253s | 0.001273s | 0.001268s | byte equality observed |
| co_composed_select.test | 10 | 0.001248s | 0.001221s | 0.001309s | byte equality observed |
| compose.test | 1 | 0.001948s | 0.002104s | 0.002012s | byte equality observed |
| compose_select.test | 1 | 0.001619s | 0.001626s | 0.001605s | byte equality observed |
| composed.test | 1 | 0.002235s | 0.002176s | 0.002247s | byte equality observed |
| composed_select.test | 1 | 0.001757s | 0.001671s | 0.001692s | byte equality observed |
| config.test | 9 | 0.001338s | 0.001341s | 0.001337s | byte equality observed |
| config_select.test | 10 | 0.001328s | 0.001312s | 0.001314s | byte equality observed |
| connect_pipe.test | 10 | 0.001363s | 0.001376s | 0.001391s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001449s | 0.001381s | 0.001356s | byte equality observed |
| consign.test | 10 | 0.001360s | 0.001347s | 0.001319s | byte equality observed |
| consign_select.test | 10 | 0.001308s | 0.001350s | 0.001256s | byte equality observed |
| deadline_timer.test | 1 | 0.002718s | 0.002726s | 0.002755s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002471s | 0.002444s | 0.002517s | byte equality observed |
| deferred.test | 10 | 0.001165s | 0.001190s | 0.001183s | byte equality observed |
| deferred_select.test | 10 | 0.001127s | 0.001157s | 0.001145s | byte equality observed |
| disposition.test | 10 | 0.001207s | 0.001215s | 0.001220s | byte equality observed |
| disposition_select.test | 10 | 0.001209s | 0.001216s | 0.001199s | byte equality observed |
| error.test | 10 | 0.001183s | 0.001180s | 0.001175s | byte equality observed |
| error_select.test | 10 | 0.001176s | 0.001187s | 0.001175s | byte equality observed |
| inline_executor.test | 10 | 0.001189s | 0.001199s | 0.001198s | byte equality observed |
| inline_executor_select.test | 10 | 0.001194s | 0.001203s | 0.001196s | byte equality observed |
| inline_or_executor.test | 10 | 0.001198s | 0.001209s | 0.001179s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001196s | 0.001209s | 0.001187s | byte equality observed |
| io_context.test | 1 | 0.002186s | 0.002214s | 0.002288s | byte equality observed |
| io_context_select.test | 1 | 0.002542s | 0.002503s | 0.002579s | byte equality observed |
| io_context_strand.test | 1 | 0.002522s | 0.002515s | 0.002640s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002275s | 0.002183s | 0.002335s | byte equality observed |
| ip_host_name.test | 10 | 0.001195s | 0.001197s | 0.001183s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001157s | 0.001156s | 0.001140s | byte equality observed |
| ip_icmp.test | 10 | 0.001199s | 0.001204s | 0.001167s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001196s | 0.001214s | 0.001184s | byte equality observed |
| ip_multicast.test | 10 | 0.001293s | 0.001279s | 0.001277s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001265s | 0.001266s | 0.001232s | byte equality observed |
| ip_tcp.test | 10 | 0.001793s | 0.001830s | 0.001775s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001714s | 0.001849s | 0.001695s | byte equality observed |
| ip_udp.test | 10 | 0.001309s | 0.001441s | 0.001283s | byte equality observed |
| ip_udp_select.test | 10 | 0.001294s | 0.001397s | 0.001277s | byte equality observed |
| ip_unicast.test | 10 | 0.001256s | 0.001400s | 0.001245s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001234s | 0.001358s | 0.001214s | byte equality observed |
| ip_v6_only.test | 10 | 0.001249s | 0.001358s | 0.001245s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001293s | 0.001340s | 0.001336s | byte equality observed |
| is_read_buffered.test | 10 | 0.001264s | 0.001262s | 0.001256s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001286s | 0.001332s | 0.001268s | byte equality observed |
| is_write_buffered.test | 10 | 0.001286s | 0.001277s | 0.001272s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001283s | 0.001277s | 0.001295s | byte equality observed |
| prepend.test | 10 | 0.001363s | 0.001349s | 0.001342s | byte equality observed |
| prepend_select.test | 10 | 0.001325s | 0.001321s | 0.001314s | byte equality observed |
| read.test | 10 | 0.001798s | 0.001754s | 0.001767s | byte equality observed |
| read_at.test | 9 | 0.002287s | 0.002263s | 0.002136s | byte equality observed |
| read_at_select.test | 9 | 0.002216s | 0.002276s | 0.002199s | byte equality observed |
| read_select.test | 10 | 0.001822s | 0.001796s | 0.001730s | byte equality observed |
| read_until.test | 10 | 0.001480s | 0.001430s | 0.001410s | byte equality observed |
| read_until_select.test | 10 | 0.001530s | 0.001495s | 0.001483s | byte equality observed |
| recycling_allocator.test | 10 | 0.001275s | 0.001228s | 0.001259s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001323s | 0.001289s | 0.001272s | byte equality observed |
| signal_set.test | 10 | 0.001341s | 0.001320s | 0.001319s | byte equality observed |
| signal_set_select.test | 10 | 0.001319s | 0.001368s | 0.001260s | byte equality observed |
| socket_base.test | 10 | 0.001443s | 0.001429s | 0.001430s | byte equality observed |
| socket_base_select.test | 10 | 0.001407s | 0.001440s | 0.001404s | byte equality observed |
| spawn.test | 10 | 0.001526s | 0.001525s | 0.001518s | byte equality observed |
| spawn_select.test | 10 | 0.001565s | 0.001526s | 0.001527s | byte equality observed |
| static_thread_pool.test | 10 | 0.001273s | 0.001317s | 0.001255s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001227s | 0.001171s | 0.001169s | byte equality observed |
| strand.test | 1 | 0.002373s | 0.002321s | 0.002339s | byte equality observed |
| strand_select.test | 1 | 0.001979s | 0.001937s | 0.001952s | byte equality observed |
| streambuf.test | 10 | 0.001275s | 0.001233s | 0.001243s | byte equality observed |
| streambuf_select.test | 10 | 0.001320s | 0.001280s | 0.001274s | byte equality observed |
| thread_pool.test | 8 | 0.002959s | 0.002919s | 0.002964s | byte equality observed |
| thread_pool_select.test | 8 | 0.002925s | 0.002922s | 0.002897s | byte equality observed |
| write.test | 10 | 0.001857s | 0.001902s | 0.001789s | byte equality observed |
| write_at.test | 10 | 0.001969s | 0.002027s | 0.001953s | byte equality observed |
| write_at_select.test | 10 | 0.002008s | 0.002005s | 0.001942s | byte equality observed |
| write_select.test | 10 | 0.001827s | 0.001782s | 0.001860s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
