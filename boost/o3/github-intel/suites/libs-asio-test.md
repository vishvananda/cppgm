# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.737450 | 4.711264 | 3.998151 | 0.002630 | 0.002621 | 0.002354 |
| any_completion_executor_select.test | RUN | 0.738868 | 4.703910 | 4.197822 | 0.002423 | 0.002604 | 0.002096 |
| any_completion_handler.test | RUN | 0.833593 | 4.278893 | 3.614247 | 0.001958 | 0.001944 | 0.001932 |
| any_completion_handler_select.test | RUN | 0.824371 | 4.386502 | 3.917126 | 0.001890 | 0.001996 | 0.001765 |
| any_io_executor.test | RUN | 0.762218 | 4.996341 | 4.427175 | 0.002437 | 0.002238 | 0.002181 |
| any_io_executor_select.test | RUN | 0.789859 | 4.946462 | 4.528640 | 0.002156 | 0.002376 | 0.002374 |
| append.test | RUN | 0.707486 | 3.983985 | 3.266396 | 0.001565 | 0.001850 | 0.001728 |
| append_select.test | RUN | 0.718246 | 4.103403 | 3.263122 | 0.001740 | 0.001805 | 0.001728 |
| as_tuple.test | RUN | 0.922853 | 4.846608 | 4.574829 | 0.001524 | 0.001947 | 0.001833 |
| as_tuple_select.test | RUN | 0.923281 | 4.791290 | 4.559681 | 0.001712 | 0.001924 | 0.001810 |
| associated_allocator.test | LINK | 0.181105 | 0.414953 | 0.484427 | — | — | — |
| associated_allocator_select.test | LINK | 0.183172 | 0.409256 | 0.492379 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.196645 | 0.442465 | 0.519776 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.197385 | 0.446589 | 0.542191 | — | — | — |
| associated_executor.test | LINK | 0.288257 | 0.762301 | 0.871000 | — | — | — |
| associated_executor_select.test | LINK | 0.292535 | 0.764301 | 0.877785 | — | — | — |
| associated_immediate_executor.test | LINK | 0.264932 | 0.710835 | 0.818120 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.265836 | 0.711671 | 0.770404 | — | — | — |
| associator.test | LINK | 0.150196 | 0.333326 | 0.404372 | — | — | — |
| associator_select.test | LINK | 0.146945 | 0.333553 | 0.394765 | — | — | — |
| awaitable.test | LINK | 0.146140 | 0.339305 | 0.394683 | — | — | — |
| awaitable_select.test | LINK | 0.146855 | 0.332350 | 0.393524 | — | — | — |
| basic_datagram_socket.test | LINK | 0.459433 | 1.060940 | 1.503290 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.468731 | 1.078145 | 1.554875 | — | — | — |
| basic_deadline_timer.test | LINK | 0.551587 | 1.255755 | 1.722708 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.555554 | 1.290242 | 1.751846 | — | — | — |
| basic_file.test | LINK | 0.149099 | 0.336988 | 0.408113 | — | — | — |
| basic_file_select.test | LINK | 0.143303 | 0.344402 | 0.387745 | — | — | — |
| basic_random_access_file.test | LINK | 0.147901 | 0.331053 | 0.393655 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.148638 | 0.330348 | 0.397438 | — | — | — |
| basic_raw_socket.test | LINK | 0.457917 | 1.066334 | 1.539874 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.465508 | 1.092518 | 1.554591 | — | — | — |
| basic_readable_pipe.test | LINK | 0.439754 | 1.017082 | 1.329616 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.456248 | 1.080510 | 1.590661 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.459475 | 1.060592 | 1.496278 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.464449 | 1.099140 | 1.531989 | — | — | — |
| basic_signal_set.test | LINK | 0.421878 | 0.992308 | 1.187240 | — | — | — |
| basic_signal_set_select.test | LINK | 0.439393 | 1.040568 | 1.469106 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.464563 | 1.058979 | 1.507281 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.469757 | 1.088779 | 1.544313 | — | — | — |
| basic_stream_file.test | LINK | 0.148242 | 0.343425 | 0.410548 | — | — | — |
| basic_stream_file_select.test | LINK | 0.146126 | 0.342420 | 0.407519 | — | — | — |
| basic_stream_socket.test | LINK | 0.448969 | 1.084382 | 1.520652 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.471596 | 1.087607 | 1.527886 | — | — | — |
| basic_streambuf.test | LINK | 0.222992 | 0.481394 | 0.602830 | — | — | — |
| basic_streambuf_select.test | LINK | 0.230083 | 0.490745 | 0.610229 | — | — | — |
| basic_waitable_timer.test | LINK | 0.431551 | 0.997598 | 1.432797 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.439253 | 1.029507 | 1.461920 | — | — | — |
| basic_writable_pipe.test | LINK | 0.440290 | 1.007910 | 1.312154 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.458825 | 1.086539 | 1.606677 | — | — | — |
| bind_allocator.test | RUN | 0.766318 | 4.112003 | 3.624836 | 0.002192 | 0.002198 | 0.002106 |
| bind_allocator_select.test | RUN | 0.784986 | 4.114704 | 3.552499 | 0.001636 | 0.002209 | 0.002044 |
| bind_cancellation_slot.test | RUN | 0.787974 | 4.132766 | 3.637436 | 0.001404 | 0.001989 | 0.001346 |
| bind_cancellation_slot_select.test | RUN | 0.806611 | 4.140007 | 3.509944 | 0.001304 | 0.001375 | 0.001320 |
| bind_executor.test | RUN | 0.514731 | 2.746763 | 2.248531 | 0.002101 | 0.002539 | 0.001993 |
| bind_executor_select.test | RUN | 0.530277 | 2.792207 | 2.199791 | 0.001877 | 0.002497 | 0.001865 |
| bind_immediate_executor.test | RUN | 0.378539 | 2.316442 | 1.403433 | 0.001327 | 0.001307 | 0.001268 |
| bind_immediate_executor_select.test | RUN | 0.394755 | 2.223254 | 1.551469 | 0.001261 | 0.001363 | 0.001269 |
| buffer.test | RUN | 0.227021 | 0.923813 | 0.836771 | 0.001347 | 0.001311 | 0.001222 |
| buffer_select.test | RUN | 0.226237 | 0.915050 | 0.841277 | 0.001201 | 0.001301 | 0.001214 |
| buffer_registration.test | LINK | 0.181107 | 0.455415 | 0.483629 | — | — | — |
| buffer_registration_select.test | LINK | 0.177664 | 0.459177 | 0.490403 | — | — | — |
| buffered_read_stream.test | RUN | 0.898867 | 6.460647 | 5.510623 | 0.001702 | 0.002208 | 0.002182 |
| buffered_read_stream_select.test | RUN | 0.908244 | 6.695771 | 5.398487 | 0.001552 | 0.002224 | 0.002162 |
| buffered_stream.test | RUN | 1.595350 | 9.954081 | 8.995294 | 0.002286 | 0.002183 | 0.002172 |
| buffered_stream_select.test | RUN | 1.639848 | 9.973142 | 8.712496 | 0.002115 | 0.002266 | 0.002149 |
| buffered_write_stream.test | RUN | 1.528021 | 8.591353 | 7.701227 | 0.002237 | 0.002246 | 0.002202 |
| buffered_write_stream_select.test | RUN | 1.549045 | 8.649152 | 7.400851 | 0.002136 | 0.002388 | 0.002087 |
| buffers_iterator.test | RUN | 0.438652 | 0.781683 | 1.209669 | 0.001755 | 0.001741 | 0.001158 |
| buffers_iterator_select.test | RUN | 0.434518 | 0.777886 | 1.213681 | 0.001548 | 0.001742 | 0.001680 |
| cancel_after.test | RUN | 1.267122 | 6.700436 | 5.706379 | 0.004161 | 0.004298 | 0.003966 |
| cancel_after_select.test | RUN | 1.296584 | 6.547657 | 5.644298 | 0.003079 | 0.003667 | 0.004342 |
| cancel_at.test | RUN | 1.232181 | 5.705820 | 5.253287 | 0.003866 | 0.003589 | 0.003208 |
| cancel_at_select.test | RUN | 1.227569 | 5.530060 | 5.203952 | 0.003582 | 0.003324 | 0.003610 |
| cancellation_signal.test | LINK | 0.121679 | 0.263345 | 0.317059 | — | — | — |
| cancellation_signal_select.test | LINK | 0.139024 | 0.267346 | 0.314630 | — | — | — |
| cancellation_state.test | LINK | 0.190370 | 0.266852 | 0.318026 | — | — | — |
| cancellation_state_select.test | LINK | 0.189705 | 0.270423 | 0.311308 | — | — | — |
| cancellation_type.test | LINK | 0.145706 | 0.209015 | 0.408223 | — | — | — |
| cancellation_type_select.test | LINK | 0.148921 | 0.209697 | 0.409584 | — | — | — |
| co_composed.test | RUN | 0.147667 | 0.210240 | 0.396151 | 0.001720 | 0.001292 | 0.001540 |
| co_composed_select.test | RUN | 0.147563 | 0.213917 | 0.393624 | 0.001434 | 0.001291 | 0.001694 |
| co_spawn.test | LINK | 0.150218 | 0.211893 | 0.398551 | — | — | — |
| co_spawn_select.test | LINK | 0.151873 | 0.209286 | 0.406546 | — | — | — |
| completion_condition.test | LINK | 0.189947 | 0.348932 | 0.536935 | — | — | — |
| completion_condition_select.test | LINK | 0.187215 | 0.427863 | 0.535618 | — | — | — |
| compose.test | RUN | 0.966112 | 5.103637 | 4.548722 | 0.002158 | 0.002224 | 0.002236 |
| compose_select.test | RUN | 0.967589 | 5.050315 | 4.499901 | 0.001826 | 0.002198 | 0.002180 |
| composed.test | RUN | 0.925367 | 5.117145 | 4.517986 | 0.001611 | 0.001830 | 0.001780 |
| composed_select.test | RUN | 0.925164 | 5.020509 | 4.460820 | 0.001875 | 0.001712 | 0.001604 |
| config.test | RUN | 0.410457 | 3.190651 | 2.073636 | 0.001662 | 0.001925 | 0.001807 |
| config_select.test | RUN | 0.462476 | 3.489894 | 2.348809 | 0.001904 | 0.001757 | 0.001563 |
| connect.test | LINK | 1.519714 | 10.648769 | 9.428529 | — | — | — |
| connect_select.test | LINK | 1.529083 | 10.668797 | 9.459964 | — | — | — |
| connect_pipe.test | RUN | 0.816655 | 4.094232 | 3.521586 | 0.001762 | 0.001945 | 0.001785 |
| connect_pipe_select.test | RUN | 0.834124 | 4.252534 | 3.771295 | 0.001803 | 0.001790 | 0.001854 |
| consign.test | RUN | 0.704568 | 4.005116 | 3.269398 | 0.001890 | 0.001802 | 0.001805 |
| consign_select.test | RUN | 0.716471 | 4.101321 | 3.261659 | 0.001796 | 0.001784 | 0.001889 |
| coroutine.test | LINK | 0.153440 | 0.398934 | 0.445285 | — | — | — |
| coroutine_select.test | LINK | 0.151914 | 0.400870 | 0.456025 | — | — | — |
| deadline_timer.test | RUN | 1.026596 | 5.287495 | 4.618532 | 0.003427 | 0.003785 | 0.003567 |
| deadline_timer_select.test | RUN | 1.041278 | 5.225847 | 4.538853 | 0.003098 | 0.003671 | 0.003532 |
| deferred.test | RUN | 0.168228 | 0.361079 | 0.440664 | 0.001519 | 0.001754 | 0.001671 |
| deferred_select.test | RUN | 0.163906 | 0.368288 | 0.443717 | 0.001700 | 0.001682 | 0.001646 |
| detached.test | LINK | 0.184210 | 0.410151 | 0.490613 | — | — | — |
| detached_select.test | LINK | 0.186388 | 0.410013 | 0.495600 | — | — | — |
| disposition.test | RUN | 0.216386 | 0.976130 | 0.910426 | 0.001337 | 0.001784 | 0.001587 |
| disposition_select.test | RUN | 0.169128 | 0.974053 | 0.916252 | 0.001364 | 0.001783 | 0.001822 |
| error.test | RUN | 0.155051 | 0.940248 | 0.800970 | 0.001326 | 0.001809 | 0.001558 |
| error_select.test | RUN | 0.154980 | 0.934755 | 0.798517 | 0.001304 | 0.001886 | 0.001770 |
| file_base.test | LINK | 0.188373 | 0.777573 | 0.809720 | — | — | — |
| file_base_select.test | LINK | 0.187940 | 0.750044 | 0.808358 | — | — | — |
| fwd_first.test | LINK | 0.440972 | 1.193487 | 1.531155 | — | — | — |
| fwd_last.test | LINK | 0.434908 | 1.029249 | 1.525024 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.166097 | 0.420080 | 0.556967 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.159756 | 0.427580 | 0.549088 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.755762 | 3.937266 | 3.285682 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.738115 | 4.085786 | 3.195121 | — | — | — |
| generic_raw_protocol.test | LINK | 0.750164 | 3.937367 | 3.286358 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.739871 | 4.087266 | 3.213550 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.642669 | 3.291596 | 2.783385 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.637957 | 3.357239 | 2.733538 | — | — | — |
| generic_stream_protocol.test | LINK | 0.690282 | 3.557196 | 2.992121 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.684295 | 3.683002 | 2.956891 | — | — | — |
| high_resolution_timer.test | LINK | 0.277398 | 0.623811 | 0.851513 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.288469 | 0.650611 | 0.874473 | — | — | — |
| immediate.test | LINK | 0.199869 | 0.481046 | 0.530743 | — | — | — |
| immediate_select.test | LINK | 0.192427 | 0.481902 | 0.523236 | — | — | — |
| inline_executor.test | RUN | 0.233969 | 0.760733 | 0.800798 | 0.001354 | 0.001364 | 0.001207 |
| inline_executor_select.test | RUN | 0.237442 | 0.761397 | 0.806238 | 0.001247 | 0.001332 | 0.001182 |
| inline_or_executor.test | RUN | 0.395322 | 2.318924 | 1.592675 | 0.001281 | 0.001333 | 0.001301 |
| inline_or_executor_select.test | RUN | 0.410225 | 2.353634 | 1.736826 | 0.001226 | 0.001338 | 0.001258 |
| io_context.test | RUN | 0.596569 | 3.564640 | 2.796894 | 0.002379 | 0.002437 | 0.002297 |
| io_context_select.test | RUN | 0.599942 | 3.464147 | 2.813838 | 0.002171 | 0.002420 | 0.002209 |
| io_context_strand.test | RUN | 0.558977 | 3.921379 | 2.497168 | 0.002274 | 0.002862 | 0.002261 |
| io_context_strand_select.test | RUN | 0.559321 | 4.254256 | 2.459792 | 0.002087 | 0.002625 | 0.002117 |
| ip_address.test | LINK | 0.196825 | 1.068401 | 0.682934 | — | — | — |
| ip_address_select.test | LINK | 0.197006 | 1.071244 | 0.693613 | — | — | — |
| ip_address_v4.test | LINK | 0.199058 | 1.137807 | 0.749409 | — | — | — |
| ip_address_v4_select.test | LINK | 0.197402 | 1.143836 | 0.754575 | — | — | — |
| ip_address_v6.test | LINK | 0.228663 | 1.354214 | 0.909443 | — | — | — |
| ip_address_v6_select.test | LINK | 0.231016 | 1.038868 | 0.912935 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.166556 | 0.442729 | 0.588556 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.168174 | 0.447783 | 0.594157 | — | — | — |
| ip_basic_resolver.test | LINK | 0.278174 | 0.643085 | 0.875156 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.285093 | 0.649522 | 0.907398 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.093765 | 0.208954 | 0.244889 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.092952 | 0.205379 | 0.249124 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.166350 | 0.429306 | 0.572268 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.169089 | 0.431039 | 0.572895 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.160681 | 0.415519 | 0.549538 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.158961 | 0.421802 | 0.551592 | — | — | — |
| ip_host_name.test | RUN | 0.174165 | 0.570635 | 0.634022 | 0.001185 | 0.001217 | 0.001571 |
| ip_host_name_select.test | RUN | 0.171414 | 0.575038 | 0.804667 | 0.001220 | 0.001190 | 0.001674 |
| ip_icmp.test | RUN | 0.937318 | 6.524538 | 6.873902 | 0.001277 | 0.001807 | 0.001653 |
| ip_icmp_select.test | RUN | 0.947264 | 6.979354 | 6.716418 | 0.001243 | 0.001780 | 0.001557 |
| ip_multicast.test | RUN | 0.511345 | 4.301756 | 3.817778 | 0.001513 | 0.001888 | 0.001884 |
| ip_multicast_select.test | RUN | 0.519340 | 4.273818 | 3.779452 | 0.001310 | 0.002044 | 0.001898 |
| ip_resolver_query_base.test | LINK | 0.106220 | 0.371234 | 0.429891 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.106709 | 0.367631 | 0.422508 | — | — | — |
| ip_tcp.test | RUN | 1.415556 | 12.661687 | 10.547933 | 0.001720 | 0.002530 | 0.002394 |
| ip_tcp_select.test | RUN | 1.408051 | 13.185144 | 10.233216 | 0.001628 | 0.002296 | 0.002155 |
| ip_udp.test | RUN | 1.005188 | 9.048649 | 7.228308 | 0.001442 | 0.001941 | 0.002022 |
| ip_udp_select.test | RUN | 0.990171 | 9.249204 | 7.029278 | 0.001349 | 0.002112 | 0.001782 |
| ip_unicast.test | RUN | 0.472273 | 3.924653 | 3.349779 | 0.001371 | 0.001956 | 0.001648 |
| ip_unicast_select.test | RUN | 0.479311 | 4.004666 | 3.300921 | 0.001311 | 0.001924 | 0.001718 |
| ip_v6_only.test | RUN | 0.487574 | 4.051301 | 3.439398 | 0.001313 | 0.001898 | 0.001537 |
| ip_v6_only_select.test | RUN | 0.503485 | 4.187447 | 3.407877 | 0.001275 | 0.001930 | 0.001794 |
| is_read_buffered.test | RUN | 0.324998 | 1.217465 | 1.771161 | 0.001275 | 0.001798 | 0.001639 |
| is_read_buffered_select.test | RUN | 0.339535 | 1.238667 | 1.792033 | 0.001189 | 0.001896 | 0.001658 |
| is_write_buffered.test | RUN | 0.410038 | 1.213086 | 1.767831 | 0.001589 | 0.001661 | 0.001484 |
| is_write_buffered_select.test | RUN | 0.431991 | 1.228701 | 1.793168 | 0.001602 | 0.001448 | 0.001458 |
| local_basic_endpoint.test | LINK | 0.255438 | 0.676666 | 0.906091 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.260940 | 0.679540 | 0.906543 | — | — | — |
| local_connect_pair.test | LINK | 0.693923 | 3.916180 | 3.172072 | — | — | — |
| local_connect_pair_select.test | LINK | 0.704291 | 3.936142 | 3.140771 | — | — | — |
| local_datagram_protocol.test | LINK | 0.953065 | 5.165608 | 4.514526 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.969019 | 5.191075 | 4.435128 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.979817 | 5.069356 | 4.412009 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.990359 | 5.129573 | 4.392830 | — | — | — |
| local_stream_protocol.test | LINK | 0.907382 | 4.860340 | 4.170101 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.920883 | 4.880287 | 4.117773 | — | — | — |
| placeholders.test | LINK | 0.166043 | 0.363546 | 0.432377 | — | — | — |
| placeholders_select.test | LINK | 0.160148 | 0.364650 | 0.428456 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.450393 | 1.021867 | 1.338912 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.459932 | 1.078303 | 1.621687 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.436576 | 1.012829 | 1.329884 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.460513 | 1.076229 | 1.609069 | — | — | — |
| posix_descriptor_base.test | LINK | 0.179073 | 0.373231 | 0.437143 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.177854 | 0.377292 | 0.424875 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.951168 | 4.939391 | 4.182296 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.979478 | 5.026394 | 4.262996 | — | — | — |
| prepend.test | RUN | 0.707211 | 4.037413 | 3.296113 | 0.001729 | 0.001960 | 0.001786 |
| prepend_select.test | RUN | 0.721542 | 4.115774 | 3.284876 | 0.001736 | 0.001814 | 0.001607 |
| random_access_file.test | LINK | 0.407452 | 0.916264 | 1.065948 | — | — | — |
| random_access_file_select.test | LINK | 0.420158 | 0.971015 | 1.346228 | — | — | — |
| read.test | RUN | 2.316047 | 24.630563 | 19.198183 | 0.002387 | 0.002260 | 0.002360 |
| read_select.test | RUN | 2.326776 | 24.522270 | 19.356087 | 0.002543 | 0.002346 | 0.002505 |
| read_at.test | RUN | 2.286831 | 32.495961 | 25.636258 | 0.003050 | 0.002938 | 0.002970 |
| read_at_select.test | RUN | 2.303265 | 32.288999 | 25.775930 | 0.002850 | 0.003033 | 0.002842 |
| read_until.test | RUN | 1.199152 | 9.685087 | 7.335180 | 0.002034 | 0.002028 | 0.001816 |
| read_until_select.test | RUN | 1.218255 | 9.674949 | 7.575398 | 0.001910 | 0.001896 | 0.002011 |
| readable_pipe.test | LINK | 0.740994 | 4.040218 | 3.284531 | — | — | — |
| readable_pipe_select.test | LINK | 0.768492 | 4.225323 | 3.526643 | — | — | — |
| recycling_allocator.test | RUN | 0.221305 | 0.578902 | 0.655419 | 0.001618 | 0.001608 | 0.001606 |
| recycling_allocator_select.test | RUN | 0.212777 | 0.578431 | 0.653528 | 0.001289 | 0.001614 | 0.001717 |
| redirect_disposition.test | LINK | 0.961204 | 5.645205 | 5.041949 | — | — | — |
| redirect_disposition_select.test | LINK | 0.983424 | 5.612514 | 4.980042 | — | — | — |
| redirect_error.test | LINK | 0.850629 | 4.707764 | 4.372385 | — | — | — |
| redirect_error_select.test | LINK | 0.884405 | 4.681133 | 4.341185 | — | — | — |
| registered_buffer.test | LINK | 0.203753 | 0.478445 | 0.571350 | — | — | — |
| registered_buffer_select.test | LINK | 0.211856 | 0.480071 | 0.579069 | — | — | — |
| signal_set.test | RUN | 0.711721 | 3.985841 | 3.098936 | 0.001795 | 0.001784 | 0.001692 |
| signal_set_select.test | RUN | 0.744659 | 4.142780 | 3.407606 | 0.001714 | 0.001880 | 0.001770 |
| signal_set_base.test | LINK | 0.169849 | 0.383072 | 0.427563 | — | — | — |
| signal_set_base_select.test | LINK | 0.175741 | 0.376259 | 0.428347 | — | — | — |
| socket_base.test | RUN | 0.880160 | 5.831136 | 4.666932 | 0.001974 | 0.001939 | 0.002028 |
| socket_base_select.test | RUN | 0.904030 | 5.698027 | 4.651615 | 0.001874 | 0.002032 | 0.001924 |
| spawn.test | RUN | 1.536287 | 9.573203 | 8.058851 | 0.001983 | 0.002123 | 0.002062 |
| spawn_select.test | RUN | 1.560687 | 9.548147 | 8.064257 | 0.002053 | 0.002156 | 0.002144 |
| static_thread_pool.test | RUN | 0.389557 | 0.892714 | 1.041397 | 0.001620 | 0.001696 | 0.001764 |
| static_thread_pool_select.test | RUN | 0.415488 | 0.952905 | 1.336294 | 0.001793 | 0.001751 | 0.001720 |
| steady_timer.test | LINK | 0.436286 | 1.006032 | 1.433149 | — | — | — |
| steady_timer_select.test | LINK | 0.452931 | 1.036724 | 1.465719 | — | — | — |
| strand.test | RUN | 0.954345 | 5.397431 | 4.846439 | 0.002563 | 0.002845 | 0.002918 |
| strand_select.test | RUN | 0.970786 | 5.349323 | 4.781647 | 0.002141 | 0.002722 | 0.002675 |
| stream_file.test | LINK | 0.400885 | 0.921941 | 1.122355 | — | — | — |
| stream_file_select.test | LINK | 0.423406 | 0.949039 | 1.393887 | — | — | — |
| streambuf.test | RUN | 0.253321 | 0.499098 | 0.755216 | 0.001155 | 0.001359 | 0.001779 |
| streambuf_select.test | RUN | 0.249074 | 0.491625 | 0.764723 | 0.001320 | 0.001284 | 0.001794 |
| system_timer.test | LINK | 0.598299 | 3.336595 | 2.955029 | — | — | — |
| system_timer_select.test | LINK | 0.612088 | 3.305198 | 2.757556 | — | — | — |
| system_context.test | LINK | 0.253398 | 0.554407 | 0.636813 | — | — | — |
| system_context_select.test | LINK | 0.271703 | 0.602559 | 0.790113 | — | — | — |
| system_executor.test | LINK | 0.342728 | 1.868129 | 1.297788 | — | — | — |
| system_executor_select.test | LINK | 0.355605 | 1.838603 | 1.431596 | — | — | — |
| this_coro.test | LINK | 0.094777 | 0.209242 | 0.247445 | — | — | — |
| this_coro_select.test | LINK | 0.096018 | 0.212648 | 0.252416 | — | — | — |
| thread_pool.test | RUN | 0.419707 | 3.320909 | 1.703461 | 0.002443 | 0.003094 | 0.002484 |
| thread_pool_select.test | RUN | 0.429860 | 3.460818 | 1.810617 | 0.002478 | 0.003160 | 0.002893 |
| time_traits.test | LINK | 0.211729 | 0.706629 | 0.704141 | — | — | — |
| time_traits_select.test | LINK | 0.215405 | 0.705693 | 0.539680 | — | — | — |
| ts_buffer.test | LINK | 0.206143 | 0.784724 | 0.841513 | — | — | — |
| ts_buffer_select.test | LINK | 0.204644 | 0.781577 | 0.887117 | — | — | — |
| ts_executor.test | LINK | 0.293645 | 1.067702 | 1.405720 | — | — | — |
| ts_executor_select.test | LINK | 0.308288 | 1.143135 | 1.710270 | — | — | — |
| ts_internet.test | LINK | 0.323895 | 1.179435 | 1.758877 | — | — | — |
| ts_internet_select.test | LINK | 0.328028 | 1.216676 | 1.773890 | — | — | — |
| ts_io_context.test | LINK | 0.261214 | 0.902515 | 1.040056 | — | — | — |
| ts_io_context_select.test | LINK | 0.274131 | 0.967025 | 1.344961 | — | — | — |
| ts_net.test | LINK | 0.382470 | 1.406359 | 2.130292 | — | — | — |
| ts_net_select.test | LINK | 0.390968 | 1.447738 | 2.173651 | — | — | — |
| ts_netfwd.test | LINK | 0.381674 | 1.417016 | 2.130505 | — | — | — |
| ts_netfwd_select.test | LINK | 0.396420 | 1.452933 | 2.182127 | — | — | — |
| ts_socket.test | LINK | 0.320205 | 1.119239 | 1.643958 | — | — | — |
| ts_socket_select.test | LINK | 0.327452 | 1.138288 | 1.663633 | — | — | — |
| ts_timer.test | LINK | 0.278611 | 0.995904 | 1.431897 | — | — | — |
| ts_timer_select.test | LINK | 0.286182 | 1.030403 | 1.458461 | — | — | — |
| use_awaitable.test | LINK | 0.091739 | 0.331413 | 0.409264 | — | — | — |
| use_awaitable_select.test | LINK | 0.093251 | 0.332387 | 0.407908 | — | — | — |
| wait_traits.test | LINK | 0.095120 | 0.336285 | 0.408282 | — | — | — |
| wait_traits_select.test | LINK | 0.096202 | 0.336437 | 0.404936 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.093370 | 0.333218 | 0.420792 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.094812 | 0.330250 | 0.416487 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.095462 | 0.335987 | 0.413699 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.093813 | 0.332582 | 0.408825 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.092356 | 0.329213 | 0.403760 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.102099 | 0.332122 | 0.401713 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.096484 | 0.332211 | 0.400275 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.141680 | 0.335843 | 0.401778 | — | — | — |
| windows_object_handle.test | LINK | 0.401380 | 0.902593 | 1.076222 | — | — | — |
| windows_object_handle_select.test | LINK | 0.415424 | 0.953101 | 1.341158 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.414597 | 0.948741 | 1.174980 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.437074 | 1.023201 | 1.446502 | — | — | — |
| windows_random_access_handle.test | LINK | 0.398697 | 0.914781 | 1.075436 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.417772 | 0.981822 | 1.336117 | — | — | — |
| windows_stream_handle.test | LINK | 0.401654 | 0.899945 | 1.073553 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.421962 | 0.977955 | 1.335360 | — | — | — |
| writable_pipe.test | LINK | 0.753302 | 3.954305 | 3.413920 | — | — | — |
| writable_pipe_select.test | LINK | 0.782549 | 4.166181 | 3.588369 | — | — | — |
| write.test | RUN | 2.321265 | 20.089745 | 18.943694 | 0.002437 | 0.002361 | 0.002487 |
| write_select.test | RUN | 2.332157 | 20.232661 | 19.237286 | 0.002592 | 0.002541 | 0.002480 |
| write_at.test | RUN | 2.358482 | 27.159927 | 24.123316 | 0.002781 | 0.002819 | 0.002571 |
| write_at_select.test | RUN | 2.371303 | 27.189575 | 24.327199 | 0.002438 | 0.002704 | 0.002728 |
| any_executor.test | RUN | 0.923361 | 9.034109 | 8.078552 | 0.002319 | 0.002653 | 0.002377 |
| blocking.test | RUN | 2.096454 | 12.017026 | 15.869712 | 0.005381 | 0.005321 | 0.004270 |
| blocking_adaptation.test | RUN | 1.052287 | 5.114926 | 7.134877 | 0.003072 | 0.003133 | 0.003201 |
| context_as.test | RUN | 0.597581 | 3.605926 | 2.417710 | 0.002032 | 0.001777 | 0.001919 |
| executor.test | RUN | 0.154188 | 0.350749 | 0.432538 | 0.001652 | 0.001702 | 0.001630 |
| inline_exception_handling.test | RUN | 2.102316 | 10.991718 | 15.095763 | 0.005108 | 0.003394 | 0.003389 |
| invocable_archetype.test | RUN | 0.154154 | 0.347523 | 0.429075 | 0.001624 | 0.001725 | 0.001782 |
| mapping.test | RUN | 1.976343 | 11.132942 | 15.870886 | 0.003462 | 0.003305 | 0.003454 |
| outstanding_work.test | RUN | 0.964629 | 5.001035 | 6.867599 | 0.003483 | 0.003175 | 0.003214 |
| prefer_only.test | RUN | 0.312451 | 1.940955 | 1.543442 | 0.001814 | 0.001778 | 0.001759 |
| relationship.test | RUN | 0.739249 | 4.294944 | 6.649858 | 0.002201 | 0.002200 | 0.002115 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.000×, 0.998× | 1.008× |
| clang | 0.995× | 0.991×, 1.000× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001719s | 0.001733s | 0.001771s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001760s | 0.001705s | 0.001774s | byte equality observed |
| any_completion_handler.test | 8 | 0.001411s | 0.001407s | 0.001392s | byte equality observed |
| any_completion_handler_select.test | 6 | 0.001393s | 0.001381s | 0.001383s | byte equality observed |
| any_io_executor.test | 3 | 0.001719s | 0.001750s | 0.001729s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001685s | 0.001667s | 0.001646s | byte equality observed |
| append.test | 8 | 0.001328s | 0.001310s | 0.001332s | byte equality observed |
| append_select.test | 8 | 0.001316s | 0.001296s | 0.001305s | byte equality observed |
| as_tuple.test | 9 | 0.001395s | 0.001388s | 0.001411s | byte equality observed |
| as_tuple_select.test | 9 | 0.001331s | 0.001331s | 0.001326s | byte equality observed |
| bind_allocator.test | 1 | 0.001752s | 0.001775s | 0.001795s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001566s | 0.001467s | 0.001539s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001208s | 0.001160s | 0.001198s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001105s | 0.001115s | 0.001103s | byte equality observed |
| bind_executor.test | 1 | 0.001747s | 0.001830s | 0.001748s | byte equality observed |
| bind_executor_select.test | 1 | 0.001923s | 0.001911s | 0.001907s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001188s | 0.001158s | 0.001183s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001160s | 0.001155s | 0.001141s | byte equality observed |
| buffer.test | 10 | 0.001116s | 0.001098s | 0.001162s | byte equality observed |
| buffer_select.test | 10 | 0.001099s | 0.001104s | 0.001110s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001376s | 0.001393s | 0.001384s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001321s | 0.001378s | 0.001334s | byte equality observed |
| buffered_stream.test | 10 | 0.001338s | 0.001327s | 0.001381s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001315s | 0.001386s | 0.001379s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001352s | 0.001377s | 0.001360s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001352s | 0.001356s | 0.001360s | byte equality observed |
| buffers_iterator.test | 10 | 0.001082s | 0.001039s | 0.001068s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001080s | 0.001039s | 0.001045s | byte equality observed |
| cancel_after.test | 1 | 0.003786s | 0.003557s | 0.003697s | byte equality observed |
| cancel_after_select.test | 1 | 0.002893s | 0.002954s | 0.002989s | byte equality observed |
| cancel_at.test | 1 | 0.003709s | 0.003595s | 0.003699s | byte equality observed |
| cancel_at_select.test | 1 | 0.003539s | 0.003772s | 0.003614s | byte equality observed |
| co_composed.test | 10 | 0.001099s | 0.001093s | 0.001138s | byte equality observed |
| co_composed_select.test | 10 | 0.001077s | 0.001041s | 0.001110s | byte equality observed |
| compose.test | 1 | 0.001706s | 0.001740s | 0.001677s | byte equality observed |
| compose_select.test | 1 | 0.001470s | 0.001415s | 0.001516s | byte equality observed |
| composed.test | 1 | 0.001960s | 0.001956s | 0.001967s | byte equality observed |
| composed_select.test | 1 | 0.001637s | 0.001610s | 0.001680s | byte equality observed |
| config.test | 10 | 0.001204s | 0.001166s | 0.001192s | byte equality observed |
| config_select.test | 10 | 0.001196s | 0.001208s | 0.001174s | byte equality observed |
| connect_pipe.test | 10 | 0.001183s | 0.001218s | 0.001178s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001176s | 0.001179s | 0.001227s | byte equality observed |
| consign.test | 9 | 0.001173s | 0.001172s | 0.001142s | byte equality observed |
| consign_select.test | 10 | 0.001143s | 0.001105s | 0.001098s | byte equality observed |
| deadline_timer.test | 1 | 0.002491s | 0.002456s | 0.002370s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002303s | 0.002282s | 0.002292s | byte equality observed |
| deferred.test | 10 | 0.001048s | 0.001053s | 0.001056s | byte equality observed |
| deferred_select.test | 10 | 0.000997s | 0.000985s | 0.000991s | byte equality observed |
| disposition.test | 10 | 0.001050s | 0.001036s | 0.001040s | byte equality observed |
| disposition_select.test | 10 | 0.001051s | 0.001030s | 0.001030s | byte equality observed |
| error.test | 10 | 0.001025s | 0.001003s | 0.000998s | byte equality observed |
| error_select.test | 10 | 0.001022s | 0.000992s | 0.001024s | byte equality observed |
| inline_executor.test | 10 | 0.001043s | 0.000996s | 0.001021s | byte equality observed |
| inline_executor_select.test | 10 | 0.001041s | 0.000993s | 0.001014s | byte equality observed |
| inline_or_executor.test | 10 | 0.001044s | 0.001040s | 0.001021s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001048s | 0.001044s | 0.001027s | byte equality observed |
| io_context.test | 1 | 0.002055s | 0.002008s | 0.002081s | byte equality observed |
| io_context_select.test | 1 | 0.002249s | 0.002277s | 0.002293s | byte equality observed |
| io_context_strand.test | 1 | 0.002311s | 0.002323s | 0.002281s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002005s | 0.001985s | 0.002119s | byte equality observed |
| ip_host_name.test | 10 | 0.001065s | 0.001064s | 0.001042s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001011s | 0.001022s | 0.000986s | byte equality observed |
| ip_icmp.test | 10 | 0.001045s | 0.001039s | 0.001020s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001043s | 0.001049s | 0.001013s | byte equality observed |
| ip_multicast.test | 10 | 0.001136s | 0.001133s | 0.001118s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001098s | 0.001100s | 0.001097s | byte equality observed |
| ip_tcp.test | 10 | 0.001412s | 0.001408s | 0.001408s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001360s | 0.001355s | 0.001351s | byte equality observed |
| ip_udp.test | 10 | 0.001138s | 0.001145s | 0.001137s | byte equality observed |
| ip_udp_select.test | 10 | 0.001132s | 0.001114s | 0.001117s | byte equality observed |
| ip_unicast.test | 10 | 0.001089s | 0.001090s | 0.001097s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001074s | 0.001068s | 0.001060s | byte equality observed |
| ip_v6_only.test | 10 | 0.001088s | 0.001081s | 0.001082s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001089s | 0.001072s | 0.001065s | byte equality observed |
| is_read_buffered.test | 10 | 0.001007s | 0.001005s | 0.000990s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001009s | 0.001043s | 0.000993s | byte equality observed |
| is_write_buffered.test | 10 | 0.000994s | 0.001104s | 0.000992s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001004s | 0.001150s | 0.001005s | byte equality observed |
| prepend.test | 10 | 0.001078s | 0.001163s | 0.001061s | byte equality observed |
| prepend_select.test | 10 | 0.001051s | 0.001125s | 0.001037s | byte equality observed |
| read.test | 10 | 0.001521s | 0.001562s | 0.001428s | byte equality observed |
| read_at.test | 10 | 0.001960s | 0.002042s | 0.001857s | byte equality observed |
| read_at_select.test | 10 | 0.001981s | 0.002068s | 0.001962s | byte equality observed |
| read_select.test | 10 | 0.001587s | 0.001559s | 0.001515s | byte equality observed |
| read_until.test | 10 | 0.001322s | 0.001269s | 0.001302s | byte equality observed |
| read_until_select.test | 10 | 0.001322s | 0.001315s | 0.001287s | byte equality observed |
| recycling_allocator.test | 10 | 0.001082s | 0.001062s | 0.001082s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001083s | 0.001113s | 0.001090s | byte equality observed |
| signal_set.test | 10 | 0.001128s | 0.001125s | 0.001118s | byte equality observed |
| signal_set_select.test | 10 | 0.001143s | 0.001092s | 0.001109s | byte equality observed |
| socket_base.test | 10 | 0.001210s | 0.001186s | 0.001205s | byte equality observed |
| socket_base_select.test | 10 | 0.001193s | 0.001208s | 0.001150s | byte equality observed |
| spawn.test | 10 | 0.001314s | 0.001347s | 0.001305s | byte equality observed |
| spawn_select.test | 10 | 0.001306s | 0.001306s | 0.001298s | byte equality observed |
| static_thread_pool.test | 10 | 0.001068s | 0.001042s | 0.001095s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001021s | 0.001015s | 0.001053s | byte equality observed |
| strand.test | 1 | 0.002080s | 0.002098s | 0.002190s | byte equality observed |
| strand_select.test | 1 | 0.001729s | 0.001685s | 0.001738s | byte equality observed |
| streambuf.test | 10 | 0.001113s | 0.001109s | 0.001139s | byte equality observed |
| streambuf_select.test | 10 | 0.001124s | 0.001111s | 0.001149s | byte equality observed |
| thread_pool.test | 9 | 0.002411s | 0.002429s | 0.002433s | byte equality observed |
| thread_pool_select.test | 9 | 0.002371s | 0.002430s | 0.002416s | byte equality observed |
| write.test | 10 | 0.001634s | 0.001553s | 0.001563s | byte equality observed |
| write_at.test | 10 | 0.001735s | 0.001800s | 0.001727s | byte equality observed |
| write_at_select.test | 10 | 0.001764s | 0.001765s | 0.001715s | byte equality observed |
| write_select.test | 10 | 0.001616s | 0.001534s | 0.001530s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
