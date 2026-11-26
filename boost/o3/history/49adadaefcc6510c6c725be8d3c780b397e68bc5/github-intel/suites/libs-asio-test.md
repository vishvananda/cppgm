# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.516271 | 3.495208 | 2.885139 | 0.001888 | 0.002100 | 0.001656 |
| any_completion_executor_select.test | RUN | 0.530667 | 3.485816 | 3.025130 | 0.001662 | 0.002002 | 0.001770 |
| any_completion_handler.test | RUN | 0.600090 | 3.202353 | 2.633486 | 0.001456 | 0.001713 | 0.001296 |
| any_completion_handler_select.test | RUN | 0.597775 | 3.273618 | 2.819822 | 0.001539 | 0.001682 | 0.001254 |
| any_io_executor.test | RUN | 0.551296 | 3.739120 | 3.186744 | 0.001538 | 0.001906 | 0.001678 |
| any_io_executor_select.test | RUN | 0.568099 | 3.664576 | 3.282642 | 0.001631 | 0.002057 | 0.001554 |
| append.test | RUN | 0.505990 | 2.984353 | 2.389996 | 0.001212 | 0.001796 | 0.001367 |
| append_select.test | RUN | 0.516687 | 3.062883 | 2.381278 | 0.001248 | 0.001498 | 0.001191 |
| as_tuple.test | RUN | 0.665222 | 3.633317 | 3.348102 | 0.001576 | 0.001336 | 0.001334 |
| as_tuple_select.test | RUN | 0.672375 | 3.587978 | 3.336192 | 0.001316 | 0.001654 | 0.001297 |
| associated_allocator.test | LINK | 0.125186 | 0.293795 | 0.348388 | — | — | — |
| associated_allocator_select.test | LINK | 0.128267 | 0.290760 | 0.358168 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.138354 | 0.317874 | 0.382467 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.140737 | 0.322885 | 0.404354 | — | — | — |
| associated_executor.test | LINK | 0.201983 | 0.573686 | 0.634217 | — | — | — |
| associated_executor_select.test | LINK | 0.200508 | 0.555727 | 0.639721 | — | — | — |
| associated_immediate_executor.test | LINK | 0.182519 | 0.514763 | 0.599596 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.185757 | 0.514150 | 0.558545 | — | — | — |
| associator.test | LINK | 0.101428 | 0.238229 | 0.293382 | — | — | — |
| associator_select.test | LINK | 0.103141 | 0.246190 | 0.291122 | — | — | — |
| awaitable.test | LINK | 0.102812 | 0.243222 | 0.287435 | — | — | — |
| awaitable_select.test | LINK | 0.104145 | 0.244791 | 0.284629 | — | — | — |
| basic_datagram_socket.test | LINK | 0.321558 | 0.774465 | 1.095938 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.327089 | 0.796975 | 1.124776 | — | — | — |
| basic_deadline_timer.test | LINK | 0.384261 | 0.929317 | 1.254121 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.393816 | 0.923690 | 1.265269 | — | — | — |
| basic_file.test | LINK | 0.097461 | 0.237471 | 0.288300 | — | — | — |
| basic_file_select.test | LINK | 0.103817 | 0.243659 | 0.288838 | — | — | — |
| basic_random_access_file.test | LINK | 0.106184 | 0.244499 | 0.292941 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.106203 | 0.241379 | 0.289689 | — | — | — |
| basic_raw_socket.test | LINK | 0.315699 | 0.770185 | 1.113561 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.331784 | 0.794060 | 1.147971 | — | — | — |
| basic_readable_pipe.test | LINK | 0.316602 | 0.741736 | 0.961022 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.326128 | 0.782342 | 1.163321 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.324234 | 0.764100 | 1.098455 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.324965 | 0.782803 | 1.134518 | — | — | — |
| basic_signal_set.test | LINK | 0.299757 | 0.711886 | 0.861419 | — | — | — |
| basic_signal_set_select.test | LINK | 0.314648 | 0.753451 | 1.088357 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.325771 | 0.776987 | 1.116933 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.332437 | 0.785014 | 1.130118 | — | — | — |
| basic_stream_file.test | LINK | 0.098766 | 0.245044 | 0.295018 | — | — | — |
| basic_stream_file_select.test | LINK | 0.101527 | 0.246843 | 0.288483 | — | — | — |
| basic_stream_socket.test | LINK | 0.319042 | 0.762402 | 1.108673 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.328498 | 0.785452 | 1.121934 | — | — | — |
| basic_streambuf.test | LINK | 0.155701 | 0.350545 | 0.428455 | — | — | — |
| basic_streambuf_select.test | LINK | 0.154062 | 0.351069 | 0.434292 | — | — | — |
| basic_waitable_timer.test | LINK | 0.306302 | 0.727029 | 1.030710 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.306506 | 0.744740 | 1.053581 | — | — | — |
| basic_writable_pipe.test | LINK | 0.309821 | 0.741518 | 0.964150 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.330400 | 0.791548 | 1.163835 | — | — | — |
| bind_allocator.test | RUN | 0.552839 | 2.985351 | 2.588613 | 0.001802 | 0.001804 | 0.001712 |
| bind_allocator_select.test | RUN | 0.568166 | 3.064805 | 2.594636 | 0.001487 | 0.001397 | 0.001560 |
| bind_cancellation_slot.test | RUN | 0.568465 | 3.039853 | 2.641035 | 0.000929 | 0.001056 | 0.000924 |
| bind_cancellation_slot_select.test | RUN | 0.565345 | 3.045964 | 2.524022 | 0.000935 | 0.000996 | 0.000937 |
| bind_executor.test | RUN | 0.382611 | 2.077060 | 1.667812 | 0.001635 | 0.001721 | 0.001667 |
| bind_executor_select.test | RUN | 0.391673 | 2.084833 | 1.634746 | 0.001454 | 0.001521 | 0.001414 |
| bind_immediate_executor.test | RUN | 0.283436 | 1.705347 | 1.041827 | 0.000919 | 0.001004 | 0.000887 |
| bind_immediate_executor_select.test | RUN | 0.291797 | 1.681677 | 1.146206 | 0.000938 | 0.000967 | 0.000865 |
| buffer.test | RUN | 0.169986 | 0.719441 | 0.615431 | 0.000930 | 0.000928 | 0.000880 |
| buffer_select.test | RUN | 0.167339 | 0.700855 | 0.615811 | 0.000880 | 0.000907 | 0.000825 |
| buffer_registration.test | LINK | 0.127193 | 0.347306 | 0.355660 | — | — | — |
| buffer_registration_select.test | LINK | 0.129060 | 0.344238 | 0.355373 | — | — | — |
| buffered_read_stream.test | RUN | 0.657550 | 4.611452 | 3.648265 | 0.001205 | 0.001734 | 0.001768 |
| buffered_read_stream_select.test | RUN | 0.666067 | 4.657715 | 3.791294 | 0.001138 | 0.001687 | 0.001602 |
| buffered_stream.test | RUN | 0.871481 | 7.319882 | 6.683963 | 0.001560 | 0.001810 | 0.001568 |
| buffered_stream_select.test | RUN | 0.929141 | 7.369347 | 6.405497 | 0.001448 | 0.001674 | 0.001283 |
| buffered_write_stream.test | RUN | 1.099764 | 6.429253 | 5.699188 | 0.001723 | 0.001689 | 0.001713 |
| buffered_write_stream_select.test | RUN | 1.110457 | 6.507539 | 5.499616 | 0.001394 | 0.001847 | 0.001469 |
| buffers_iterator.test | RUN | 0.315263 | 0.560952 | 0.871829 | 0.001248 | 0.001478 | 0.001308 |
| buffers_iterator_select.test | RUN | 0.308430 | 0.558579 | 0.873302 | 0.001199 | 0.001233 | 0.001055 |
| cancel_after.test | RUN | 0.901788 | 4.985307 | 4.077949 | 0.002941 | 0.003542 | 0.002947 |
| cancel_after_select.test | RUN | 0.911943 | 4.988437 | 4.031351 | 0.002770 | 0.003979 | 0.003011 |
| cancel_at.test | RUN | 0.785763 | 4.448170 | 4.006596 | 0.002737 | 0.003204 | 0.002696 |
| cancel_at_select.test | RUN | 0.775493 | 4.412959 | 3.992346 | 0.002682 | 0.003528 | 0.002457 |
| cancellation_signal.test | LINK | 0.093067 | 0.204070 | 0.268658 | — | — | — |
| cancellation_signal_select.test | LINK | 0.091516 | 0.203078 | 0.306337 | — | — | — |
| cancellation_state.test | LINK | 0.090504 | 0.205245 | 0.365741 | — | — | — |
| cancellation_state_select.test | LINK | 0.091826 | 0.202389 | 0.361277 | — | — | — |
| cancellation_type.test | LINK | 0.094100 | 0.160857 | 0.289273 | — | — | — |
| cancellation_type_select.test | LINK | 0.092253 | 0.158577 | 0.281212 | — | — | — |
| co_composed.test | RUN | 0.097718 | 0.163954 | 0.280988 | 0.001229 | 0.000964 | 0.001221 |
| co_composed_select.test | RUN | 0.100779 | 0.161442 | 0.286491 | 0.001191 | 0.000991 | 0.001086 |
| co_spawn.test | LINK | 0.102504 | 0.200035 | 0.288426 | — | — | — |
| co_spawn_select.test | LINK | 0.101247 | 0.243938 | 0.284044 | — | — | — |
| completion_condition.test | LINK | 0.134371 | 0.359469 | 0.390035 | — | — | — |
| completion_condition_select.test | LINK | 0.132679 | 0.370541 | 0.387748 | — | — | — |
| compose.test | RUN | 0.674118 | 3.806829 | 3.278007 | 0.002001 | 0.001909 | 0.001864 |
| compose_select.test | RUN | 0.685869 | 3.714225 | 3.277134 | 0.001539 | 0.001430 | 0.001677 |
| composed.test | RUN | 0.668184 | 3.751340 | 3.215015 | 0.001382 | 0.001649 | 0.001460 |
| composed_select.test | RUN | 0.650484 | 3.718335 | 3.178866 | 0.001290 | 0.001699 | 0.001402 |
| config.test | RUN | 0.334791 | 2.445593 | 1.391962 | 0.001300 | 0.001593 | 0.001217 |
| config_select.test | RUN | 0.364584 | 2.495058 | 1.601566 | 0.001217 | 0.001584 | 0.001197 |
| connect.test | LINK | 1.091125 | 8.134478 | 6.836915 | — | — | — |
| connect_select.test | LINK | 1.109854 | 8.061673 | 6.812523 | — | — | — |
| connect_pipe.test | RUN | 0.576520 | 3.055630 | 2.541229 | 0.001301 | 0.001540 | 0.001242 |
| connect_pipe_select.test | RUN | 0.595512 | 3.187033 | 2.702390 | 0.001284 | 0.001410 | 0.001145 |
| consign.test | RUN | 0.502028 | 3.005513 | 2.338799 | 0.001321 | 0.001466 | 0.001278 |
| consign_select.test | RUN | 0.509049 | 3.034885 | 2.298222 | 0.001340 | 0.001572 | 0.001222 |
| coroutine.test | LINK | 0.103848 | 0.284896 | 0.324043 | — | — | — |
| coroutine_select.test | LINK | 0.104938 | 0.285939 | 0.329727 | — | — | — |
| deadline_timer.test | RUN | 0.738690 | 3.942499 | 3.306316 | 0.002573 | 0.003126 | 0.002690 |
| deadline_timer_select.test | RUN | 0.740002 | 3.862769 | 3.297585 | 0.002405 | 0.003338 | 0.002135 |
| deferred.test | RUN | 0.116685 | 0.266065 | 0.314062 | 0.001088 | 0.001415 | 0.001202 |
| deferred_select.test | RUN | 0.111283 | 0.263426 | 0.311618 | 0.001043 | 0.001353 | 0.001102 |
| detached.test | LINK | 0.122768 | 0.293636 | 0.345901 | — | — | — |
| detached_select.test | LINK | 0.126465 | 0.293663 | 0.348781 | — | — | — |
| disposition.test | RUN | 0.124537 | 0.707901 | 0.639265 | 0.000954 | 0.001344 | 0.001213 |
| disposition_select.test | RUN | 0.121797 | 0.703726 | 0.644122 | 0.000888 | 0.001379 | 0.001215 |
| error.test | RUN | 0.110243 | 0.681973 | 0.567109 | 0.000894 | 0.001337 | 0.001285 |
| error_select.test | RUN | 0.109155 | 0.679157 | 0.573681 | 0.000849 | 0.001322 | 0.001176 |
| file_base.test | LINK | 0.139028 | 0.558384 | 0.626412 | — | — | — |
| file_base_select.test | LINK | 0.139180 | 0.558165 | 0.519463 | — | — | — |
| fwd_first.test | LINK | 0.324035 | 0.946174 | 1.113850 | — | — | — |
| fwd_last.test | LINK | 0.321979 | 0.854856 | 1.110433 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.117483 | 0.321433 | 0.404796 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.115787 | 0.321713 | 0.395757 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.553064 | 3.022014 | 2.378142 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.542579 | 3.114296 | 2.339459 | — | — | — |
| generic_raw_protocol.test | LINK | 0.551294 | 3.032290 | 2.374169 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.546445 | 3.135441 | 2.330840 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.493607 | 2.561799 | 2.021413 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.479691 | 2.578029 | 1.985573 | — | — | — |
| generic_stream_protocol.test | LINK | 0.510404 | 2.782702 | 2.170555 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.506821 | 2.833771 | 2.164880 | — | — | — |
| high_resolution_timer.test | LINK | 0.207155 | 0.481080 | 0.617111 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.212927 | 0.490815 | 0.637738 | — | — | — |
| immediate.test | LINK | 0.139380 | 0.368993 | 0.383294 | — | — | — |
| immediate_select.test | LINK | 0.140186 | 0.369140 | 0.381995 | — | — | — |
| inline_executor.test | RUN | 0.171771 | 0.580252 | 0.579434 | 0.000941 | 0.000957 | 0.000856 |
| inline_executor_select.test | RUN | 0.171102 | 0.573248 | 0.579289 | 0.000957 | 0.000996 | 0.000835 |
| inline_or_executor.test | RUN | 0.296142 | 1.753320 | 1.170924 | 0.000897 | 0.000992 | 0.000914 |
| inline_or_executor_select.test | RUN | 0.302525 | 1.795095 | 1.271207 | 0.000976 | 0.001080 | 0.000898 |
| io_context.test | RUN | 0.435132 | 2.722764 | 2.052659 | 0.001808 | 0.002075 | 0.001812 |
| io_context_select.test | RUN | 0.438144 | 2.669880 | 2.048607 | 0.001541 | 0.001871 | 0.001752 |
| io_context_strand.test | RUN | 0.413512 | 2.288369 | 1.790787 | 0.001701 | 0.001728 | 0.001661 |
| io_context_strand_select.test | RUN | 0.418670 | 2.275648 | 1.796184 | 0.001475 | 0.001691 | 0.001506 |
| ip_address.test | LINK | 0.144803 | 0.517521 | 0.794104 | — | — | — |
| ip_address_select.test | LINK | 0.144582 | 0.515667 | 0.797812 | — | — | — |
| ip_address_v4.test | LINK | 0.143487 | 0.544964 | 0.804518 | — | — | — |
| ip_address_v4_select.test | LINK | 0.145173 | 0.545800 | 0.877772 | — | — | — |
| ip_address_v6.test | LINK | 0.164356 | 0.717399 | 1.118401 | — | — | — |
| ip_address_v6_select.test | LINK | 0.166423 | 0.716542 | 1.118164 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.122928 | 0.337601 | 0.681695 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.121215 | 0.334764 | 0.685017 | — | — | — |
| ip_basic_resolver.test | LINK | 0.205131 | 0.483027 | 1.034302 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.208449 | 0.494079 | 1.057544 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.065984 | 0.221568 | 0.293075 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.069510 | 0.217407 | 0.291845 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.122251 | 0.387727 | 0.673841 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.120970 | 0.492978 | 0.677756 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.116662 | 0.470857 | 0.647254 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.113409 | 0.473333 | 0.645455 | — | — | — |
| ip_host_name.test | RUN | 0.123632 | 0.652731 | 0.735910 | 0.000890 | 0.001406 | 0.001173 |
| ip_host_name_select.test | RUN | 0.126722 | 0.650987 | 0.736942 | 0.000845 | 0.001353 | 0.001184 |
| ip_icmp.test | RUN | 0.689488 | 6.348100 | 4.919054 | 0.000933 | 0.001433 | 0.001301 |
| ip_icmp_select.test | RUN | 0.688867 | 6.441862 | 4.820371 | 0.000893 | 0.001306 | 0.001136 |
| ip_multicast.test | RUN | 0.378305 | 3.138286 | 2.754607 | 0.001000 | 0.001499 | 0.001283 |
| ip_multicast_select.test | RUN | 0.387648 | 3.066736 | 2.738344 | 0.000924 | 0.001518 | 0.001184 |
| ip_resolver_query_base.test | LINK | 0.078874 | 0.257800 | 0.308020 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.078815 | 0.260694 | 0.300779 | — | — | — |
| ip_tcp.test | RUN | 1.036510 | 9.409935 | 7.638535 | 0.001265 | 0.001860 | 0.001634 |
| ip_tcp_select.test | RUN | 1.035257 | 9.673032 | 7.450072 | 0.001131 | 0.001903 | 0.001663 |
| ip_udp.test | RUN | 0.739509 | 6.653325 | 5.212791 | 0.001109 | 0.001533 | 0.001472 |
| ip_udp_select.test | RUN | 0.738806 | 6.809227 | 5.110090 | 0.001102 | 0.001670 | 0.001298 |
| ip_unicast.test | RUN | 0.352258 | 2.838986 | 2.435507 | 0.000963 | 0.001411 | 0.001336 |
| ip_unicast_select.test | RUN | 0.355105 | 2.900672 | 2.384758 | 0.001006 | 0.001401 | 0.001363 |
| ip_v6_only.test | RUN | 0.365273 | 2.940899 | 2.542205 | 0.000986 | 0.001416 | 0.001313 |
| ip_v6_only_select.test | RUN | 0.371702 | 3.006679 | 2.487279 | 0.000944 | 0.001366 | 0.001215 |
| is_read_buffered.test | RUN | 0.239546 | 0.856737 | 1.293581 | 0.000856 | 0.001339 | 0.001077 |
| is_read_buffered_select.test | RUN | 0.244025 | 0.885591 | 1.316306 | 0.000909 | 0.001240 | 0.001085 |
| is_write_buffered.test | RUN | 0.242627 | 0.866253 | 1.254345 | 0.000895 | 0.001370 | 0.001122 |
| is_write_buffered_select.test | RUN | 0.240419 | 0.874501 | 1.295426 | 0.000861 | 0.001421 | 0.001032 |
| local_basic_endpoint.test | LINK | 0.118194 | 0.478797 | 0.662594 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.118078 | 0.479179 | 0.654955 | — | — | — |
| local_connect_pair.test | LINK | 0.330875 | 2.906588 | 2.313971 | — | — | — |
| local_connect_pair_select.test | LINK | 0.336029 | 2.874150 | 2.266714 | — | — | — |
| local_datagram_protocol.test | LINK | 0.462820 | 3.801876 | 3.238584 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.468725 | 3.792522 | 3.210952 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.472103 | 3.738399 | 3.249283 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.475399 | 3.785846 | 3.203068 | — | — | — |
| local_stream_protocol.test | LINK | 0.437166 | 3.552488 | 3.074394 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.450189 | 3.534206 | 3.062751 | — | — | — |
| placeholders.test | LINK | 0.075918 | 0.259105 | 0.322864 | — | — | — |
| placeholders_select.test | LINK | 0.074489 | 0.257302 | 0.320745 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.213389 | 0.731749 | 0.960657 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.221015 | 0.757372 | 1.161481 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.211695 | 0.727764 | 0.935350 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.221596 | 0.756663 | 1.148741 | — | — | — |
| posix_descriptor_base.test | LINK | 0.080807 | 0.268266 | 0.314800 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.081299 | 0.271980 | 0.312796 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.464093 | 3.607635 | 2.990140 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.474020 | 3.624195 | 3.046317 | — | — | — |
| prepend.test | RUN | 0.348876 | 2.900290 | 2.359038 | 0.001024 | 0.001414 | 0.001254 |
| prepend_select.test | RUN | 0.353553 | 2.987303 | 2.350228 | 0.000950 | 0.001295 | 0.001329 |
| random_access_file.test | LINK | 0.243902 | 0.646863 | 0.775918 | — | — | — |
| random_access_file_select.test | LINK | 0.273305 | 0.694699 | 0.972575 | — | — | — |
| read.test | RUN | 1.682707 | 18.401360 | 13.547872 | 0.001668 | 0.001812 | 0.001586 |
| read_select.test | RUN | 1.695990 | 18.158828 | 13.693633 | 0.001584 | 0.001757 | 0.001664 |
| read_at.test | RUN | 1.677189 | 23.865767 | 18.230058 | 0.002137 | 0.002597 | 0.002050 |
| read_at_select.test | RUN | 1.677175 | 23.797856 | 18.270670 | 0.002017 | 0.002364 | 0.001980 |
| read_until.test | RUN | 0.866756 | 7.114804 | 5.239521 | 0.001317 | 0.001388 | 0.001335 |
| read_until_select.test | RUN | 0.880666 | 7.191689 | 5.404676 | 0.001394 | 0.001417 | 0.001356 |
| readable_pipe.test | LINK | 0.536668 | 2.918740 | 2.383021 | — | — | — |
| readable_pipe_select.test | LINK | 0.553974 | 3.051426 | 2.518949 | — | — | — |
| recycling_allocator.test | RUN | 0.155379 | 0.409637 | 0.467681 | 0.001418 | 0.001177 | 0.001122 |
| recycling_allocator_select.test | RUN | 0.156376 | 0.410544 | 0.465320 | 0.001367 | 0.001284 | 0.001190 |
| redirect_disposition.test | LINK | 0.699078 | 4.112235 | 3.565118 | — | — | — |
| redirect_disposition_select.test | LINK | 0.710142 | 4.065857 | 3.526910 | — | — | — |
| redirect_error.test | LINK | 0.621951 | 3.400170 | 3.056211 | — | — | — |
| redirect_error_select.test | LINK | 0.631548 | 3.409851 | 3.029963 | — | — | — |
| registered_buffer.test | LINK | 0.152701 | 0.334328 | 0.410716 | — | — | — |
| registered_buffer_select.test | LINK | 0.156163 | 0.337637 | 0.410767 | — | — | — |
| signal_set.test | RUN | 0.519389 | 2.837889 | 2.227590 | 0.001209 | 0.001388 | 0.001160 |
| signal_set_select.test | RUN | 0.541224 | 2.960734 | 2.439473 | 0.001151 | 0.001424 | 0.001240 |
| signal_set_base.test | LINK | 0.117043 | 0.268386 | 0.301392 | — | — | — |
| signal_set_base_select.test | LINK | 0.119767 | 0.265404 | 0.298790 | — | — | — |
| socket_base.test | RUN | 0.626028 | 4.177480 | 3.277554 | 0.001483 | 0.001505 | 0.001268 |
| socket_base_select.test | RUN | 0.638841 | 4.123192 | 3.229408 | 0.001355 | 0.001344 | 0.001200 |
| spawn.test | RUN | 1.104946 | 6.994222 | 5.653289 | 0.001490 | 0.001842 | 0.001350 |
| spawn_select.test | RUN | 1.122364 | 6.949335 | 5.664941 | 0.001542 | 0.001762 | 0.001455 |
| static_thread_pool.test | RUN | 0.276271 | 0.641546 | 0.737360 | 0.001436 | 0.001399 | 0.001155 |
| static_thread_pool_select.test | RUN | 0.286966 | 0.697577 | 0.930735 | 0.001217 | 0.001292 | 0.001116 |
| steady_timer.test | LINK | 0.305979 | 0.702548 | 0.994910 | — | — | — |
| steady_timer_select.test | LINK | 0.324200 | 0.734910 | 1.017149 | — | — | — |
| strand.test | RUN | 0.686258 | 3.970228 | 3.390326 | 0.002147 | 0.002201 | 0.001867 |
| strand_select.test | RUN | 0.699329 | 3.929407 | 3.349138 | 0.001470 | 0.002082 | 0.001544 |
| stream_file.test | LINK | 0.288570 | 0.636441 | 0.756911 | — | — | — |
| stream_file_select.test | LINK | 0.311845 | 0.592869 | 0.965700 | — | — | — |
| streambuf.test | RUN | 0.179834 | 0.372055 | 0.538711 | 0.001187 | 0.000933 | 0.001114 |
| streambuf_select.test | RUN | 0.158580 | 0.365146 | 0.523320 | 0.000924 | 0.000971 | 0.000876 |
| system_timer.test | LINK | 0.452145 | 2.538706 | 2.111258 | — | — | — |
| system_timer_select.test | LINK | 0.454051 | 2.467295 | 1.955490 | — | — | — |
| system_context.test | LINK | 0.191016 | 0.424495 | 0.458173 | — | — | — |
| system_context_select.test | LINK | 0.198612 | 0.446706 | 0.570274 | — | — | — |
| system_executor.test | LINK | 0.259708 | 1.423907 | 0.929735 | — | — | — |
| system_executor_select.test | LINK | 0.273212 | 1.378841 | 1.074417 | — | — | — |
| this_coro.test | LINK | 0.070859 | 0.160232 | 0.180174 | — | — | — |
| this_coro_select.test | LINK | 0.073488 | 0.158256 | 0.180281 | — | — | — |
| thread_pool.test | RUN | 0.311745 | 1.833942 | 1.207950 | 0.001759 | 0.001653 | 0.001482 |
| thread_pool_select.test | RUN | 0.322310 | 1.859213 | 1.310350 | 0.001819 | 0.001510 | 0.001391 |
| time_traits.test | LINK | 0.161783 | 0.335256 | 0.363768 | — | — | — |
| time_traits_select.test | LINK | 0.160572 | 0.378949 | 0.364193 | — | — | — |
| ts_buffer.test | LINK | 0.153729 | 0.564368 | 0.395073 | — | — | — |
| ts_buffer_select.test | LINK | 0.154750 | 0.557540 | 0.391128 | — | — | — |
| ts_executor.test | LINK | 0.219764 | 0.781817 | 0.608285 | — | — | — |
| ts_executor_select.test | LINK | 0.231858 | 0.823683 | 0.734076 | — | — | — |
| ts_internet.test | LINK | 0.240151 | 0.849329 | 0.767584 | — | — | — |
| ts_internet_select.test | LINK | 0.248247 | 0.877731 | 0.995608 | — | — | — |
| ts_io_context.test | LINK | 0.195042 | 0.644552 | 0.756676 | — | — | — |
| ts_io_context_select.test | LINK | 0.204891 | 0.702952 | 0.943342 | — | — | — |
| ts_net.test | LINK | 0.289063 | 1.016102 | 1.515161 | — | — | — |
| ts_net_select.test | LINK | 0.294449 | 1.036383 | 1.534379 | — | — | — |
| ts_netfwd.test | LINK | 0.288449 | 1.027693 | 1.512344 | — | — | — |
| ts_netfwd_select.test | LINK | 0.301831 | 1.058827 | 1.550097 | — | — | — |
| ts_socket.test | LINK | 0.239209 | 0.799080 | 1.163324 | — | — | — |
| ts_socket_select.test | LINK | 0.241675 | 0.825364 | 1.173532 | — | — | — |
| ts_timer.test | LINK | 0.211478 | 0.705090 | 1.015578 | — | — | — |
| ts_timer_select.test | LINK | 0.215221 | 0.739922 | 1.024628 | — | — | — |
| use_awaitable.test | LINK | 0.068921 | 0.234569 | 0.291970 | — | — | — |
| use_awaitable_select.test | LINK | 0.070416 | 0.233624 | 0.289346 | — | — | — |
| wait_traits.test | LINK | 0.069480 | 0.236798 | 0.286848 | — | — | — |
| wait_traits_select.test | LINK | 0.070431 | 0.233076 | 0.288107 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.069054 | 0.237836 | 0.288516 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.067519 | 0.234261 | 0.287627 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.066948 | 0.239058 | 0.288692 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.066295 | 0.236707 | 0.284775 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.068434 | 0.237413 | 0.288872 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.067605 | 0.234493 | 0.287087 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.067622 | 0.239816 | 0.282319 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.067025 | 0.234759 | 0.283203 | — | — | — |
| windows_object_handle.test | LINK | 0.192977 | 0.668092 | 0.766690 | — | — | — |
| windows_object_handle_select.test | LINK | 0.201990 | 0.699330 | 0.957107 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.204007 | 0.693184 | 0.845075 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.207060 | 0.735148 | 1.043292 | — | — | — |
| windows_random_access_handle.test | LINK | 0.193681 | 0.661554 | 0.756530 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.201575 | 0.697741 | 0.950938 | — | — | — |
| windows_stream_handle.test | LINK | 0.191802 | 0.653079 | 0.759743 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.201846 | 0.688799 | 0.964335 | — | — | — |
| writable_pipe.test | LINK | 0.370995 | 2.958995 | 2.470258 | — | — | — |
| writable_pipe_select.test | LINK | 0.380329 | 3.070165 | 2.584813 | — | — | — |
| write.test | RUN | 1.553754 | 15.433538 | 13.540251 | 0.001635 | 0.001668 | 0.001662 |
| write_select.test | RUN | 1.637053 | 15.296828 | 13.515961 | 0.001710 | 0.001704 | 0.001608 |
| write_at.test | RUN | 1.700456 | 20.413468 | 17.042066 | 0.001887 | 0.001889 | 0.001786 |
| write_at_select.test | RUN | 1.714685 | 20.445795 | 17.299357 | 0.001460 | 0.002075 | 0.001854 |
| any_executor.test | RUN | 0.652069 | 6.675865 | 5.545329 | 0.001830 | 0.001721 | 0.001828 |
| blocking.test | RUN | 1.456727 | 8.929078 | 11.276419 | 0.003436 | 0.003130 | 0.003268 |
| blocking_adaptation.test | RUN | 0.727698 | 3.799503 | 5.013913 | 0.002064 | 0.002004 | 0.001929 |
| context_as.test | RUN | 0.419465 | 2.650059 | 1.723951 | 0.001211 | 0.001411 | 0.001267 |
| executor.test | RUN | 0.103781 | 0.246058 | 0.302702 | 0.001192 | 0.001282 | 0.001111 |
| inline_exception_handling.test | RUN | 1.431827 | 8.383461 | 10.930971 | 0.003255 | 0.002284 | 0.002229 |
| invocable_archetype.test | RUN | 0.104131 | 0.240346 | 0.303345 | 0.001158 | 0.001300 | 0.001072 |
| mapping.test | RUN | 1.379104 | 8.079543 | 11.337270 | 0.002413 | 0.002322 | 0.002357 |
| outstanding_work.test | RUN | 0.659776 | 3.552897 | 4.883620 | 0.002009 | 0.002040 | 0.002083 |
| prefer_only.test | RUN | 0.214951 | 1.400625 | 1.070384 | 0.001259 | 0.001244 | 0.001118 |
| relationship.test | RUN | 0.491550 | 3.438803 | 4.583987 | 0.001465 | 0.002108 | 0.001489 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.997×, 1.008× | 0.981× |
| clang | 0.992× | 0.990×, 0.995× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001215s | 0.001254s | 0.001253s | byte equality observed |
| any_completion_executor_select.test | 8 | 0.001198s | 0.001193s | 0.001203s | byte equality observed |
| any_completion_handler.test | 10 | 0.000990s | 0.000989s | 0.000962s | byte equality observed |
| any_completion_handler_select.test | 7 | 0.001012s | 0.001009s | 0.000980s | byte equality observed |
| any_io_executor.test | 6 | 0.001170s | 0.001199s | 0.001206s | byte equality observed |
| any_io_executor_select.test | 10 | 0.001188s | 0.001196s | 0.001181s | byte equality observed |
| append.test | 10 | 0.000959s | 0.000955s | 0.000912s | byte equality observed |
| append_select.test | 10 | 0.000948s | 0.000941s | 0.000930s | byte equality observed |
| as_tuple.test | 10 | 0.001019s | 0.001017s | 0.001012s | byte equality observed |
| as_tuple_select.test | 10 | 0.000968s | 0.000959s | 0.000922s | byte equality observed |
| bind_allocator.test | 1 | 0.001400s | 0.001409s | 0.001405s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001100s | 0.001123s | 0.001138s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000876s | 0.000881s | 0.000888s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000795s | 0.000779s | 0.000792s | byte equality observed |
| bind_executor.test | 1 | 0.001407s | 0.001345s | 0.001426s | byte equality observed |
| bind_executor_select.test | 1 | 0.001670s | 0.001499s | 0.001652s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000884s | 0.000903s | 0.000883s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000879s | 0.000869s | 0.000844s | byte equality observed |
| buffer.test | 10 | 0.000822s | 0.000830s | 0.000840s | byte equality observed |
| buffer_select.test | 10 | 0.000824s | 0.000815s | 0.000806s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001009s | 0.001015s | 0.001035s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.000986s | 0.000985s | 0.001000s | byte equality observed |
| buffered_stream.test | 10 | 0.000994s | 0.000990s | 0.000991s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000996s | 0.000988s | 0.000992s | byte equality observed |
| buffered_write_stream.test | 10 | 0.000981s | 0.000998s | 0.000990s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000974s | 0.000998s | 0.000961s | byte equality observed |
| buffers_iterator.test | 10 | 0.000817s | 0.000797s | 0.000812s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000760s | 0.000760s | 0.000771s | byte equality observed |
| cancel_after.test | 1 | 0.002963s | 0.002548s | 0.002944s | byte equality observed |
| cancel_after_select.test | 1 | 0.002469s | 0.002125s | 0.002403s | byte equality observed |
| cancel_at.test | 1 | 0.002965s | 0.002680s | 0.003168s | byte equality observed |
| cancel_at_select.test | 1 | 0.002854s | 0.002773s | 0.003148s | byte equality observed |
| co_composed.test | 10 | 0.000843s | 0.000821s | 0.000815s | byte equality observed |
| co_composed_select.test | 10 | 0.000780s | 0.000761s | 0.000787s | byte equality observed |
| compose.test | 1 | 0.001409s | 0.001327s | 0.001482s | byte equality observed |
| compose_select.test | 1 | 0.001194s | 0.001151s | 0.001155s | byte equality observed |
| composed.test | 1 | 0.001669s | 0.001502s | 0.001694s | byte equality observed |
| composed_select.test | 1 | 0.001315s | 0.001200s | 0.001372s | byte equality observed |
| config.test | 10 | 0.000893s | 0.000897s | 0.000896s | byte equality observed |
| config_select.test | 10 | 0.000853s | 0.000869s | 0.000845s | byte equality observed |
| connect_pipe.test | 10 | 0.000888s | 0.000884s | 0.000873s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000869s | 0.000874s | 0.000860s | byte equality observed |
| consign.test | 10 | 0.000878s | 0.000899s | 0.000838s | byte equality observed |
| consign_select.test | 10 | 0.000810s | 0.000801s | 0.000803s | byte equality observed |
| deadline_timer.test | 1 | 0.002131s | 0.002123s | 0.002282s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001848s | 0.001855s | 0.001814s | byte equality observed |
| deferred.test | 10 | 0.000821s | 0.000827s | 0.000820s | byte equality observed |
| deferred_select.test | 10 | 0.000734s | 0.000737s | 0.000734s | byte equality observed |
| disposition.test | 10 | 0.000774s | 0.000781s | 0.000773s | byte equality observed |
| disposition_select.test | 10 | 0.000777s | 0.000788s | 0.000766s | byte equality observed |
| error.test | 10 | 0.000765s | 0.000769s | 0.000753s | byte equality observed |
| error_select.test | 10 | 0.000763s | 0.000766s | 0.000757s | byte equality observed |
| inline_executor.test | 10 | 0.000766s | 0.000768s | 0.000762s | byte equality observed |
| inline_executor_select.test | 10 | 0.000767s | 0.000765s | 0.000766s | byte equality observed |
| inline_or_executor.test | 10 | 0.000776s | 0.000775s | 0.000762s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000771s | 0.000773s | 0.000764s | byte equality observed |
| io_context.test | 1 | 0.001708s | 0.001739s | 0.001693s | byte equality observed |
| io_context_select.test | 1 | 0.001848s | 0.001690s | 0.002066s | byte equality observed |
| io_context_strand.test | 1 | 0.001964s | 0.002064s | 0.002179s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001720s | 0.001690s | 0.001781s | byte equality observed |
| ip_host_name.test | 10 | 0.000843s | 0.000835s | 0.000841s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000742s | 0.000757s | 0.000755s | byte equality observed |
| ip_icmp.test | 10 | 0.000774s | 0.000785s | 0.000759s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000762s | 0.000778s | 0.000759s | byte equality observed |
| ip_multicast.test | 10 | 0.000838s | 0.000838s | 0.000830s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000817s | 0.000830s | 0.000812s | byte equality observed |
| ip_tcp.test | 10 | 0.001032s | 0.001028s | 0.001019s | byte equality observed |
| ip_tcp_select.test | 10 | 0.000997s | 0.000995s | 0.000986s | byte equality observed |
| ip_udp.test | 10 | 0.000846s | 0.000847s | 0.000833s | byte equality observed |
| ip_udp_select.test | 10 | 0.000841s | 0.000839s | 0.000829s | byte equality observed |
| ip_unicast.test | 10 | 0.000811s | 0.000805s | 0.000789s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000798s | 0.000792s | 0.000786s | byte equality observed |
| ip_v6_only.test | 10 | 0.000805s | 0.000809s | 0.000788s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000794s | 0.000799s | 0.000779s | byte equality observed |
| is_read_buffered.test | 10 | 0.000747s | 0.000746s | 0.000739s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000746s | 0.000737s | 0.000723s | byte equality observed |
| is_write_buffered.test | 10 | 0.000744s | 0.000734s | 0.000726s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000749s | 0.000735s | 0.000740s | byte equality observed |
| prepend.test | 10 | 0.000799s | 0.000800s | 0.000785s | byte equality observed |
| prepend_select.test | 10 | 0.000779s | 0.000787s | 0.000774s | byte equality observed |
| read.test | 10 | 0.001093s | 0.001154s | 0.001061s | byte equality observed |
| read_at.test | 10 | 0.001301s | 0.001437s | 0.001295s | byte equality observed |
| read_at_select.test | 10 | 0.001296s | 0.001433s | 0.001292s | byte equality observed |
| read_select.test | 10 | 0.001089s | 0.001154s | 0.001049s | byte equality observed |
| read_until.test | 10 | 0.000896s | 0.000943s | 0.000872s | byte equality observed |
| read_until_select.test | 10 | 0.000930s | 0.000938s | 0.000870s | byte equality observed |
| recycling_allocator.test | 10 | 0.000805s | 0.000830s | 0.000740s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000840s | 0.000822s | 0.000771s | byte equality observed |
| signal_set.test | 10 | 0.000833s | 0.000842s | 0.000833s | byte equality observed |
| signal_set_select.test | 10 | 0.000830s | 0.000846s | 0.000835s | byte equality observed |
| socket_base.test | 10 | 0.000884s | 0.000904s | 0.000895s | byte equality observed |
| socket_base_select.test | 10 | 0.000878s | 0.000914s | 0.000883s | byte equality observed |
| spawn.test | 10 | 0.000967s | 0.000965s | 0.000977s | byte equality observed |
| spawn_select.test | 10 | 0.000960s | 0.000956s | 0.000973s | byte equality observed |
| static_thread_pool.test | 10 | 0.000804s | 0.000799s | 0.000787s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000769s | 0.000802s | 0.000767s | byte equality observed |
| strand.test | 1 | 0.001688s | 0.001745s | 0.001801s | byte equality observed |
| strand_select.test | 1 | 0.001419s | 0.001412s | 0.001438s | byte equality observed |
| streambuf.test | 10 | 0.000876s | 0.000861s | 0.000900s | byte equality observed |
| streambuf_select.test | 10 | 0.000848s | 0.000828s | 0.000844s | byte equality observed |
| thread_pool.test | 10 | 0.001577s | 0.001502s | 0.001536s | byte equality observed |
| thread_pool_select.test | 10 | 0.001521s | 0.001500s | 0.001556s | byte equality observed |
| write.test | 10 | 0.001183s | 0.001158s | 0.001174s | byte equality observed |
| write_at.test | 10 | 0.001295s | 0.001312s | 0.001256s | byte equality observed |
| write_at_select.test | 10 | 0.001304s | 0.001314s | 0.001250s | byte equality observed |
| write_select.test | 10 | 0.001193s | 0.001153s | 0.001131s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
