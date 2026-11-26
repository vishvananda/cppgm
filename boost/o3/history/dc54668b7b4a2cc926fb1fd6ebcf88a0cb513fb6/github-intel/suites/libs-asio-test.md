# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.532547 | 3.444869 | 3.010459 | 0.001901 | 0.001893 | 0.001891 |
| any_completion_executor_select.test | RUN | 0.540640 | 3.413839 | 3.151495 | 0.001674 | 0.002121 | 0.001906 |
| any_completion_handler.test | RUN | 0.591120 | 3.144942 | 2.763121 | 0.001526 | 0.001464 | 0.001639 |
| any_completion_handler_select.test | RUN | 0.619330 | 3.212167 | 2.980940 | 0.001578 | 0.001494 | 0.001494 |
| any_io_executor.test | RUN | 0.558760 | 3.680001 | 3.313643 | 0.001627 | 0.001868 | 0.002162 |
| any_io_executor_select.test | RUN | 0.570555 | 3.625179 | 3.372732 | 0.001409 | 0.001844 | 0.002052 |
| append.test | RUN | 0.517626 | 2.911092 | 2.459445 | 0.001326 | 0.001290 | 0.001550 |
| append_select.test | RUN | 0.520828 | 3.008032 | 2.477097 | 0.001292 | 0.001291 | 0.001417 |
| as_tuple.test | RUN | 0.673482 | 3.562786 | 3.457558 | 0.001270 | 0.001415 | 0.001446 |
| as_tuple_select.test | RUN | 0.675445 | 3.523590 | 3.439038 | 0.001291 | 0.001362 | 0.001402 |
| associated_allocator.test | LINK | 0.127577 | 0.288433 | 0.362896 | — | — | — |
| associated_allocator_select.test | LINK | 0.129876 | 0.286459 | 0.366767 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.143168 | 0.317296 | 0.390818 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.143166 | 0.317068 | 0.395792 | — | — | — |
| associated_executor.test | LINK | 0.205620 | 0.545370 | 0.643211 | — | — | — |
| associated_executor_select.test | LINK | 0.205031 | 0.541058 | 0.639294 | — | — | — |
| associated_immediate_executor.test | LINK | 0.184818 | 0.506907 | 0.570933 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.189394 | 0.503562 | 0.573234 | — | — | — |
| associator.test | LINK | 0.106208 | 0.235939 | 0.298419 | — | — | — |
| associator_select.test | LINK | 0.103085 | 0.233511 | 0.303070 | — | — | — |
| awaitable.test | LINK | 0.105833 | 0.238163 | 0.298479 | — | — | — |
| awaitable_select.test | LINK | 0.106875 | 0.235393 | 0.300364 | — | — | — |
| basic_datagram_socket.test | LINK | 0.325604 | 0.755801 | 1.152903 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.327955 | 0.789939 | 1.179928 | — | — | — |
| basic_deadline_timer.test | LINK | 0.384027 | 0.895740 | 1.284823 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.392202 | 0.910579 | 1.315970 | — | — | — |
| basic_file.test | LINK | 0.106446 | 0.241278 | 0.299113 | — | — | — |
| basic_file_select.test | LINK | 0.103675 | 0.239022 | 0.298349 | — | — | — |
| basic_random_access_file.test | LINK | 0.105295 | 0.237066 | 0.301805 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.098903 | 0.233867 | 0.301225 | — | — | — |
| basic_raw_socket.test | LINK | 0.326320 | 0.752580 | 1.123827 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.327649 | 0.779806 | 1.149724 | — | — | — |
| basic_readable_pipe.test | LINK | 0.312074 | 0.736122 | 0.979846 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.324155 | 0.773904 | 1.193447 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.323227 | 0.757205 | 1.118614 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.330781 | 0.778300 | 1.143485 | — | — | — |
| basic_signal_set.test | LINK | 0.302799 | 0.694198 | 0.882492 | — | — | — |
| basic_signal_set_select.test | LINK | 0.311169 | 0.744148 | 1.086949 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.327315 | 0.759246 | 1.129101 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.335834 | 0.785520 | 1.154603 | — | — | — |
| basic_stream_file.test | LINK | 0.103167 | 0.236028 | 0.300329 | — | — | — |
| basic_stream_file_select.test | LINK | 0.103646 | 0.244908 | 0.296731 | — | — | — |
| basic_stream_socket.test | LINK | 0.324199 | 0.765783 | 1.118886 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.333083 | 0.785758 | 1.156146 | — | — | — |
| basic_streambuf.test | LINK | 0.157259 | 0.350405 | 0.431639 | — | — | — |
| basic_streambuf_select.test | LINK | 0.155683 | 0.348705 | 0.427821 | — | — | — |
| basic_waitable_timer.test | LINK | 0.309277 | 0.717574 | 1.045798 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.315785 | 0.739856 | 1.082245 | — | — | — |
| basic_writable_pipe.test | LINK | 0.314982 | 0.722830 | 0.970220 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.329721 | 0.781426 | 1.197298 | — | — | — |
| bind_allocator.test | RUN | 0.553982 | 2.962200 | 2.666328 | 0.001910 | 0.001677 | 0.001320 |
| bind_allocator_select.test | RUN | 0.568304 | 2.982677 | 2.632350 | 0.001657 | 0.001736 | 0.001686 |
| bind_cancellation_slot.test | RUN | 0.565827 | 3.002799 | 2.753762 | 0.000912 | 0.001008 | 0.001032 |
| bind_cancellation_slot_select.test | RUN | 0.582603 | 2.979389 | 2.612878 | 0.000961 | 0.001016 | 0.001091 |
| bind_executor.test | RUN | 0.391580 | 2.039476 | 1.721263 | 0.001702 | 0.001594 | 0.001678 |
| bind_executor_select.test | RUN | 0.398846 | 2.060921 | 1.713696 | 0.001560 | 0.001497 | 0.001518 |
| bind_immediate_executor.test | RUN | 0.289875 | 1.684518 | 1.090479 | 0.001019 | 0.000940 | 0.000999 |
| bind_immediate_executor_select.test | RUN | 0.298820 | 1.639173 | 1.186846 | 0.000978 | 0.000945 | 0.000972 |
| buffer.test | RUN | 0.173660 | 0.694037 | 0.633137 | 0.000952 | 0.000901 | 0.000929 |
| buffer_select.test | RUN | 0.170793 | 0.691882 | 0.631724 | 0.000949 | 0.000883 | 0.000920 |
| buffer_registration.test | LINK | 0.133078 | 0.342145 | 0.370655 | — | — | — |
| buffer_registration_select.test | LINK | 0.132919 | 0.337835 | 0.369288 | — | — | — |
| buffered_read_stream.test | RUN | 0.676492 | 4.529477 | 3.754730 | 0.001257 | 0.001722 | 0.002052 |
| buffered_read_stream_select.test | RUN | 0.691884 | 4.659583 | 3.903272 | 0.001230 | 0.001667 | 0.001760 |
| buffered_stream.test | RUN | 0.943799 | 7.293248 | 6.918467 | 0.001616 | 0.001711 | 0.001639 |
| buffered_stream_select.test | RUN | 1.000478 | 7.257159 | 6.659646 | 0.001704 | 0.001630 | 0.001667 |
| buffered_write_stream.test | RUN | 1.096784 | 6.305226 | 5.902736 | 0.001926 | 0.001846 | 0.001674 |
| buffered_write_stream_select.test | RUN | 1.121283 | 6.404262 | 5.663660 | 0.001564 | 0.001644 | 0.001737 |
| buffers_iterator.test | RUN | 0.328010 | 0.556342 | 0.905702 | 0.001144 | 0.001388 | 0.001178 |
| buffers_iterator_select.test | RUN | 0.319838 | 0.543983 | 0.902031 | 0.001268 | 0.001225 | 0.001217 |
| cancel_after.test | RUN | 0.922760 | 4.938238 | 4.252796 | 0.003671 | 0.003376 | 0.004176 |
| cancel_after_select.test | RUN | 0.918237 | 4.905229 | 4.232740 | 0.002637 | 0.003469 | 0.003715 |
| cancel_at.test | RUN | 0.859585 | 4.402476 | 4.173257 | 0.003320 | 0.002982 | 0.003505 |
| cancel_at_select.test | RUN | 0.855763 | 4.333733 | 4.129470 | 0.003201 | 0.002980 | 0.003337 |
| cancellation_signal.test | LINK | 0.093180 | 0.202643 | 0.337669 | — | — | — |
| cancellation_signal_select.test | LINK | 0.092777 | 0.200558 | 0.361781 | — | — | — |
| cancellation_state.test | LINK | 0.100874 | 0.200868 | 0.373444 | — | — | — |
| cancellation_state_select.test | LINK | 0.127460 | 0.203317 | 0.371497 | — | — | — |
| cancellation_type.test | LINK | 0.106814 | 0.159572 | 0.303240 | — | — | — |
| cancellation_type_select.test | LINK | 0.101903 | 0.159746 | 0.304414 | — | — | — |
| co_composed.test | RUN | 0.105368 | 0.159619 | 0.293738 | 0.001166 | 0.000942 | 0.001295 |
| co_composed_select.test | RUN | 0.104578 | 0.166887 | 0.292058 | 0.001220 | 0.001348 | 0.001234 |
| co_spawn.test | LINK | 0.104449 | 0.221127 | 0.299585 | — | — | — |
| co_spawn_select.test | LINK | 0.101645 | 0.237784 | 0.296016 | — | — | — |
| completion_condition.test | LINK | 0.138119 | 0.361861 | 0.394580 | — | — | — |
| completion_condition_select.test | LINK | 0.140579 | 0.364282 | 0.391422 | — | — | — |
| compose.test | RUN | 0.695021 | 3.748186 | 3.388532 | 0.002187 | 0.001705 | 0.001915 |
| compose_select.test | RUN | 0.703056 | 3.690420 | 3.349252 | 0.001393 | 0.001742 | 0.001416 |
| composed.test | RUN | 0.688342 | 3.684132 | 3.334943 | 0.001526 | 0.001526 | 0.001599 |
| composed_select.test | RUN | 0.666124 | 3.630215 | 3.329437 | 0.001486 | 0.001278 | 0.001276 |
| config.test | RUN | 0.324543 | 2.408856 | 1.519314 | 0.001412 | 0.001371 | 0.001360 |
| config_select.test | RUN | 0.364845 | 2.488193 | 1.698125 | 0.001279 | 0.001363 | 0.001371 |
| connect.test | LINK | 1.114109 | 7.949757 | 7.151671 | — | — | — |
| connect_select.test | LINK | 1.125854 | 7.941419 | 7.223032 | — | — | — |
| connect_pipe.test | RUN | 0.585218 | 2.982425 | 2.621829 | 0.001391 | 0.001407 | 0.001622 |
| connect_pipe_select.test | RUN | 0.604939 | 3.098224 | 2.837129 | 0.001263 | 0.001264 | 0.001548 |
| consign.test | RUN | 0.514069 | 2.932739 | 2.417590 | 0.001458 | 0.001249 | 0.001364 |
| consign_select.test | RUN | 0.522453 | 2.958647 | 2.410850 | 0.001377 | 0.001452 | 0.001458 |
| coroutine.test | LINK | 0.109412 | 0.282475 | 0.332129 | — | — | — |
| coroutine_select.test | LINK | 0.109776 | 0.278936 | 0.330293 | — | — | — |
| deadline_timer.test | RUN | 0.765868 | 3.811386 | 3.411864 | 0.002720 | 0.002684 | 0.003212 |
| deadline_timer_select.test | RUN | 0.767922 | 3.724151 | 3.404361 | 0.002616 | 0.003220 | 0.002788 |
| deferred.test | RUN | 0.117846 | 0.256290 | 0.318474 | 0.001274 | 0.001366 | 0.001296 |
| deferred_select.test | RUN | 0.114942 | 0.256029 | 0.320504 | 0.001230 | 0.001244 | 0.001308 |
| detached.test | LINK | 0.131277 | 0.284143 | 0.354833 | — | — | — |
| detached_select.test | LINK | 0.137217 | 0.280036 | 0.355989 | — | — | — |
| disposition.test | RUN | 0.140832 | 0.696670 | 0.660507 | 0.000999 | 0.001387 | 0.001423 |
| disposition_select.test | RUN | 0.128231 | 0.692689 | 0.660404 | 0.001040 | 0.001300 | 0.001326 |
| error.test | RUN | 0.118960 | 0.674399 | 0.585001 | 0.001005 | 0.001476 | 0.001378 |
| error_select.test | RUN | 0.118971 | 0.678071 | 0.592207 | 0.000971 | 0.001425 | 0.001293 |
| file_base.test | LINK | 0.145318 | 0.547889 | 0.654023 | — | — | — |
| file_base_select.test | LINK | 0.146992 | 0.547772 | 0.556057 | — | — | — |
| fwd_first.test | LINK | 0.341089 | 0.915403 | 1.170784 | — | — | — |
| fwd_last.test | LINK | 0.339998 | 0.845911 | 1.176961 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.130137 | 0.317888 | 0.416813 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.128632 | 0.317209 | 0.417131 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.586032 | 2.995094 | 2.459952 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.579602 | 3.085038 | 2.451900 | — | — | — |
| generic_raw_protocol.test | LINK | 0.577503 | 2.999056 | 2.477111 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.574068 | 3.078999 | 2.466630 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.495696 | 2.535062 | 2.121726 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.494317 | 2.553858 | 2.110438 | — | — | — |
| generic_stream_protocol.test | LINK | 0.527642 | 2.725550 | 2.284953 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.530053 | 2.784925 | 2.283198 | — | — | — |
| high_resolution_timer.test | LINK | 0.214013 | 0.479602 | 0.658949 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.218600 | 0.490030 | 0.675398 | — | — | — |
| immediate.test | LINK | 0.148297 | 0.362779 | 0.405612 | — | — | — |
| immediate_select.test | LINK | 0.150698 | 0.364360 | 0.406315 | — | — | — |
| inline_executor.test | RUN | 0.181802 | 0.572513 | 0.609942 | 0.000961 | 0.000946 | 0.000963 |
| inline_executor_select.test | RUN | 0.182658 | 0.571188 | 0.607085 | 0.000958 | 0.000984 | 0.000957 |
| inline_or_executor.test | RUN | 0.302080 | 1.785405 | 1.224399 | 0.001008 | 0.000929 | 0.000939 |
| inline_or_executor_select.test | RUN | 0.309936 | 1.798931 | 1.336130 | 0.000974 | 0.000962 | 0.000963 |
| io_context.test | RUN | 0.453078 | 2.684233 | 2.151632 | 0.001959 | 0.001858 | 0.001935 |
| io_context_select.test | RUN | 0.456005 | 2.625001 | 2.167226 | 0.001677 | 0.001855 | 0.001918 |
| io_context_strand.test | RUN | 0.424716 | 2.254556 | 1.866927 | 0.001868 | 0.001720 | 0.001931 |
| io_context_strand_select.test | RUN | 0.427236 | 2.215558 | 1.855840 | 0.001555 | 0.001542 | 0.001719 |
| ip_address.test | LINK | 0.150477 | 0.507564 | 0.511777 | — | — | — |
| ip_address_select.test | LINK | 0.150750 | 0.506454 | 0.511426 | — | — | — |
| ip_address_v4.test | LINK | 0.152805 | 0.536642 | 0.790544 | — | — | — |
| ip_address_v4_select.test | LINK | 0.152159 | 0.533107 | 0.626152 | — | — | — |
| ip_address_v6.test | LINK | 0.174763 | 0.705865 | 1.097896 | — | — | — |
| ip_address_v6_select.test | LINK | 0.172686 | 0.705230 | 1.083607 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.129761 | 0.332712 | 0.686471 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.129930 | 0.331648 | 0.698069 | — | — | — |
| ip_basic_resolver.test | LINK | 0.213961 | 0.480018 | 1.060247 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.217855 | 0.556906 | 1.073958 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.072473 | 0.222925 | 0.302032 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.071975 | 0.190884 | 0.292876 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.131048 | 0.488459 | 0.680584 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.128553 | 0.502191 | 0.681115 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.125731 | 0.474029 | 0.657180 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.123990 | 0.479302 | 0.651995 | — | — | — |
| ip_host_name.test | RUN | 0.138294 | 0.651051 | 0.763752 | 0.000939 | 0.001267 | 0.001281 |
| ip_host_name_select.test | RUN | 0.135024 | 0.646415 | 0.760863 | 0.000885 | 0.001389 | 0.001136 |
| ip_icmp.test | RUN | 0.709994 | 6.304567 | 5.045755 | 0.000981 | 0.001409 | 0.001359 |
| ip_icmp_select.test | RUN | 0.705309 | 6.462798 | 4.881571 | 0.000987 | 0.001268 | 0.001158 |
| ip_multicast.test | RUN | 0.388350 | 3.102601 | 2.799832 | 0.001064 | 0.001470 | 0.001382 |
| ip_multicast_select.test | RUN | 0.396713 | 3.078038 | 2.784295 | 0.001056 | 0.001444 | 0.001298 |
| ip_resolver_query_base.test | LINK | 0.083718 | 0.259980 | 0.306162 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.081899 | 0.259344 | 0.304766 | — | — | — |
| ip_tcp.test | RUN | 1.052796 | 9.345868 | 7.799811 | 0.001427 | 0.001753 | 0.001968 |
| ip_tcp_select.test | RUN | 1.061082 | 9.742623 | 7.540699 | 0.001294 | 0.001721 | 0.001803 |
| ip_udp.test | RUN | 0.754086 | 6.644884 | 5.337358 | 0.001128 | 0.001426 | 0.001454 |
| ip_udp_select.test | RUN | 0.742646 | 6.841577 | 5.182334 | 0.001030 | 0.001389 | 0.001507 |
| ip_unicast.test | RUN | 0.357110 | 2.879189 | 2.499831 | 0.001067 | 0.001411 | 0.001556 |
| ip_unicast_select.test | RUN | 0.360532 | 2.891293 | 2.453686 | 0.001031 | 0.001510 | 0.001469 |
| ip_v6_only.test | RUN | 0.368834 | 2.948698 | 2.619518 | 0.001051 | 0.001388 | 0.001304 |
| ip_v6_only_select.test | RUN | 0.377408 | 3.047416 | 2.576300 | 0.000983 | 0.001520 | 0.001330 |
| is_read_buffered.test | RUN | 0.246427 | 0.868206 | 1.338251 | 0.000955 | 0.001225 | 0.001211 |
| is_read_buffered_select.test | RUN | 0.251543 | 0.884679 | 1.359887 | 0.000890 | 0.001208 | 0.001315 |
| is_write_buffered.test | RUN | 0.249581 | 0.880843 | 1.308169 | 0.000927 | 0.001364 | 0.001304 |
| is_write_buffered_select.test | RUN | 0.250864 | 0.886739 | 1.334380 | 0.000862 | 0.001312 | 0.001309 |
| local_basic_endpoint.test | LINK | 0.125367 | 0.485816 | 0.661774 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.126736 | 0.480879 | 0.662762 | — | — | — |
| local_connect_pair.test | LINK | 0.343684 | 2.922246 | 2.351880 | — | — | — |
| local_connect_pair_select.test | LINK | 0.348715 | 2.882479 | 2.331447 | — | — | — |
| local_datagram_protocol.test | LINK | 0.475555 | 3.844053 | 3.322324 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.483530 | 3.836396 | 3.248076 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.487627 | 3.743597 | 3.318165 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.482618 | 3.801800 | 3.295564 | — | — | — |
| local_stream_protocol.test | LINK | 0.449397 | 3.587115 | 3.150385 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.461395 | 3.611315 | 3.128296 | — | — | — |
| placeholders.test | LINK | 0.079804 | 0.258672 | 0.327890 | — | — | — |
| placeholders_select.test | LINK | 0.078362 | 0.261784 | 0.324867 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.215680 | 0.735352 | 0.991673 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.224140 | 0.776713 | 1.188874 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.219878 | 0.732671 | 0.992935 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.226775 | 0.773755 | 1.206338 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086871 | 0.273407 | 0.321354 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.085335 | 0.270701 | 0.318048 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.480873 | 3.617141 | 3.139821 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.513676 | 3.666891 | 3.187261 | — | — | — |
| prepend.test | RUN | 0.518847 | 2.908399 | 2.476531 | 0.001316 | 0.001334 | 0.001473 |
| prepend_select.test | RUN | 0.520491 | 2.938544 | 2.469679 | 0.001246 | 0.001488 | 0.001395 |
| random_access_file.test | LINK | 0.290098 | 0.655082 | 0.799316 | — | — | — |
| random_access_file_select.test | LINK | 0.303243 | 0.697048 | 1.006591 | — | — | — |
| read.test | RUN | 1.706872 | 18.603919 | 14.414472 | 0.002052 | 0.002038 | 0.002144 |
| read_select.test | RUN | 1.709554 | 18.654707 | 14.580732 | 0.001387 | 0.002080 | 0.002046 |
| read_at.test | RUN | 1.696850 | 24.813150 | 19.550394 | 0.002018 | 0.002565 | 0.002266 |
| read_at_select.test | RUN | 1.719279 | 24.739180 | 19.836852 | 0.002196 | 0.002234 | 0.002146 |
| read_until.test | RUN | 0.882058 | 7.307638 | 5.309279 | 0.001424 | 0.001759 | 0.001694 |
| read_until_select.test | RUN | 0.888665 | 7.446285 | 5.494047 | 0.001303 | 0.001484 | 0.001581 |
| readable_pipe.test | LINK | 0.535830 | 2.983372 | 2.451868 | — | — | — |
| readable_pipe_select.test | LINK | 0.559905 | 3.108993 | 2.597643 | — | — | — |
| recycling_allocator.test | RUN | 0.158263 | 0.421795 | 0.470028 | 0.001315 | 0.001305 | 0.001439 |
| recycling_allocator_select.test | RUN | 0.154985 | 0.416854 | 0.486450 | 0.001180 | 0.001443 | 0.001345 |
| redirect_disposition.test | LINK | 0.704101 | 4.213493 | 3.771749 | — | — | — |
| redirect_disposition_select.test | LINK | 0.718159 | 4.211683 | 3.723286 | — | — | — |
| redirect_error.test | LINK | 0.632653 | 3.483769 | 3.262778 | — | — | — |
| redirect_error_select.test | LINK | 0.641836 | 3.468847 | 3.261850 | — | — | — |
| registered_buffer.test | LINK | 0.151939 | 0.339646 | 0.432774 | — | — | — |
| registered_buffer_select.test | LINK | 0.153424 | 0.341185 | 0.429763 | — | — | — |
| signal_set.test | RUN | 0.521906 | 2.991254 | 2.293611 | 0.001318 | 0.001523 | 0.001471 |
| signal_set_select.test | RUN | 0.544359 | 3.065091 | 2.516855 | 0.001437 | 0.001414 | 0.001302 |
| signal_set_base.test | LINK | 0.122815 | 0.272814 | 0.316559 | — | — | — |
| signal_set_base_select.test | LINK | 0.122996 | 0.274805 | 0.313326 | — | — | — |
| socket_base.test | RUN | 0.641830 | 4.355988 | 3.521611 | 0.001459 | 0.001448 | 0.001516 |
| socket_base_select.test | RUN | 0.645241 | 4.223485 | 3.503075 | 0.001283 | 0.001463 | 0.001622 |
| spawn.test | RUN | 1.116814 | 7.256061 | 6.167439 | 0.001453 | 0.001619 | 0.001858 |
| spawn_select.test | RUN | 1.132671 | 7.204370 | 6.148405 | 0.001487 | 0.002000 | 0.001830 |
| static_thread_pool.test | RUN | 0.275279 | 0.662375 | 0.790553 | 0.001444 | 0.001404 | 0.001414 |
| static_thread_pool_select.test | RUN | 0.287137 | 0.696983 | 0.996622 | 0.001270 | 0.001202 | 0.001405 |
| steady_timer.test | LINK | 0.319325 | 0.734765 | 1.095318 | — | — | — |
| steady_timer_select.test | LINK | 0.317867 | 0.742516 | 1.130184 | — | — | — |
| strand.test | RUN | 0.696814 | 4.038699 | 3.683979 | 0.002259 | 0.002146 | 0.002301 |
| strand_select.test | RUN | 0.706185 | 4.008681 | 3.615068 | 0.001994 | 0.001575 | 0.001817 |
| stream_file.test | LINK | 0.292673 | 0.687011 | 0.854991 | — | — | — |
| stream_file_select.test | LINK | 0.305449 | 0.596801 | 1.024770 | — | — | — |
| streambuf.test | RUN | 0.168720 | 0.378400 | 0.572985 | 0.001004 | 0.001039 | 0.001358 |
| streambuf_select.test | RUN | 0.170455 | 0.375948 | 0.450037 | 0.000933 | 0.000960 | 0.001024 |
| system_timer.test | LINK | 0.459416 | 2.593672 | 2.186288 | — | — | — |
| system_timer_select.test | LINK | 0.463641 | 2.555878 | 2.093943 | — | — | — |
| system_context.test | LINK | 0.193452 | 0.434761 | 0.484173 | — | — | — |
| system_context_select.test | LINK | 0.200180 | 0.468461 | 0.610255 | — | — | — |
| system_executor.test | LINK | 0.267013 | 1.449194 | 0.981381 | — | — | — |
| system_executor_select.test | LINK | 0.273826 | 1.425141 | 1.091307 | — | — | — |
| this_coro.test | LINK | 0.072914 | 0.161425 | 0.188075 | — | — | — |
| this_coro_select.test | LINK | 0.072792 | 0.161437 | 0.190545 | — | — | — |
| thread_pool.test | RUN | 0.321380 | 1.871368 | 1.289379 | 0.001655 | 0.001688 | 0.001816 |
| thread_pool_select.test | RUN | 0.328585 | 1.902899 | 1.405160 | 0.001706 | 0.002402 | 0.001720 |
| time_traits.test | LINK | 0.164622 | 0.380001 | 0.391067 | — | — | — |
| time_traits_select.test | LINK | 0.163372 | 0.503342 | 0.392463 | — | — | — |
| ts_buffer.test | LINK | 0.161062 | 0.569236 | 0.413661 | — | — | — |
| ts_buffer_select.test | LINK | 0.156408 | 0.566466 | 0.414925 | — | — | — |
| ts_executor.test | LINK | 0.226614 | 0.802587 | 0.661749 | — | — | — |
| ts_executor_select.test | LINK | 0.238243 | 0.851879 | 0.982110 | — | — | — |
| ts_internet.test | LINK | 0.251020 | 0.858057 | 1.060586 | — | — | — |
| ts_internet_select.test | LINK | 0.252435 | 0.888911 | 1.318051 | — | — | — |
| ts_io_context.test | LINK | 0.201603 | 0.667569 | 0.788974 | — | — | — |
| ts_io_context_select.test | LINK | 0.208230 | 0.711412 | 1.001283 | — | — | — |
| ts_net.test | LINK | 0.294340 | 1.049494 | 1.587653 | — | — | — |
| ts_net_select.test | LINK | 0.296942 | 1.062073 | 1.644929 | — | — | — |
| ts_netfwd.test | LINK | 0.293157 | 1.042840 | 1.599074 | — | — | — |
| ts_netfwd_select.test | LINK | 0.301485 | 1.077149 | 1.638138 | — | — | — |
| ts_socket.test | LINK | 0.240972 | 0.827725 | 1.219681 | — | — | — |
| ts_socket_select.test | LINK | 0.244230 | 0.837046 | 1.244949 | — | — | — |
| ts_timer.test | LINK | 0.215160 | 0.730609 | 1.061492 | — | — | — |
| ts_timer_select.test | LINK | 0.216882 | 0.762597 | 1.088185 | — | — | — |
| use_awaitable.test | LINK | 0.072463 | 0.246125 | 0.300263 | — | — | — |
| use_awaitable_select.test | LINK | 0.071836 | 0.244173 | 0.301338 | — | — | — |
| wait_traits.test | LINK | 0.074719 | 0.244695 | 0.298376 | — | — | — |
| wait_traits_select.test | LINK | 0.072045 | 0.244451 | 0.293632 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.073928 | 0.246294 | 0.295807 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071215 | 0.245979 | 0.296284 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.075673 | 0.244692 | 0.298377 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.072414 | 0.244694 | 0.293584 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.072823 | 0.243533 | 0.292573 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.073483 | 0.247407 | 0.302640 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071422 | 0.244533 | 0.296466 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.072976 | 0.240805 | 0.296673 | — | — | — |
| windows_object_handle.test | LINK | 0.204551 | 0.670972 | 0.802369 | — | — | — |
| windows_object_handle_select.test | LINK | 0.213236 | 0.705083 | 0.995389 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.207748 | 0.702829 | 0.869495 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.216719 | 0.756891 | 1.086066 | — | — | — |
| windows_random_access_handle.test | LINK | 0.203799 | 0.669464 | 0.798641 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.212668 | 0.710768 | 1.002717 | — | — | — |
| windows_stream_handle.test | LINK | 0.204903 | 0.670561 | 0.789561 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.216170 | 0.716279 | 1.008413 | — | — | — |
| writable_pipe.test | LINK | 0.411767 | 2.997578 | 2.604222 | — | — | — |
| writable_pipe_select.test | LINK | 0.492523 | 3.123246 | 2.710095 | — | — | — |
| write.test | RUN | 1.718088 | 15.741408 | 14.541981 | 0.001854 | 0.001846 | 0.002168 |
| write_select.test | RUN | 1.735657 | 15.829876 | 14.585687 | 0.001716 | 0.001962 | 0.002078 |
| write_at.test | RUN | 1.768843 | 21.112118 | 18.594731 | 0.002148 | 0.002043 | 0.002092 |
| write_at_select.test | RUN | 1.775530 | 21.100491 | 18.635723 | 0.002504 | 0.002058 | 0.002089 |
| any_executor.test | RUN | 0.701057 | 6.940860 | 5.966719 | 0.002356 | 0.002244 | 0.001702 |
| blocking.test | RUN | 1.523973 | 9.080067 | 11.759688 | 0.003457 | 0.003229 | 0.003486 |
| blocking_adaptation.test | RUN | 0.776739 | 3.858366 | 5.259602 | 0.002210 | 0.002025 | 0.002310 |
| context_as.test | RUN | 0.445407 | 2.709662 | 1.814358 | 0.001396 | 0.001581 | 0.001498 |
| executor.test | RUN | 0.111528 | 0.251019 | 0.313668 | 0.001165 | 0.001337 | 0.001444 |
| inline_exception_handling.test | RUN | 1.488217 | 8.512500 | 11.516846 | 0.002394 | 0.002392 | 0.003594 |
| invocable_archetype.test | RUN | 0.109320 | 0.242688 | 0.320937 | 0.001504 | 0.001374 | 0.001154 |
| mapping.test | RUN | 1.536784 | 8.273932 | 11.499336 | 0.002444 | 0.002392 | 0.002589 |
| outstanding_work.test | RUN | 0.685496 | 3.591398 | 5.081397 | 0.002560 | 0.002224 | 0.002352 |
| prefer_only.test | RUN | 0.224184 | 1.450987 | 1.122813 | 0.001541 | 0.001480 | 0.001259 |
| relationship.test | RUN | 0.518815 | 3.491053 | 4.987388 | 0.001568 | 0.002154 | 0.001562 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.000×, 0.999× | 1.004× |
| clang | 0.998× | 0.999×, 0.997× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001228s | 0.001232s | 0.001238s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001213s | 0.001262s | 0.001228s | byte equality observed |
| any_completion_handler.test | 8 | 0.001037s | 0.001017s | 0.001019s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001043s | 0.001027s | 0.001022s | byte equality observed |
| any_io_executor.test | 4 | 0.001218s | 0.001207s | 0.001237s | byte equality observed |
| any_io_executor_select.test | 10 | 0.001203s | 0.001235s | 0.001236s | byte equality observed |
| append.test | 10 | 0.000995s | 0.000970s | 0.000973s | byte equality observed |
| append_select.test | 10 | 0.000966s | 0.000940s | 0.000959s | byte equality observed |
| as_tuple.test | 10 | 0.001044s | 0.001044s | 0.001045s | byte equality observed |
| as_tuple_select.test | 10 | 0.000970s | 0.000967s | 0.000968s | byte equality observed |
| bind_allocator.test | 1 | 0.001482s | 0.001491s | 0.001526s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001173s | 0.001205s | 0.001226s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000922s | 0.000917s | 0.000905s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000808s | 0.000817s | 0.000798s | byte equality observed |
| bind_executor.test | 1 | 0.001468s | 0.001491s | 0.001455s | byte equality observed |
| bind_executor_select.test | 1 | 0.001713s | 0.001716s | 0.001742s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000899s | 0.000917s | 0.000911s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000884s | 0.000927s | 0.000869s | byte equality observed |
| buffer.test | 10 | 0.000851s | 0.000848s | 0.000831s | byte equality observed |
| buffer_select.test | 10 | 0.000835s | 0.000860s | 0.000812s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001033s | 0.001018s | 0.001055s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001012s | 0.000989s | 0.001000s | byte equality observed |
| buffered_stream.test | 10 | 0.001018s | 0.001009s | 0.001017s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001013s | 0.001012s | 0.001009s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001012s | 0.000998s | 0.000994s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001008s | 0.001007s | 0.000986s | byte equality observed |
| buffers_iterator.test | 10 | 0.000837s | 0.000798s | 0.000828s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000809s | 0.000778s | 0.000781s | byte equality observed |
| cancel_after.test | 1 | 0.003275s | 0.003185s | 0.003224s | byte equality observed |
| cancel_after_select.test | 1 | 0.002757s | 0.002741s | 0.002716s | byte equality observed |
| cancel_at.test | 1 | 0.003387s | 0.003466s | 0.003523s | byte equality observed |
| cancel_at_select.test | 1 | 0.003259s | 0.003237s | 0.003374s | byte equality observed |
| co_composed.test | 10 | 0.000855s | 0.000866s | 0.000859s | byte equality observed |
| co_composed_select.test | 10 | 0.000775s | 0.000790s | 0.000793s | byte equality observed |
| compose.test | 1 | 0.001527s | 0.001605s | 0.001582s | byte equality observed |
| compose_select.test | 1 | 0.001240s | 0.001203s | 0.001248s | byte equality observed |
| composed.test | 1 | 0.001811s | 0.001773s | 0.001816s | byte equality observed |
| composed_select.test | 1 | 0.001435s | 0.001347s | 0.001405s | byte equality observed |
| config.test | 10 | 0.000920s | 0.000910s | 0.000935s | byte equality observed |
| config_select.test | 10 | 0.000921s | 0.000889s | 0.000879s | byte equality observed |
| connect_pipe.test | 10 | 0.000903s | 0.000884s | 0.000898s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000869s | 0.000905s | 0.000883s | byte equality observed |
| consign.test | 10 | 0.000903s | 0.000920s | 0.000864s | byte equality observed |
| consign_select.test | 10 | 0.000847s | 0.000837s | 0.000828s | byte equality observed |
| deadline_timer.test | 1 | 0.002307s | 0.002286s | 0.002285s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001942s | 0.001940s | 0.001978s | byte equality observed |
| deferred.test | 10 | 0.000825s | 0.000842s | 0.000837s | byte equality observed |
| deferred_select.test | 10 | 0.000762s | 0.000747s | 0.000759s | byte equality observed |
| disposition.test | 10 | 0.000801s | 0.000788s | 0.000792s | byte equality observed |
| disposition_select.test | 10 | 0.000797s | 0.000797s | 0.000799s | byte equality observed |
| error.test | 10 | 0.000773s | 0.000767s | 0.000788s | byte equality observed |
| error_select.test | 10 | 0.000777s | 0.000765s | 0.000768s | byte equality observed |
| inline_executor.test | 10 | 0.000778s | 0.000795s | 0.000769s | byte equality observed |
| inline_executor_select.test | 10 | 0.000778s | 0.000787s | 0.000767s | byte equality observed |
| inline_or_executor.test | 10 | 0.000787s | 0.000787s | 0.000779s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000784s | 0.000790s | 0.000789s | byte equality observed |
| io_context.test | 1 | 0.001801s | 0.001845s | 0.001903s | byte equality observed |
| io_context_select.test | 1 | 0.002117s | 0.002128s | 0.002202s | byte equality observed |
| io_context_strand.test | 1 | 0.002143s | 0.002086s | 0.002027s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001812s | 0.001760s | 0.001871s | byte equality observed |
| ip_host_name.test | 10 | 0.000850s | 0.000860s | 0.000855s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000774s | 0.000776s | 0.000768s | byte equality observed |
| ip_icmp.test | 10 | 0.000784s | 0.000800s | 0.000784s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000787s | 0.000791s | 0.000764s | byte equality observed |
| ip_multicast.test | 10 | 0.000863s | 0.000847s | 0.000842s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000837s | 0.000838s | 0.000830s | byte equality observed |
| ip_tcp.test | 10 | 0.001051s | 0.001053s | 0.001040s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001011s | 0.001017s | 0.001002s | byte equality observed |
| ip_udp.test | 10 | 0.000864s | 0.000866s | 0.000852s | byte equality observed |
| ip_udp_select.test | 10 | 0.000855s | 0.000859s | 0.000857s | byte equality observed |
| ip_unicast.test | 10 | 0.000824s | 0.000822s | 0.000811s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000812s | 0.000812s | 0.000808s | byte equality observed |
| ip_v6_only.test | 10 | 0.000822s | 0.000822s | 0.000821s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000814s | 0.000819s | 0.000801s | byte equality observed |
| is_read_buffered.test | 10 | 0.000744s | 0.000758s | 0.000752s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000759s | 0.000746s | 0.000741s | byte equality observed |
| is_write_buffered.test | 10 | 0.000759s | 0.000755s | 0.000756s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000753s | 0.000757s | 0.000747s | byte equality observed |
| prepend.test | 10 | 0.000817s | 0.000824s | 0.000807s | byte equality observed |
| prepend_select.test | 10 | 0.000798s | 0.000825s | 0.000779s | byte equality observed |
| read.test | 10 | 0.001107s | 0.001181s | 0.001070s | byte equality observed |
| read_at.test | 10 | 0.001327s | 0.001499s | 0.001319s | byte equality observed |
| read_at_select.test | 10 | 0.001316s | 0.001466s | 0.001310s | byte equality observed |
| read_select.test | 10 | 0.001107s | 0.001169s | 0.001074s | byte equality observed |
| read_until.test | 10 | 0.000911s | 0.000964s | 0.000894s | byte equality observed |
| read_until_select.test | 10 | 0.000928s | 0.000978s | 0.000886s | byte equality observed |
| recycling_allocator.test | 10 | 0.000835s | 0.000830s | 0.000755s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000829s | 0.000816s | 0.000775s | byte equality observed |
| signal_set.test | 10 | 0.000868s | 0.000849s | 0.000780s | byte equality observed |
| signal_set_select.test | 10 | 0.000833s | 0.000855s | 0.000826s | byte equality observed |
| socket_base.test | 10 | 0.000924s | 0.000924s | 0.000931s | byte equality observed |
| socket_base_select.test | 10 | 0.000908s | 0.000907s | 0.000910s | byte equality observed |
| spawn.test | 10 | 0.001005s | 0.000984s | 0.000996s | byte equality observed |
| spawn_select.test | 10 | 0.001021s | 0.000998s | 0.000966s | byte equality observed |
| static_thread_pool.test | 10 | 0.000815s | 0.000810s | 0.000823s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000805s | 0.000789s | 0.000778s | byte equality observed |
| strand.test | 1 | 0.001731s | 0.001782s | 0.001753s | byte equality observed |
| strand_select.test | 1 | 0.001445s | 0.001440s | 0.001482s | byte equality observed |
| streambuf.test | 10 | 0.000899s | 0.000894s | 0.000849s | byte equality observed |
| streambuf_select.test | 10 | 0.000857s | 0.000853s | 0.000831s | byte equality observed |
| thread_pool.test | 10 | 0.001544s | 0.001573s | 0.001579s | byte equality observed |
| thread_pool_select.test | 10 | 0.001574s | 0.001590s | 0.001537s | byte equality observed |
| write.test | 10 | 0.001207s | 0.001220s | 0.001172s | byte equality observed |
| write_at.test | 10 | 0.001313s | 0.001305s | 0.001279s | byte equality observed |
| write_at_select.test | 10 | 0.001303s | 0.001326s | 0.001302s | byte equality observed |
| write_select.test | 10 | 0.001188s | 0.001168s | 0.001167s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
