# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.527663 | 3.425640 | 2.956875 | 0.002173 | 0.001860 | 0.001776 |
| any_completion_executor_select.test | RUN | 0.552590 | 3.417115 | 3.106002 | 0.002101 | 0.001743 | 0.001824 |
| any_completion_handler.test | RUN | 0.593104 | 3.135412 | 2.688078 | 0.001398 | 0.001357 | 0.001642 |
| any_completion_handler_select.test | RUN | 0.603189 | 3.201783 | 2.870796 | 0.001278 | 0.001393 | 0.001514 |
| any_io_executor.test | RUN | 0.559965 | 3.648509 | 3.196982 | 0.001793 | 0.001653 | 0.001572 |
| any_io_executor_select.test | RUN | 0.562506 | 3.633889 | 3.317200 | 0.001623 | 0.001824 | 0.001229 |
| append.test | RUN | 0.510705 | 2.915569 | 2.453691 | 0.001222 | 0.001388 | 0.001314 |
| append_select.test | RUN | 0.522139 | 2.986389 | 2.393325 | 0.001356 | 0.001417 | 0.001248 |
| as_tuple.test | RUN | 0.667588 | 3.523219 | 3.411928 | 0.001353 | 0.001416 | 0.001385 |
| as_tuple_select.test | RUN | 0.689071 | 3.500688 | 3.384852 | 0.001361 | 0.001377 | 0.001300 |
| associated_allocator.test | LINK | 0.129620 | 0.290958 | 0.366075 | — | — | — |
| associated_allocator_select.test | LINK | 0.132265 | 0.287186 | 0.356035 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.135652 | 0.314174 | 0.377513 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.134008 | 0.309941 | 0.385614 | — | — | — |
| associated_executor.test | LINK | 0.207636 | 0.547286 | 0.624706 | — | — | — |
| associated_executor_select.test | LINK | 0.203223 | 0.545489 | 0.631917 | — | — | — |
| associated_immediate_executor.test | LINK | 0.184137 | 0.508716 | 0.572021 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.189216 | 0.506760 | 0.570307 | — | — | — |
| associator.test | LINK | 0.107276 | 0.238488 | 0.295521 | — | — | — |
| associator_select.test | LINK | 0.103761 | 0.238129 | 0.301707 | — | — | — |
| awaitable.test | LINK | 0.106220 | 0.239175 | 0.296752 | — | — | — |
| awaitable_select.test | LINK | 0.102689 | 0.239139 | 0.291605 | — | — | — |
| basic_datagram_socket.test | LINK | 0.325426 | 0.766442 | 1.103986 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.328933 | 0.780254 | 1.134277 | — | — | — |
| basic_deadline_timer.test | LINK | 0.386368 | 0.885028 | 1.260380 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.389916 | 0.919676 | 1.285309 | — | — | — |
| basic_file.test | LINK | 0.104357 | 0.236289 | 0.302021 | — | — | — |
| basic_file_select.test | LINK | 0.103215 | 0.238584 | 0.296060 | — | — | — |
| basic_random_access_file.test | LINK | 0.102982 | 0.230793 | 0.304720 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107303 | 0.230950 | 0.300082 | — | — | — |
| basic_raw_socket.test | LINK | 0.327974 | 0.764089 | 1.110186 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.335864 | 0.778166 | 1.145540 | — | — | — |
| basic_readable_pipe.test | LINK | 0.318498 | 0.726824 | 0.975280 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.329324 | 0.769254 | 1.171663 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.324594 | 0.761461 | 1.114174 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.331505 | 0.795349 | 1.150139 | — | — | — |
| basic_signal_set.test | LINK | 0.302393 | 0.705585 | 0.879897 | — | — | — |
| basic_signal_set_select.test | LINK | 0.314946 | 0.754013 | 1.095139 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.331562 | 0.763417 | 1.117611 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.341977 | 0.778756 | 1.161879 | — | — | — |
| basic_stream_file.test | LINK | 0.101824 | 0.241863 | 0.301020 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105759 | 0.244241 | 0.301615 | — | — | — |
| basic_stream_socket.test | LINK | 0.328745 | 0.763394 | 1.111386 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.331155 | 0.787265 | 1.137149 | — | — | — |
| basic_streambuf.test | LINK | 0.159590 | 0.349813 | 0.430744 | — | — | — |
| basic_streambuf_select.test | LINK | 0.158652 | 0.350012 | 0.434678 | — | — | — |
| basic_waitable_timer.test | LINK | 0.308511 | 0.719010 | 1.045273 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.311776 | 0.742572 | 1.074760 | — | — | — |
| basic_writable_pipe.test | LINK | 0.314837 | 0.727913 | 0.966060 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.322878 | 0.780072 | 1.168207 | — | — | — |
| bind_allocator.test | RUN | 0.549353 | 2.966993 | 2.641852 | 0.001626 | 0.001783 | 0.001708 |
| bind_allocator_select.test | RUN | 0.557728 | 3.047219 | 2.640913 | 0.001275 | 0.001311 | 0.001695 |
| bind_cancellation_slot.test | RUN | 0.562694 | 3.035229 | 2.683502 | 0.000939 | 0.001097 | 0.000985 |
| bind_cancellation_slot_select.test | RUN | 0.573909 | 3.015572 | 2.596227 | 0.000984 | 0.001031 | 0.000949 |
| bind_executor.test | RUN | 0.385039 | 2.060125 | 1.664551 | 0.001653 | 0.001691 | 0.001592 |
| bind_executor_select.test | RUN | 0.393649 | 2.092750 | 1.654397 | 0.001508 | 0.001498 | 0.001517 |
| bind_immediate_executor.test | RUN | 0.285278 | 1.694252 | 1.065033 | 0.000970 | 0.001018 | 0.000927 |
| bind_immediate_executor_select.test | RUN | 0.295872 | 1.650084 | 1.168919 | 0.000968 | 0.000928 | 0.000950 |
| buffer.test | RUN | 0.172813 | 0.698842 | 0.627480 | 0.000985 | 0.000965 | 0.000918 |
| buffer_select.test | RUN | 0.171166 | 0.692047 | 0.622479 | 0.000882 | 0.000953 | 0.000957 |
| buffer_registration.test | LINK | 0.132857 | 0.344320 | 0.365241 | — | — | — |
| buffer_registration_select.test | LINK | 0.130384 | 0.342605 | 0.360625 | — | — | — |
| buffered_read_stream.test | RUN | 0.659990 | 4.519215 | 3.800685 | 0.001242 | 0.001633 | 0.001794 |
| buffered_read_stream_select.test | RUN | 0.669695 | 4.670055 | 3.758058 | 0.001177 | 0.001652 | 0.001703 |
| buffered_stream.test | RUN | 0.906134 | 7.297811 | 6.818087 | 0.001726 | 0.001756 | 0.001836 |
| buffered_stream_select.test | RUN | 0.936424 | 7.317585 | 6.651447 | 0.001734 | 0.001690 | 0.001741 |
| buffered_write_stream.test | RUN | 1.089513 | 6.321388 | 5.859018 | 0.001727 | 0.001651 | 0.001632 |
| buffered_write_stream_select.test | RUN | 1.111083 | 6.381374 | 5.648999 | 0.001565 | 0.001650 | 0.001604 |
| buffers_iterator.test | RUN | 0.317581 | 0.547342 | 0.886320 | 0.001233 | 0.001296 | 0.001146 |
| buffers_iterator_select.test | RUN | 0.316513 | 0.540111 | 0.885411 | 0.001224 | 0.001310 | 0.001286 |
| cancel_after.test | RUN | 0.915920 | 4.853269 | 4.134667 | 0.003487 | 0.003156 | 0.003896 |
| cancel_after_select.test | RUN | 0.921633 | 4.795964 | 4.115161 | 0.003216 | 0.002496 | 0.003143 |
| cancel_at.test | RUN | 0.819994 | 4.335272 | 4.044219 | 0.003244 | 0.002798 | 0.003650 |
| cancel_at_select.test | RUN | 0.810686 | 4.276386 | 4.031936 | 0.003269 | 0.002760 | 0.003360 |
| cancellation_signal.test | LINK | 0.092269 | 0.200662 | 0.239027 | — | — | — |
| cancellation_signal_select.test | LINK | 0.094067 | 0.197456 | 0.262453 | — | — | — |
| cancellation_state.test | LINK | 0.090905 | 0.200818 | 0.374423 | — | — | — |
| cancellation_state_select.test | LINK | 0.107658 | 0.199846 | 0.372201 | — | — | — |
| cancellation_type.test | LINK | 0.103558 | 0.156949 | 0.298068 | — | — | — |
| cancellation_type_select.test | LINK | 0.101977 | 0.156350 | 0.298067 | — | — | — |
| co_composed.test | RUN | 0.102381 | 0.159888 | 0.299965 | 0.000929 | 0.001065 | 0.001258 |
| co_composed_select.test | RUN | 0.104587 | 0.156812 | 0.293855 | 0.001215 | 0.001169 | 0.001123 |
| co_spawn.test | LINK | 0.104182 | 0.226826 | 0.296796 | — | — | — |
| co_spawn_select.test | LINK | 0.101611 | 0.211850 | 0.293792 | — | — | — |
| completion_condition.test | LINK | 0.137515 | 0.369459 | 0.400545 | — | — | — |
| completion_condition_select.test | LINK | 0.137020 | 0.365319 | 0.402101 | — | — | — |
| compose.test | RUN | 0.688079 | 3.732210 | 3.399448 | 0.001953 | 0.002052 | 0.001726 |
| compose_select.test | RUN | 0.697496 | 3.689506 | 3.354540 | 0.001781 | 0.001717 | 0.001859 |
| composed.test | RUN | 0.688304 | 3.724052 | 3.257486 | 0.001510 | 0.001556 | 0.001505 |
| composed_select.test | RUN | 0.675067 | 3.666454 | 3.231219 | 0.001350 | 0.001420 | 0.001492 |
| config.test | RUN | 0.357909 | 2.379543 | 1.395340 | 0.001310 | 0.001596 | 0.001369 |
| config_select.test | RUN | 0.360881 | 2.439220 | 1.575567 | 0.001393 | 0.001386 | 0.001391 |
| connect.test | LINK | 1.096629 | 7.870033 | 7.122848 | — | — | — |
| connect_select.test | LINK | 1.111359 | 7.807402 | 7.111533 | — | — | — |
| connect_pipe.test | RUN | 0.578828 | 2.979167 | 2.619292 | 0.001373 | 0.001346 | 0.001606 |
| connect_pipe_select.test | RUN | 0.597761 | 3.065444 | 2.786345 | 0.001327 | 0.001332 | 0.001520 |
| consign.test | RUN | 0.514716 | 2.891921 | 2.477645 | 0.001440 | 0.001336 | 0.001502 |
| consign_select.test | RUN | 0.516723 | 2.960749 | 2.446913 | 0.001358 | 0.001406 | 0.001448 |
| coroutine.test | LINK | 0.109213 | 0.280355 | 0.330049 | — | — | — |
| coroutine_select.test | LINK | 0.108261 | 0.282640 | 0.329776 | — | — | — |
| deadline_timer.test | RUN | 0.752989 | 3.852422 | 3.436775 | 0.002736 | 0.003065 | 0.002905 |
| deadline_timer_select.test | RUN | 0.758181 | 3.825061 | 3.430251 | 0.002524 | 0.002696 | 0.002799 |
| deferred.test | RUN | 0.118933 | 0.256644 | 0.318810 | 0.001245 | 0.001292 | 0.001375 |
| deferred_select.test | RUN | 0.114866 | 0.262010 | 0.315641 | 0.001234 | 0.001376 | 0.001364 |
| detached.test | LINK | 0.135513 | 0.287573 | 0.360262 | — | — | — |
| detached_select.test | LINK | 0.130825 | 0.288170 | 0.356598 | — | — | — |
| disposition.test | RUN | 0.132721 | 0.705856 | 0.668526 | 0.001024 | 0.001374 | 0.001617 |
| disposition_select.test | RUN | 0.127135 | 0.695174 | 0.665900 | 0.001027 | 0.001369 | 0.001464 |
| error.test | RUN | 0.115579 | 0.672925 | 0.590901 | 0.000909 | 0.001266 | 0.001324 |
| error_select.test | RUN | 0.114961 | 0.669119 | 0.591529 | 0.000952 | 0.001271 | 0.001526 |
| file_base.test | LINK | 0.142616 | 0.554293 | 0.645013 | — | — | — |
| file_base_select.test | LINK | 0.141873 | 0.552725 | 0.612729 | — | — | — |
| fwd_first.test | LINK | 0.327860 | 0.898773 | 1.180320 | — | — | — |
| fwd_last.test | LINK | 0.326685 | 0.870452 | 1.174837 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.119835 | 0.319628 | 0.420268 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.119706 | 0.316610 | 0.417801 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.562106 | 2.994092 | 2.482881 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.555713 | 3.103827 | 2.481383 | — | — | — |
| generic_raw_protocol.test | LINK | 0.563902 | 3.001498 | 2.501755 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.561655 | 3.096438 | 2.466951 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.478046 | 2.524324 | 2.118833 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.478271 | 2.557826 | 2.110075 | — | — | — |
| generic_stream_protocol.test | LINK | 0.509548 | 2.716184 | 2.276074 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.511929 | 2.785686 | 2.265594 | — | — | — |
| high_resolution_timer.test | LINK | 0.206224 | 0.472156 | 0.665396 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.210018 | 0.492154 | 0.686849 | — | — | — |
| immediate.test | LINK | 0.141001 | 0.363601 | 0.411573 | — | — | — |
| immediate_select.test | LINK | 0.140280 | 0.365079 | 0.412462 | — | — | — |
| inline_executor.test | RUN | 0.179447 | 0.567343 | 0.617422 | 0.000932 | 0.000936 | 0.001059 |
| inline_executor_select.test | RUN | 0.179420 | 0.571185 | 0.621435 | 0.000965 | 0.000937 | 0.001018 |
| inline_or_executor.test | RUN | 0.299040 | 1.734379 | 1.231760 | 0.000952 | 0.000981 | 0.001041 |
| inline_or_executor_select.test | RUN | 0.309933 | 1.782762 | 1.339850 | 0.000997 | 0.000983 | 0.001019 |
| io_context.test | RUN | 0.439678 | 2.671719 | 2.162653 | 0.001892 | 0.001871 | 0.002196 |
| io_context_select.test | RUN | 0.445084 | 2.633563 | 2.159207 | 0.001521 | 0.001850 | 0.002129 |
| io_context_strand.test | RUN | 0.416089 | 2.276913 | 1.835696 | 0.001837 | 0.002069 | 0.001739 |
| io_context_strand_select.test | RUN | 0.421705 | 2.238768 | 1.830151 | 0.001494 | 0.001624 | 0.001664 |
| ip_address.test | LINK | 0.147379 | 0.513299 | 0.509547 | — | — | — |
| ip_address_select.test | LINK | 0.144712 | 0.507343 | 0.503862 | — | — | — |
| ip_address_v4.test | LINK | 0.148042 | 0.536393 | 0.645432 | — | — | — |
| ip_address_v4_select.test | LINK | 0.146867 | 0.535200 | 0.747757 | — | — | — |
| ip_address_v6.test | LINK | 0.170716 | 0.706673 | 1.116514 | — | — | — |
| ip_address_v6_select.test | LINK | 0.170779 | 0.707596 | 1.113723 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.124156 | 0.335701 | 0.711233 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.123987 | 0.337960 | 0.712930 | — | — | — |
| ip_basic_resolver.test | LINK | 0.208158 | 0.539853 | 1.057705 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.211815 | 0.545998 | 1.086883 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.070247 | 0.218634 | 0.297233 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.068918 | 0.209888 | 0.294707 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.125766 | 0.487673 | 0.687964 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.125707 | 0.495015 | 0.679956 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.119951 | 0.481413 | 0.666528 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.119157 | 0.467486 | 0.653388 | — | — | — |
| ip_host_name.test | RUN | 0.133003 | 0.648517 | 0.746635 | 0.000863 | 0.001303 | 0.001203 |
| ip_host_name_select.test | RUN | 0.130463 | 0.646511 | 0.742787 | 0.000910 | 0.001152 | 0.001230 |
| ip_icmp.test | RUN | 0.694139 | 6.269710 | 5.078519 | 0.000928 | 0.001261 | 0.001373 |
| ip_icmp_select.test | RUN | 0.690146 | 6.352618 | 4.920175 | 0.000946 | 0.001312 | 0.001357 |
| ip_multicast.test | RUN | 0.380295 | 3.133233 | 2.796786 | 0.001036 | 0.001412 | 0.001363 |
| ip_multicast_select.test | RUN | 0.386010 | 3.070751 | 2.760207 | 0.001049 | 0.001418 | 0.001472 |
| ip_resolver_query_base.test | LINK | 0.080998 | 0.259921 | 0.319107 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.080189 | 0.257407 | 0.317831 | — | — | — |
| ip_tcp.test | RUN | 1.029570 | 9.271447 | 7.866443 | 0.001288 | 0.001887 | 0.001828 |
| ip_tcp_select.test | RUN | 1.033595 | 9.698858 | 7.563110 | 0.001183 | 0.001880 | 0.001836 |
| ip_udp.test | RUN | 0.736861 | 6.609794 | 5.327647 | 0.001153 | 0.001383 | 0.001628 |
| ip_udp_select.test | RUN | 0.730038 | 6.801193 | 5.257037 | 0.001046 | 0.001492 | 0.001671 |
| ip_unicast.test | RUN | 0.353647 | 2.887605 | 2.460072 | 0.001088 | 0.001399 | 0.001537 |
| ip_unicast_select.test | RUN | 0.357439 | 2.922159 | 2.425937 | 0.001009 | 0.001461 | 0.001293 |
| ip_v6_only.test | RUN | 0.369055 | 2.971906 | 2.565569 | 0.001024 | 0.001692 | 0.001374 |
| ip_v6_only_select.test | RUN | 0.374805 | 3.089846 | 2.541408 | 0.001001 | 0.001688 | 0.001269 |
| is_read_buffered.test | RUN | 0.249539 | 0.888828 | 1.315941 | 0.000952 | 0.001272 | 0.001242 |
| is_read_buffered_select.test | RUN | 0.249583 | 0.891901 | 1.348854 | 0.000941 | 0.001267 | 0.001267 |
| is_write_buffered.test | RUN | 0.247277 | 0.884937 | 1.267317 | 0.000909 | 0.001370 | 0.001377 |
| is_write_buffered_select.test | RUN | 0.251106 | 0.887583 | 1.302713 | 0.000912 | 0.001273 | 0.001179 |
| local_basic_endpoint.test | LINK | 0.119752 | 0.497748 | 0.665274 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.119108 | 0.481883 | 0.660281 | — | — | — |
| local_connect_pair.test | LINK | 0.342879 | 2.930277 | 2.326283 | — | — | — |
| local_connect_pair_select.test | LINK | 0.342255 | 2.906258 | 2.326256 | — | — | — |
| local_datagram_protocol.test | LINK | 0.467907 | 3.842101 | 3.300400 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.475860 | 3.873379 | 3.243585 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.476956 | 3.803066 | 3.270096 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.477380 | 3.872626 | 3.285435 | — | — | — |
| local_stream_protocol.test | LINK | 0.445769 | 3.681329 | 3.130196 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.457966 | 3.701933 | 3.132241 | — | — | — |
| placeholders.test | LINK | 0.077950 | 0.270464 | 0.324012 | — | — | — |
| placeholders_select.test | LINK | 0.077382 | 0.269394 | 0.329571 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.216386 | 0.754188 | 0.981497 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.225467 | 0.800030 | 1.197460 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.214345 | 0.754758 | 0.979866 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.222896 | 0.805672 | 1.169662 | — | — | — |
| posix_descriptor_base.test | LINK | 0.085086 | 0.276153 | 0.324499 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.083432 | 0.271980 | 0.322566 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.461315 | 3.720821 | 3.130105 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.473810 | 3.761628 | 3.190614 | — | — | — |
| prepend.test | RUN | 0.403632 | 2.999046 | 2.464080 | 0.001320 | 0.001533 | 0.001500 |
| prepend_select.test | RUN | 0.412210 | 3.050995 | 2.442138 | 0.001283 | 0.001444 | 0.001489 |
| random_access_file.test | LINK | 0.290936 | 0.674087 | 0.806578 | — | — | — |
| random_access_file_select.test | LINK | 0.298525 | 0.716779 | 1.006748 | — | — | — |
| read.test | RUN | 1.678943 | 18.539461 | 14.188626 | 0.002196 | 0.001815 | 0.001798 |
| read_select.test | RUN | 1.697896 | 18.635237 | 14.256621 | 0.001747 | 0.001888 | 0.001857 |
| read_at.test | RUN | 1.664746 | 24.245510 | 18.931426 | 0.001958 | 0.002460 | 0.002216 |
| read_at_select.test | RUN | 1.684231 | 24.333239 | 19.001901 | 0.002110 | 0.002424 | 0.002093 |
| read_until.test | RUN | 0.876584 | 7.196905 | 5.192518 | 0.001449 | 0.001570 | 0.001470 |
| read_until_select.test | RUN | 0.880145 | 7.256433 | 5.317016 | 0.001502 | 0.001650 | 0.001480 |
| readable_pipe.test | LINK | 0.532716 | 3.001480 | 2.408838 | — | — | — |
| readable_pipe_select.test | LINK | 0.558819 | 3.138183 | 2.548846 | — | — | — |
| recycling_allocator.test | RUN | 0.159920 | 0.424529 | 0.465873 | 0.001214 | 0.001239 | 0.001181 |
| recycling_allocator_select.test | RUN | 0.153803 | 0.419412 | 0.470022 | 0.001187 | 0.001231 | 0.001105 |
| redirect_disposition.test | LINK | 0.709964 | 4.212987 | 3.670213 | — | — | — |
| redirect_disposition_select.test | LINK | 0.712320 | 4.142108 | 3.680156 | — | — | — |
| redirect_error.test | LINK | 0.627284 | 3.473072 | 3.217886 | — | — | — |
| redirect_error_select.test | LINK | 0.634822 | 3.463122 | 3.167698 | — | — | — |
| registered_buffer.test | LINK | 0.142887 | 0.343311 | 0.431077 | — | — | — |
| registered_buffer_select.test | LINK | 0.147981 | 0.346502 | 0.420327 | — | — | — |
| signal_set.test | RUN | 0.519717 | 2.930468 | 2.247627 | 0.001328 | 0.001340 | 0.001351 |
| signal_set_select.test | RUN | 0.538749 | 3.042770 | 2.470847 | 0.001027 | 0.001302 | 0.001215 |
| signal_set_base.test | LINK | 0.120284 | 0.267581 | 0.313952 | — | — | — |
| signal_set_base_select.test | LINK | 0.118177 | 0.269580 | 0.310156 | — | — | — |
| socket_base.test | RUN | 0.640814 | 4.271907 | 3.448039 | 0.001576 | 0.001354 | 0.001461 |
| socket_base_select.test | RUN | 0.641623 | 4.111998 | 3.415074 | 0.001262 | 0.001384 | 0.001474 |
| spawn.test | RUN | 1.110260 | 7.150345 | 5.975653 | 0.001549 | 0.001596 | 0.001550 |
| spawn_select.test | RUN | 1.127233 | 7.113968 | 5.934273 | 0.001546 | 0.001898 | 0.001548 |
| static_thread_pool.test | RUN | 0.274626 | 0.646631 | 0.761783 | 0.001214 | 0.001264 | 0.001495 |
| static_thread_pool_select.test | RUN | 0.283203 | 0.707186 | 0.968162 | 0.001097 | 0.001218 | 0.001483 |
| steady_timer.test | LINK | 0.306792 | 0.717387 | 1.086278 | — | — | — |
| steady_timer_select.test | LINK | 0.316272 | 0.730910 | 1.109992 | — | — | — |
| strand.test | RUN | 0.689393 | 3.992340 | 3.532999 | 0.002010 | 0.002023 | 0.002134 |
| strand_select.test | RUN | 0.686888 | 3.971743 | 3.491980 | 0.001608 | 0.002178 | 0.001591 |
| stream_file.test | LINK | 0.292060 | 0.640108 | 0.813206 | — | — | — |
| stream_file_select.test | LINK | 0.298033 | 0.559152 | 1.014084 | — | — | — |
| streambuf.test | RUN | 0.170604 | 0.374126 | 0.560163 | 0.000899 | 0.000948 | 0.001103 |
| streambuf_select.test | RUN | 0.167205 | 0.369235 | 0.483049 | 0.000877 | 0.000975 | 0.001252 |
| system_timer.test | LINK | 0.447952 | 2.546617 | 2.126571 | — | — | — |
| system_timer_select.test | LINK | 0.453123 | 2.492763 | 2.039204 | — | — | — |
| system_context.test | LINK | 0.188128 | 0.423724 | 0.473449 | — | — | — |
| system_context_select.test | LINK | 0.196891 | 0.452156 | 0.595340 | — | — | — |
| system_executor.test | LINK | 0.258415 | 1.428160 | 0.967723 | — | — | — |
| system_executor_select.test | LINK | 0.266985 | 1.388154 | 1.076984 | — | — | — |
| this_coro.test | LINK | 0.070570 | 0.157417 | 0.185911 | — | — | — |
| this_coro_select.test | LINK | 0.068708 | 0.157915 | 0.187952 | — | — | — |
| thread_pool.test | RUN | 0.312618 | 1.845798 | 1.264469 | 0.001608 | 0.001620 | 0.001648 |
| thread_pool_select.test | RUN | 0.319728 | 1.849783 | 1.363065 | 0.001689 | 0.001839 | 0.001719 |
| time_traits.test | LINK | 0.159399 | 0.342079 | 0.382176 | — | — | — |
| time_traits_select.test | LINK | 0.159903 | 0.447460 | 0.378322 | — | — | — |
| ts_buffer.test | LINK | 0.152871 | 0.561465 | 0.404042 | — | — | — |
| ts_buffer_select.test | LINK | 0.151205 | 0.561032 | 0.406383 | — | — | — |
| ts_executor.test | LINK | 0.220436 | 0.803604 | 0.635075 | — | — | — |
| ts_executor_select.test | LINK | 0.228992 | 0.837755 | 0.765035 | — | — | — |
| ts_internet.test | LINK | 0.242206 | 0.877910 | 0.882803 | — | — | — |
| ts_internet_select.test | LINK | 0.245624 | 0.881720 | 1.289763 | — | — | — |
| ts_io_context.test | LINK | 0.193591 | 0.670514 | 0.772730 | — | — | — |
| ts_io_context_select.test | LINK | 0.199859 | 0.706303 | 0.978058 | — | — | — |
| ts_net.test | LINK | 0.285952 | 1.044618 | 1.565416 | — | — | — |
| ts_net_select.test | LINK | 0.291175 | 1.077831 | 1.585538 | — | — | — |
| ts_netfwd.test | LINK | 0.286340 | 1.054459 | 1.565430 | — | — | — |
| ts_netfwd_select.test | LINK | 0.289433 | 1.082980 | 1.604510 | — | — | — |
| ts_socket.test | LINK | 0.233454 | 0.825904 | 1.210912 | — | — | — |
| ts_socket_select.test | LINK | 0.240110 | 0.834621 | 1.221753 | — | — | — |
| ts_timer.test | LINK | 0.208924 | 0.733356 | 1.031482 | — | — | — |
| ts_timer_select.test | LINK | 0.211876 | 0.754794 | 1.066247 | — | — | — |
| use_awaitable.test | LINK | 0.069602 | 0.248479 | 0.292949 | — | — | — |
| use_awaitable_select.test | LINK | 0.068928 | 0.242924 | 0.293119 | — | — | — |
| wait_traits.test | LINK | 0.070003 | 0.242089 | 0.294105 | — | — | — |
| wait_traits_select.test | LINK | 0.069577 | 0.241283 | 0.277898 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.066372 | 0.243991 | 0.299899 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.068411 | 0.242781 | 0.292332 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.066818 | 0.245424 | 0.284328 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.065970 | 0.244604 | 0.293003 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.067096 | 0.246572 | 0.293702 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.068496 | 0.244179 | 0.288260 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.067948 | 0.243608 | 0.299254 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.066084 | 0.234536 | 0.292692 | — | — | — |
| windows_object_handle.test | LINK | 0.191587 | 0.669330 | 0.783393 | — | — | — |
| windows_object_handle_select.test | LINK | 0.198795 | 0.709534 | 0.985843 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.200109 | 0.705416 | 0.856170 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.211246 | 0.762216 | 1.074707 | — | — | — |
| windows_random_access_handle.test | LINK | 0.192768 | 0.680184 | 0.786488 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.200441 | 0.712740 | 0.991460 | — | — | — |
| windows_stream_handle.test | LINK | 0.191423 | 0.672174 | 0.785227 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.198327 | 0.726303 | 0.988465 | — | — | — |
| writable_pipe.test | LINK | 0.371721 | 3.007095 | 2.526750 | — | — | — |
| writable_pipe_select.test | LINK | 0.388489 | 3.127707 | 2.674627 | — | — | — |
| write.test | RUN | 1.639800 | 15.722801 | 14.084467 | 0.001790 | 0.001966 | 0.001819 |
| write_select.test | RUN | 1.656049 | 15.774453 | 14.122609 | 0.001640 | 0.001883 | 0.002072 |
| write_at.test | RUN | 1.716777 | 20.993091 | 17.625178 | 0.001902 | 0.002052 | 0.001957 |
| write_at_select.test | RUN | 1.730661 | 20.955709 | 17.812969 | 0.002014 | 0.002155 | 0.001926 |
| any_executor.test | RUN | 0.679665 | 6.866567 | 5.849722 | 0.001819 | 0.001950 | 0.001616 |
| blocking.test | RUN | 1.463121 | 9.090459 | 11.647194 | 0.003342 | 0.003471 | 0.003294 |
| blocking_adaptation.test | RUN | 0.724096 | 3.788354 | 5.168130 | 0.002084 | 0.002158 | 0.002034 |
| context_as.test | RUN | 0.427061 | 2.663455 | 1.754393 | 0.001345 | 0.001626 | 0.001338 |
| executor.test | RUN | 0.108972 | 0.247488 | 0.309527 | 0.001118 | 0.001476 | 0.001238 |
| inline_exception_handling.test | RUN | 1.448527 | 8.395539 | 11.630010 | 0.003747 | 0.002336 | 0.002350 |
| invocable_archetype.test | RUN | 0.100388 | 0.249861 | 0.298628 | 0.001237 | 0.001353 | 0.001345 |
| mapping.test | RUN | 1.377463 | 8.428517 | 10.923087 | 0.002409 | 0.002366 | 0.002421 |
| outstanding_work.test | RUN | 0.667014 | 3.721871 | 4.917123 | 0.001997 | 0.002251 | 0.002158 |
| prefer_only.test | RUN | 0.213869 | 1.459043 | 1.092228 | 0.001254 | 0.001285 | 0.001400 |
| relationship.test | RUN | 0.538494 | 3.138333 | 5.001634 | 0.001452 | 0.001546 | 0.001530 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.005×, 0.997× | 1.014× |
| clang | 0.984× | 0.982×, 0.986× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001233s | 0.001201s | 0.001229s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001207s | 0.001247s | 0.001169s | byte equality observed |
| any_completion_handler.test | 7 | 0.001026s | 0.001013s | 0.000971s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001019s | 0.001012s | 0.000996s | byte equality observed |
| any_io_executor.test | 8 | 0.001201s | 0.001188s | 0.001149s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001213s | 0.001168s | 0.001134s | byte equality observed |
| append.test | 10 | 0.000972s | 0.000971s | 0.000946s | byte equality observed |
| append_select.test | 10 | 0.000960s | 0.000948s | 0.000945s | byte equality observed |
| as_tuple.test | 10 | 0.001035s | 0.001029s | 0.001011s | byte equality observed |
| as_tuple_select.test | 10 | 0.000982s | 0.000960s | 0.000972s | byte equality observed |
| bind_allocator.test | 1 | 0.001484s | 0.001417s | 0.001444s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001172s | 0.001074s | 0.001084s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000865s | 0.000861s | 0.000844s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000797s | 0.000809s | 0.000796s | byte equality observed |
| bind_executor.test | 1 | 0.001401s | 0.001387s | 0.001378s | byte equality observed |
| bind_executor_select.test | 1 | 0.001639s | 0.001466s | 0.001561s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000915s | 0.000905s | 0.000893s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000861s | 0.000911s | 0.000847s | byte equality observed |
| buffer.test | 10 | 0.000836s | 0.000839s | 0.000820s | byte equality observed |
| buffer_select.test | 10 | 0.000828s | 0.000837s | 0.000848s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001012s | 0.001049s | 0.001018s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001004s | 0.000989s | 0.000990s | byte equality observed |
| buffered_stream.test | 10 | 0.001004s | 0.001000s | 0.000985s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001008s | 0.000982s | 0.000975s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001014s | 0.000999s | 0.000999s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000993s | 0.000996s | 0.001013s | byte equality observed |
| buffers_iterator.test | 10 | 0.000815s | 0.000794s | 0.000801s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000782s | 0.000812s | 0.000785s | byte equality observed |
| cancel_after.test | 1 | 0.002738s | 0.002690s | 0.002717s | byte equality observed |
| cancel_after_select.test | 1 | 0.002326s | 0.002200s | 0.002293s | byte equality observed |
| cancel_at.test | 1 | 0.002913s | 0.002870s | 0.002991s | byte equality observed |
| cancel_at_select.test | 1 | 0.002773s | 0.002671s | 0.002900s | byte equality observed |
| co_composed.test | 10 | 0.000857s | 0.000865s | 0.000886s | byte equality observed |
| co_composed_select.test | 10 | 0.000802s | 0.000805s | 0.000800s | byte equality observed |
| compose.test | 1 | 0.001379s | 0.001380s | 0.001355s | byte equality observed |
| compose_select.test | 1 | 0.001158s | 0.001145s | 0.001165s | byte equality observed |
| composed.test | 1 | 0.001667s | 0.001606s | 0.001615s | byte equality observed |
| composed_select.test | 1 | 0.001300s | 0.001331s | 0.001266s | byte equality observed |
| config.test | 10 | 0.000903s | 0.000942s | 0.000923s | byte equality observed |
| config_select.test | 10 | 0.000899s | 0.000887s | 0.000889s | byte equality observed |
| connect_pipe.test | 10 | 0.000877s | 0.000912s | 0.000876s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000877s | 0.000875s | 0.000886s | byte equality observed |
| consign.test | 10 | 0.000875s | 0.000867s | 0.000858s | byte equality observed |
| consign_select.test | 10 | 0.000832s | 0.000858s | 0.000831s | byte equality observed |
| deadline_timer.test | 1 | 0.002177s | 0.002135s | 0.002174s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001925s | 0.001894s | 0.001866s | byte equality observed |
| deferred.test | 10 | 0.000804s | 0.000801s | 0.000834s | byte equality observed |
| deferred_select.test | 10 | 0.000730s | 0.000765s | 0.000732s | byte equality observed |
| disposition.test | 10 | 0.000774s | 0.000788s | 0.000784s | byte equality observed |
| disposition_select.test | 10 | 0.000777s | 0.000789s | 0.000777s | byte equality observed |
| error.test | 10 | 0.000754s | 0.000769s | 0.000749s | byte equality observed |
| error_select.test | 10 | 0.000763s | 0.000758s | 0.000760s | byte equality observed |
| inline_executor.test | 10 | 0.000774s | 0.000762s | 0.000765s | byte equality observed |
| inline_executor_select.test | 10 | 0.000772s | 0.000760s | 0.000760s | byte equality observed |
| inline_or_executor.test | 10 | 0.000785s | 0.000770s | 0.000761s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000772s | 0.000774s | 0.000776s | byte equality observed |
| io_context.test | 1 | 0.001752s | 0.001733s | 0.001747s | byte equality observed |
| io_context_select.test | 1 | 0.001798s | 0.001702s | 0.002114s | byte equality observed |
| io_context_strand.test | 1 | 0.002017s | 0.001986s | 0.002026s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001668s | 0.001661s | 0.001704s | byte equality observed |
| ip_host_name.test | 10 | 0.000843s | 0.000842s | 0.000849s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000756s | 0.000778s | 0.000760s | byte equality observed |
| ip_icmp.test | 10 | 0.000775s | 0.000774s | 0.000755s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000772s | 0.000777s | 0.000755s | byte equality observed |
| ip_multicast.test | 10 | 0.000838s | 0.000840s | 0.000835s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000821s | 0.000820s | 0.000804s | byte equality observed |
| ip_tcp.test | 10 | 0.001031s | 0.001030s | 0.001028s | byte equality observed |
| ip_tcp_select.test | 10 | 0.000995s | 0.001003s | 0.000988s | byte equality observed |
| ip_udp.test | 10 | 0.000854s | 0.000852s | 0.000836s | byte equality observed |
| ip_udp_select.test | 10 | 0.000846s | 0.000846s | 0.000824s | byte equality observed |
| ip_unicast.test | 10 | 0.000811s | 0.000816s | 0.000804s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000804s | 0.000799s | 0.000787s | byte equality observed |
| ip_v6_only.test | 10 | 0.000814s | 0.000811s | 0.000803s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000797s | 0.000812s | 0.000792s | byte equality observed |
| is_read_buffered.test | 10 | 0.000754s | 0.000737s | 0.000749s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000755s | 0.000741s | 0.000738s | byte equality observed |
| is_write_buffered.test | 10 | 0.000757s | 0.000738s | 0.000721s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000750s | 0.000745s | 0.000719s | byte equality observed |
| prepend.test | 10 | 0.000802s | 0.000803s | 0.000781s | byte equality observed |
| prepend_select.test | 10 | 0.000788s | 0.000799s | 0.000760s | byte equality observed |
| read.test | 10 | 0.001097s | 0.001131s | 0.001065s | byte equality observed |
| read_at.test | 10 | 0.001312s | 0.001498s | 0.001298s | byte equality observed |
| read_at_select.test | 10 | 0.001310s | 0.001452s | 0.001304s | byte equality observed |
| read_select.test | 10 | 0.001097s | 0.001167s | 0.001066s | byte equality observed |
| read_until.test | 10 | 0.000906s | 0.000947s | 0.000873s | byte equality observed |
| read_until_select.test | 10 | 0.000902s | 0.000958s | 0.000877s | byte equality observed |
| recycling_allocator.test | 10 | 0.000789s | 0.000791s | 0.000729s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000816s | 0.000829s | 0.000732s | byte equality observed |
| signal_set.test | 10 | 0.000832s | 0.000817s | 0.000766s | byte equality observed |
| signal_set_select.test | 10 | 0.000848s | 0.000875s | 0.000792s | byte equality observed |
| socket_base.test | 10 | 0.000901s | 0.000908s | 0.000883s | byte equality observed |
| socket_base_select.test | 10 | 0.000885s | 0.000912s | 0.000901s | byte equality observed |
| spawn.test | 10 | 0.000986s | 0.000984s | 0.000988s | byte equality observed |
| spawn_select.test | 10 | 0.000967s | 0.000962s | 0.000960s | byte equality observed |
| static_thread_pool.test | 10 | 0.000819s | 0.000836s | 0.000807s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000773s | 0.000746s | 0.000771s | byte equality observed |
| strand.test | 1 | 0.001629s | 0.001685s | 0.001659s | byte equality observed |
| strand_select.test | 1 | 0.001416s | 0.001388s | 0.001451s | byte equality observed |
| streambuf.test | 10 | 0.000876s | 0.000854s | 0.000873s | byte equality observed |
| streambuf_select.test | 10 | 0.000834s | 0.000832s | 0.000858s | byte equality observed |
| thread_pool.test | 10 | 0.001542s | 0.001569s | 0.001588s | byte equality observed |
| thread_pool_select.test | 10 | 0.001531s | 0.001531s | 0.001531s | byte equality observed |
| write.test | 10 | 0.001212s | 0.001150s | 0.001171s | byte equality observed |
| write_at.test | 10 | 0.001292s | 0.001328s | 0.001308s | byte equality observed |
| write_at_select.test | 10 | 0.001288s | 0.001266s | 0.001269s | byte equality observed |
| write_select.test | 10 | 0.001170s | 0.001173s | 0.001180s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
