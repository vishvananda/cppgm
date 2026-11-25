# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.547932 | 3.509473 | 2.983673 | 0.002470 | 0.001970 | 0.001625 |
| any_completion_executor_select.test | RUN | 0.547712 | 3.470870 | 3.115033 | 0.001892 | 0.001916 | 0.001620 |
| any_completion_handler.test | RUN | 0.608112 | 3.209163 | 2.799603 | 0.001469 | 0.001453 | 0.001485 |
| any_completion_handler_select.test | RUN | 0.628684 | 3.324552 | 2.892122 | 0.001412 | 0.001524 | 0.001458 |
| any_io_executor.test | RUN | 0.571900 | 3.778503 | 3.300010 | 0.001568 | 0.001819 | 0.002007 |
| any_io_executor_select.test | RUN | 0.543181 | 3.677328 | 3.375590 | 0.001690 | 0.002137 | 0.001817 |
| append.test | RUN | 0.542566 | 2.966681 | 2.444589 | 0.001516 | 0.001664 | 0.001352 |
| append_select.test | RUN | 0.534496 | 3.089792 | 2.468393 | 0.001303 | 0.001364 | 0.001417 |
| as_tuple.test | RUN | 0.688922 | 3.674027 | 3.459205 | 0.001452 | 0.001483 | 0.001612 |
| as_tuple_select.test | RUN | 0.693443 | 3.601442 | 3.428662 | 0.001434 | 0.001457 | 0.001356 |
| associated_allocator.test | LINK | 0.136103 | 0.297402 | 0.352660 | — | — | — |
| associated_allocator_select.test | LINK | 0.131941 | 0.292922 | 0.367144 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.148404 | 0.318715 | 0.391420 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.146085 | 0.320722 | 0.401344 | — | — | — |
| associated_executor.test | LINK | 0.214267 | 0.553839 | 0.649082 | — | — | — |
| associated_executor_select.test | LINK | 0.210996 | 0.549508 | 0.666361 | — | — | — |
| associated_immediate_executor.test | LINK | 0.199844 | 0.511084 | 0.613284 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.197467 | 0.518497 | 0.584824 | — | — | — |
| associator.test | LINK | 0.110008 | 0.241328 | 0.309862 | — | — | — |
| associator_select.test | LINK | 0.108738 | 0.244819 | 0.294876 | — | — | — |
| awaitable.test | LINK | 0.108024 | 0.243741 | 0.297347 | — | — | — |
| awaitable_select.test | LINK | 0.108331 | 0.247765 | 0.304733 | — | — | — |
| basic_datagram_socket.test | LINK | 0.335810 | 0.774299 | 1.125382 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.341442 | 0.803918 | 1.155866 | — | — | — |
| basic_deadline_timer.test | LINK | 0.408656 | 0.915766 | 1.293789 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.415837 | 0.929007 | 1.311619 | — | — | — |
| basic_file.test | LINK | 0.111382 | 0.239833 | 0.295869 | — | — | — |
| basic_file_select.test | LINK | 0.106323 | 0.239792 | 0.294848 | — | — | — |
| basic_random_access_file.test | LINK | 0.110108 | 0.240723 | 0.297978 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107395 | 0.240972 | 0.298596 | — | — | — |
| basic_raw_socket.test | LINK | 0.334264 | 0.781805 | 1.130271 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.340798 | 0.798449 | 1.156091 | — | — | — |
| basic_readable_pipe.test | LINK | 0.327450 | 0.745902 | 0.977747 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.338705 | 0.793824 | 1.182794 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.336557 | 0.782990 | 1.128533 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.340393 | 0.788946 | 1.159550 | — | — | — |
| basic_signal_set.test | LINK | 0.313373 | 0.714807 | 0.898687 | — | — | — |
| basic_signal_set_select.test | LINK | 0.330259 | 0.761240 | 1.091952 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.342929 | 0.785805 | 1.150034 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.341244 | 0.804701 | 1.169873 | — | — | — |
| basic_stream_file.test | LINK | 0.106085 | 0.241165 | 0.294075 | — | — | — |
| basic_stream_file_select.test | LINK | 0.111534 | 0.247810 | 0.293226 | — | — | — |
| basic_stream_socket.test | LINK | 0.339117 | 0.788436 | 1.127984 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.347791 | 0.805744 | 1.157003 | — | — | — |
| basic_streambuf.test | LINK | 0.161193 | 0.355303 | 0.441527 | — | — | — |
| basic_streambuf_select.test | LINK | 0.158267 | 0.353464 | 0.435644 | — | — | — |
| basic_waitable_timer.test | LINK | 0.314925 | 0.746278 | 1.066998 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.319680 | 0.759650 | 1.106121 | — | — | — |
| basic_writable_pipe.test | LINK | 0.322895 | 0.756792 | 1.001765 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.342978 | 0.797517 | 1.201659 | — | — | — |
| bind_allocator.test | RUN | 0.568149 | 3.043595 | 2.717427 | 0.002036 | 0.001888 | 0.001874 |
| bind_allocator_select.test | RUN | 0.579609 | 3.091114 | 2.646599 | 0.001663 | 0.001841 | 0.001691 |
| bind_cancellation_slot.test | RUN | 0.587783 | 3.070102 | 2.700025 | 0.001113 | 0.001103 | 0.001035 |
| bind_cancellation_slot_select.test | RUN | 0.570919 | 3.109038 | 2.634590 | 0.001042 | 0.001050 | 0.000970 |
| bind_executor.test | RUN | 0.394213 | 2.114469 | 1.700223 | 0.001769 | 0.001800 | 0.001739 |
| bind_executor_select.test | RUN | 0.403317 | 2.144939 | 1.675613 | 0.001616 | 0.001706 | 0.001529 |
| bind_immediate_executor.test | RUN | 0.292389 | 1.730297 | 1.076294 | 0.000977 | 0.001136 | 0.000957 |
| bind_immediate_executor_select.test | RUN | 0.300987 | 1.697720 | 1.172867 | 0.000965 | 0.000953 | 0.000966 |
| buffer.test | RUN | 0.173865 | 0.710149 | 0.629475 | 0.000961 | 0.000984 | 0.000986 |
| buffer_select.test | RUN | 0.173814 | 0.710798 | 0.619946 | 0.000949 | 0.000967 | 0.000978 |
| buffer_registration.test | LINK | 0.135027 | 0.354019 | 0.368920 | — | — | — |
| buffer_registration_select.test | LINK | 0.134781 | 0.350896 | 0.365561 | — | — | — |
| buffered_read_stream.test | RUN | 0.731242 | 4.683108 | 3.805167 | 0.001277 | 0.001898 | 0.001839 |
| buffered_read_stream_select.test | RUN | 0.751549 | 4.773440 | 3.918027 | 0.001185 | 0.001749 | 0.001664 |
| buffered_stream.test | RUN | 0.986505 | 7.448345 | 6.847237 | 0.001814 | 0.001858 | 0.001745 |
| buffered_stream_select.test | RUN | 1.002159 | 7.496254 | 6.625671 | 0.001697 | 0.001836 | 0.001569 |
| buffered_write_stream.test | RUN | 1.127908 | 6.414897 | 5.835463 | 0.001786 | 0.001820 | 0.001565 |
| buffered_write_stream_select.test | RUN | 1.136493 | 6.451375 | 5.609376 | 0.001776 | 0.001795 | 0.001370 |
| buffers_iterator.test | RUN | 0.327632 | 0.564892 | 0.881515 | 0.001418 | 0.001453 | 0.001238 |
| buffers_iterator_select.test | RUN | 0.323362 | 0.559425 | 0.884876 | 0.001237 | 0.001379 | 0.001195 |
| cancel_after.test | RUN | 0.932831 | 4.997408 | 4.136041 | 0.004041 | 0.003780 | 0.003343 |
| cancel_after_select.test | RUN | 0.943557 | 4.960127 | 4.103266 | 0.003442 | 0.003730 | 0.002825 |
| cancel_at.test | RUN | 0.866734 | 4.414705 | 4.059583 | 0.003396 | 0.003342 | 0.002815 |
| cancel_at_select.test | RUN | 0.833724 | 4.406935 | 4.022674 | 0.003285 | 0.003117 | 0.003006 |
| cancellation_signal.test | LINK | 0.094387 | 0.207513 | 0.230346 | — | — | — |
| cancellation_signal_select.test | LINK | 0.095076 | 0.204232 | 0.232827 | — | — | — |
| cancellation_state.test | LINK | 0.127228 | 0.206222 | 0.371797 | — | — | — |
| cancellation_state_select.test | LINK | 0.130080 | 0.206002 | 0.367744 | — | — | — |
| cancellation_type.test | LINK | 0.104094 | 0.159091 | 0.294267 | — | — | — |
| cancellation_type_select.test | LINK | 0.112272 | 0.164701 | 0.293178 | — | — | — |
| co_composed.test | RUN | 0.105753 | 0.161730 | 0.298202 | 0.001218 | 0.000971 | 0.001170 |
| co_composed_select.test | RUN | 0.102867 | 0.176316 | 0.289059 | 0.001101 | 0.001315 | 0.001033 |
| co_spawn.test | LINK | 0.102675 | 0.223940 | 0.287016 | — | — | — |
| co_spawn_select.test | LINK | 0.108948 | 0.214568 | 0.289047 | — | — | — |
| completion_condition.test | LINK | 0.138493 | 0.374157 | 0.393577 | — | — | — |
| completion_condition_select.test | LINK | 0.139868 | 0.372868 | 0.388111 | — | — | — |
| compose.test | RUN | 0.704546 | 3.843316 | 3.390174 | 0.001970 | 0.001912 | 0.001436 |
| compose_select.test | RUN | 0.713916 | 3.792154 | 3.361510 | 0.001864 | 0.001922 | 0.001892 |
| composed.test | RUN | 0.662329 | 3.790640 | 3.273071 | 0.001677 | 0.001687 | 0.001547 |
| composed_select.test | RUN | 0.671452 | 3.745787 | 3.250677 | 0.001507 | 0.001761 | 0.001648 |
| config.test | RUN | 0.319176 | 2.443882 | 1.402432 | 0.001473 | 0.001674 | 0.001217 |
| config_select.test | RUN | 0.359486 | 2.544831 | 1.576028 | 0.001556 | 0.001619 | 0.001207 |
| connect.test | LINK | 1.137763 | 8.134019 | 6.887977 | — | — | — |
| connect_select.test | LINK | 1.149313 | 8.176338 | 6.931835 | — | — | — |
| connect_pipe.test | RUN | 0.604249 | 3.076635 | 2.581090 | 0.001707 | 0.001736 | 0.001259 |
| connect_pipe_select.test | RUN | 0.622705 | 3.208790 | 2.740692 | 0.001466 | 0.001669 | 0.001324 |
| consign.test | RUN | 0.523714 | 2.993987 | 2.361781 | 0.001569 | 0.001329 | 0.001386 |
| consign_select.test | RUN | 0.535676 | 3.066014 | 2.320361 | 0.001593 | 0.001572 | 0.001206 |
| coroutine.test | LINK | 0.109755 | 0.285558 | 0.331910 | — | — | — |
| coroutine_select.test | LINK | 0.113913 | 0.281866 | 0.323342 | — | — | — |
| deadline_timer.test | RUN | 0.773445 | 3.950347 | 3.370731 | 0.002797 | 0.003157 | 0.002908 |
| deadline_timer_select.test | RUN | 0.777808 | 3.873764 | 3.326737 | 0.002638 | 0.002742 | 0.002619 |
| deferred.test | RUN | 0.118109 | 0.259944 | 0.323022 | 0.001508 | 0.001304 | 0.001190 |
| deferred_select.test | RUN | 0.117531 | 0.267844 | 0.318240 | 0.001364 | 0.001360 | 0.001156 |
| detached.test | LINK | 0.134284 | 0.289778 | 0.350439 | — | — | — |
| detached_select.test | LINK | 0.140690 | 0.290747 | 0.348498 | — | — | — |
| disposition.test | RUN | 0.159405 | 0.704221 | 0.654486 | 0.000998 | 0.001624 | 0.001348 |
| disposition_select.test | RUN | 0.130610 | 0.708311 | 0.657729 | 0.001048 | 0.001402 | 0.001300 |
| error.test | RUN | 0.119567 | 0.682670 | 0.605588 | 0.000987 | 0.001384 | 0.001273 |
| error_select.test | RUN | 0.118334 | 0.684481 | 0.595269 | 0.000970 | 0.001554 | 0.001224 |
| file_base.test | LINK | 0.146816 | 0.562391 | 0.638989 | — | — | — |
| file_base_select.test | LINK | 0.145974 | 0.558870 | 0.602929 | — | — | — |
| fwd_first.test | LINK | 0.337845 | 0.976210 | 1.121173 | — | — | — |
| fwd_last.test | LINK | 0.337281 | 0.857308 | 1.118216 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.127938 | 0.326314 | 0.402420 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.127555 | 0.323965 | 0.404440 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.573266 | 3.067408 | 2.421395 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.568933 | 3.131724 | 2.363142 | — | — | — |
| generic_raw_protocol.test | LINK | 0.571920 | 3.063740 | 2.388428 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.568785 | 3.138064 | 2.364671 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.491271 | 2.614251 | 2.057767 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.490627 | 2.641819 | 2.046130 | — | — | — |
| generic_stream_protocol.test | LINK | 0.524250 | 2.801772 | 2.178283 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.526918 | 2.858114 | 2.182956 | — | — | — |
| high_resolution_timer.test | LINK | 0.215960 | 0.489260 | 0.630118 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.219730 | 0.507776 | 0.645665 | — | — | — |
| immediate.test | LINK | 0.146442 | 0.374018 | 0.391039 | — | — | — |
| immediate_select.test | LINK | 0.148316 | 0.374100 | 0.386573 | — | — | — |
| inline_executor.test | RUN | 0.183396 | 0.591605 | 0.593835 | 0.001000 | 0.001024 | 0.000870 |
| inline_executor_select.test | RUN | 0.182967 | 0.593142 | 0.591886 | 0.000980 | 0.001071 | 0.000930 |
| inline_or_executor.test | RUN | 0.304808 | 1.813555 | 1.213535 | 0.000986 | 0.001040 | 0.000919 |
| inline_or_executor_select.test | RUN | 0.313311 | 1.844265 | 1.311438 | 0.001059 | 0.001034 | 0.000852 |
| io_context.test | RUN | 0.453405 | 2.741730 | 2.073411 | 0.002048 | 0.002227 | 0.001925 |
| io_context_select.test | RUN | 0.463241 | 2.698464 | 2.070699 | 0.001947 | 0.002029 | 0.001658 |
| io_context_strand.test | RUN | 0.428758 | 2.343686 | 1.809530 | 0.001935 | 0.001861 | 0.001793 |
| io_context_strand_select.test | RUN | 0.432109 | 2.311354 | 1.789760 | 0.001781 | 0.001806 | 0.001612 |
| ip_address.test | LINK | 0.151027 | 0.525626 | 0.692671 | — | — | — |
| ip_address_select.test | LINK | 0.155180 | 0.520785 | 0.674549 | — | — | — |
| ip_address_v4.test | LINK | 0.153727 | 0.555749 | 0.908088 | — | — | — |
| ip_address_v4_select.test | LINK | 0.154718 | 0.555771 | 0.898468 | — | — | — |
| ip_address_v6.test | LINK | 0.176280 | 0.732229 | 1.118033 | — | — | — |
| ip_address_v6_select.test | LINK | 0.177209 | 0.732911 | 1.110543 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.131421 | 0.346509 | 0.702428 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.132615 | 0.346661 | 0.701714 | — | — | — |
| ip_basic_resolver.test | LINK | 0.216743 | 0.500565 | 1.050773 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.223279 | 0.518898 | 1.072186 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.072990 | 0.163400 | 0.297107 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.074026 | 0.162233 | 0.294272 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.131755 | 0.493749 | 0.679190 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.132498 | 0.505510 | 0.673405 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.125283 | 0.338862 | 0.659639 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.125387 | 0.490200 | 0.646909 | — | — | — |
| ip_host_name.test | RUN | 0.135844 | 0.657310 | 0.737644 | 0.000962 | 0.001452 | 0.001159 |
| ip_host_name_select.test | RUN | 0.136095 | 0.666124 | 0.735370 | 0.000948 | 0.001492 | 0.001197 |
| ip_icmp.test | RUN | 0.714339 | 6.521514 | 5.043512 | 0.000985 | 0.001418 | 0.001307 |
| ip_icmp_select.test | RUN | 0.714915 | 6.629022 | 4.908954 | 0.001084 | 0.001604 | 0.001176 |
| ip_multicast.test | RUN | 0.396129 | 3.168827 | 2.786165 | 0.001173 | 0.001504 | 0.001278 |
| ip_multicast_select.test | RUN | 0.402272 | 3.173260 | 2.753173 | 0.001130 | 0.001429 | 0.001397 |
| ip_resolver_query_base.test | LINK | 0.084002 | 0.267149 | 0.316257 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.083782 | 0.265666 | 0.309374 | — | — | — |
| ip_tcp.test | RUN | 1.078543 | 9.601808 | 7.771115 | 0.001436 | 0.002052 | 0.001886 |
| ip_tcp_select.test | RUN | 1.080083 | 9.960400 | 7.550838 | 0.001385 | 0.001845 | 0.001845 |
| ip_udp.test | RUN | 0.765075 | 6.787251 | 5.274752 | 0.001092 | 0.001706 | 0.001360 |
| ip_udp_select.test | RUN | 0.758294 | 6.895485 | 5.197522 | 0.001146 | 0.001711 | 0.001269 |
| ip_unicast.test | RUN | 0.365819 | 2.935839 | 2.455943 | 0.001058 | 0.001527 | 0.001272 |
| ip_unicast_select.test | RUN | 0.363875 | 2.935887 | 2.408074 | 0.001016 | 0.001401 | 0.001314 |
| ip_v6_only.test | RUN | 0.375019 | 2.992195 | 2.547004 | 0.001032 | 0.001467 | 0.001351 |
| ip_v6_only_select.test | RUN | 0.379097 | 3.057874 | 2.510292 | 0.001013 | 0.001404 | 0.001274 |
| is_read_buffered.test | RUN | 0.252888 | 0.882775 | 1.296176 | 0.001043 | 0.001430 | 0.001118 |
| is_read_buffered_select.test | RUN | 0.257982 | 0.896548 | 1.327569 | 0.001018 | 0.001308 | 0.001152 |
| is_write_buffered.test | RUN | 0.253605 | 0.878027 | 1.287349 | 0.000972 | 0.001194 | 0.001403 |
| is_write_buffered_select.test | RUN | 0.255159 | 0.894232 | 1.294751 | 0.000961 | 0.001287 | 0.001316 |
| local_basic_endpoint.test | LINK | 0.126144 | 0.494190 | 0.660426 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.126025 | 0.487803 | 0.663896 | — | — | — |
| local_connect_pair.test | LINK | 0.359054 | 2.977881 | 2.319151 | — | — | — |
| local_connect_pair_select.test | LINK | 0.359565 | 2.945628 | 2.301385 | — | — | — |
| local_datagram_protocol.test | LINK | 0.482079 | 3.881461 | 3.286617 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.493465 | 3.918672 | 3.225589 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.490250 | 3.832815 | 3.237631 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.496384 | 3.864845 | 3.219601 | — | — | — |
| local_stream_protocol.test | LINK | 0.449945 | 3.620821 | 3.047900 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.466168 | 3.655301 | 3.022421 | — | — | — |
| placeholders.test | LINK | 0.080115 | 0.264678 | 0.325533 | — | — | — |
| placeholders_select.test | LINK | 0.081193 | 0.262536 | 0.322939 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.219315 | 0.751886 | 0.959455 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.227553 | 0.784759 | 1.146110 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.221025 | 0.737042 | 0.949933 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.230891 | 0.796500 | 1.153415 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086405 | 0.271821 | 0.314097 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.088994 | 0.276078 | 0.309937 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.537151 | 3.658248 | 3.028917 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.613509 | 3.748823 | 3.123372 | — | — | — |
| prepend.test | RUN | 0.521780 | 2.978556 | 2.390277 | 0.001525 | 0.001577 | 0.001274 |
| prepend_select.test | RUN | 0.524447 | 3.055583 | 2.397399 | 0.001316 | 0.001313 | 0.001198 |
| random_access_file.test | LINK | 0.293098 | 0.670807 | 0.778431 | — | — | — |
| random_access_file_select.test | LINK | 0.312466 | 0.717116 | 0.982028 | — | — | — |
| read.test | RUN | 1.719973 | 18.825209 | 13.818191 | 0.002099 | 0.001908 | 0.001955 |
| read_select.test | RUN | 1.730375 | 18.750642 | 14.096723 | 0.001756 | 0.001974 | 0.001703 |
| read_at.test | RUN | 1.705471 | 24.817913 | 18.776986 | 0.002128 | 0.002555 | 0.002300 |
| read_at_select.test | RUN | 1.726550 | 24.705549 | 18.892937 | 0.002310 | 0.002364 | 0.002290 |
| read_until.test | RUN | 0.887699 | 7.271174 | 5.201398 | 0.001726 | 0.001762 | 0.001369 |
| read_until_select.test | RUN | 0.902056 | 7.331320 | 5.428673 | 0.001407 | 0.001726 | 0.001529 |
| readable_pipe.test | LINK | 0.547232 | 3.074175 | 2.424829 | — | — | — |
| readable_pipe_select.test | LINK | 0.569968 | 3.169113 | 2.554118 | — | — | — |
| recycling_allocator.test | RUN | 0.157641 | 0.426549 | 0.472691 | 0.000914 | 0.001294 | 0.001246 |
| recycling_allocator_select.test | RUN | 0.158975 | 0.421065 | 0.475865 | 0.001478 | 0.001386 | 0.001416 |
| redirect_disposition.test | LINK | 0.714144 | 4.244305 | 3.638803 | — | — | — |
| redirect_disposition_select.test | LINK | 0.728989 | 4.185886 | 3.643745 | — | — | — |
| redirect_error.test | LINK | 0.640128 | 3.511824 | 3.185744 | — | — | — |
| redirect_error_select.test | LINK | 0.643715 | 3.513511 | 3.155564 | — | — | — |
| registered_buffer.test | LINK | 0.154217 | 0.328656 | 0.421205 | — | — | — |
| registered_buffer_select.test | LINK | 0.152547 | 0.335431 | 0.423378 | — | — | — |
| signal_set.test | RUN | 0.537590 | 2.943065 | 2.284776 | 0.001349 | 0.001516 | 0.001299 |
| signal_set_select.test | RUN | 0.554505 | 3.040970 | 2.504840 | 0.001348 | 0.001477 | 0.001206 |
| signal_set_base.test | LINK | 0.120511 | 0.271668 | 0.305601 | — | — | — |
| signal_set_base_select.test | LINK | 0.122611 | 0.264257 | 0.305611 | — | — | — |
| socket_base.test | RUN | 0.646601 | 4.338561 | 3.402997 | 0.001530 | 0.001658 | 0.001188 |
| socket_base_select.test | RUN | 0.658356 | 4.247179 | 3.380362 | 0.001561 | 0.001684 | 0.001276 |
| spawn.test | RUN | 1.140177 | 7.143029 | 5.884816 | 0.001754 | 0.001592 | 0.001703 |
| spawn_select.test | RUN | 1.143535 | 7.076853 | 5.857544 | 0.001708 | 0.001904 | 0.001485 |
| static_thread_pool.test | RUN | 0.285876 | 0.653543 | 0.763011 | 0.001297 | 0.001513 | 0.001193 |
| static_thread_pool_select.test | RUN | 0.294108 | 0.706829 | 0.966371 | 0.001217 | 0.001316 | 0.001238 |
| steady_timer.test | LINK | 0.318130 | 0.735396 | 1.042452 | — | — | — |
| steady_timer_select.test | LINK | 0.326328 | 0.752312 | 1.072397 | — | — | — |
| strand.test | RUN | 0.705136 | 4.010765 | 3.529172 | 0.002348 | 0.002261 | 0.002030 |
| strand_select.test | RUN | 0.704663 | 3.952423 | 3.467366 | 0.001715 | 0.001891 | 0.001823 |
| stream_file.test | LINK | 0.293077 | 0.682497 | 0.789639 | — | — | — |
| stream_file_select.test | LINK | 0.305513 | 0.714438 | 0.997151 | — | — | — |
| streambuf.test | RUN | 0.183675 | 0.447112 | 0.554355 | 0.001638 | 0.001003 | 0.001151 |
| streambuf_select.test | RUN | 0.167736 | 0.371525 | 0.521023 | 0.000964 | 0.000926 | 0.000952 |
| system_timer.test | LINK | 0.460355 | 2.569816 | 2.240059 | — | — | — |
| system_timer_select.test | LINK | 0.465547 | 2.526673 | 2.066154 | — | — | — |
| system_context.test | LINK | 0.199915 | 0.430273 | 0.490654 | — | — | — |
| system_context_select.test | LINK | 0.206835 | 0.463605 | 0.607169 | — | — | — |
| system_executor.test | LINK | 0.267298 | 1.452631 | 0.986111 | — | — | — |
| system_executor_select.test | LINK | 0.278226 | 1.414502 | 1.087379 | — | — | — |
| this_coro.test | LINK | 0.074624 | 0.160502 | 0.187451 | — | — | — |
| this_coro_select.test | LINK | 0.073891 | 0.161476 | 0.188758 | — | — | — |
| thread_pool.test | RUN | 0.321343 | 1.880647 | 1.280070 | 0.001768 | 0.001732 | 0.001669 |
| thread_pool_select.test | RUN | 0.328690 | 1.894790 | 1.381840 | 0.001624 | 0.001694 | 0.001764 |
| time_traits.test | LINK | 0.163513 | 0.342226 | 0.387146 | — | — | — |
| time_traits_select.test | LINK | 0.163866 | 0.417418 | 0.383983 | — | — | — |
| ts_buffer.test | LINK | 0.157123 | 0.568578 | 0.408356 | — | — | — |
| ts_buffer_select.test | LINK | 0.157937 | 0.528029 | 0.409511 | — | — | — |
| ts_executor.test | LINK | 0.230485 | 0.805560 | 0.657220 | — | — | — |
| ts_executor_select.test | LINK | 0.237033 | 0.849593 | 0.800585 | — | — | — |
| ts_internet.test | LINK | 0.248988 | 0.875609 | 1.207479 | — | — | — |
| ts_internet_select.test | LINK | 0.254589 | 0.887924 | 1.293173 | — | — | — |
| ts_io_context.test | LINK | 0.199953 | 0.669918 | 0.744766 | — | — | — |
| ts_io_context_select.test | LINK | 0.207288 | 0.701972 | 0.986653 | — | — | — |
| ts_net.test | LINK | 0.293985 | 1.048005 | 1.585410 | — | — | — |
| ts_net_select.test | LINK | 0.300823 | 1.072245 | 1.618878 | — | — | — |
| ts_netfwd.test | LINK | 0.294428 | 1.052157 | 1.575864 | — | — | — |
| ts_netfwd_select.test | LINK | 0.301201 | 1.085273 | 1.591800 | — | — | — |
| ts_socket.test | LINK | 0.244844 | 0.820854 | 1.198175 | — | — | — |
| ts_socket_select.test | LINK | 0.246033 | 0.834535 | 1.226717 | — | — | — |
| ts_timer.test | LINK | 0.216594 | 0.734705 | 1.050668 | — | — | — |
| ts_timer_select.test | LINK | 0.219010 | 0.763446 | 1.067378 | — | — | — |
| use_awaitable.test | LINK | 0.073935 | 0.235927 | 0.293167 | — | — | — |
| use_awaitable_select.test | LINK | 0.072498 | 0.246436 | 0.299374 | — | — | — |
| wait_traits.test | LINK | 0.074083 | 0.242656 | 0.294189 | — | — | — |
| wait_traits_select.test | LINK | 0.075641 | 0.244349 | 0.292444 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.075180 | 0.247414 | 0.292980 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.072441 | 0.242240 | 0.298292 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.071996 | 0.243456 | 0.294034 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.073363 | 0.240109 | 0.291380 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.071674 | 0.236163 | 0.292781 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.079479 | 0.240979 | 0.300488 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071785 | 0.247121 | 0.293075 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.072113 | 0.238581 | 0.293084 | — | — | — |
| windows_object_handle.test | LINK | 0.201754 | 0.662068 | 0.794113 | — | — | — |
| windows_object_handle_select.test | LINK | 0.209245 | 0.710150 | 1.005544 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.210943 | 0.708298 | 0.852514 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.218997 | 0.755910 | 1.054285 | — | — | — |
| windows_random_access_handle.test | LINK | 0.202529 | 0.672149 | 0.805026 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.208800 | 0.713922 | 0.985330 | — | — | — |
| windows_stream_handle.test | LINK | 0.204262 | 0.669645 | 0.802719 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.214103 | 0.722315 | 0.996929 | — | — | — |
| writable_pipe.test | LINK | 0.409594 | 2.978477 | 2.545150 | — | — | — |
| writable_pipe_select.test | LINK | 0.472470 | 3.118462 | 2.679193 | — | — | — |
| write.test | RUN | 1.708934 | 15.606257 | 13.918179 | 0.001987 | 0.002134 | 0.001866 |
| write_select.test | RUN | 1.731311 | 15.708555 | 14.195098 | 0.001968 | 0.002090 | 0.001838 |
| write_at.test | RUN | 1.754255 | 20.903654 | 17.829635 | 0.002002 | 0.002058 | 0.001940 |
| write_at_select.test | RUN | 1.767553 | 20.888154 | 18.000471 | 0.002192 | 0.002351 | 0.002118 |
| any_executor.test | RUN | 0.684085 | 6.918256 | 5.774176 | 0.001719 | 0.002192 | 0.001752 |
| blocking.test | RUN | 1.498512 | 9.078369 | 11.662882 | 0.003480 | 0.003579 | 0.003237 |
| blocking_adaptation.test | RUN | 0.754670 | 3.804842 | 5.177606 | 0.002106 | 0.002068 | 0.002176 |
| context_as.test | RUN | 0.436880 | 2.671584 | 1.762359 | 0.001514 | 0.001543 | 0.001482 |
| executor.test | RUN | 0.110335 | 0.250250 | 0.315187 | 0.001369 | 0.001350 | 0.001369 |
| inline_exception_handling.test | RUN | 1.405969 | 8.353663 | 11.626916 | 0.002450 | 0.002427 | 0.002425 |
| invocable_archetype.test | RUN | 0.104034 | 0.252224 | 0.298183 | 0.001495 | 0.001483 | 0.001327 |
| mapping.test | RUN | 1.506803 | 8.452156 | 11.043268 | 0.002575 | 0.002486 | 0.002481 |
| outstanding_work.test | RUN | 0.692301 | 3.696801 | 4.947936 | 0.002090 | 0.002324 | 0.002389 |
| prefer_only.test | RUN | 0.221316 | 1.468849 | 1.112192 | 0.001350 | 0.001653 | 0.001410 |
| relationship.test | RUN | 0.541776 | 3.249284 | 5.010942 | 0.001644 | 0.002236 | 0.002106 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.013×, 0.989× | 0.993× |
| clang | 1.004× | 0.999×, 1.009× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001265s | 0.001316s | 0.001327s | byte equality observed |
| any_completion_executor_select.test | 10 | 0.001215s | 0.001239s | 0.001242s | byte equality observed |
| any_completion_handler.test | 10 | 0.001005s | 0.001012s | 0.001037s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001019s | 0.001033s | 0.001027s | byte equality observed |
| any_io_executor.test | 7 | 0.001220s | 0.001243s | 0.001273s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001189s | 0.001230s | 0.001254s | byte equality observed |
| append.test | 10 | 0.000981s | 0.000998s | 0.000995s | byte equality observed |
| append_select.test | 10 | 0.000974s | 0.000966s | 0.000967s | byte equality observed |
| as_tuple.test | 10 | 0.001039s | 0.001052s | 0.001042s | byte equality observed |
| as_tuple_select.test | 10 | 0.000975s | 0.000978s | 0.000990s | byte equality observed |
| bind_allocator.test | 1 | 0.001510s | 0.001494s | 0.001558s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001207s | 0.001243s | 0.001224s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000909s | 0.000921s | 0.000912s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000814s | 0.000798s | 0.000820s | byte equality observed |
| bind_executor.test | 1 | 0.001509s | 0.001491s | 0.001598s | byte equality observed |
| bind_executor_select.test | 1 | 0.001747s | 0.001727s | 0.001807s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000918s | 0.000917s | 0.000905s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000877s | 0.000903s | 0.000870s | byte equality observed |
| buffer.test | 10 | 0.000848s | 0.000842s | 0.000825s | byte equality observed |
| buffer_select.test | 10 | 0.000838s | 0.000827s | 0.000830s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001037s | 0.001036s | 0.001049s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001040s | 0.001010s | 0.001022s | byte equality observed |
| buffered_stream.test | 10 | 0.001058s | 0.001010s | 0.001017s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000993s | 0.001013s | 0.001010s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001010s | 0.001010s | 0.000992s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001005s | 0.000998s | 0.001017s | byte equality observed |
| buffers_iterator.test | 10 | 0.000830s | 0.000821s | 0.000845s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000793s | 0.000831s | 0.000789s | byte equality observed |
| cancel_after.test | 1 | 0.003237s | 0.003377s | 0.003677s | byte equality observed |
| cancel_after_select.test | 1 | 0.002846s | 0.002601s | 0.002932s | byte equality observed |
| cancel_at.test | 1 | 0.003462s | 0.003484s | 0.004066s | byte equality observed |
| cancel_at_select.test | 1 | 0.003620s | 0.003436s | 0.003510s | byte equality observed |
| co_composed.test | 10 | 0.000855s | 0.000873s | 0.000820s | byte equality observed |
| co_composed_select.test | 10 | 0.000817s | 0.000806s | 0.000810s | byte equality observed |
| compose.test | 1 | 0.001568s | 0.001515s | 0.001574s | byte equality observed |
| compose_select.test | 1 | 0.001270s | 0.001239s | 0.001290s | byte equality observed |
| composed.test | 1 | 0.001837s | 0.001821s | 0.001912s | byte equality observed |
| composed_select.test | 1 | 0.001425s | 0.001485s | 0.001512s | byte equality observed |
| config.test | 10 | 0.000923s | 0.000936s | 0.000906s | byte equality observed |
| config_select.test | 10 | 0.000890s | 0.000906s | 0.000885s | byte equality observed |
| connect_pipe.test | 10 | 0.000910s | 0.000919s | 0.000877s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000897s | 0.000898s | 0.000887s | byte equality observed |
| consign.test | 10 | 0.000890s | 0.000900s | 0.000891s | byte equality observed |
| consign_select.test | 10 | 0.000851s | 0.000851s | 0.000841s | byte equality observed |
| deadline_timer.test | 1 | 0.002349s | 0.002265s | 0.002348s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002056s | 0.001952s | 0.002044s | byte equality observed |
| deferred.test | 10 | 0.000840s | 0.000842s | 0.000853s | byte equality observed |
| deferred_select.test | 10 | 0.000758s | 0.000760s | 0.000760s | byte equality observed |
| disposition.test | 10 | 0.000791s | 0.000810s | 0.000807s | byte equality observed |
| disposition_select.test | 10 | 0.000789s | 0.000794s | 0.000802s | byte equality observed |
| error.test | 10 | 0.000765s | 0.000781s | 0.000775s | byte equality observed |
| error_select.test | 10 | 0.000762s | 0.000776s | 0.000777s | byte equality observed |
| inline_executor.test | 10 | 0.000766s | 0.000784s | 0.000787s | byte equality observed |
| inline_executor_select.test | 10 | 0.000777s | 0.000781s | 0.000790s | byte equality observed |
| inline_or_executor.test | 10 | 0.000779s | 0.000792s | 0.000777s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000779s | 0.000785s | 0.000794s | byte equality observed |
| io_context.test | 1 | 0.001859s | 0.001756s | 0.001873s | byte equality observed |
| io_context_select.test | 1 | 0.002168s | 0.002073s | 0.002253s | byte equality observed |
| io_context_strand.test | 1 | 0.002163s | 0.002058s | 0.002216s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001803s | 0.001788s | 0.001815s | byte equality observed |
| ip_host_name.test | 10 | 0.000852s | 0.000847s | 0.000858s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000749s | 0.000772s | 0.000773s | byte equality observed |
| ip_icmp.test | 10 | 0.000791s | 0.000790s | 0.000777s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000789s | 0.000796s | 0.000777s | byte equality observed |
| ip_multicast.test | 10 | 0.000858s | 0.000858s | 0.000856s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000846s | 0.000841s | 0.000839s | byte equality observed |
| ip_tcp.test | 10 | 0.001060s | 0.001059s | 0.001061s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001026s | 0.001016s | 0.001013s | byte equality observed |
| ip_udp.test | 10 | 0.000873s | 0.000867s | 0.000852s | byte equality observed |
| ip_udp_select.test | 10 | 0.000864s | 0.000849s | 0.000842s | byte equality observed |
| ip_unicast.test | 10 | 0.000831s | 0.000821s | 0.000811s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000812s | 0.000815s | 0.000810s | byte equality observed |
| ip_v6_only.test | 10 | 0.000827s | 0.000824s | 0.000814s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000814s | 0.000815s | 0.000800s | byte equality observed |
| is_read_buffered.test | 10 | 0.000771s | 0.000757s | 0.000737s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000759s | 0.000754s | 0.000752s | byte equality observed |
| is_write_buffered.test | 10 | 0.000764s | 0.000758s | 0.000759s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000762s | 0.000760s | 0.000752s | byte equality observed |
| prepend.test | 10 | 0.000825s | 0.000836s | 0.000815s | byte equality observed |
| prepend_select.test | 10 | 0.000809s | 0.000832s | 0.000785s | byte equality observed |
| read.test | 10 | 0.001118s | 0.001169s | 0.001082s | byte equality observed |
| read_at.test | 10 | 0.001322s | 0.001470s | 0.001323s | byte equality observed |
| read_at_select.test | 10 | 0.001324s | 0.001495s | 0.001327s | byte equality observed |
| read_select.test | 10 | 0.001117s | 0.001179s | 0.001081s | byte equality observed |
| read_until.test | 10 | 0.000955s | 0.000959s | 0.000894s | byte equality observed |
| read_until_select.test | 10 | 0.000978s | 0.000958s | 0.000905s | byte equality observed |
| recycling_allocator.test | 10 | 0.000820s | 0.000810s | 0.000819s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000833s | 0.000818s | 0.000817s | byte equality observed |
| signal_set.test | 10 | 0.000857s | 0.000842s | 0.000832s | byte equality observed |
| signal_set_select.test | 10 | 0.000860s | 0.000861s | 0.000845s | byte equality observed |
| socket_base.test | 10 | 0.000927s | 0.000921s | 0.000917s | byte equality observed |
| socket_base_select.test | 10 | 0.000926s | 0.000928s | 0.000894s | byte equality observed |
| spawn.test | 10 | 0.000988s | 0.000982s | 0.000982s | byte equality observed |
| spawn_select.test | 10 | 0.000984s | 0.000972s | 0.000963s | byte equality observed |
| static_thread_pool.test | 10 | 0.000834s | 0.000816s | 0.000815s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000790s | 0.000784s | 0.000763s | byte equality observed |
| strand.test | 1 | 0.001760s | 0.001827s | 0.001759s | byte equality observed |
| strand_select.test | 1 | 0.001507s | 0.001465s | 0.001531s | byte equality observed |
| streambuf.test | 10 | 0.000887s | 0.000888s | 0.000861s | byte equality observed |
| streambuf_select.test | 10 | 0.000838s | 0.000856s | 0.000856s | byte equality observed |
| thread_pool.test | 10 | 0.001575s | 0.001560s | 0.001604s | byte equality observed |
| thread_pool_select.test | 10 | 0.001519s | 0.001528s | 0.001607s | byte equality observed |
| write.test | 10 | 0.001208s | 0.001183s | 0.001207s | byte equality observed |
| write_at.test | 10 | 0.001326s | 0.001339s | 0.001281s | byte equality observed |
| write_at_select.test | 10 | 0.001298s | 0.001284s | 0.001297s | byte equality observed |
| write_select.test | 10 | 0.001192s | 0.001200s | 0.001161s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
