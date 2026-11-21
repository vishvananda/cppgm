# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.517679 | 3.406222 | 2.871634 | 0.001431 | 0.001819 | 0.001674 |
| any_completion_executor_select.test | RUN | 0.527794 | 3.433867 | 3.057486 | 0.001605 | 0.001801 | 0.001850 |
| any_completion_handler.test | RUN | 0.579453 | 3.035008 | 2.738885 | 0.001232 | 0.001367 | 0.001488 |
| any_completion_handler_select.test | RUN | 0.581312 | 3.126319 | 2.842056 | 0.001506 | 0.001511 | 0.001298 |
| any_io_executor.test | RUN | 0.543586 | 3.622779 | 3.260838 | 0.001564 | 0.001876 | 0.001794 |
| any_io_executor_select.test | RUN | 0.555373 | 3.544424 | 3.353672 | 0.001452 | 0.001794 | 0.001604 |
| append.test | RUN | 0.496304 | 2.949416 | 2.364381 | 0.001059 | 0.001535 | 0.001413 |
| append_select.test | RUN | 0.510414 | 2.945346 | 2.355538 | 0.001202 | 0.001318 | 0.001238 |
| as_tuple.test | RUN | 0.657464 | 3.544413 | 3.379333 | 0.001424 | 0.001367 | 0.001399 |
| as_tuple_select.test | RUN | 0.655160 | 3.467128 | 3.327790 | 0.001348 | 0.001430 | 0.001244 |
| associated_allocator.test | LINK | 0.121581 | 0.275665 | 0.356782 | — | — | — |
| associated_allocator_select.test | LINK | 0.124452 | 0.275432 | 0.351824 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.129374 | 0.306164 | 0.387205 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.136038 | 0.297375 | 0.378320 | — | — | — |
| associated_executor.test | LINK | 0.199116 | 0.526750 | 0.627867 | — | — | — |
| associated_executor_select.test | LINK | 0.198538 | 0.529145 | 0.628782 | — | — | — |
| associated_immediate_executor.test | LINK | 0.187157 | 0.488763 | 0.572668 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.191973 | 0.497786 | 0.571481 | — | — | — |
| associator.test | LINK | 0.098555 | 0.230911 | 0.293111 | — | — | — |
| associator_select.test | LINK | 0.093234 | 0.230952 | 0.295445 | — | — | — |
| awaitable.test | LINK | 0.102556 | 0.233893 | 0.289568 | — | — | — |
| awaitable_select.test | LINK | 0.105640 | 0.239525 | 0.294729 | — | — | — |
| basic_datagram_socket.test | LINK | 0.322876 | 0.753888 | 1.104327 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.328090 | 0.770448 | 1.143448 | — | — | — |
| basic_deadline_timer.test | LINK | 0.384553 | 0.883913 | 1.274903 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.389635 | 0.900843 | 1.299338 | — | — | — |
| basic_file.test | LINK | 0.098351 | 0.231568 | 0.286589 | — | — | — |
| basic_file_select.test | LINK | 0.101475 | 0.235181 | 0.294026 | — | — | — |
| basic_random_access_file.test | LINK | 0.101412 | 0.235655 | 0.294172 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.102515 | 0.233136 | 0.288523 | — | — | — |
| basic_raw_socket.test | LINK | 0.316486 | 0.758870 | 1.147275 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.322433 | 0.790545 | 1.169742 | — | — | — |
| basic_readable_pipe.test | LINK | 0.312882 | 0.714191 | 0.949178 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.320086 | 0.760409 | 1.168886 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.325301 | 0.758489 | 1.104665 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.326440 | 0.773225 | 1.138317 | — | — | — |
| basic_signal_set.test | LINK | 0.298504 | 0.686599 | 0.881213 | — | — | — |
| basic_signal_set_select.test | LINK | 0.316881 | 0.734332 | 1.080416 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.334298 | 0.754169 | 1.128297 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.331453 | 0.759504 | 1.132639 | — | — | — |
| basic_stream_file.test | LINK | 0.102301 | 0.238567 | 0.301190 | — | — | — |
| basic_stream_file_select.test | LINK | 0.103441 | 0.237559 | 0.297952 | — | — | — |
| basic_stream_socket.test | LINK | 0.325925 | 0.759915 | 1.109660 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.326241 | 0.770494 | 1.132705 | — | — | — |
| basic_streambuf.test | LINK | 0.153232 | 0.336255 | 0.429053 | — | — | — |
| basic_streambuf_select.test | LINK | 0.156520 | 0.338449 | 0.428561 | — | — | — |
| basic_waitable_timer.test | LINK | 0.298418 | 0.709894 | 1.023739 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.308781 | 0.722653 | 1.069207 | — | — | — |
| basic_writable_pipe.test | LINK | 0.305612 | 0.726820 | 0.970119 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.324518 | 0.758344 | 1.160034 | — | — | — |
| bind_allocator.test | RUN | 0.541059 | 2.962802 | 2.611368 | 0.001755 | 0.001701 | 0.001538 |
| bind_allocator_select.test | RUN | 0.549625 | 2.908576 | 2.607316 | 0.001126 | 0.001482 | 0.001132 |
| bind_cancellation_slot.test | RUN | 0.553674 | 2.930528 | 2.652583 | 0.000883 | 0.000967 | 0.000929 |
| bind_cancellation_slot_select.test | RUN | 0.572074 | 2.984833 | 2.557282 | 0.000867 | 0.000924 | 0.000979 |
| bind_executor.test | RUN | 0.382515 | 2.008504 | 1.657074 | 0.001582 | 0.001553 | 0.001591 |
| bind_executor_select.test | RUN | 0.378258 | 2.040219 | 1.650899 | 0.001394 | 0.001299 | 0.001447 |
| bind_immediate_executor.test | RUN | 0.283919 | 1.656633 | 1.033474 | 0.000955 | 0.000967 | 0.000930 |
| bind_immediate_executor_select.test | RUN | 0.286158 | 1.625049 | 1.141697 | 0.000946 | 0.000961 | 0.000881 |
| buffer.test | RUN | 0.167917 | 0.687693 | 0.612284 | 0.000892 | 0.000849 | 0.000910 |
| buffer_select.test | RUN | 0.166095 | 0.681337 | 0.611951 | 0.000918 | 0.000893 | 0.000905 |
| buffer_registration.test | LINK | 0.129635 | 0.342511 | 0.356943 | — | — | — |
| buffer_registration_select.test | LINK | 0.128733 | 0.336968 | 0.360269 | — | — | — |
| buffered_read_stream.test | RUN | 0.649886 | 4.531288 | 3.700145 | 0.001208 | 0.001553 | 0.001542 |
| buffered_read_stream_select.test | RUN | 0.656860 | 4.561368 | 3.714478 | 0.001156 | 0.001620 | 0.001616 |
| buffered_stream.test | RUN | 0.895899 | 7.103974 | 6.771756 | 0.001737 | 0.001596 | 0.001519 |
| buffered_stream_select.test | RUN | 0.907588 | 7.272660 | 6.416441 | 0.001476 | 0.001680 | 0.001656 |
| buffered_write_stream.test | RUN | 1.083744 | 6.244237 | 5.689376 | 0.001715 | 0.001710 | 0.001588 |
| buffered_write_stream_select.test | RUN | 1.091286 | 6.209576 | 5.591581 | 0.001551 | 0.001581 | 0.001555 |
| buffers_iterator.test | RUN | 0.312184 | 0.543475 | 0.874406 | 0.001187 | 0.001283 | 0.001209 |
| buffers_iterator_select.test | RUN | 0.317486 | 0.546925 | 0.889231 | 0.001118 | 0.001269 | 0.001139 |
| cancel_after.test | RUN | 0.892856 | 4.810330 | 4.131030 | 0.003019 | 0.003259 | 0.003330 |
| cancel_after_select.test | RUN | 0.909905 | 4.827828 | 4.042984 | 0.002721 | 0.003046 | 0.003504 |
| cancel_at.test | RUN | 0.794804 | 4.250864 | 4.087784 | 0.002768 | 0.002565 | 0.002947 |
| cancel_at_select.test | RUN | 0.758089 | 4.311340 | 3.986716 | 0.002805 | 0.002436 | 0.002931 |
| cancellation_signal.test | LINK | 0.090061 | 0.195810 | 0.248101 | — | — | — |
| cancellation_signal_select.test | LINK | 0.094321 | 0.198468 | 0.300894 | — | — | — |
| cancellation_state.test | LINK | 0.086746 | 0.199198 | 0.373078 | — | — | — |
| cancellation_state_select.test | LINK | 0.098672 | 0.197742 | 0.362544 | — | — | — |
| cancellation_type.test | LINK | 0.094758 | 0.154298 | 0.285857 | — | — | — |
| cancellation_type_select.test | LINK | 0.100927 | 0.155557 | 0.286557 | — | — | — |
| co_composed.test | RUN | 0.094909 | 0.154984 | 0.295416 | 0.001076 | 0.000983 | 0.001150 |
| co_composed_select.test | RUN | 0.102973 | 0.164076 | 0.283624 | 0.001070 | 0.001218 | 0.001132 |
| co_spawn.test | LINK | 0.103625 | 0.163099 | 0.290197 | — | — | — |
| co_spawn_select.test | LINK | 0.100013 | 0.225797 | 0.286562 | — | — | — |
| completion_condition.test | LINK | 0.138014 | 0.362459 | 0.396280 | — | — | — |
| completion_condition_select.test | LINK | 0.132628 | 0.360067 | 0.387989 | — | — | — |
| compose.test | RUN | 0.673636 | 3.725432 | 3.322210 | 0.001684 | 0.001746 | 0.001655 |
| compose_select.test | RUN | 0.690997 | 3.659628 | 3.331386 | 0.001684 | 0.001737 | 0.001313 |
| composed.test | RUN | 0.672610 | 3.652256 | 3.205517 | 0.001328 | 0.001343 | 0.001266 |
| composed_select.test | RUN | 0.664243 | 3.541301 | 3.181797 | 0.001255 | 0.001337 | 0.001338 |
| config.test | RUN | 0.355751 | 2.308858 | 1.381120 | 0.001245 | 0.001284 | 0.001312 |
| config_select.test | RUN | 0.390460 | 2.499033 | 1.635978 | 0.001155 | 0.001302 | 0.001246 |
| connect.test | LINK | 1.088419 | 7.864751 | 6.922617 | — | — | — |
| connect_select.test | LINK | 1.105433 | 7.761225 | 6.847208 | — | — | — |
| connect_pipe.test | RUN | 0.573552 | 2.987136 | 2.533601 | 0.001211 | 0.001282 | 0.001393 |
| connect_pipe_select.test | RUN | 0.592210 | 3.075625 | 2.763935 | 0.001226 | 0.001295 | 0.001381 |
| consign.test | RUN | 0.505429 | 2.915252 | 2.356217 | 0.001468 | 0.001255 | 0.001297 |
| consign_select.test | RUN | 0.514490 | 2.980884 | 2.354840 | 0.001348 | 0.001241 | 0.001127 |
| coroutine.test | LINK | 0.104664 | 0.278843 | 0.319982 | — | — | — |
| coroutine_select.test | LINK | 0.102986 | 0.278188 | 0.326327 | — | — | — |
| deadline_timer.test | RUN | 0.739795 | 3.747038 | 3.349921 | 0.002555 | 0.002972 | 0.002905 |
| deadline_timer_select.test | RUN | 0.747764 | 3.673373 | 3.410579 | 0.001984 | 0.002223 | 0.002426 |
| deferred.test | RUN | 0.113712 | 0.251918 | 0.319506 | 0.001107 | 0.001314 | 0.001101 |
| deferred_select.test | RUN | 0.112168 | 0.256131 | 0.313142 | 0.001097 | 0.001392 | 0.001118 |
| detached.test | LINK | 0.124198 | 0.282944 | 0.351090 | — | — | — |
| detached_select.test | LINK | 0.128165 | 0.283474 | 0.348664 | — | — | — |
| disposition.test | RUN | 0.121959 | 0.695923 | 0.668705 | 0.000916 | 0.001356 | 0.001392 |
| disposition_select.test | RUN | 0.120406 | 0.696373 | 0.662870 | 0.000935 | 0.001305 | 0.001355 |
| error.test | RUN | 0.128319 | 0.670518 | 0.616438 | 0.000934 | 0.001281 | 0.001377 |
| error_select.test | RUN | 0.117131 | 0.673468 | 0.580073 | 0.000893 | 0.001425 | 0.001120 |
| file_base.test | LINK | 0.137541 | 0.545180 | 0.647551 | — | — | — |
| file_base_select.test | LINK | 0.138437 | 0.541046 | 0.521865 | — | — | — |
| fwd_first.test | LINK | 0.325074 | 0.897536 | 1.142082 | — | — | — |
| fwd_last.test | LINK | 0.321507 | 0.754788 | 1.120502 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.119696 | 0.314478 | 0.414576 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.118146 | 0.313111 | 0.405150 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.547080 | 2.982608 | 2.420200 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.546113 | 3.023472 | 2.345456 | — | — | — |
| generic_raw_protocol.test | LINK | 0.546097 | 2.973872 | 2.421180 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.543238 | 3.018299 | 2.356533 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.466611 | 2.524634 | 2.070016 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.470562 | 2.518192 | 2.027282 | — | — | — |
| generic_stream_protocol.test | LINK | 0.501155 | 2.715382 | 2.217900 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.500609 | 2.750237 | 2.228811 | — | — | — |
| high_resolution_timer.test | LINK | 0.208643 | 0.472629 | 0.632622 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.210002 | 0.480957 | 0.653836 | — | — | — |
| immediate.test | LINK | 0.139490 | 0.362321 | 0.383973 | — | — | — |
| immediate_select.test | LINK | 0.137905 | 0.365257 | 0.389902 | — | — | — |
| inline_executor.test | RUN | 0.171639 | 0.574671 | 0.584439 | 0.000913 | 0.000920 | 0.000928 |
| inline_executor_select.test | RUN | 0.170887 | 0.566376 | 0.591706 | 0.000929 | 0.000942 | 0.000913 |
| inline_or_executor.test | RUN | 0.293793 | 1.753000 | 1.190498 | 0.000952 | 0.000987 | 0.000911 |
| inline_or_executor_select.test | RUN | 0.301630 | 1.780631 | 1.299390 | 0.000955 | 0.000986 | 0.000861 |
| io_context.test | RUN | 0.434055 | 2.678406 | 2.071124 | 0.001884 | 0.001878 | 0.001958 |
| io_context_select.test | RUN | 0.444474 | 2.610320 | 2.081935 | 0.001494 | 0.001776 | 0.001778 |
| io_context_strand.test | RUN | 0.411852 | 2.239611 | 1.837518 | 0.002366 | 0.001727 | 0.001836 |
| io_context_strand_select.test | RUN | 0.421390 | 2.224434 | 1.809979 | 0.001465 | 0.001588 | 0.001756 |
| ip_address.test | LINK | 0.142042 | 0.506547 | 0.570147 | — | — | — |
| ip_address_select.test | LINK | 0.144226 | 0.510561 | 0.622590 | — | — | — |
| ip_address_v4.test | LINK | 0.144560 | 0.533899 | 0.905126 | — | — | — |
| ip_address_v4_select.test | LINK | 0.142747 | 0.535605 | 0.891427 | — | — | — |
| ip_address_v6.test | LINK | 0.166282 | 0.703180 | 1.103758 | — | — | — |
| ip_address_v6_select.test | LINK | 0.164642 | 0.686955 | 1.106828 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.128954 | 0.333246 | 0.697017 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.120151 | 0.335087 | 0.707375 | — | — | — |
| ip_basic_resolver.test | LINK | 0.204616 | 0.486233 | 1.062649 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.208752 | 0.590567 | 1.056919 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.068620 | 0.239855 | 0.298067 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.067260 | 0.230283 | 0.292627 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.122798 | 0.489884 | 0.672626 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.121242 | 0.492226 | 0.677752 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.116779 | 0.471008 | 0.651255 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.118684 | 0.471627 | 0.656150 | — | — | — |
| ip_host_name.test | RUN | 0.128467 | 0.639535 | 0.724484 | 0.000879 | 0.001546 | 0.001173 |
| ip_host_name_select.test | RUN | 0.127108 | 0.641138 | 0.747828 | 0.000890 | 0.001257 | 0.001169 |
| ip_icmp.test | RUN | 0.684912 | 6.284237 | 5.003743 | 0.000925 | 0.001297 | 0.001165 |
| ip_icmp_select.test | RUN | 0.680128 | 6.380517 | 4.771587 | 0.000880 | 0.001348 | 0.001283 |
| ip_multicast.test | RUN | 0.374966 | 3.087110 | 2.708820 | 0.001034 | 0.001464 | 0.001361 |
| ip_multicast_select.test | RUN | 0.383715 | 3.085931 | 2.740933 | 0.001002 | 0.001191 | 0.001404 |
| ip_resolver_query_base.test | LINK | 0.078925 | 0.255028 | 0.318108 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.077565 | 0.257838 | 0.302402 | — | — | — |
| ip_tcp.test | RUN | 1.011607 | 9.179035 | 7.721369 | 0.001301 | 0.001707 | 0.001674 |
| ip_tcp_select.test | RUN | 1.021745 | 9.473920 | 7.326250 | 0.001202 | 0.001793 | 0.001682 |
| ip_udp.test | RUN | 0.733843 | 6.664040 | 5.163507 | 0.001082 | 0.001408 | 0.001456 |
| ip_udp_select.test | RUN | 0.722064 | 6.745673 | 5.140766 | 0.001000 | 0.001450 | 0.001260 |
| ip_unicast.test | RUN | 0.345271 | 2.866155 | 2.411619 | 0.000968 | 0.001559 | 0.001328 |
| ip_unicast_select.test | RUN | 0.353754 | 2.887554 | 2.425954 | 0.000959 | 0.001346 | 0.001237 |
| ip_v6_only.test | RUN | 0.362508 | 2.918606 | 2.513187 | 0.001006 | 0.001239 | 0.001325 |
| ip_v6_only_select.test | RUN | 0.371005 | 2.972259 | 2.544061 | 0.000957 | 0.001403 | 0.001066 |
| is_read_buffered.test | RUN | 0.241689 | 0.856813 | 1.289593 | 0.001330 | 0.001252 | 0.001098 |
| is_read_buffered_select.test | RUN | 0.245504 | 0.895076 | 1.347015 | 0.000881 | 0.001227 | 0.001049 |
| is_write_buffered.test | RUN | 0.243675 | 0.842431 | 1.234664 | 0.000934 | 0.001272 | 0.001128 |
| is_write_buffered_select.test | RUN | 0.244570 | 0.868395 | 1.285096 | 0.000871 | 0.001211 | 0.001325 |
| local_basic_endpoint.test | LINK | 0.116545 | 0.479074 | 0.651394 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.118701 | 0.479541 | 0.652059 | — | — | — |
| local_connect_pair.test | LINK | 0.331567 | 2.898903 | 2.285437 | — | — | — |
| local_connect_pair_select.test | LINK | 0.338627 | 2.866374 | 2.304169 | — | — | — |
| local_datagram_protocol.test | LINK | 0.463170 | 3.723268 | 3.242374 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.470662 | 3.733934 | 3.250938 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.468453 | 3.712132 | 3.233282 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.472094 | 3.734453 | 3.294549 | — | — | — |
| local_stream_protocol.test | LINK | 0.437736 | 3.510197 | 3.081736 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.447470 | 3.489196 | 3.123539 | — | — | — |
| placeholders.test | LINK | 0.075472 | 0.254425 | 0.320389 | — | — | — |
| placeholders_select.test | LINK | 0.074663 | 0.252441 | 0.336073 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.209819 | 0.727513 | 0.980298 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.218131 | 0.772155 | 1.159608 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.214018 | 0.715499 | 0.961003 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.214494 | 0.777432 | 1.167557 | — | — | — |
| posix_descriptor_base.test | LINK | 0.081589 | 0.267822 | 0.321509 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.079391 | 0.271110 | 0.316525 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.459156 | 3.612686 | 3.051443 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.465843 | 3.622970 | 3.159506 | — | — | — |
| prepend.test | RUN | 0.344156 | 2.907802 | 2.452186 | 0.000941 | 0.001403 | 0.001468 |
| prepend_select.test | RUN | 0.344734 | 2.918066 | 2.389986 | 0.000886 | 0.001208 | 0.001197 |
| random_access_file.test | LINK | 0.226194 | 0.651086 | 0.791656 | — | — | — |
| random_access_file_select.test | LINK | 0.245575 | 0.692621 | 0.975155 | — | — | — |
| read.test | RUN | 1.675502 | 18.297061 | 14.011020 | 0.001675 | 0.001978 | 0.001936 |
| read_select.test | RUN | 1.671379 | 18.325120 | 14.300590 | 0.001450 | 0.001858 | 0.001829 |
| read_at.test | RUN | 1.654939 | 23.485148 | 18.818531 | 0.001885 | 0.002233 | 0.002224 |
| read_at_select.test | RUN | 1.658250 | 23.561562 | 18.833563 | 0.001913 | 0.002310 | 0.002147 |
| read_until.test | RUN | 0.852531 | 7.155914 | 5.286478 | 0.001334 | 0.001365 | 0.001377 |
| read_until_select.test | RUN | 0.872403 | 7.211819 | 5.470501 | 0.001524 | 0.001385 | 0.001436 |
| readable_pipe.test | LINK | 0.526174 | 2.938498 | 2.447298 | — | — | — |
| readable_pipe_select.test | LINK | 0.548483 | 3.127388 | 2.536983 | — | — | — |
| recycling_allocator.test | RUN | 0.151776 | 0.417922 | 0.477473 | 0.001149 | 0.001282 | 0.001190 |
| recycling_allocator_select.test | RUN | 0.157649 | 0.413881 | 0.466467 | 0.001270 | 0.001342 | 0.001297 |
| redirect_disposition.test | LINK | 0.694803 | 4.087960 | 3.665080 | — | — | — |
| redirect_disposition_select.test | LINK | 0.678630 | 4.146793 | 3.739874 | — | — | — |
| redirect_error.test | LINK | 0.620592 | 3.383698 | 3.289833 | — | — | — |
| redirect_error_select.test | LINK | 0.628006 | 3.453631 | 3.202684 | — | — | — |
| registered_buffer.test | LINK | 0.148147 | 0.331806 | 0.436812 | — | — | — |
| registered_buffer_select.test | LINK | 0.147584 | 0.331055 | 0.434408 | — | — | — |
| signal_set.test | RUN | 0.519339 | 2.894699 | 2.284421 | 0.001273 | 0.001219 | 0.001352 |
| signal_set_select.test | RUN | 0.520331 | 3.009803 | 2.527607 | 0.001220 | 0.001319 | 0.001340 |
| signal_set_base.test | LINK | 0.117088 | 0.264899 | 0.316205 | — | — | — |
| signal_set_base_select.test | LINK | 0.115652 | 0.262280 | 0.313084 | — | — | — |
| socket_base.test | RUN | 0.621609 | 4.264732 | 3.516762 | 0.001430 | 0.001567 | 0.001557 |
| socket_base_select.test | RUN | 0.618343 | 4.053551 | 3.422344 | 0.001336 | 0.001421 | 0.001633 |
| spawn.test | RUN | 1.093843 | 7.044876 | 6.012028 | 0.001564 | 0.001469 | 0.001491 |
| spawn_select.test | RUN | 1.091796 | 6.965666 | 6.085487 | 0.001451 | 0.001373 | 0.001648 |
| static_thread_pool.test | RUN | 0.275432 | 0.643119 | 0.765553 | 0.001263 | 0.001155 | 0.001297 |
| static_thread_pool_select.test | RUN | 0.283308 | 0.689158 | 0.973767 | 0.001251 | 0.001210 | 0.001412 |
| steady_timer.test | LINK | 0.310114 | 0.708569 | 1.100017 | — | — | — |
| steady_timer_select.test | LINK | 0.314752 | 0.727135 | 1.148660 | — | — | — |
| strand.test | RUN | 0.685340 | 3.895032 | 3.544577 | 0.001826 | 0.002153 | 0.002213 |
| strand_select.test | RUN | 0.687531 | 3.933921 | 3.514843 | 0.001979 | 0.001994 | 0.001780 |
| stream_file.test | LINK | 0.292416 | 0.613277 | 0.831532 | — | — | — |
| stream_file_select.test | LINK | 0.299487 | 0.629123 | 1.039765 | — | — | — |
| streambuf.test | RUN | 0.177106 | 0.363763 | 0.552208 | 0.000881 | 0.000926 | 0.001221 |
| streambuf_select.test | RUN | 0.177090 | 0.361984 | 0.546139 | 0.000882 | 0.000962 | 0.000939 |
| system_timer.test | LINK | 0.446430 | 2.498301 | 2.254227 | — | — | — |
| system_timer_select.test | LINK | 0.450541 | 2.469292 | 2.049444 | — | — | — |
| system_context.test | LINK | 0.186675 | 0.425090 | 0.477663 | — | — | — |
| system_context_select.test | LINK | 0.196875 | 0.450091 | 0.601118 | — | — | — |
| system_executor.test | LINK | 0.257705 | 1.418101 | 0.975729 | — | — | — |
| system_executor_select.test | LINK | 0.265111 | 1.380466 | 1.078090 | — | — | — |
| this_coro.test | LINK | 0.070246 | 0.158621 | 0.186780 | — | — | — |
| this_coro_select.test | LINK | 0.069419 | 0.156382 | 0.187897 | — | — | — |
| thread_pool.test | RUN | 0.309784 | 1.816898 | 1.272620 | 0.001655 | 0.001443 | 0.001629 |
| thread_pool_select.test | RUN | 0.319886 | 1.846168 | 1.359262 | 0.001583 | 0.001518 | 0.001496 |
| time_traits.test | LINK | 0.158679 | 0.333984 | 0.387891 | — | — | — |
| time_traits_select.test | LINK | 0.158943 | 0.335878 | 0.381599 | — | — | — |
| ts_buffer.test | LINK | 0.152317 | 0.539978 | 0.411112 | — | — | — |
| ts_buffer_select.test | LINK | 0.152272 | 0.553009 | 0.404937 | — | — | — |
| ts_executor.test | LINK | 0.220426 | 0.771991 | 0.644060 | — | — | — |
| ts_executor_select.test | LINK | 0.228384 | 0.826480 | 0.764132 | — | — | — |
| ts_internet.test | LINK | 0.239147 | 0.854629 | 1.189890 | — | — | — |
| ts_internet_select.test | LINK | 0.237943 | 0.856462 | 1.149781 | — | — | — |
| ts_io_context.test | LINK | 0.192220 | 0.646399 | 0.771343 | — | — | — |
| ts_io_context_select.test | LINK | 0.197312 | 0.694421 | 0.993569 | — | — | — |
| ts_net.test | LINK | 0.285218 | 1.015557 | 1.558400 | — | — | — |
| ts_net_select.test | LINK | 0.287463 | 1.036322 | 1.610583 | — | — | — |
| ts_netfwd.test | LINK | 0.282171 | 1.001918 | 1.556388 | — | — | — |
| ts_netfwd_select.test | LINK | 0.291311 | 1.042931 | 1.615134 | — | — | — |
| ts_socket.test | LINK | 0.230423 | 0.796344 | 1.188768 | — | — | — |
| ts_socket_select.test | LINK | 0.238309 | 0.821637 | 1.232623 | — | — | — |
| ts_timer.test | LINK | 0.206813 | 0.714328 | 1.034352 | — | — | — |
| ts_timer_select.test | LINK | 0.210751 | 0.740120 | 1.087741 | — | — | — |
| use_awaitable.test | LINK | 0.068458 | 0.239423 | 0.285612 | — | — | — |
| use_awaitable_select.test | LINK | 0.069200 | 0.234230 | 0.294334 | — | — | — |
| wait_traits.test | LINK | 0.068148 | 0.241109 | 0.291398 | — | — | — |
| wait_traits_select.test | LINK | 0.067671 | 0.239040 | 0.293797 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.068333 | 0.235112 | 0.279613 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.068715 | 0.236581 | 0.296493 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.069660 | 0.233045 | 0.292733 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.067245 | 0.230334 | 0.291316 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.067806 | 0.242114 | 0.291127 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.068656 | 0.241617 | 0.297592 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.067098 | 0.232793 | 0.292204 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.068292 | 0.236959 | 0.291130 | — | — | — |
| windows_object_handle.test | LINK | 0.193655 | 0.657082 | 0.793610 | — | — | — |
| windows_object_handle_select.test | LINK | 0.199971 | 0.696549 | 1.002186 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.201240 | 0.676023 | 0.853305 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.209336 | 0.729425 | 1.063492 | — | — | — |
| windows_random_access_handle.test | LINK | 0.191592 | 0.647959 | 0.800815 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.201180 | 0.688208 | 0.984689 | — | — | — |
| windows_stream_handle.test | LINK | 0.194326 | 0.655276 | 0.799305 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.201781 | 0.689399 | 0.987356 | — | — | — |
| writable_pipe.test | LINK | 0.374478 | 2.915495 | 2.548316 | — | — | — |
| writable_pipe_select.test | LINK | 0.379255 | 3.065919 | 2.678108 | — | — | — |
| write.test | RUN | 1.579351 | 15.293597 | 13.710137 | 0.001828 | 0.001700 | 0.001840 |
| write_select.test | RUN | 1.591630 | 15.020008 | 13.894868 | 0.001689 | 0.001795 | 0.001826 |
| write_at.test | RUN | 1.698127 | 19.864495 | 17.841789 | 0.001912 | 0.001868 | 0.002090 |
| write_at_select.test | RUN | 1.716254 | 20.218885 | 17.987327 | 0.001865 | 0.002000 | 0.001977 |
| any_executor.test | RUN | 0.668748 | 6.539342 | 5.821969 | 0.001629 | 0.001944 | 0.001939 |
| blocking.test | RUN | 1.433805 | 8.870637 | 11.597324 | 0.003391 | 0.003285 | 0.003234 |
| blocking_adaptation.test | RUN | 0.726598 | 3.773499 | 5.187567 | 0.002096 | 0.002151 | 0.002221 |
| context_as.test | RUN | 0.419641 | 2.597761 | 1.796512 | 0.001413 | 0.001508 | 0.001591 |
| executor.test | RUN | 0.103056 | 0.241687 | 0.315312 | 0.001109 | 0.001255 | 0.001507 |
| inline_exception_handling.test | RUN | 1.452738 | 7.852682 | 11.368922 | 0.003031 | 0.002316 | 0.002417 |
| invocable_archetype.test | RUN | 0.100577 | 0.237407 | 0.301073 | 0.001083 | 0.001191 | 0.001307 |
| mapping.test | RUN | 1.456585 | 8.363641 | 11.575053 | 0.002564 | 0.002308 | 0.002479 |
| outstanding_work.test | RUN | 0.654503 | 3.429055 | 4.946645 | 0.002062 | 0.002078 | 0.002138 |
| prefer_only.test | RUN | 0.211132 | 1.429606 | 1.103681 | 0.001239 | 0.001316 | 0.001319 |
| relationship.test | RUN | 0.469328 | 3.213173 | 4.201728 | 0.001477 | 0.001513 | 0.001532 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.997× | 0.990× |
| clang | 0.989× | 1.001×, 0.977× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001222s | 0.001196s | 0.001276s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001212s | 0.001162s | 0.001238s | byte equality observed |
| any_completion_handler.test | 10 | 0.001008s | 0.001009s | 0.001017s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001024s | 0.001010s | 0.001025s | byte equality observed |
| any_io_executor.test | 8 | 0.001183s | 0.001227s | 0.001206s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001211s | 0.001200s | 0.001229s | byte equality observed |
| append.test | 10 | 0.000975s | 0.000978s | 0.000978s | byte equality observed |
| append_select.test | 10 | 0.000969s | 0.000962s | 0.000963s | byte equality observed |
| as_tuple.test | 10 | 0.001052s | 0.001041s | 0.001032s | byte equality observed |
| as_tuple_select.test | 10 | 0.000972s | 0.000976s | 0.000967s | byte equality observed |
| bind_allocator.test | 1 | 0.001484s | 0.001471s | 0.001464s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001167s | 0.001170s | 0.001188s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000863s | 0.000888s | 0.000865s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000802s | 0.000795s | 0.000786s | byte equality observed |
| bind_executor.test | 1 | 0.001458s | 0.001470s | 0.001386s | byte equality observed |
| bind_executor_select.test | 1 | 0.001707s | 0.001741s | 0.001661s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000903s | 0.000906s | 0.000893s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000888s | 0.000874s | 0.000900s | byte equality observed |
| buffer.test | 10 | 0.000848s | 0.000861s | 0.000862s | byte equality observed |
| buffer_select.test | 10 | 0.000837s | 0.000848s | 0.000818s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001022s | 0.001004s | 0.001027s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.000977s | 0.001008s | 0.000997s | byte equality observed |
| buffered_stream.test | 10 | 0.001012s | 0.001020s | 0.001017s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001000s | 0.001019s | 0.000971s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001039s | 0.001025s | 0.000993s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001012s | 0.001016s | 0.000973s | byte equality observed |
| buffers_iterator.test | 10 | 0.000840s | 0.000796s | 0.000827s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000791s | 0.000770s | 0.000786s | byte equality observed |
| cancel_after.test | 1 | 0.003141s | 0.002990s | 0.002835s | byte equality observed |
| cancel_after_select.test | 1 | 0.002587s | 0.002540s | 0.002416s | byte equality observed |
| cancel_at.test | 1 | 0.003229s | 0.003207s | 0.002993s | byte equality observed |
| cancel_at_select.test | 1 | 0.003329s | 0.003044s | 0.002843s | byte equality observed |
| co_composed.test | 10 | 0.000860s | 0.000844s | 0.000860s | byte equality observed |
| co_composed_select.test | 10 | 0.000782s | 0.000787s | 0.000808s | byte equality observed |
| compose.test | 1 | 0.001464s | 0.001436s | 0.001406s | byte equality observed |
| compose_select.test | 1 | 0.001212s | 0.001216s | 0.001201s | byte equality observed |
| composed.test | 1 | 0.001774s | 0.001704s | 0.001742s | byte equality observed |
| composed_select.test | 1 | 0.001396s | 0.001383s | 0.001238s | byte equality observed |
| config.test | 10 | 0.000913s | 0.000906s | 0.000911s | byte equality observed |
| config_select.test | 10 | 0.000869s | 0.000874s | 0.000877s | byte equality observed |
| connect_pipe.test | 10 | 0.000893s | 0.000901s | 0.000888s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000877s | 0.000879s | 0.000871s | byte equality observed |
| consign.test | 10 | 0.000881s | 0.000921s | 0.000885s | byte equality observed |
| consign_select.test | 10 | 0.000847s | 0.000847s | 0.000825s | byte equality observed |
| deadline_timer.test | 1 | 0.002223s | 0.002243s | 0.002172s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002002s | 0.002033s | 0.001880s | byte equality observed |
| deferred.test | 10 | 0.000833s | 0.000821s | 0.000832s | byte equality observed |
| deferred_select.test | 10 | 0.000753s | 0.000744s | 0.000746s | byte equality observed |
| disposition.test | 10 | 0.000793s | 0.000799s | 0.000794s | byte equality observed |
| disposition_select.test | 10 | 0.000782s | 0.000784s | 0.000781s | byte equality observed |
| error.test | 10 | 0.000773s | 0.000761s | 0.000767s | byte equality observed |
| error_select.test | 10 | 0.000762s | 0.000765s | 0.000759s | byte equality observed |
| inline_executor.test | 10 | 0.000757s | 0.000767s | 0.000762s | byte equality observed |
| inline_executor_select.test | 10 | 0.000772s | 0.000774s | 0.000782s | byte equality observed |
| inline_or_executor.test | 10 | 0.000785s | 0.000776s | 0.000781s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000783s | 0.000784s | 0.000767s | byte equality observed |
| io_context.test | 1 | 0.001782s | 0.001748s | 0.001882s | byte equality observed |
| io_context_select.test | 1 | 0.002120s | 0.002024s | 0.002047s | byte equality observed |
| io_context_strand.test | 1 | 0.002104s | 0.002052s | 0.002092s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001758s | 0.001802s | 0.001800s | byte equality observed |
| ip_host_name.test | 10 | 0.000852s | 0.000843s | 0.000850s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000757s | 0.000758s | 0.000758s | byte equality observed |
| ip_icmp.test | 10 | 0.000781s | 0.000775s | 0.000770s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000777s | 0.000780s | 0.000756s | byte equality observed |
| ip_multicast.test | 10 | 0.000845s | 0.000842s | 0.000839s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000821s | 0.000814s | 0.000822s | byte equality observed |
| ip_tcp.test | 10 | 0.001042s | 0.001037s | 0.001042s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001013s | 0.001011s | 0.001002s | byte equality observed |
| ip_udp.test | 10 | 0.000852s | 0.000865s | 0.000845s | byte equality observed |
| ip_udp_select.test | 10 | 0.000850s | 0.000849s | 0.000841s | byte equality observed |
| ip_unicast.test | 10 | 0.000825s | 0.000823s | 0.000811s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000803s | 0.000812s | 0.000794s | byte equality observed |
| ip_v6_only.test | 10 | 0.000812s | 0.000822s | 0.000804s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000801s | 0.000805s | 0.000794s | byte equality observed |
| is_read_buffered.test | 10 | 0.000750s | 0.000751s | 0.000749s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000736s | 0.000738s | 0.000754s | byte equality observed |
| is_write_buffered.test | 10 | 0.000743s | 0.000745s | 0.000736s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000749s | 0.000734s | 0.000750s | byte equality observed |
| prepend.test | 10 | 0.000806s | 0.000830s | 0.000803s | byte equality observed |
| prepend_select.test | 10 | 0.000785s | 0.000810s | 0.000787s | byte equality observed |
| read.test | 10 | 0.001110s | 0.001108s | 0.001069s | byte equality observed |
| read_at.test | 10 | 0.001315s | 0.001452s | 0.001311s | byte equality observed |
| read_at_select.test | 10 | 0.001309s | 0.001458s | 0.001308s | byte equality observed |
| read_select.test | 10 | 0.001094s | 0.001128s | 0.001075s | byte equality observed |
| read_until.test | 10 | 0.000909s | 0.000949s | 0.000888s | byte equality observed |
| read_until_select.test | 10 | 0.000941s | 0.000938s | 0.000884s | byte equality observed |
| recycling_allocator.test | 10 | 0.000811s | 0.000835s | 0.000743s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000798s | 0.000810s | 0.000767s | byte equality observed |
| signal_set.test | 10 | 0.000857s | 0.000826s | 0.000851s | byte equality observed |
| signal_set_select.test | 10 | 0.000850s | 0.000841s | 0.000852s | byte equality observed |
| socket_base.test | 10 | 0.000876s | 0.000920s | 0.000906s | byte equality observed |
| socket_base_select.test | 10 | 0.000886s | 0.000909s | 0.000883s | byte equality observed |
| spawn.test | 10 | 0.000994s | 0.000995s | 0.000974s | byte equality observed |
| spawn_select.test | 10 | 0.000975s | 0.000956s | 0.000964s | byte equality observed |
| static_thread_pool.test | 10 | 0.000836s | 0.000803s | 0.000829s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000793s | 0.000799s | 0.000810s | byte equality observed |
| strand.test | 1 | 0.001726s | 0.001654s | 0.001743s | byte equality observed |
| strand_select.test | 1 | 0.001437s | 0.001463s | 0.001451s | byte equality observed |
| streambuf.test | 10 | 0.000882s | 0.000872s | 0.000869s | byte equality observed |
| streambuf_select.test | 10 | 0.000837s | 0.000824s | 0.000835s | byte equality observed |
| thread_pool.test | 10 | 0.001597s | 0.001527s | 0.001563s | byte equality observed |
| thread_pool_select.test | 10 | 0.001533s | 0.001528s | 0.001536s | byte equality observed |
| write.test | 10 | 0.001212s | 0.001180s | 0.001155s | byte equality observed |
| write_at.test | 10 | 0.001307s | 0.001283s | 0.001283s | byte equality observed |
| write_at_select.test | 10 | 0.001291s | 0.001297s | 0.001268s | byte equality observed |
| write_select.test | 10 | 0.001186s | 0.001150s | 0.001165s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
