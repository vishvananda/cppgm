# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.603732 | 3.725453 | 3.526265 | 0.002505 | 0.002419 | 0.002361 |
| any_completion_executor_select.test | RUN | 0.618844 | 3.713187 | 3.658477 | 0.002376 | 0.002274 | 0.002564 |
| any_completion_handler.test | RUN | 0.719782 | 3.362773 | 3.291146 | 0.001818 | 0.001936 | 0.001864 |
| any_completion_handler_select.test | RUN | 0.697353 | 3.455089 | 3.520517 | 0.001962 | 0.001681 | 0.001965 |
| any_io_executor.test | RUN | 0.637374 | 4.007222 | 3.813729 | 0.002255 | 0.002505 | 0.002281 |
| any_io_executor_select.test | RUN | 0.673628 | 3.974730 | 3.957568 | 0.002100 | 0.002478 | 0.002322 |
| append.test | RUN | 0.593871 | 3.126913 | 2.891188 | 0.001643 | 0.001618 | 0.001818 |
| append_select.test | RUN | 0.603762 | 3.167091 | 2.911639 | 0.001725 | 0.001797 | 0.001853 |
| as_tuple.test | RUN | 0.770321 | 3.848163 | 3.911498 | 0.001982 | 0.002003 | 0.002051 |
| as_tuple_select.test | RUN | 0.782317 | 3.798531 | 3.921653 | 0.001473 | 0.002058 | 0.001752 |
| associated_allocator.test | LINK | 0.166996 | 0.329924 | 0.479042 | — | — | — |
| associated_allocator_select.test | LINK | 0.172783 | 0.347425 | 0.485251 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.178055 | 0.382587 | 0.512695 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.177500 | 0.386685 | 0.523970 | — | — | — |
| associated_executor.test | LINK | 0.258927 | 0.665041 | 0.823739 | — | — | — |
| associated_executor_select.test | LINK | 0.259685 | 0.654980 | 0.804313 | — | — | — |
| associated_immediate_executor.test | LINK | 0.239749 | 0.605982 | 0.747349 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.238387 | 0.580312 | 0.704206 | — | — | — |
| associator.test | LINK | 0.135524 | 0.291544 | 0.395458 | — | — | — |
| associator_select.test | LINK | 0.136239 | 0.279190 | 0.363012 | — | — | — |
| awaitable.test | LINK | 0.136685 | 0.284104 | 0.375698 | — | — | — |
| awaitable_select.test | LINK | 0.134050 | 0.280017 | 0.374096 | — | — | — |
| basic_datagram_socket.test | LINK | 0.402108 | 0.881813 | 1.458130 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.408518 | 0.898529 | 1.486256 | — | — | — |
| basic_deadline_timer.test | LINK | 0.486053 | 1.054074 | 1.654400 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.490139 | 1.081019 | 1.678962 | — | — | — |
| basic_file.test | LINK | 0.139148 | 0.295507 | 0.374231 | — | — | — |
| basic_file_select.test | LINK | 0.139106 | 0.279874 | 0.377839 | — | — | — |
| basic_random_access_file.test | LINK | 0.136258 | 0.282139 | 0.386366 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.135462 | 0.276114 | 0.388904 | — | — | — |
| basic_raw_socket.test | LINK | 0.401676 | 0.892346 | 1.456421 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.410727 | 0.910915 | 1.481094 | — | — | — |
| basic_readable_pipe.test | LINK | 0.384732 | 0.874321 | 1.258277 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.398859 | 0.941989 | 1.511420 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.409482 | 0.888550 | 1.467428 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.417852 | 0.904558 | 1.489478 | — | — | — |
| basic_signal_set.test | LINK | 0.376549 | 0.818926 | 1.094789 | — | — | — |
| basic_signal_set_select.test | LINK | 0.390950 | 0.880039 | 1.354222 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.408475 | 0.872421 | 1.413801 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.421695 | 0.910691 | 1.423789 | — | — | — |
| basic_stream_file.test | LINK | 0.134178 | 0.278785 | 0.402243 | — | — | — |
| basic_stream_file_select.test | LINK | 0.134718 | 0.295484 | 0.396796 | — | — | — |
| basic_stream_socket.test | LINK | 0.397359 | 0.924709 | 1.442701 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.410120 | 0.917481 | 1.445052 | — | — | — |
| basic_streambuf.test | LINK | 0.204650 | 0.405219 | 0.575833 | — | — | — |
| basic_streambuf_select.test | LINK | 0.211710 | 0.420478 | 0.582530 | — | — | — |
| basic_waitable_timer.test | LINK | 0.384848 | 0.837784 | 1.347460 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.385078 | 0.868938 | 1.367715 | — | — | — |
| basic_writable_pipe.test | LINK | 0.385219 | 0.849953 | 1.217483 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.407410 | 0.909935 | 1.513151 | — | — | — |
| bind_allocator.test | RUN | 0.645541 | 3.206998 | 3.165369 | 0.002282 | 0.002145 | 0.002106 |
| bind_allocator_select.test | RUN | 0.657357 | 3.291110 | 3.171815 | 0.001944 | 0.001886 | 0.001921 |
| bind_cancellation_slot.test | RUN | 0.649952 | 3.254368 | 3.211020 | 0.001416 | 0.001658 | 0.001463 |
| bind_cancellation_slot_select.test | RUN | 0.669778 | 3.297815 | 3.079665 | 0.001516 | 0.001462 | 0.001466 |
| bind_executor.test | RUN | 0.433952 | 2.303622 | 1.940390 | 0.002098 | 0.002212 | 0.002194 |
| bind_executor_select.test | RUN | 0.452751 | 2.299718 | 1.915944 | 0.001929 | 0.001995 | 0.001847 |
| bind_immediate_executor.test | RUN | 0.331630 | 1.877927 | 1.252709 | 0.001455 | 0.001410 | 0.001445 |
| bind_immediate_executor_select.test | RUN | 0.347358 | 1.828155 | 1.370813 | 0.001341 | 0.001393 | 0.001312 |
| buffer.test | RUN | 0.207871 | 0.786927 | 0.761254 | 0.001437 | 0.001392 | 0.001344 |
| buffer_select.test | RUN | 0.207212 | 0.782021 | 0.754423 | 0.001286 | 0.001401 | 0.001331 |
| buffer_registration.test | LINK | 0.166000 | 0.406386 | 0.446693 | — | — | — |
| buffer_registration_select.test | LINK | 0.165453 | 0.401975 | 0.445313 | — | — | — |
| buffered_read_stream.test | RUN | 0.728729 | 5.072841 | 4.652311 | 0.001866 | 0.002208 | 0.002176 |
| buffered_read_stream_select.test | RUN | 0.731363 | 5.022737 | 4.473002 | 0.001676 | 0.002112 | 0.002242 |
| buffered_stream.test | RUN | 1.121285 | 7.743411 | 7.788677 | 0.002430 | 0.002422 | 0.002331 |
| buffered_stream_select.test | RUN | 1.158188 | 7.784018 | 7.443360 | 0.002318 | 0.002299 | 0.002252 |
| buffered_write_stream.test | RUN | 1.214556 | 6.685680 | 6.601592 | 0.002074 | 0.002218 | 0.002391 |
| buffered_write_stream_select.test | RUN | 1.223120 | 6.726629 | 6.383231 | 0.002223 | 0.001970 | 0.002012 |
| buffers_iterator.test | RUN | 0.391421 | 0.650088 | 1.073473 | 0.001769 | 0.001676 | 0.001806 |
| buffers_iterator_select.test | RUN | 0.388146 | 0.635914 | 1.075755 | 0.001522 | 0.001772 | 0.001678 |
| cancel_after.test | RUN | 1.031970 | 5.206388 | 4.889128 | 0.003976 | 0.003974 | 0.003583 |
| cancel_after_select.test | RUN | 1.032360 | 5.132898 | 4.824609 | 0.002898 | 0.003942 | 0.003782 |
| cancel_at.test | RUN | 1.022291 | 4.550589 | 4.643828 | 0.003605 | 0.003010 | 0.003470 |
| cancel_at_select.test | RUN | 1.036872 | 4.538481 | 4.594568 | 0.003633 | 0.003376 | 0.003358 |
| cancellation_signal.test | LINK | 0.167011 | 0.242245 | 0.288182 | — | — | — |
| cancellation_signal_select.test | LINK | 0.174092 | 0.245545 | 0.289135 | — | — | — |
| cancellation_state.test | LINK | 0.182366 | 0.242144 | 0.474314 | — | — | — |
| cancellation_state_select.test | LINK | 0.185486 | 0.245401 | 0.493057 | — | — | — |
| cancellation_type.test | LINK | 0.137466 | 0.196976 | 0.328651 | — | — | — |
| cancellation_type_select.test | LINK | 0.140835 | 0.195191 | 0.371771 | — | — | — |
| co_composed.test | RUN | 0.138471 | 0.195736 | 0.378592 | 0.001586 | 0.001463 | 0.001480 |
| co_composed_select.test | RUN | 0.140420 | 0.195178 | 0.361893 | 0.001564 | 0.001684 | 0.001370 |
| co_spawn.test | LINK | 0.138239 | 0.271766 | 0.393641 | — | — | — |
| co_spawn_select.test | LINK | 0.136645 | 0.285740 | 0.383954 | — | — | — |
| completion_condition.test | LINK | 0.180178 | 0.429236 | 0.493883 | — | — | — |
| completion_condition_select.test | LINK | 0.180094 | 0.414322 | 0.501133 | — | — | — |
| compose.test | RUN | 0.795660 | 4.031304 | 4.011177 | 0.002231 | 0.002417 | 0.002313 |
| compose_select.test | RUN | 0.806084 | 3.995897 | 3.987818 | 0.002304 | 0.002196 | 0.001998 |
| composed.test | RUN | 0.791033 | 4.061017 | 3.884190 | 0.002076 | 0.001998 | 0.001776 |
| composed_select.test | RUN | 0.799591 | 4.001135 | 3.826208 | 0.001998 | 0.001617 | 0.001872 |
| config.test | RUN | 0.435076 | 2.603469 | 1.715384 | 0.001737 | 0.001972 | 0.001930 |
| config_select.test | RUN | 0.473030 | 2.744111 | 1.968828 | 0.001830 | 0.001866 | 0.001904 |
| connect.test | LINK | 1.221922 | 8.441000 | 8.065679 | — | — | — |
| connect_select.test | LINK | 1.240233 | 8.455873 | 8.151699 | — | — | — |
| connect_pipe.test | RUN | 0.672909 | 3.242793 | 3.087160 | 0.001807 | 0.001996 | 0.001884 |
| connect_pipe_select.test | RUN | 0.697034 | 3.393281 | 3.331234 | 0.001686 | 0.002012 | 0.001986 |
| consign.test | RUN | 0.608830 | 3.096915 | 2.892634 | 0.001619 | 0.001875 | 0.001806 |
| consign_select.test | RUN | 0.614127 | 3.178965 | 2.877965 | 0.001624 | 0.001804 | 0.001761 |
| coroutine.test | LINK | 0.140052 | 0.331773 | 0.393004 | — | — | — |
| coroutine_select.test | LINK | 0.145934 | 0.334478 | 0.393971 | — | — | — |
| deadline_timer.test | RUN | 0.866708 | 4.099535 | 4.026348 | 0.003590 | 0.003254 | 0.003314 |
| deadline_timer_select.test | RUN | 0.880790 | 4.074243 | 4.025101 | 0.002804 | 0.003196 | 0.003380 |
| deferred.test | RUN | 0.146887 | 0.313841 | 0.431154 | 0.001688 | 0.001752 | 0.001788 |
| deferred_select.test | RUN | 0.147341 | 0.311699 | 0.425120 | 0.001474 | 0.001590 | 0.001760 |
| detached.test | LINK | 0.165944 | 0.350564 | 0.452475 | — | — | — |
| detached_select.test | LINK | 0.166701 | 0.348858 | 0.443300 | — | — | — |
| disposition.test | RUN | 0.156784 | 0.808231 | 0.805827 | 0.001387 | 0.001876 | 0.001943 |
| disposition_select.test | RUN | 0.154811 | 0.786716 | 0.817211 | 0.001199 | 0.001901 | 0.001843 |
| error.test | RUN | 0.144293 | 0.767337 | 0.766534 | 0.001485 | 0.001870 | 0.001701 |
| error_select.test | RUN | 0.144342 | 0.759226 | 0.728176 | 0.001471 | 0.001860 | 0.001836 |
| file_base.test | LINK | 0.179718 | 0.643391 | 0.766073 | — | — | — |
| file_base_select.test | LINK | 0.179988 | 0.592076 | 0.637751 | — | — | — |
| fwd_first.test | LINK | 0.406315 | 0.963937 | 1.391054 | — | — | — |
| fwd_last.test | LINK | 0.412207 | 0.906859 | 1.406578 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.157381 | 0.378385 | 0.495531 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.157103 | 0.379351 | 0.502876 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.618122 | 3.241241 | 2.757192 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.619290 | 3.350534 | 2.700228 | — | — | — |
| generic_raw_protocol.test | LINK | 0.613045 | 3.267530 | 2.773121 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.612141 | 3.354833 | 2.707124 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.535081 | 2.777024 | 2.338288 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.542052 | 2.780478 | 2.307060 | — | — | — |
| generic_stream_protocol.test | LINK | 0.576460 | 2.989648 | 2.562485 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.582009 | 3.028796 | 2.515677 | — | — | — |
| high_resolution_timer.test | LINK | 0.261658 | 0.572209 | 0.783187 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.262797 | 0.584162 | 0.808574 | — | — | — |
| immediate.test | LINK | 0.182143 | 0.429557 | 0.490277 | — | — | — |
| immediate_select.test | LINK | 0.180679 | 0.425008 | 0.491361 | — | — | — |
| inline_executor.test | RUN | 0.220031 | 0.663834 | 0.724349 | 0.001396 | 0.001404 | 0.001400 |
| inline_executor_select.test | RUN | 0.220156 | 0.665888 | 0.726359 | 0.001378 | 0.001410 | 0.001316 |
| inline_or_executor.test | RUN | 0.348185 | 1.929849 | 1.374005 | 0.001365 | 0.001441 | 0.001356 |
| inline_or_executor_select.test | RUN | 0.358727 | 1.972842 | 1.519412 | 0.001234 | 0.001424 | 0.001310 |
| io_context.test | RUN | 0.512015 | 2.923433 | 2.397006 | 0.002190 | 0.002344 | 0.002346 |
| io_context_select.test | RUN | 0.507612 | 2.881025 | 2.430858 | 0.002204 | 0.002249 | 0.002156 |
| io_context_strand.test | RUN | 0.478757 | 2.485162 | 2.123312 | 0.002008 | 0.002295 | 0.002271 |
| io_context_strand_select.test | RUN | 0.481581 | 2.484305 | 2.092116 | 0.002141 | 0.002115 | 0.002104 |
| ip_address.test | LINK | 0.183561 | 0.591764 | 0.616530 | — | — | — |
| ip_address_select.test | LINK | 0.183573 | 0.586364 | 0.615661 | — | — | — |
| ip_address_v4.test | LINK | 0.188255 | 0.618637 | 0.677294 | — | — | — |
| ip_address_v4_select.test | LINK | 0.187655 | 0.610731 | 0.668026 | — | — | — |
| ip_address_v6.test | LINK | 0.217454 | 0.799031 | 0.816793 | — | — | — |
| ip_address_v6_select.test | LINK | 0.217008 | 0.800807 | 0.825351 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.165672 | 0.396552 | 0.533111 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.166302 | 0.395616 | 0.532971 | — | — | — |
| ip_basic_resolver.test | LINK | 0.262398 | 0.572259 | 0.988071 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.266355 | 0.582000 | 1.149924 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.092179 | 0.189673 | 0.395209 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.092096 | 0.188594 | 0.403573 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.163875 | 0.386311 | 0.897517 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.163846 | 0.383125 | 0.883086 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.157603 | 0.376043 | 0.842015 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.157591 | 0.371145 | 0.857658 | — | — | — |
| ip_host_name.test | RUN | 0.168076 | 0.496162 | 0.958224 | 0.001369 | 0.001676 | 0.001816 |
| ip_host_name_select.test | RUN | 0.169399 | 0.502064 | 0.941167 | 0.001381 | 0.001234 | 0.001731 |
| ip_icmp.test | RUN | 0.759403 | 6.469623 | 5.789499 | 0.001257 | 0.001840 | 0.001713 |
| ip_icmp_select.test | RUN | 0.750845 | 6.777028 | 5.601219 | 0.001354 | 0.002024 | 0.001616 |
| ip_multicast.test | RUN | 0.445997 | 3.392884 | 3.355560 | 0.001468 | 0.002083 | 0.001880 |
| ip_multicast_select.test | RUN | 0.448571 | 3.415540 | 3.323513 | 0.001233 | 0.001970 | 0.001766 |
| ip_resolver_query_base.test | LINK | 0.109451 | 0.324100 | 0.401534 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.107669 | 0.319668 | 0.407880 | — | — | — |
| ip_tcp.test | RUN | 1.123783 | 9.851998 | 8.917578 | 0.001690 | 0.002486 | 0.002758 |
| ip_tcp_select.test | RUN | 1.114577 | 10.312156 | 8.704743 | 0.001864 | 0.002539 | 0.002158 |
| ip_udp.test | RUN | 0.812032 | 7.017239 | 6.150091 | 0.001284 | 0.001629 | 0.001904 |
| ip_udp_select.test | RUN | 0.798957 | 7.160180 | 5.990110 | 0.001516 | 0.001980 | 0.001908 |
| ip_unicast.test | RUN | 0.410307 | 3.107133 | 2.948809 | 0.001438 | 0.001963 | 0.001803 |
| ip_unicast_select.test | RUN | 0.413133 | 3.122372 | 2.951351 | 0.001413 | 0.002022 | 0.001866 |
| ip_v6_only.test | RUN | 0.425418 | 3.191803 | 3.055148 | 0.001425 | 0.001938 | 0.001684 |
| ip_v6_only_select.test | RUN | 0.442818 | 3.276341 | 3.025951 | 0.001341 | 0.001930 | 0.001716 |
| is_read_buffered.test | RUN | 0.302997 | 1.017558 | 1.662791 | 0.001320 | 0.001876 | 0.001577 |
| is_read_buffered_select.test | RUN | 0.306400 | 1.042419 | 1.704401 | 0.001183 | 0.001750 | 0.001569 |
| is_write_buffered.test | RUN | 0.306941 | 0.985660 | 1.674660 | 0.001315 | 0.001846 | 0.001590 |
| is_write_buffered_select.test | RUN | 0.310888 | 1.030122 | 1.708248 | 0.001213 | 0.001570 | 0.001738 |
| local_basic_endpoint.test | LINK | 0.159750 | 0.538546 | 0.881353 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.158256 | 0.572444 | 0.875054 | — | — | — |
| local_connect_pair.test | LINK | 0.401238 | 3.139871 | 2.822069 | — | — | — |
| local_connect_pair_select.test | LINK | 0.406522 | 3.131006 | 2.797923 | — | — | — |
| local_datagram_protocol.test | LINK | 0.526274 | 4.004266 | 3.854855 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.533935 | 4.019656 | 3.816709 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.630275 | 3.969426 | 3.826669 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.672778 | 4.060940 | 3.830731 | — | — | — |
| local_stream_protocol.test | LINK | 0.736009 | 3.794150 | 3.683650 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.757533 | 3.815163 | 3.674170 | — | — | — |
| placeholders.test | LINK | 0.150454 | 0.304489 | 0.419761 | — | — | — |
| placeholders_select.test | LINK | 0.152790 | 0.294513 | 0.418814 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.387556 | 0.850282 | 1.271307 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.410301 | 0.903764 | 1.520738 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.394843 | 0.857976 | 1.252931 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.424504 | 0.913237 | 1.536092 | — | — | — |
| posix_descriptor_base.test | LINK | 0.163875 | 0.327009 | 0.386093 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.165701 | 0.319522 | 0.387201 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.769996 | 3.879148 | 3.565961 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.801662 | 3.920226 | 3.703890 | — | — | — |
| prepend.test | RUN | 0.610555 | 3.151016 | 2.878621 | 0.001744 | 0.001916 | 0.001865 |
| prepend_select.test | RUN | 0.604804 | 3.247427 | 2.914351 | 0.001826 | 0.001830 | 0.001878 |
| random_access_file.test | LINK | 0.351223 | 0.763453 | 0.969192 | — | — | — |
| random_access_file_select.test | LINK | 0.372333 | 0.820184 | 1.256033 | — | — | — |
| read.test | RUN | 1.868560 | 19.507876 | 16.580719 | 0.002505 | 0.002503 | 0.002400 |
| read_select.test | RUN | 1.917958 | 19.386967 | 16.893895 | 0.002539 | 0.002397 | 0.002278 |
| read_at.test | RUN | 1.889881 | 27.300226 | 22.586209 | 0.003013 | 0.002912 | 0.002913 |
| read_at_select.test | RUN | 1.926936 | 27.211669 | 22.835439 | 0.002960 | 0.003220 | 0.002497 |
| read_until.test | RUN | 0.967905 | 7.509136 | 5.963798 | 0.002185 | 0.002114 | 0.001958 |
| read_until_select.test | RUN | 0.990190 | 7.506816 | 6.156974 | 0.002058 | 0.002066 | 0.001944 |
| readable_pipe.test | LINK | 0.641252 | 3.166281 | 2.846110 | — | — | — |
| readable_pipe_select.test | LINK | 0.661414 | 3.388718 | 3.076320 | — | — | — |
| recycling_allocator.test | RUN | 0.196707 | 0.475093 | 0.563995 | 0.001728 | 0.001873 | 0.001440 |
| recycling_allocator_select.test | RUN | 0.196093 | 0.496728 | 0.604927 | 0.001600 | 0.001820 | 0.001772 |
| redirect_disposition.test | LINK | 0.797108 | 4.526804 | 4.386774 | — | — | — |
| redirect_disposition_select.test | LINK | 0.803760 | 4.404770 | 4.361034 | — | — | — |
| redirect_error.test | LINK | 0.725820 | 3.742665 | 3.849805 | — | — | — |
| redirect_error_select.test | LINK | 0.751466 | 3.724766 | 3.852455 | — | — | — |
| registered_buffer.test | LINK | 0.194925 | 0.393984 | 0.550936 | — | — | — |
| registered_buffer_select.test | LINK | 0.195111 | 0.400749 | 0.572014 | — | — | — |
| signal_set.test | RUN | 0.602436 | 3.110964 | 2.660152 | 0.001682 | 0.001618 | 0.001393 |
| signal_set_select.test | RUN | 0.624537 | 3.214336 | 2.899270 | 0.001798 | 0.001796 | 0.001727 |
| signal_set_base.test | LINK | 0.158427 | 0.312270 | 0.414567 | — | — | — |
| signal_set_base_select.test | LINK | 0.159624 | 0.301625 | 0.415423 | — | — | — |
| socket_base.test | RUN | 0.730728 | 4.580060 | 4.101805 | 0.002059 | 0.001897 | 0.001867 |
| socket_base_select.test | RUN | 0.741055 | 4.456809 | 4.083385 | 0.002034 | 0.002096 | 0.001986 |
| spawn.test | RUN | 1.238780 | 7.419320 | 6.937570 | 0.002088 | 0.002047 | 0.002116 |
| spawn_select.test | RUN | 1.273907 | 7.389472 | 6.923225 | 0.002114 | 0.002025 | 0.002130 |
| static_thread_pool.test | RUN | 0.376052 | 0.738345 | 0.966042 | 0.001770 | 0.001866 | 0.001803 |
| static_thread_pool_select.test | RUN | 0.391068 | 0.793387 | 1.248290 | 0.001594 | 0.001873 | 0.001898 |
| steady_timer.test | LINK | 0.391062 | 0.833839 | 1.336143 | — | — | — |
| steady_timer_select.test | LINK | 0.402961 | 0.876646 | 1.379111 | — | — | — |
| strand.test | RUN | 0.806260 | 4.252897 | 4.136833 | 0.002502 | 0.002432 | 0.002654 |
| strand_select.test | RUN | 0.809770 | 4.241043 | 4.113787 | 0.002157 | 0.002590 | 0.002864 |
| stream_file.test | LINK | 0.355420 | 0.757038 | 1.012305 | — | — | — |
| stream_file_select.test | LINK | 0.371435 | 0.816398 | 1.287713 | — | — | — |
| streambuf.test | RUN | 0.211988 | 0.622921 | 0.692252 | 0.001360 | 0.001788 | 0.001786 |
| streambuf_select.test | RUN | 0.180000 | 0.610333 | 0.699602 | 0.001129 | 0.001302 | 0.001814 |
| system_timer.test | LINK | 0.517090 | 2.815932 | 2.623834 | — | — | — |
| system_timer_select.test | LINK | 0.516928 | 2.736503 | 2.458655 | — | — | — |
| system_context.test | LINK | 0.234969 | 0.500041 | 0.585732 | — | — | — |
| system_context_select.test | LINK | 0.246225 | 0.535120 | 0.729621 | — | — | — |
| system_executor.test | LINK | 0.308324 | 1.595571 | 1.116472 | — | — | — |
| system_executor_select.test | LINK | 0.320351 | 1.539909 | 1.246660 | — | — | — |
| this_coro.test | LINK | 0.094617 | 0.196663 | 0.227024 | — | — | — |
| this_coro_select.test | LINK | 0.095059 | 0.196295 | 0.230170 | — | — | — |
| thread_pool.test | RUN | 0.359874 | 2.013642 | 1.440639 | 0.002673 | 0.002538 | 0.002580 |
| thread_pool_select.test | RUN | 0.378579 | 2.030229 | 1.566888 | 0.002604 | 0.002489 | 0.002519 |
| time_traits.test | LINK | 0.207637 | 0.405063 | 0.473389 | — | — | — |
| time_traits_select.test | LINK | 0.211680 | 0.586917 | 0.471650 | — | — | — |
| ts_buffer.test | LINK | 0.196885 | 0.648749 | 0.496868 | — | — | — |
| ts_buffer_select.test | LINK | 0.201051 | 0.643125 | 0.504764 | — | — | — |
| ts_executor.test | LINK | 0.270378 | 0.886543 | 1.122560 | — | — | — |
| ts_executor_select.test | LINK | 0.291217 | 0.976895 | 1.205730 | — | — | — |
| ts_internet.test | LINK | 0.297928 | 1.008395 | 1.605093 | — | — | — |
| ts_internet_select.test | LINK | 0.308862 | 1.014349 | 1.662172 | — | — | — |
| ts_io_context.test | LINK | 0.242357 | 0.776800 | 0.973002 | — | — | — |
| ts_io_context_select.test | LINK | 0.258663 | 0.808176 | 1.237034 | — | — | — |
| ts_net.test | LINK | 0.356670 | 1.208694 | 2.005604 | — | — | — |
| ts_net_select.test | LINK | 0.368701 | 1.202581 | 2.048209 | — | — | — |
| ts_netfwd.test | LINK | 0.355962 | 1.192830 | 2.003243 | — | — | — |
| ts_netfwd_select.test | LINK | 0.368320 | 1.225369 | 2.028807 | — | — | — |
| ts_socket.test | LINK | 0.295199 | 0.941647 | 1.531157 | — | — | — |
| ts_socket_select.test | LINK | 0.310231 | 0.957886 | 1.573065 | — | — | — |
| ts_timer.test | LINK | 0.260868 | 0.845658 | 1.329284 | — | — | — |
| ts_timer_select.test | LINK | 0.272131 | 0.851534 | 1.353192 | — | — | — |
| use_awaitable.test | LINK | 0.092740 | 0.298716 | 0.380407 | — | — | — |
| use_awaitable_select.test | LINK | 0.096432 | 0.282479 | 0.383484 | — | — | — |
| wait_traits.test | LINK | 0.099125 | 0.293523 | 0.384346 | — | — | — |
| wait_traits_select.test | LINK | 0.093048 | 0.283597 | 0.358973 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.094583 | 0.277627 | 0.374233 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.093478 | 0.281310 | 0.358738 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.095251 | 0.291592 | 0.373772 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.092665 | 0.284000 | 0.399930 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.094718 | 0.279677 | 0.383846 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.093006 | 0.277425 | 0.355539 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.093554 | 0.286458 | 0.371947 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.094522 | 0.275538 | 0.376318 | — | — | — |
| windows_object_handle.test | LINK | 0.255467 | 0.764582 | 0.978997 | — | — | — |
| windows_object_handle_select.test | LINK | 0.270675 | 0.803942 | 1.267095 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.377929 | 0.800411 | 1.103040 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.397665 | 0.853831 | 1.366249 | — | — | — |
| windows_random_access_handle.test | LINK | 0.360593 | 0.769382 | 0.989555 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.389638 | 0.800193 | 1.269774 | — | — | — |
| windows_stream_handle.test | LINK | 0.365737 | 0.782328 | 0.998898 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.378943 | 0.832165 | 1.260496 | — | — | — |
| writable_pipe.test | LINK | 0.652169 | 3.134926 | 2.954587 | — | — | — |
| writable_pipe_select.test | LINK | 0.670997 | 3.268762 | 3.136721 | — | — | — |
| write.test | RUN | 1.843350 | 16.083419 | 16.504090 | 0.002435 | 0.002694 | 0.002566 |
| write_select.test | RUN | 1.853573 | 16.157099 | 16.641535 | 0.002554 | 0.002616 | 0.002525 |
| write_at.test | RUN | 1.896577 | 22.525042 | 20.527439 | 0.002566 | 0.002590 | 0.002598 |
| write_at_select.test | RUN | 1.921641 | 22.397134 | 20.744745 | 0.002598 | 0.002542 | 0.002637 |
| any_executor.test | RUN | 0.793038 | 7.709800 | 6.896156 | 0.002525 | 0.002300 | 0.002491 |
| blocking.test | RUN | 1.904319 | 9.546297 | 13.869737 | 0.007452 | 0.007165 | 0.007388 |
| blocking_adaptation.test | RUN | 0.962796 | 4.186056 | 6.194401 | 0.004166 | 0.003976 | 0.003271 |
| context_as.test | RUN | 0.514067 | 2.834933 | 2.068608 | 0.001413 | 0.002187 | 0.001971 |
| executor.test | RUN | 0.145003 | 0.291236 | 0.398268 | 0.001730 | 0.001802 | 0.001743 |
| inline_exception_handling.test | RUN | 1.812397 | 8.816538 | 13.358299 | 0.005117 | 0.005048 | 0.005098 |
| invocable_archetype.test | RUN | 0.138682 | 0.296088 | 0.396000 | 0.001757 | 0.001954 | 0.001738 |
| mapping.test | RUN | 1.883344 | 9.130598 | 13.493181 | 0.005208 | 0.005268 | 0.005158 |
| outstanding_work.test | RUN | 0.856556 | 3.749602 | 5.953800 | 0.003990 | 0.003905 | 0.004030 |
| prefer_only.test | RUN | 0.272518 | 1.477112 | 1.356311 | 0.001704 | 0.001868 | 0.001746 |
| relationship.test | RUN | 0.698312 | 3.314570 | 5.063348 | 0.003010 | 0.002916 | 0.002895 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.001×, 0.997× | 1.003× |
| clang | 0.992× | 0.993×, 0.990× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 9 | 0.001581s | 0.001567s | 0.001578s | byte equality observed |
| any_completion_executor_select.test | 8 | 0.001560s | 0.001550s | 0.001591s | byte equality observed |
| any_completion_handler.test | 10 | 0.001281s | 0.001258s | 0.001272s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001270s | 0.001270s | 0.001235s | byte equality observed |
| any_io_executor.test | 6 | 0.001577s | 0.001555s | 0.001603s | byte equality observed |
| any_io_executor_select.test | 8 | 0.001574s | 0.001559s | 0.001550s | byte equality observed |
| append.test | 10 | 0.001216s | 0.001192s | 0.001194s | byte equality observed |
| append_select.test | 9 | 0.001171s | 0.001170s | 0.001196s | byte equality observed |
| as_tuple.test | 9 | 0.001290s | 0.001281s | 0.001253s | byte equality observed |
| as_tuple_select.test | 10 | 0.001216s | 0.001192s | 0.001213s | byte equality observed |
| bind_allocator.test | 1 | 0.001698s | 0.001636s | 0.001619s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001396s | 0.001393s | 0.001260s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001143s | 0.001137s | 0.001129s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001045s | 0.001054s | 0.001030s | byte equality observed |
| bind_executor.test | 1 | 0.001644s | 0.001662s | 0.001639s | byte equality observed |
| bind_executor_select.test | 1 | 0.001979s | 0.001959s | 0.001925s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001060s | 0.001089s | 0.001069s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001072s | 0.001101s | 0.001066s | byte equality observed |
| buffer.test | 10 | 0.001041s | 0.001056s | 0.001059s | byte equality observed |
| buffer_select.test | 10 | 0.001048s | 0.001011s | 0.001024s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001328s | 0.001339s | 0.001357s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001310s | 0.001259s | 0.001281s | byte equality observed |
| buffered_stream.test | 10 | 0.001312s | 0.001288s | 0.001310s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001293s | 0.001285s | 0.001300s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001306s | 0.001346s | 0.001340s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001314s | 0.001273s | 0.001286s | byte equality observed |
| buffers_iterator.test | 10 | 0.001009s | 0.001020s | 0.001032s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000967s | 0.000954s | 0.000971s | byte equality observed |
| cancel_after.test | 1 | 0.003312s | 0.003253s | 0.003417s | byte equality observed |
| cancel_after_select.test | 1 | 0.002763s | 0.002764s | 0.002705s | byte equality observed |
| cancel_at.test | 1 | 0.003593s | 0.003538s | 0.003538s | byte equality observed |
| cancel_at_select.test | 1 | 0.003505s | 0.003378s | 0.003336s | byte equality observed |
| co_composed.test | 10 | 0.001013s | 0.001002s | 0.001075s | byte equality observed |
| co_composed_select.test | 10 | 0.000978s | 0.000966s | 0.000999s | byte equality observed |
| compose.test | 1 | 0.001712s | 0.001665s | 0.001644s | byte equality observed |
| compose_select.test | 1 | 0.001417s | 0.001406s | 0.001394s | byte equality observed |
| composed.test | 1 | 0.002010s | 0.002044s | 0.002033s | byte equality observed |
| composed_select.test | 1 | 0.001507s | 0.001492s | 0.001446s | byte equality observed |
| config.test | 9 | 0.001078s | 0.001066s | 0.001091s | byte equality observed |
| config_select.test | 10 | 0.001077s | 0.001130s | 0.001089s | byte equality observed |
| connect_pipe.test | 10 | 0.001124s | 0.001123s | 0.001102s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001089s | 0.001123s | 0.001099s | byte equality observed |
| consign.test | 10 | 0.001083s | 0.001109s | 0.001074s | byte equality observed |
| consign_select.test | 10 | 0.001012s | 0.001015s | 0.001025s | byte equality observed |
| deadline_timer.test | 1 | 0.002339s | 0.002275s | 0.002408s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002118s | 0.002134s | 0.002150s | byte equality observed |
| deferred.test | 10 | 0.000992s | 0.000993s | 0.000998s | byte equality observed |
| deferred_select.test | 10 | 0.000951s | 0.000941s | 0.000958s | byte equality observed |
| disposition.test | 10 | 0.000999s | 0.001002s | 0.001012s | byte equality observed |
| disposition_select.test | 10 | 0.000980s | 0.001016s | 0.001007s | byte equality observed |
| error.test | 10 | 0.000955s | 0.000970s | 0.000977s | byte equality observed |
| error_select.test | 10 | 0.000962s | 0.000973s | 0.000972s | byte equality observed |
| inline_executor.test | 10 | 0.000995s | 0.000988s | 0.000989s | byte equality observed |
| inline_executor_select.test | 10 | 0.000991s | 0.000981s | 0.000988s | byte equality observed |
| inline_or_executor.test | 10 | 0.000998s | 0.000994s | 0.000989s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000990s | 0.001004s | 0.000980s | byte equality observed |
| io_context.test | 1 | 0.001883s | 0.001884s | 0.001914s | byte equality observed |
| io_context_select.test | 1 | 0.002261s | 0.002251s | 0.002255s | byte equality observed |
| io_context_strand.test | 1 | 0.002250s | 0.002249s | 0.002259s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002021s | 0.002030s | 0.002014s | byte equality observed |
| ip_host_name.test | 10 | 0.000996s | 0.000998s | 0.001000s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000957s | 0.000944s | 0.000966s | byte equality observed |
| ip_icmp.test | 10 | 0.000984s | 0.000975s | 0.000978s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000995s | 0.000989s | 0.000979s | byte equality observed |
| ip_multicast.test | 10 | 0.001066s | 0.001076s | 0.001059s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001028s | 0.001052s | 0.001033s | byte equality observed |
| ip_tcp.test | 10 | 0.001451s | 0.001457s | 0.001458s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001386s | 0.001393s | 0.001386s | byte equality observed |
| ip_udp.test | 10 | 0.001087s | 0.001084s | 0.001077s | byte equality observed |
| ip_udp_select.test | 10 | 0.001076s | 0.001125s | 0.001066s | byte equality observed |
| ip_unicast.test | 10 | 0.001044s | 0.001133s | 0.001026s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001027s | 0.001142s | 0.001012s | byte equality observed |
| ip_v6_only.test | 10 | 0.001043s | 0.001123s | 0.001022s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001022s | 0.001079s | 0.001011s | byte equality observed |
| is_read_buffered.test | 10 | 0.000962s | 0.001046s | 0.000952s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000959s | 0.001039s | 0.000949s | byte equality observed |
| is_write_buffered.test | 10 | 0.000961s | 0.001043s | 0.000945s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000964s | 0.001010s | 0.000942s | byte equality observed |
| prepend.test | 10 | 0.001033s | 0.001083s | 0.001012s | byte equality observed |
| prepend_select.test | 10 | 0.001037s | 0.001063s | 0.001020s | byte equality observed |
| read.test | 10 | 0.001456s | 0.001442s | 0.001412s | byte equality observed |
| read_at.test | 10 | 0.001857s | 0.001878s | 0.001654s | byte equality observed |
| read_at_select.test | 10 | 0.001830s | 0.001870s | 0.001653s | byte equality observed |
| read_select.test | 10 | 0.001491s | 0.001458s | 0.001417s | byte equality observed |
| read_until.test | 10 | 0.001196s | 0.001198s | 0.001196s | byte equality observed |
| read_until_select.test | 10 | 0.001210s | 0.001207s | 0.001184s | byte equality observed |
| recycling_allocator.test | 10 | 0.001042s | 0.001034s | 0.001013s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001013s | 0.001021s | 0.000996s | byte equality observed |
| signal_set.test | 10 | 0.001078s | 0.001026s | 0.001024s | byte equality observed |
| signal_set_select.test | 10 | 0.001038s | 0.001035s | 0.001014s | byte equality observed |
| socket_base.test | 10 | 0.001152s | 0.001134s | 0.001164s | byte equality observed |
| socket_base_select.test | 10 | 0.001131s | 0.001107s | 0.001129s | byte equality observed |
| spawn.test | 10 | 0.001220s | 0.001251s | 0.001259s | byte equality observed |
| spawn_select.test | 10 | 0.001216s | 0.001194s | 0.001213s | byte equality observed |
| static_thread_pool.test | 10 | 0.001016s | 0.000989s | 0.001055s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000997s | 0.000968s | 0.001000s | byte equality observed |
| strand.test | 1 | 0.001943s | 0.001892s | 0.001899s | byte equality observed |
| strand_select.test | 1 | 0.001641s | 0.001612s | 0.001625s | byte equality observed |
| streambuf.test | 10 | 0.001053s | 0.001055s | 0.001047s | byte equality observed |
| streambuf_select.test | 10 | 0.001042s | 0.001034s | 0.001028s | byte equality observed |
| thread_pool.test | 10 | 0.002233s | 0.002214s | 0.002210s | byte equality observed |
| thread_pool_select.test | 10 | 0.002190s | 0.002205s | 0.002227s | byte equality observed |
| write.test | 10 | 0.001540s | 0.001493s | 0.001519s | byte equality observed |
| write_at.test | 10 | 0.001613s | 0.001619s | 0.001573s | byte equality observed |
| write_at_select.test | 10 | 0.001607s | 0.001596s | 0.001566s | byte equality observed |
| write_select.test | 10 | 0.001509s | 0.001479s | 0.001508s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
