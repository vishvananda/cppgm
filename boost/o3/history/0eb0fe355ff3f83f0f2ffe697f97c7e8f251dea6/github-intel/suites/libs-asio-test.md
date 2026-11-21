# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.538317 | 3.489252 | 2.963770 | 0.001684 | 0.001804 | 0.001796 |
| any_completion_executor_select.test | RUN | 0.537042 | 3.437907 | 3.120393 | 0.001516 | 0.001935 | 0.001796 |
| any_completion_handler.test | RUN | 0.598311 | 3.184368 | 2.756862 | 0.001422 | 0.001421 | 0.001503 |
| any_completion_handler_select.test | RUN | 0.605230 | 3.215626 | 2.923707 | 0.001673 | 0.001412 | 0.001612 |
| any_io_executor.test | RUN | 0.563747 | 3.726305 | 3.197995 | 0.002027 | 0.001829 | 0.002014 |
| any_io_executor_select.test | RUN | 0.567175 | 3.688054 | 3.373139 | 0.001726 | 0.001676 | 0.001765 |
| append.test | RUN | 0.516494 | 2.923906 | 2.439334 | 0.001269 | 0.001710 | 0.001320 |
| append_select.test | RUN | 0.528282 | 3.003235 | 2.428706 | 0.001365 | 0.001340 | 0.001399 |
| as_tuple.test | RUN | 0.677905 | 3.577737 | 3.424327 | 0.001484 | 0.001358 | 0.001432 |
| as_tuple_select.test | RUN | 0.681130 | 3.499641 | 3.430157 | 0.001419 | 0.001377 | 0.001327 |
| associated_allocator.test | LINK | 0.125308 | 0.286030 | 0.354135 | — | — | — |
| associated_allocator_select.test | LINK | 0.130209 | 0.284723 | 0.366640 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.140314 | 0.314726 | 0.391121 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.144901 | 0.314237 | 0.412855 | — | — | — |
| associated_executor.test | LINK | 0.209351 | 0.547452 | 0.650416 | — | — | — |
| associated_executor_select.test | LINK | 0.203431 | 0.544336 | 0.652256 | — | — | — |
| associated_immediate_executor.test | LINK | 0.186404 | 0.505754 | 0.617695 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.194572 | 0.506670 | 0.573814 | — | — | — |
| associator.test | LINK | 0.105882 | 0.245056 | 0.304145 | — | — | — |
| associator_select.test | LINK | 0.102090 | 0.241766 | 0.291609 | — | — | — |
| awaitable.test | LINK | 0.106471 | 0.239262 | 0.299548 | — | — | — |
| awaitable_select.test | LINK | 0.106807 | 0.242261 | 0.288032 | — | — | — |
| basic_datagram_socket.test | LINK | 0.320278 | 0.759460 | 1.115320 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.328673 | 0.789245 | 1.145722 | — | — | — |
| basic_deadline_timer.test | LINK | 0.390415 | 0.909315 | 1.282031 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.391461 | 0.907628 | 1.316893 | — | — | — |
| basic_file.test | LINK | 0.102921 | 0.243282 | 0.291147 | — | — | — |
| basic_file_select.test | LINK | 0.102769 | 0.243282 | 0.293699 | — | — | — |
| basic_random_access_file.test | LINK | 0.108690 | 0.242582 | 0.292883 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.109770 | 0.240008 | 0.294567 | — | — | — |
| basic_raw_socket.test | LINK | 0.320799 | 0.768835 | 1.134771 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.337250 | 0.791694 | 1.135693 | — | — | — |
| basic_readable_pipe.test | LINK | 0.312105 | 0.734447 | 0.958446 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.334335 | 0.771038 | 1.186763 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.330860 | 0.771061 | 1.118941 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.332695 | 0.799257 | 1.151829 | — | — | — |
| basic_signal_set.test | LINK | 0.299570 | 0.707976 | 0.888996 | — | — | — |
| basic_signal_set_select.test | LINK | 0.325849 | 0.748385 | 1.105394 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.333178 | 0.785246 | 1.131266 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.341145 | 0.792608 | 1.149008 | — | — | — |
| basic_stream_file.test | LINK | 0.102354 | 0.239766 | 0.300947 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105233 | 0.239873 | 0.292919 | — | — | — |
| basic_stream_socket.test | LINK | 0.329863 | 0.771590 | 1.120488 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.337074 | 0.794938 | 1.145237 | — | — | — |
| basic_streambuf.test | LINK | 0.156480 | 0.349363 | 0.435702 | — | — | — |
| basic_streambuf_select.test | LINK | 0.161142 | 0.348932 | 0.429411 | — | — | — |
| basic_waitable_timer.test | LINK | 0.312610 | 0.727136 | 1.049849 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.314190 | 0.744240 | 1.067294 | — | — | — |
| basic_writable_pipe.test | LINK | 0.315749 | 0.727134 | 0.979920 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.329456 | 0.782987 | 1.201201 | — | — | — |
| bind_allocator.test | RUN | 0.549414 | 3.018287 | 2.694729 | 0.001888 | 0.002048 | 0.001948 |
| bind_allocator_select.test | RUN | 0.568676 | 2.984472 | 2.659567 | 0.001777 | 0.001298 | 0.001590 |
| bind_cancellation_slot.test | RUN | 0.568326 | 3.004594 | 2.727710 | 0.001022 | 0.001441 | 0.001029 |
| bind_cancellation_slot_select.test | RUN | 0.566397 | 3.039181 | 2.590255 | 0.000962 | 0.001007 | 0.001032 |
| bind_executor.test | RUN | 0.381345 | 2.061708 | 1.717435 | 0.001698 | 0.001694 | 0.001645 |
| bind_executor_select.test | RUN | 0.390058 | 2.095188 | 1.683114 | 0.001529 | 0.001613 | 0.001473 |
| bind_immediate_executor.test | RUN | 0.285162 | 1.702476 | 1.083352 | 0.000963 | 0.000967 | 0.000995 |
| bind_immediate_executor_select.test | RUN | 0.292375 | 1.663507 | 1.176442 | 0.000910 | 0.000957 | 0.000937 |
| buffer.test | RUN | 0.173609 | 0.700331 | 0.627773 | 0.000960 | 0.000948 | 0.000964 |
| buffer_select.test | RUN | 0.170774 | 0.704224 | 0.631882 | 0.000972 | 0.000926 | 0.000929 |
| buffer_registration.test | LINK | 0.135634 | 0.350327 | 0.369285 | — | — | — |
| buffer_registration_select.test | LINK | 0.134175 | 0.345890 | 0.364052 | — | — | — |
| buffered_read_stream.test | RUN | 0.655911 | 4.632591 | 3.758594 | 0.001234 | 0.001845 | 0.001644 |
| buffered_read_stream_select.test | RUN | 0.671895 | 4.666736 | 3.804789 | 0.001184 | 0.001749 | 0.001611 |
| buffered_stream.test | RUN | 0.892899 | 7.366532 | 6.891292 | 0.001775 | 0.001640 | 0.001591 |
| buffered_stream_select.test | RUN | 0.953425 | 7.435685 | 6.563482 | 0.001877 | 0.001820 | 0.001701 |
| buffered_write_stream.test | RUN | 1.103498 | 6.313163 | 5.808523 | 0.002034 | 0.001826 | 0.001597 |
| buffered_write_stream_select.test | RUN | 1.121622 | 6.486640 | 5.640806 | 0.001661 | 0.001744 | 0.001597 |
| buffers_iterator.test | RUN | 0.315975 | 0.558541 | 0.887960 | 0.001178 | 0.001269 | 0.001281 |
| buffers_iterator_select.test | RUN | 0.315644 | 0.551530 | 0.900314 | 0.001249 | 0.001265 | 0.001284 |
| cancel_after.test | RUN | 0.914317 | 4.925462 | 4.218918 | 0.003214 | 0.003481 | 0.003823 |
| cancel_after_select.test | RUN | 0.929420 | 4.939493 | 4.223682 | 0.003255 | 0.003560 | 0.003420 |
| cancel_at.test | RUN | 0.786083 | 4.391613 | 4.128973 | 0.002938 | 0.002977 | 0.002934 |
| cancel_at_select.test | RUN | 0.807212 | 4.320776 | 4.101965 | 0.002815 | 0.002908 | 0.003560 |
| cancellation_signal.test | LINK | 0.091434 | 0.200920 | 0.300348 | — | — | — |
| cancellation_signal_select.test | LINK | 0.093027 | 0.201220 | 0.380710 | — | — | — |
| cancellation_state.test | LINK | 0.090873 | 0.209502 | 0.384034 | — | — | — |
| cancellation_state_select.test | LINK | 0.129134 | 0.200663 | 0.366748 | — | — | — |
| cancellation_type.test | LINK | 0.102832 | 0.158597 | 0.295457 | — | — | — |
| cancellation_type_select.test | LINK | 0.100274 | 0.158123 | 0.301273 | — | — | — |
| co_composed.test | RUN | 0.105614 | 0.158967 | 0.287294 | 0.001147 | 0.000869 | 0.001121 |
| co_composed_select.test | RUN | 0.106551 | 0.167607 | 0.291054 | 0.001225 | 0.000925 | 0.001043 |
| co_spawn.test | LINK | 0.105006 | 0.229563 | 0.298489 | — | — | — |
| co_spawn_select.test | LINK | 0.099794 | 0.236866 | 0.289185 | — | — | — |
| completion_condition.test | LINK | 0.136578 | 0.368193 | 0.396746 | — | — | — |
| completion_condition_select.test | LINK | 0.128872 | 0.363921 | 0.395248 | — | — | — |
| compose.test | RUN | 0.682042 | 3.762556 | 3.352537 | 0.001730 | 0.002128 | 0.001954 |
| compose_select.test | RUN | 0.684131 | 3.719059 | 3.353510 | 0.001695 | 0.001786 | 0.002063 |
| composed.test | RUN | 0.683347 | 3.691280 | 3.301792 | 0.001412 | 0.001483 | 0.001447 |
| composed_select.test | RUN | 0.643469 | 3.621965 | 3.300029 | 0.001480 | 0.001546 | 0.001375 |
| config.test | RUN | 0.340387 | 2.330052 | 1.463410 | 0.001348 | 0.001394 | 0.001408 |
| config_select.test | RUN | 0.357597 | 2.412379 | 1.710560 | 0.001336 | 0.001261 | 0.001291 |
| connect.test | LINK | 1.093246 | 7.848287 | 7.129030 | — | — | — |
| connect_select.test | LINK | 1.115606 | 7.891227 | 7.091724 | — | — | — |
| connect_pipe.test | RUN | 0.578874 | 2.972070 | 2.611805 | 0.001467 | 0.001402 | 0.001338 |
| connect_pipe_select.test | RUN | 0.605144 | 3.095901 | 2.793477 | 0.001214 | 0.001360 | 0.001436 |
| consign.test | RUN | 0.504748 | 2.928494 | 2.432675 | 0.001612 | 0.001313 | 0.001338 |
| consign_select.test | RUN | 0.511170 | 2.954978 | 2.386271 | 0.001328 | 0.001437 | 0.001259 |
| coroutine.test | LINK | 0.110013 | 0.281577 | 0.332889 | — | — | — |
| coroutine_select.test | LINK | 0.109690 | 0.278782 | 0.343025 | — | — | — |
| deadline_timer.test | RUN | 0.753034 | 3.773028 | 3.479480 | 0.002604 | 0.002954 | 0.002312 |
| deadline_timer_select.test | RUN | 0.754556 | 3.719161 | 3.446272 | 0.002531 | 0.002288 | 0.003083 |
| deferred.test | RUN | 0.114809 | 0.254474 | 0.323217 | 0.001289 | 0.001249 | 0.001163 |
| deferred_select.test | RUN | 0.115686 | 0.259121 | 0.326997 | 0.001187 | 0.001331 | 0.001346 |
| detached.test | LINK | 0.124481 | 0.283666 | 0.354523 | — | — | — |
| detached_select.test | LINK | 0.129009 | 0.283978 | 0.366734 | — | — | — |
| disposition.test | RUN | 0.123845 | 0.696456 | 0.668913 | 0.000933 | 0.001363 | 0.001578 |
| disposition_select.test | RUN | 0.124293 | 0.703682 | 0.690186 | 0.000916 | 0.001288 | 0.001338 |
| error.test | RUN | 0.116786 | 0.680769 | 0.620249 | 0.000932 | 0.001428 | 0.001376 |
| error_select.test | RUN | 0.115648 | 0.684422 | 0.599922 | 0.000914 | 0.001396 | 0.001415 |
| file_base.test | LINK | 0.141355 | 0.547852 | 0.657510 | — | — | — |
| file_base_select.test | LINK | 0.139056 | 0.548069 | 0.510105 | — | — | — |
| fwd_first.test | LINK | 0.327499 | 0.925845 | 1.166918 | — | — | — |
| fwd_last.test | LINK | 0.324446 | 0.860822 | 1.170872 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.123615 | 0.317904 | 0.412660 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.121984 | 0.316570 | 0.417823 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.551091 | 2.984824 | 2.447232 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.545770 | 3.038230 | 2.440234 | — | — | — |
| generic_raw_protocol.test | LINK | 0.553255 | 2.990677 | 2.448487 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.551902 | 3.045888 | 2.444258 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.479662 | 2.542869 | 2.098706 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.481856 | 2.556142 | 2.096107 | — | — | — |
| generic_stream_protocol.test | LINK | 0.504871 | 2.709374 | 2.243953 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.502704 | 2.751799 | 2.250355 | — | — | — |
| high_resolution_timer.test | LINK | 0.210550 | 0.470461 | 0.648445 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.212834 | 0.481297 | 0.668185 | — | — | — |
| immediate.test | LINK | 0.137731 | 0.364982 | 0.400029 | — | — | — |
| immediate_select.test | LINK | 0.137427 | 0.362169 | 0.405140 | — | — | — |
| inline_executor.test | RUN | 0.171806 | 0.569115 | 0.603891 | 0.000954 | 0.000928 | 0.000991 |
| inline_executor_select.test | RUN | 0.173516 | 0.566995 | 0.611610 | 0.000861 | 0.000981 | 0.000916 |
| inline_or_executor.test | RUN | 0.294523 | 1.763401 | 1.212097 | 0.000944 | 0.000996 | 0.000910 |
| inline_or_executor_select.test | RUN | 0.303200 | 1.774266 | 1.323962 | 0.000959 | 0.000929 | 0.000911 |
| io_context.test | RUN | 0.430374 | 2.678949 | 2.111441 | 0.001926 | 0.002016 | 0.001968 |
| io_context_select.test | RUN | 0.434965 | 2.610045 | 2.135673 | 0.001575 | 0.001890 | 0.001892 |
| io_context_strand.test | RUN | 0.413452 | 2.231146 | 1.881390 | 0.001826 | 0.001912 | 0.001779 |
| io_context_strand_select.test | RUN | 0.421023 | 2.221247 | 1.846462 | 0.001560 | 0.001614 | 0.001790 |
| ip_address.test | LINK | 0.151279 | 0.510266 | 0.507375 | — | — | — |
| ip_address_select.test | LINK | 0.147629 | 0.511620 | 0.511553 | — | — | — |
| ip_address_v4.test | LINK | 0.146825 | 0.536244 | 0.900880 | — | — | — |
| ip_address_v4_select.test | LINK | 0.145050 | 0.538630 | 0.894463 | — | — | — |
| ip_address_v6.test | LINK | 0.170401 | 0.704211 | 0.850354 | — | — | — |
| ip_address_v6_select.test | LINK | 0.168690 | 0.707358 | 1.134188 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.127558 | 0.336210 | 0.704973 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.127563 | 0.334676 | 0.711380 | — | — | — |
| ip_basic_resolver.test | LINK | 0.210889 | 0.556308 | 1.070380 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.216548 | 0.526726 | 1.088588 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.067610 | 0.236495 | 0.295494 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.067390 | 0.236557 | 0.302477 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.124893 | 0.489815 | 0.680115 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.123560 | 0.490006 | 0.686771 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.121743 | 0.470727 | 0.662621 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.122044 | 0.477815 | 0.664947 | — | — | — |
| ip_host_name.test | RUN | 0.132469 | 0.657470 | 0.758148 | 0.000888 | 0.001178 | 0.001220 |
| ip_host_name_select.test | RUN | 0.132940 | 0.641967 | 0.757119 | 0.000872 | 0.001251 | 0.001311 |
| ip_icmp.test | RUN | 0.691524 | 6.303312 | 5.063080 | 0.000903 | 0.001284 | 0.001248 |
| ip_icmp_select.test | RUN | 0.687731 | 6.384374 | 4.940180 | 0.000942 | 0.001254 | 0.001344 |
| ip_multicast.test | RUN | 0.383273 | 3.141647 | 2.807248 | 0.001097 | 0.001417 | 0.001319 |
| ip_multicast_select.test | RUN | 0.394971 | 3.051733 | 2.784496 | 0.000990 | 0.001415 | 0.001356 |
| ip_resolver_query_base.test | LINK | 0.081778 | 0.258187 | 0.316425 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.080683 | 0.259014 | 0.312212 | — | — | — |
| ip_tcp.test | RUN | 1.027433 | 9.360571 | 7.780697 | 0.001345 | 0.001774 | 0.001789 |
| ip_tcp_select.test | RUN | 1.028848 | 9.619991 | 7.555522 | 0.001162 | 0.001858 | 0.001792 |
| ip_udp.test | RUN | 0.736368 | 6.709124 | 5.328944 | 0.001028 | 0.001408 | 0.001427 |
| ip_udp_select.test | RUN | 0.734963 | 6.758445 | 5.191360 | 0.001143 | 0.001401 | 0.001488 |
| ip_unicast.test | RUN | 0.348786 | 2.886562 | 2.480535 | 0.001012 | 0.001365 | 0.001425 |
| ip_unicast_select.test | RUN | 0.354812 | 2.864221 | 2.449384 | 0.000998 | 0.001449 | 0.001411 |
| ip_v6_only.test | RUN | 0.365981 | 2.917668 | 2.525389 | 0.000987 | 0.001390 | 0.001274 |
| ip_v6_only_select.test | RUN | 0.372377 | 3.028458 | 2.508790 | 0.000949 | 0.001371 | 0.001292 |
| is_read_buffered.test | RUN | 0.239989 | 0.877591 | 1.277710 | 0.000890 | 0.001217 | 0.001250 |
| is_read_buffered_select.test | RUN | 0.245673 | 0.878901 | 1.306693 | 0.000888 | 0.001341 | 0.001138 |
| is_write_buffered.test | RUN | 0.242284 | 0.874740 | 1.275918 | 0.000907 | 0.001259 | 0.001255 |
| is_write_buffered_select.test | RUN | 0.246694 | 0.886809 | 1.314227 | 0.000893 | 0.001393 | 0.001230 |
| local_basic_endpoint.test | LINK | 0.120627 | 0.488899 | 0.669385 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.121017 | 0.467429 | 0.662820 | — | — | — |
| local_connect_pair.test | LINK | 0.332431 | 2.885860 | 2.370537 | — | — | — |
| local_connect_pair_select.test | LINK | 0.339400 | 2.867504 | 2.295439 | — | — | — |
| local_datagram_protocol.test | LINK | 0.471192 | 3.844591 | 3.313749 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.476565 | 3.823744 | 3.291781 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.471333 | 3.741613 | 3.363649 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.477857 | 3.784703 | 3.295031 | — | — | — |
| local_stream_protocol.test | LINK | 0.438751 | 3.582905 | 3.171470 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.450500 | 3.550469 | 3.162962 | — | — | — |
| placeholders.test | LINK | 0.075340 | 0.257198 | 0.331804 | — | — | — |
| placeholders_select.test | LINK | 0.075275 | 0.259213 | 0.320914 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.216267 | 0.726483 | 0.992306 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.223803 | 0.763337 | 1.188202 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.212656 | 0.737197 | 0.977314 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.215750 | 0.769573 | 1.190817 | — | — | — |
| posix_descriptor_base.test | LINK | 0.083115 | 0.267936 | 0.323372 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.081942 | 0.268393 | 0.322284 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.465422 | 3.619158 | 3.127723 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.470345 | 3.662817 | 3.190597 | — | — | — |
| prepend.test | RUN | 0.363233 | 2.955934 | 2.457430 | 0.001291 | 0.001537 | 0.001333 |
| prepend_select.test | RUN | 0.374432 | 2.975060 | 2.440425 | 0.001227 | 0.001318 | 0.001330 |
| random_access_file.test | LINK | 0.289562 | 0.660418 | 0.797151 | — | — | — |
| random_access_file_select.test | LINK | 0.311318 | 0.698464 | 0.995792 | — | — | — |
| read.test | RUN | 1.657670 | 18.122818 | 14.365454 | 0.001734 | 0.001883 | 0.001940 |
| read_select.test | RUN | 1.678584 | 18.418220 | 14.329596 | 0.001740 | 0.001836 | 0.001932 |
| read_at.test | RUN | 1.667996 | 24.012306 | 19.093068 | 0.002263 | 0.002321 | 0.002136 |
| read_at_select.test | RUN | 1.700583 | 23.964754 | 19.434243 | 0.001909 | 0.002278 | 0.002018 |
| read_until.test | RUN | 0.867986 | 7.068124 | 5.230852 | 0.001576 | 0.001605 | 0.001419 |
| read_until_select.test | RUN | 0.875341 | 7.230793 | 5.360756 | 0.001434 | 0.001424 | 0.001507 |
| readable_pipe.test | LINK | 0.530368 | 2.954684 | 2.405636 | — | — | — |
| readable_pipe_select.test | LINK | 0.549408 | 3.137564 | 2.572383 | — | — | — |
| recycling_allocator.test | RUN | 0.159862 | 0.416315 | 0.472628 | 0.001235 | 0.001201 | 0.001181 |
| recycling_allocator_select.test | RUN | 0.154966 | 0.410262 | 0.474849 | 0.001140 | 0.001215 | 0.001367 |
| redirect_disposition.test | LINK | 0.693634 | 4.118518 | 3.706363 | — | — | — |
| redirect_disposition_select.test | LINK | 0.701807 | 4.128542 | 3.739502 | — | — | — |
| redirect_error.test | LINK | 0.622081 | 3.422697 | 3.241177 | — | — | — |
| redirect_error_select.test | LINK | 0.623676 | 3.405172 | 3.271592 | — | — | — |
| registered_buffer.test | LINK | 0.149380 | 0.338582 | 0.431444 | — | — | — |
| registered_buffer_select.test | LINK | 0.148407 | 0.332410 | 0.419573 | — | — | — |
| signal_set.test | RUN | 0.509664 | 2.880841 | 2.319817 | 0.001268 | 0.001313 | 0.001277 |
| signal_set_select.test | RUN | 0.529073 | 3.028453 | 2.475323 | 0.001168 | 0.001304 | 0.001258 |
| signal_set_base.test | LINK | 0.114404 | 0.263163 | 0.316322 | — | — | — |
| signal_set_base_select.test | LINK | 0.114193 | 0.264348 | 0.317600 | — | — | — |
| socket_base.test | RUN | 0.626973 | 4.191365 | 3.455557 | 0.001362 | 0.001405 | 0.001453 |
| socket_base_select.test | RUN | 0.633065 | 4.095937 | 3.486304 | 0.001439 | 0.001474 | 0.001448 |
| spawn.test | RUN | 1.099089 | 7.070652 | 6.046344 | 0.001650 | 0.001684 | 0.001505 |
| spawn_select.test | RUN | 1.112432 | 7.130519 | 5.962176 | 0.001490 | 0.001609 | 0.001639 |
| static_thread_pool.test | RUN | 0.273351 | 0.647053 | 0.777281 | 0.001186 | 0.001297 | 0.001370 |
| static_thread_pool_select.test | RUN | 0.284711 | 0.710361 | 1.010892 | 0.001138 | 0.001396 | 0.001398 |
| steady_timer.test | LINK | 0.307303 | 0.726430 | 1.099975 | — | — | — |
| steady_timer_select.test | LINK | 0.309103 | 0.736217 | 1.119469 | — | — | — |
| strand.test | RUN | 0.678014 | 3.994725 | 3.610756 | 0.002148 | 0.002013 | 0.001966 |
| strand_select.test | RUN | 0.689633 | 3.906522 | 3.510852 | 0.001533 | 0.002068 | 0.001797 |
| stream_file.test | LINK | 0.282699 | 0.670707 | 0.848311 | — | — | — |
| stream_file_select.test | LINK | 0.291420 | 0.578489 | 1.017720 | — | — | — |
| streambuf.test | RUN | 0.180030 | 0.404727 | 0.560978 | 0.000895 | 0.000958 | 0.001201 |
| streambuf_select.test | RUN | 0.175452 | 0.369989 | 0.558617 | 0.000861 | 0.000993 | 0.001252 |
| system_timer.test | LINK | 0.441197 | 2.518667 | 2.202090 | — | — | — |
| system_timer_select.test | LINK | 0.444086 | 2.484475 | 2.024179 | — | — | — |
| system_context.test | LINK | 0.189443 | 0.420200 | 0.480679 | — | — | — |
| system_context_select.test | LINK | 0.197665 | 0.448978 | 0.598664 | — | — | — |
| system_executor.test | LINK | 0.254835 | 1.414807 | 0.979954 | — | — | — |
| system_executor_select.test | LINK | 0.263347 | 1.383880 | 1.060714 | — | — | — |
| this_coro.test | LINK | 0.069660 | 0.158432 | 0.187725 | — | — | — |
| this_coro_select.test | LINK | 0.068928 | 0.156640 | 0.189009 | — | — | — |
| thread_pool.test | RUN | 0.312994 | 1.811977 | 1.245350 | 0.001614 | 0.001637 | 0.001615 |
| thread_pool_select.test | RUN | 0.318942 | 1.813293 | 1.367136 | 0.001572 | 0.001568 | 0.001612 |
| time_traits.test | LINK | 0.156942 | 0.323774 | 0.380539 | — | — | — |
| time_traits_select.test | LINK | 0.156885 | 0.320901 | 0.381951 | — | — | — |
| ts_buffer.test | LINK | 0.151197 | 0.512007 | 0.403132 | — | — | — |
| ts_buffer_select.test | LINK | 0.150063 | 0.558808 | 0.407417 | — | — | — |
| ts_executor.test | LINK | 0.217788 | 0.772537 | 0.640455 | — | — | — |
| ts_executor_select.test | LINK | 0.226638 | 0.810833 | 0.771149 | — | — | — |
| ts_internet.test | LINK | 0.237712 | 0.843996 | 0.859555 | — | — | — |
| ts_internet_select.test | LINK | 0.237733 | 0.874970 | 1.270590 | — | — | — |
| ts_io_context.test | LINK | 0.192763 | 0.646717 | 0.786213 | — | — | — |
| ts_io_context_select.test | LINK | 0.200100 | 0.685981 | 0.974620 | — | — | — |
| ts_net.test | LINK | 0.287052 | 1.016614 | 1.560776 | — | — | — |
| ts_net_select.test | LINK | 0.291194 | 1.034337 | 1.624095 | — | — | — |
| ts_netfwd.test | LINK | 0.277376 | 1.024546 | 1.579481 | — | — | — |
| ts_netfwd_select.test | LINK | 0.282925 | 1.029285 | 1.603411 | — | — | — |
| ts_socket.test | LINK | 0.229502 | 0.797295 | 1.192653 | — | — | — |
| ts_socket_select.test | LINK | 0.238253 | 0.804042 | 1.230565 | — | — | — |
| ts_timer.test | LINK | 0.209276 | 0.722235 | 1.038819 | — | — | — |
| ts_timer_select.test | LINK | 0.214404 | 0.738094 | 1.063043 | — | — | — |
| use_awaitable.test | LINK | 0.068865 | 0.233876 | 0.289684 | — | — | — |
| use_awaitable_select.test | LINK | 0.066565 | 0.237529 | 0.293085 | — | — | — |
| wait_traits.test | LINK | 0.066481 | 0.234740 | 0.287088 | — | — | — |
| wait_traits_select.test | LINK | 0.067028 | 0.235589 | 0.290931 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.069822 | 0.232173 | 0.290430 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.068544 | 0.232778 | 0.294816 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070025 | 0.240067 | 0.285028 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.070049 | 0.235463 | 0.286992 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.072292 | 0.238113 | 0.295302 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.070930 | 0.227359 | 0.287290 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.067839 | 0.237295 | 0.290818 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.066779 | 0.239792 | 0.285579 | — | — | — |
| windows_object_handle.test | LINK | 0.194662 | 0.657753 | 0.790674 | — | — | — |
| windows_object_handle_select.test | LINK | 0.205256 | 0.695962 | 0.980981 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.203254 | 0.693674 | 0.873999 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.211319 | 0.741622 | 1.072263 | — | — | — |
| windows_random_access_handle.test | LINK | 0.197780 | 0.657783 | 0.787595 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.201040 | 0.692363 | 1.004304 | — | — | — |
| windows_stream_handle.test | LINK | 0.195907 | 0.654613 | 0.781769 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.199198 | 0.702429 | 0.991865 | — | — | — |
| writable_pipe.test | LINK | 0.371868 | 2.886793 | 2.543938 | — | — | — |
| writable_pipe_select.test | LINK | 0.386146 | 2.992886 | 2.677217 | — | — | — |
| write.test | RUN | 1.593320 | 15.223710 | 13.782086 | 0.001792 | 0.001663 | 0.001912 |
| write_select.test | RUN | 1.633484 | 15.335476 | 14.055021 | 0.001752 | 0.001847 | 0.001844 |
| write_at.test | RUN | 1.726271 | 20.267690 | 17.685188 | 0.002018 | 0.002162 | 0.001933 |
| write_at_select.test | RUN | 1.727193 | 20.206112 | 17.981151 | 0.001916 | 0.001874 | 0.001956 |
| any_executor.test | RUN | 0.666423 | 6.694663 | 5.778987 | 0.001833 | 0.002045 | 0.002132 |
| blocking.test | RUN | 1.466751 | 9.049885 | 11.557939 | 0.003374 | 0.003295 | 0.003394 |
| blocking_adaptation.test | RUN | 0.735479 | 3.831121 | 5.161253 | 0.002052 | 0.002017 | 0.002220 |
| context_as.test | RUN | 0.430009 | 2.628117 | 1.765773 | 0.001422 | 0.001274 | 0.001513 |
| executor.test | RUN | 0.108246 | 0.238815 | 0.318474 | 0.001200 | 0.001192 | 0.001181 |
| inline_exception_handling.test | RUN | 1.441724 | 8.322385 | 11.509346 | 0.003262 | 0.002289 | 0.002343 |
| invocable_archetype.test | RUN | 0.103264 | 0.242797 | 0.298661 | 0.001235 | 0.001190 | 0.001186 |
| mapping.test | RUN | 1.473206 | 8.186641 | 10.998259 | 0.002412 | 0.002320 | 0.002449 |
| outstanding_work.test | RUN | 0.680303 | 3.673089 | 4.985887 | 0.002114 | 0.002122 | 0.002066 |
| prefer_only.test | RUN | 0.217995 | 1.448579 | 1.097630 | 0.001267 | 0.001356 | 0.001280 |
| relationship.test | RUN | 0.465722 | 3.340007 | 4.903253 | 0.001562 | 0.002090 | 0.001947 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.036×, 0.987× | 1.027× |
| clang | 1.020× | 1.033×, 1.007× | 0.974× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001254s | 0.001232s | 0.001205s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001252s | 0.001178s | 0.001274s | byte equality observed |
| any_completion_handler.test | 10 | 0.001026s | 0.001028s | 0.000997s | byte equality observed |
| any_completion_handler_select.test | 6 | 0.001023s | 0.001025s | 0.001018s | byte equality observed |
| any_io_executor.test | 4 | 0.001241s | 0.001248s | 0.001191s | byte equality observed |
| any_io_executor_select.test | 2 | 0.001215s | 0.001250s | 0.001157s | byte equality observed |
| append.test | 7 | 0.000983s | 0.000997s | 0.000951s | byte equality observed |
| append_select.test | 6 | 0.000973s | 0.000974s | 0.000935s | byte equality observed |
| as_tuple.test | 10 | 0.001045s | 0.001038s | 0.001030s | byte equality observed |
| as_tuple_select.test | 10 | 0.000983s | 0.000977s | 0.000971s | byte equality observed |
| bind_allocator.test | 1 | 0.001394s | 0.001425s | 0.001315s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001105s | 0.001173s | 0.001136s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000834s | 0.000873s | 0.000823s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000787s | 0.000825s | 0.000790s | byte equality observed |
| bind_executor.test | 1 | 0.001236s | 0.001378s | 0.001306s | byte equality observed |
| bind_executor_select.test | 1 | 0.001328s | 0.001500s | 0.001330s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000903s | 0.000924s | 0.000903s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000857s | 0.000875s | 0.000902s | byte equality observed |
| buffer.test | 10 | 0.000834s | 0.000844s | 0.000800s | byte equality observed |
| buffer_select.test | 10 | 0.000841s | 0.000839s | 0.000822s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001053s | 0.001038s | 0.001022s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.000995s | 0.001044s | 0.000997s | byte equality observed |
| buffered_stream.test | 10 | 0.001010s | 0.001007s | 0.001042s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000986s | 0.001001s | 0.001003s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001007s | 0.001051s | 0.001032s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001007s | 0.001006s | 0.001027s | byte equality observed |
| buffers_iterator.test | 10 | 0.000789s | 0.000807s | 0.000805s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000799s | 0.000798s | 0.000825s | byte equality observed |
| cancel_after.test | 1 | 0.002301s | 0.002518s | 0.002432s | byte equality observed |
| cancel_after_select.test | 1 | 0.002050s | 0.002202s | 0.002100s | byte equality observed |
| cancel_at.test | 1 | 0.002316s | 0.002779s | 0.002738s | byte equality observed |
| cancel_at_select.test | 1 | 0.002333s | 0.002773s | 0.002509s | byte equality observed |
| co_composed.test | 10 | 0.000808s | 0.000880s | 0.000885s | byte equality observed |
| co_composed_select.test | 10 | 0.000803s | 0.000829s | 0.000818s | byte equality observed |
| compose.test | 1 | 0.001225s | 0.001387s | 0.001254s | byte equality observed |
| compose_select.test | 1 | 0.001067s | 0.001191s | 0.001138s | byte equality observed |
| composed.test | 1 | 0.001259s | 0.001605s | 0.001399s | byte equality observed |
| composed_select.test | 1 | 0.001125s | 0.001270s | 0.001198s | byte equality observed |
| config.test | 10 | 0.000845s | 0.000932s | 0.000878s | byte equality observed |
| config_select.test | 10 | 0.000862s | 0.000896s | 0.000902s | byte equality observed |
| connect_pipe.test | 10 | 0.000883s | 0.000885s | 0.000882s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000881s | 0.000874s | 0.000863s | byte equality observed |
| consign.test | 10 | 0.000887s | 0.000860s | 0.000867s | byte equality observed |
| consign_select.test | 10 | 0.000819s | 0.000875s | 0.000822s | byte equality observed |
| deadline_timer.test | 1 | 0.002092s | 0.002166s | 0.002115s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001817s | 0.001867s | 0.001783s | byte equality observed |
| deferred.test | 10 | 0.000742s | 0.000806s | 0.000814s | byte equality observed |
| deferred_select.test | 10 | 0.000736s | 0.000751s | 0.000739s | byte equality observed |
| disposition.test | 10 | 0.000775s | 0.000800s | 0.000792s | byte equality observed |
| disposition_select.test | 10 | 0.000774s | 0.000785s | 0.000776s | byte equality observed |
| error.test | 10 | 0.000754s | 0.000783s | 0.000766s | byte equality observed |
| error_select.test | 10 | 0.000772s | 0.000777s | 0.000749s | byte equality observed |
| inline_executor.test | 10 | 0.000781s | 0.000778s | 0.000764s | byte equality observed |
| inline_executor_select.test | 10 | 0.000776s | 0.000772s | 0.000754s | byte equality observed |
| inline_or_executor.test | 10 | 0.000787s | 0.000784s | 0.000765s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000782s | 0.000795s | 0.000780s | byte equality observed |
| io_context.test | 1 | 0.001705s | 0.001702s | 0.001753s | byte equality observed |
| io_context_select.test | 1 | 0.001608s | 0.001722s | 0.001677s | byte equality observed |
| io_context_strand.test | 1 | 0.001940s | 0.001971s | 0.001962s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001481s | 0.001756s | 0.001615s | byte equality observed |
| ip_host_name.test | 10 | 0.000847s | 0.000850s | 0.000844s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000765s | 0.000771s | 0.000763s | byte equality observed |
| ip_icmp.test | 10 | 0.000789s | 0.000798s | 0.000772s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000782s | 0.000793s | 0.000771s | byte equality observed |
| ip_multicast.test | 10 | 0.000851s | 0.000843s | 0.000848s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000826s | 0.000830s | 0.000822s | byte equality observed |
| ip_tcp.test | 10 | 0.001049s | 0.001043s | 0.001047s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001009s | 0.001009s | 0.001006s | byte equality observed |
| ip_udp.test | 10 | 0.000860s | 0.000847s | 0.000849s | byte equality observed |
| ip_udp_select.test | 10 | 0.000846s | 0.000843s | 0.000844s | byte equality observed |
| ip_unicast.test | 10 | 0.000815s | 0.000817s | 0.000811s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000802s | 0.000806s | 0.000793s | byte equality observed |
| ip_v6_only.test | 10 | 0.000819s | 0.000814s | 0.000811s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000805s | 0.000812s | 0.000805s | byte equality observed |
| is_read_buffered.test | 10 | 0.000751s | 0.000747s | 0.000743s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000751s | 0.000743s | 0.000757s | byte equality observed |
| is_write_buffered.test | 10 | 0.000757s | 0.000744s | 0.000748s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000753s | 0.000740s | 0.000747s | byte equality observed |
| prepend.test | 10 | 0.000812s | 0.000813s | 0.000808s | byte equality observed |
| prepend_select.test | 10 | 0.000794s | 0.000814s | 0.000794s | byte equality observed |
| read.test | 10 | 0.001096s | 0.001174s | 0.001073s | byte equality observed |
| read_at.test | 10 | 0.001308s | 0.001449s | 0.001308s | byte equality observed |
| read_at_select.test | 10 | 0.001308s | 0.001435s | 0.001314s | byte equality observed |
| read_select.test | 10 | 0.001095s | 0.001176s | 0.001068s | byte equality observed |
| read_until.test | 10 | 0.000901s | 0.000968s | 0.000873s | byte equality observed |
| read_until_select.test | 10 | 0.000932s | 0.000960s | 0.000885s | byte equality observed |
| recycling_allocator.test | 10 | 0.000801s | 0.000830s | 0.000747s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000825s | 0.000810s | 0.000824s | byte equality observed |
| signal_set.test | 10 | 0.000841s | 0.000851s | 0.000791s | byte equality observed |
| signal_set_select.test | 10 | 0.000850s | 0.000818s | 0.000821s | byte equality observed |
| socket_base.test | 10 | 0.000914s | 0.000894s | 0.000898s | byte equality observed |
| socket_base_select.test | 10 | 0.000889s | 0.000905s | 0.000893s | byte equality observed |
| spawn.test | 10 | 0.000967s | 0.000995s | 0.000968s | byte equality observed |
| spawn_select.test | 10 | 0.001000s | 0.000978s | 0.000997s | byte equality observed |
| static_thread_pool.test | 10 | 0.000807s | 0.000820s | 0.000808s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000773s | 0.000777s | 0.000748s | byte equality observed |
| strand.test | 1 | 0.001648s | 0.001674s | 0.001681s | byte equality observed |
| strand_select.test | 1 | 0.001427s | 0.001453s | 0.001422s | byte equality observed |
| streambuf.test | 10 | 0.000883s | 0.000896s | 0.000858s | byte equality observed |
| streambuf_select.test | 10 | 0.000849s | 0.000848s | 0.000824s | byte equality observed |
| thread_pool.test | 10 | 0.001596s | 0.001611s | 0.001603s | byte equality observed |
| thread_pool_select.test | 10 | 0.001564s | 0.001575s | 0.001552s | byte equality observed |
| write.test | 10 | 0.001225s | 0.001182s | 0.001197s | byte equality observed |
| write_at.test | 10 | 0.001302s | 0.001308s | 0.001321s | byte equality observed |
| write_at_select.test | 10 | 0.001299s | 0.001326s | 0.001303s | byte equality observed |
| write_select.test | 10 | 0.001202s | 0.001172s | 0.001172s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
