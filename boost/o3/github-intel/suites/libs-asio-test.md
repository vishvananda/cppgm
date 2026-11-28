# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.532223 | 3.560116 | 3.056022 | 0.001749 | 0.001979 | 0.001791 |
| any_completion_executor_select.test | RUN | 0.546631 | 3.576726 | 3.208837 | 0.001968 | 0.002070 | 0.001647 |
| any_completion_handler.test | RUN | 0.585196 | 3.223110 | 2.851594 | 0.001466 | 0.001464 | 0.001488 |
| any_completion_handler_select.test | RUN | 0.602083 | 3.284895 | 2.965845 | 0.001620 | 0.001477 | 0.001497 |
| any_io_executor.test | RUN | 0.564046 | 3.789262 | 3.367469 | 0.001861 | 0.002250 | 0.001827 |
| any_io_executor_select.test | RUN | 0.560917 | 3.749758 | 3.449782 | 0.001458 | 0.002368 | 0.001838 |
| append.test | RUN | 0.513286 | 3.079397 | 2.459506 | 0.001163 | 0.001616 | 0.001546 |
| append_select.test | RUN | 0.522785 | 3.139255 | 2.461197 | 0.001294 | 0.001564 | 0.001536 |
| as_tuple.test | RUN | 0.671215 | 3.711006 | 3.510838 | 0.001576 | 0.001483 | 0.001535 |
| as_tuple_select.test | RUN | 0.684739 | 3.696639 | 3.471054 | 0.001380 | 0.001618 | 0.001534 |
| associated_allocator.test | LINK | 0.127711 | 0.295087 | 0.363816 | — | — | — |
| associated_allocator_select.test | LINK | 0.131884 | 0.293961 | 0.368819 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.145911 | 0.326140 | 0.398013 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.144098 | 0.319743 | 0.419386 | — | — | — |
| associated_executor.test | LINK | 0.208958 | 0.561721 | 0.654807 | — | — | — |
| associated_executor_select.test | LINK | 0.203135 | 0.560567 | 0.668962 | — | — | — |
| associated_immediate_executor.test | LINK | 0.188916 | 0.532436 | 0.615188 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.193670 | 0.528815 | 0.589490 | — | — | — |
| associator.test | LINK | 0.105445 | 0.248298 | 0.307525 | — | — | — |
| associator_select.test | LINK | 0.102584 | 0.247068 | 0.303134 | — | — | — |
| awaitable.test | LINK | 0.103967 | 0.252637 | 0.297662 | — | — | — |
| awaitable_select.test | LINK | 0.109736 | 0.254783 | 0.291596 | — | — | — |
| basic_datagram_socket.test | LINK | 0.328559 | 0.791757 | 1.142628 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.331137 | 0.806735 | 1.174196 | — | — | — |
| basic_deadline_timer.test | LINK | 0.391061 | 0.941871 | 1.313153 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.390449 | 0.950858 | 1.324850 | — | — | — |
| basic_file.test | LINK | 0.108187 | 0.251133 | 0.306584 | — | — | — |
| basic_file_select.test | LINK | 0.103726 | 0.249912 | 0.303814 | — | — | — |
| basic_random_access_file.test | LINK | 0.105955 | 0.246866 | 0.305728 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.104870 | 0.244728 | 0.299297 | — | — | — |
| basic_raw_socket.test | LINK | 0.328904 | 0.795950 | 1.147235 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.333321 | 0.812406 | 1.171124 | — | — | — |
| basic_readable_pipe.test | LINK | 0.316788 | 0.764012 | 0.993195 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.330415 | 0.811530 | 1.194048 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.331210 | 0.796790 | 1.139604 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.331748 | 0.805678 | 1.167632 | — | — | — |
| basic_signal_set.test | LINK | 0.303107 | 0.723808 | 0.894432 | — | — | — |
| basic_signal_set_select.test | LINK | 0.321792 | 0.774864 | 1.106620 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.333313 | 0.799257 | 1.155797 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.342333 | 0.822627 | 1.178109 | — | — | — |
| basic_stream_file.test | LINK | 0.102744 | 0.248750 | 0.307543 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105267 | 0.251322 | 0.304526 | — | — | — |
| basic_stream_socket.test | LINK | 0.331234 | 0.801458 | 1.139760 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.340653 | 0.814818 | 1.172680 | — | — | — |
| basic_streambuf.test | LINK | 0.157568 | 0.356475 | 0.448003 | — | — | — |
| basic_streambuf_select.test | LINK | 0.159232 | 0.360063 | 0.448304 | — | — | — |
| basic_waitable_timer.test | LINK | 0.312916 | 0.741944 | 1.071637 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.311566 | 0.764925 | 1.094705 | — | — | — |
| basic_writable_pipe.test | LINK | 0.317467 | 0.755538 | 0.992630 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.331161 | 0.808933 | 1.214412 | — | — | — |
| bind_allocator.test | RUN | 0.561817 | 3.134342 | 2.703500 | 0.001840 | 0.002154 | 0.001726 |
| bind_allocator_select.test | RUN | 0.570018 | 3.152284 | 2.731678 | 0.001455 | 0.001945 | 0.001734 |
| bind_cancellation_slot.test | RUN | 0.575319 | 3.151874 | 2.747239 | 0.000949 | 0.001117 | 0.001051 |
| bind_cancellation_slot_select.test | RUN | 0.584265 | 3.142430 | 2.679432 | 0.000886 | 0.001152 | 0.001058 |
| bind_executor.test | RUN | 0.382485 | 2.112317 | 1.742459 | 0.001632 | 0.001794 | 0.001783 |
| bind_executor_select.test | RUN | 0.393020 | 2.141332 | 1.731979 | 0.001488 | 0.001863 | 0.001634 |
| bind_immediate_executor.test | RUN | 0.287941 | 1.765954 | 1.104242 | 0.000931 | 0.001023 | 0.001025 |
| bind_immediate_executor_select.test | RUN | 0.293827 | 1.722824 | 1.208403 | 0.001114 | 0.001060 | 0.001007 |
| buffer.test | RUN | 0.167850 | 0.719229 | 0.640087 | 0.000867 | 0.001061 | 0.001055 |
| buffer_select.test | RUN | 0.168318 | 0.720741 | 0.645259 | 0.000884 | 0.000991 | 0.001019 |
| buffer_registration.test | LINK | 0.126668 | 0.357399 | 0.377869 | — | — | — |
| buffer_registration_select.test | LINK | 0.127876 | 0.358599 | 0.380242 | — | — | — |
| buffered_read_stream.test | RUN | 0.657276 | 4.822958 | 3.845957 | 0.001225 | 0.001840 | 0.001857 |
| buffered_read_stream_select.test | RUN | 0.666230 | 4.868654 | 4.065431 | 0.001106 | 0.001682 | 0.001716 |
| buffered_stream.test | RUN | 0.928946 | 7.568510 | 6.978688 | 0.001784 | 0.001739 | 0.001774 |
| buffered_stream_select.test | RUN | 0.923841 | 7.634983 | 6.750833 | 0.001579 | 0.002046 | 0.001790 |
| buffered_write_stream.test | RUN | 1.107457 | 6.585746 | 5.953691 | 0.001895 | 0.002062 | 0.001944 |
| buffered_write_stream_select.test | RUN | 1.124558 | 6.636422 | 5.765512 | 0.001441 | 0.001828 | 0.001844 |
| buffers_iterator.test | RUN | 0.327466 | 0.577539 | 0.914618 | 0.001157 | 0.001411 | 0.001321 |
| buffers_iterator_select.test | RUN | 0.327813 | 0.578601 | 0.905856 | 0.001172 | 0.001347 | 0.001316 |
| cancel_after.test | RUN | 0.915248 | 5.059698 | 4.298027 | 0.003220 | 0.004087 | 0.003752 |
| cancel_after_select.test | RUN | 0.919519 | 4.986825 | 4.202834 | 0.002924 | 0.003689 | 0.004034 |
| cancel_at.test | RUN | 0.805295 | 4.461271 | 4.176160 | 0.002884 | 0.003568 | 0.003603 |
| cancel_at_select.test | RUN | 0.786681 | 4.442746 | 4.116656 | 0.002689 | 0.003418 | 0.003190 |
| cancellation_signal.test | LINK | 0.091732 | 0.207468 | 0.245798 | — | — | — |
| cancellation_signal_select.test | LINK | 0.091585 | 0.206435 | 0.292213 | — | — | — |
| cancellation_state.test | LINK | 0.112906 | 0.212605 | 0.347828 | — | — | — |
| cancellation_state_select.test | LINK | 0.104486 | 0.214935 | 0.374962 | — | — | — |
| cancellation_type.test | LINK | 0.107379 | 0.162840 | 0.298937 | — | — | — |
| cancellation_type_select.test | LINK | 0.107566 | 0.164452 | 0.301033 | — | — | — |
| co_composed.test | RUN | 0.104395 | 0.168427 | 0.298337 | 0.001307 | 0.001024 | 0.001195 |
| co_composed_select.test | RUN | 0.101033 | 0.166348 | 0.297869 | 0.001249 | 0.000960 | 0.001406 |
| co_spawn.test | LINK | 0.104313 | 0.173175 | 0.294112 | — | — | — |
| co_spawn_select.test | LINK | 0.104847 | 0.207383 | 0.298113 | — | — | — |
| completion_condition.test | LINK | 0.137096 | 0.388162 | 0.403689 | — | — | — |
| completion_condition_select.test | LINK | 0.137077 | 0.382089 | 0.405853 | — | — | — |
| compose.test | RUN | 0.684921 | 3.902023 | 3.419698 | 0.001820 | 0.002134 | 0.001759 |
| compose_select.test | RUN | 0.693779 | 3.879488 | 3.426452 | 0.001632 | 0.001825 | 0.001890 |
| composed.test | RUN | 0.651450 | 3.865159 | 3.328548 | 0.001436 | 0.001636 | 0.001565 |
| composed_select.test | RUN | 0.676212 | 3.787360 | 3.315256 | 0.001311 | 0.001660 | 0.001459 |
| config.test | RUN | 0.326151 | 2.425222 | 1.434085 | 0.001435 | 0.001648 | 0.001359 |
| config_select.test | RUN | 0.368056 | 2.571856 | 1.660284 | 0.001264 | 0.001704 | 0.001350 |
| connect.test | LINK | 1.106230 | 8.332754 | 7.173270 | — | — | — |
| connect_select.test | LINK | 1.116417 | 8.341609 | 7.203675 | — | — | — |
| connect_pipe.test | RUN | 0.586755 | 3.115228 | 2.629567 | 0.001306 | 0.001794 | 0.001522 |
| connect_pipe_select.test | RUN | 0.602040 | 3.279431 | 2.804123 | 0.001319 | 0.001753 | 0.001522 |
| consign.test | RUN | 0.511243 | 3.081106 | 2.425072 | 0.001405 | 0.001672 | 0.001420 |
| consign_select.test | RUN | 0.514885 | 3.131638 | 2.397361 | 0.001434 | 0.001547 | 0.001318 |
| coroutine.test | LINK | 0.105487 | 0.292005 | 0.338600 | — | — | — |
| coroutine_select.test | LINK | 0.107550 | 0.290816 | 0.339666 | — | — | — |
| deadline_timer.test | RUN | 0.745406 | 4.064829 | 3.500213 | 0.002798 | 0.003356 | 0.003351 |
| deadline_timer_select.test | RUN | 0.758281 | 4.001743 | 3.509328 | 0.002135 | 0.003603 | 0.003217 |
| deferred.test | RUN | 0.119894 | 0.267872 | 0.328524 | 0.001154 | 0.001514 | 0.001374 |
| deferred_select.test | RUN | 0.114199 | 0.270007 | 0.328646 | 0.001191 | 0.001478 | 0.001145 |
| detached.test | LINK | 0.127565 | 0.296210 | 0.362675 | — | — | — |
| detached_select.test | LINK | 0.134744 | 0.296338 | 0.367907 | — | — | — |
| disposition.test | RUN | 0.138770 | 0.729514 | 0.672505 | 0.000976 | 0.001683 | 0.001644 |
| disposition_select.test | RUN | 0.128565 | 0.721515 | 0.688768 | 0.000960 | 0.001714 | 0.001394 |
| error.test | RUN | 0.117116 | 0.696495 | 0.625666 | 0.000998 | 0.001496 | 0.001559 |
| error_select.test | RUN | 0.117428 | 0.695012 | 0.597955 | 0.000940 | 0.001450 | 0.001371 |
| file_base.test | LINK | 0.144931 | 0.574039 | 0.656521 | — | — | — |
| file_base_select.test | LINK | 0.142476 | 0.581266 | 0.560073 | — | — | — |
| fwd_first.test | LINK | 0.331572 | 1.011113 | 1.182272 | — | — | — |
| fwd_last.test | LINK | 0.330143 | 0.906356 | 1.183843 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.128187 | 0.338352 | 0.423480 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.129254 | 0.336803 | 0.421112 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.561345 | 3.147621 | 2.524467 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.553844 | 3.250393 | 2.475412 | — | — | — |
| generic_raw_protocol.test | LINK | 0.562578 | 3.149403 | 2.530172 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.554525 | 3.226807 | 2.487378 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.481681 | 2.683356 | 2.136232 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.487856 | 2.685146 | 2.104325 | — | — | — |
| generic_stream_protocol.test | LINK | 0.511566 | 2.868586 | 2.281086 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.509783 | 2.940043 | 2.263003 | — | — | — |
| high_resolution_timer.test | LINK | 0.209284 | 0.505699 | 0.656256 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.214928 | 0.518628 | 0.672120 | — | — | — |
| immediate.test | LINK | 0.149097 | 0.384368 | 0.406500 | — | — | — |
| immediate_select.test | LINK | 0.145639 | 0.380433 | 0.405714 | — | — | — |
| inline_executor.test | RUN | 0.179637 | 0.599955 | 0.618339 | 0.000938 | 0.001052 | 0.000962 |
| inline_executor_select.test | RUN | 0.175882 | 0.600858 | 0.615787 | 0.000903 | 0.001117 | 0.000955 |
| inline_or_executor.test | RUN | 0.301268 | 1.845583 | 1.244968 | 0.000976 | 0.001073 | 0.001006 |
| inline_or_executor_select.test | RUN | 0.307698 | 1.900558 | 1.339796 | 0.000927 | 0.001107 | 0.001011 |
| io_context.test | RUN | 0.446177 | 2.844510 | 2.198100 | 0.001941 | 0.002248 | 0.002109 |
| io_context_select.test | RUN | 0.449823 | 2.788351 | 2.195212 | 0.001844 | 0.002187 | 0.001975 |
| io_context_strand.test | RUN | 0.425695 | 2.369339 | 1.951910 | 0.001844 | 0.001813 | 0.001854 |
| io_context_strand_select.test | RUN | 0.432572 | 2.340324 | 1.932678 | 0.001867 | 0.002020 | 0.001898 |
| ip_address.test | LINK | 0.155115 | 0.534979 | 0.529373 | — | — | — |
| ip_address_select.test | LINK | 0.153469 | 0.536499 | 0.532324 | — | — | — |
| ip_address_v4.test | LINK | 0.154078 | 0.568022 | 0.579777 | — | — | — |
| ip_address_v4_select.test | LINK | 0.153101 | 0.564148 | 0.640156 | — | — | — |
| ip_address_v6.test | LINK | 0.178356 | 0.746677 | 1.135018 | — | — | — |
| ip_address_v6_select.test | LINK | 0.176342 | 0.740637 | 1.137580 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.134179 | 0.344460 | 0.721999 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.131988 | 0.342985 | 0.737983 | — | — | — |
| ip_basic_resolver.test | LINK | 0.217808 | 0.507830 | 1.104750 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.220218 | 0.528239 | 1.136330 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.074033 | 0.169163 | 0.305810 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.071964 | 0.166252 | 0.304929 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.132331 | 0.346287 | 0.708557 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.131223 | 0.342639 | 0.700687 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.127153 | 0.355002 | 0.681949 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.123815 | 0.475253 | 0.675812 | — | — | — |
| ip_host_name.test | RUN | 0.135912 | 0.691738 | 0.773337 | 0.000972 | 0.001622 | 0.001392 |
| ip_host_name_select.test | RUN | 0.136092 | 0.677493 | 0.760839 | 0.000907 | 0.001565 | 0.001248 |
| ip_icmp.test | RUN | 0.710700 | 6.531886 | 5.296352 | 0.001031 | 0.001466 | 0.001414 |
| ip_icmp_select.test | RUN | 0.708213 | 6.698089 | 5.157527 | 0.001001 | 0.001548 | 0.001597 |
| ip_multicast.test | RUN | 0.389533 | 3.305595 | 2.886713 | 0.001067 | 0.001822 | 0.001538 |
| ip_multicast_select.test | RUN | 0.395567 | 3.296092 | 2.847460 | 0.001051 | 0.001604 | 0.001373 |
| ip_resolver_query_base.test | LINK | 0.083833 | 0.268911 | 0.320700 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.082918 | 0.268803 | 0.316747 | — | — | — |
| ip_tcp.test | RUN | 1.059620 | 9.724312 | 8.087982 | 0.001321 | 0.002180 | 0.001982 |
| ip_tcp_select.test | RUN | 1.056899 | 10.180150 | 7.895723 | 0.001259 | 0.002310 | 0.001951 |
| ip_udp.test | RUN | 0.761890 | 6.915962 | 5.507853 | 0.001209 | 0.001747 | 0.001550 |
| ip_udp_select.test | RUN | 0.753652 | 7.088703 | 5.357733 | 0.001118 | 0.001742 | 0.001716 |
| ip_unicast.test | RUN | 0.359755 | 2.984919 | 2.530378 | 0.001085 | 0.001834 | 0.001557 |
| ip_unicast_select.test | RUN | 0.363827 | 3.008490 | 2.507245 | 0.001030 | 0.001548 | 0.001368 |
| ip_v6_only.test | RUN | 0.377725 | 3.068166 | 2.657332 | 0.001094 | 0.001806 | 0.001572 |
| ip_v6_only_select.test | RUN | 0.382949 | 3.186558 | 2.636906 | 0.001033 | 0.001652 | 0.001555 |
| is_read_buffered.test | RUN | 0.253494 | 0.899773 | 1.359841 | 0.000964 | 0.001683 | 0.001470 |
| is_read_buffered_select.test | RUN | 0.259000 | 0.925476 | 1.383594 | 0.000911 | 0.001426 | 0.001273 |
| is_write_buffered.test | RUN | 0.252403 | 0.916908 | 1.332652 | 0.000980 | 0.001463 | 0.001515 |
| is_write_buffered_select.test | RUN | 0.258428 | 0.908019 | 1.352866 | 0.000936 | 0.001454 | 0.001498 |
| local_basic_endpoint.test | LINK | 0.128008 | 0.505716 | 0.683695 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.128685 | 0.500677 | 0.694494 | — | — | — |
| local_connect_pair.test | LINK | 0.349920 | 3.058275 | 2.423815 | — | — | — |
| local_connect_pair_select.test | LINK | 0.355397 | 2.967919 | 2.380069 | — | — | — |
| local_datagram_protocol.test | LINK | 0.478643 | 3.988817 | 3.428470 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.489710 | 3.995792 | 3.391753 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.489964 | 3.875918 | 3.426239 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.491480 | 3.897566 | 3.415121 | — | — | — |
| local_stream_protocol.test | LINK | 0.449713 | 3.679219 | 3.245128 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.462160 | 3.660658 | 3.224595 | — | — | — |
| placeholders.test | LINK | 0.081088 | 0.265340 | 0.333680 | — | — | — |
| placeholders_select.test | LINK | 0.080826 | 0.265846 | 0.337647 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.221390 | 0.742977 | 1.014174 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.226847 | 0.795370 | 1.216745 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.221198 | 0.760394 | 0.993807 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.227090 | 0.806065 | 1.211857 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086511 | 0.281588 | 0.324874 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.086855 | 0.275534 | 0.327852 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.474091 | 3.753561 | 3.178110 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.523920 | 3.801386 | 3.274304 | — | — | — |
| prepend.test | RUN | 0.516648 | 3.017770 | 2.507451 | 0.001438 | 0.001805 | 0.001611 |
| prepend_select.test | RUN | 0.522641 | 3.034170 | 2.518753 | 0.001344 | 0.001447 | 0.001628 |
| random_access_file.test | LINK | 0.292895 | 0.677634 | 0.826133 | — | — | — |
| random_access_file_select.test | LINK | 0.305627 | 0.716954 | 1.019012 | — | — | — |
| read.test | RUN | 1.708650 | 19.466283 | 14.661984 | 0.001830 | 0.002388 | 0.002013 |
| read_select.test | RUN | 1.730224 | 19.359777 | 14.760979 | 0.001934 | 0.002218 | 0.002090 |
| read_at.test | RUN | 1.704674 | 26.464787 | 19.826157 | 0.002216 | 0.002738 | 0.002244 |
| read_at_select.test | RUN | 1.718107 | 26.301577 | 19.939251 | 0.002089 | 0.002297 | 0.002327 |
| read_until.test | RUN | 0.890780 | 7.577994 | 5.373277 | 0.001563 | 0.001502 | 0.001553 |
| read_until_select.test | RUN | 0.889238 | 7.566913 | 5.581103 | 0.001606 | 0.001758 | 0.001707 |
| readable_pipe.test | LINK | 0.541616 | 3.054239 | 2.494946 | — | — | — |
| readable_pipe_select.test | LINK | 0.566974 | 3.236571 | 2.625791 | — | — | — |
| recycling_allocator.test | RUN | 0.159421 | 0.429285 | 0.482282 | 0.001315 | 0.001697 | 0.001320 |
| recycling_allocator_select.test | RUN | 0.156848 | 0.431101 | 0.486766 | 0.001158 | 0.001690 | 0.001348 |
| redirect_disposition.test | LINK | 0.702386 | 4.282699 | 3.820531 | — | — | — |
| redirect_disposition_select.test | LINK | 0.707375 | 4.290475 | 3.812010 | — | — | — |
| redirect_error.test | LINK | 0.624813 | 3.552223 | 3.326127 | — | — | — |
| redirect_error_select.test | LINK | 0.637050 | 3.578481 | 3.317096 | — | — | — |
| registered_buffer.test | LINK | 0.154071 | 0.346326 | 0.453155 | — | — | — |
| registered_buffer_select.test | LINK | 0.157408 | 0.344790 | 0.442295 | — | — | — |
| signal_set.test | RUN | 0.518787 | 2.967569 | 2.346750 | 0.001256 | 0.001604 | 0.001515 |
| signal_set_select.test | RUN | 0.542041 | 3.099317 | 2.549484 | 0.001208 | 0.001786 | 0.001549 |
| signal_set_base.test | LINK | 0.124731 | 0.265291 | 0.319661 | — | — | — |
| signal_set_base_select.test | LINK | 0.124184 | 0.266562 | 0.320569 | — | — | — |
| socket_base.test | RUN | 0.633398 | 4.429143 | 3.568073 | 0.001296 | 0.001814 | 0.001721 |
| socket_base_select.test | RUN | 0.638285 | 4.308069 | 3.546938 | 0.001277 | 0.001616 | 0.001659 |
| spawn.test | RUN | 1.111505 | 7.222197 | 6.270548 | 0.001650 | 0.001738 | 0.001754 |
| spawn_select.test | RUN | 1.129917 | 7.256485 | 6.176731 | 0.001483 | 0.001640 | 0.001729 |
| static_thread_pool.test | RUN | 0.281477 | 0.670197 | 0.784558 | 0.001292 | 0.001578 | 0.001458 |
| static_thread_pool_select.test | RUN | 0.294804 | 0.712665 | 1.010683 | 0.001214 | 0.001268 | 0.001494 |
| steady_timer.test | LINK | 0.311839 | 0.727907 | 1.103540 | — | — | — |
| steady_timer_select.test | LINK | 0.319354 | 0.765114 | 1.140418 | — | — | — |
| strand.test | RUN | 0.690463 | 4.075967 | 3.672003 | 0.001994 | 0.002296 | 0.002226 |
| strand_select.test | RUN | 0.696612 | 4.022293 | 3.697447 | 0.002179 | 0.001823 | 0.002440 |
| stream_file.test | LINK | 0.289714 | 0.662324 | 0.859391 | — | — | — |
| stream_file_select.test | LINK | 0.307594 | 0.727755 | 1.024653 | — | — | — |
| streambuf.test | RUN | 0.186453 | 0.564968 | 0.551533 | 0.000918 | 0.001506 | 0.001033 |
| streambuf_select.test | RUN | 0.157917 | 0.564971 | 0.479134 | 0.000928 | 0.001044 | 0.001029 |
| system_timer.test | LINK | 0.449321 | 2.717558 | 2.212349 | — | — | — |
| system_timer_select.test | LINK | 0.456624 | 2.583663 | 2.151840 | — | — | — |
| system_context.test | LINK | 0.192136 | 0.443327 | 0.488359 | — | — | — |
| system_context_select.test | LINK | 0.198476 | 0.464592 | 0.617678 | — | — | — |
| system_executor.test | LINK | 0.258798 | 1.477429 | 1.002890 | — | — | — |
| system_executor_select.test | LINK | 0.273938 | 1.450868 | 1.099894 | — | — | — |
| this_coro.test | LINK | 0.072817 | 0.160224 | 0.190522 | — | — | — |
| this_coro_select.test | LINK | 0.070082 | 0.161997 | 0.190484 | — | — | — |
| thread_pool.test | RUN | 0.310399 | 1.920263 | 1.287727 | 0.001571 | 0.001880 | 0.001848 |
| thread_pool_select.test | RUN | 0.318524 | 1.932928 | 1.400893 | 0.001580 | 0.001878 | 0.001721 |
| time_traits.test | LINK | 0.160652 | 0.350183 | 0.390894 | — | — | — |
| time_traits_select.test | LINK | 0.161438 | 0.348873 | 0.390357 | — | — | — |
| ts_buffer.test | LINK | 0.151349 | 0.460534 | 0.415435 | — | — | — |
| ts_buffer_select.test | LINK | 0.155434 | 0.467628 | 0.416950 | — | — | — |
| ts_executor.test | LINK | 0.222549 | 0.822056 | 0.662739 | — | — | — |
| ts_executor_select.test | LINK | 0.232740 | 0.868407 | 0.828837 | — | — | — |
| ts_internet.test | LINK | 0.244054 | 0.895889 | 1.288072 | — | — | — |
| ts_internet_select.test | LINK | 0.250402 | 0.910184 | 1.283886 | — | — | — |
| ts_io_context.test | LINK | 0.199678 | 0.676873 | 0.780695 | — | — | — |
| ts_io_context_select.test | LINK | 0.210117 | 0.718241 | 1.012054 | — | — | — |
| ts_net.test | LINK | 0.292390 | 1.070477 | 1.607980 | — | — | — |
| ts_net_select.test | LINK | 0.297945 | 1.098041 | 1.626205 | — | — | — |
| ts_netfwd.test | LINK | 0.290594 | 1.073641 | 1.605855 | — | — | — |
| ts_netfwd_select.test | LINK | 0.295477 | 1.108221 | 1.644805 | — | — | — |
| ts_socket.test | LINK | 0.237862 | 0.839741 | 1.220197 | — | — | — |
| ts_socket_select.test | LINK | 0.244248 | 0.849565 | 1.231613 | — | — | — |
| ts_timer.test | LINK | 0.210942 | 0.739280 | 1.068955 | — | — | — |
| ts_timer_select.test | LINK | 0.219881 | 0.766143 | 1.094116 | — | — | — |
| use_awaitable.test | LINK | 0.071312 | 0.244299 | 0.303070 | — | — | — |
| use_awaitable_select.test | LINK | 0.073416 | 0.246930 | 0.296083 | — | — | — |
| wait_traits.test | LINK | 0.071712 | 0.252192 | 0.292310 | — | — | — |
| wait_traits_select.test | LINK | 0.070956 | 0.246286 | 0.301241 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.070792 | 0.246760 | 0.304402 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.072811 | 0.241432 | 0.299104 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.071054 | 0.248421 | 0.292845 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.070811 | 0.249028 | 0.298991 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.070291 | 0.247605 | 0.302345 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.071950 | 0.247492 | 0.287132 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.072005 | 0.241588 | 0.298987 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.072731 | 0.231241 | 0.300298 | — | — | — |
| windows_object_handle.test | LINK | 0.204248 | 0.666746 | 0.812302 | — | — | — |
| windows_object_handle_select.test | LINK | 0.209493 | 0.708684 | 1.007481 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.211341 | 0.713076 | 0.881011 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.216647 | 0.760381 | 1.093018 | — | — | — |
| windows_random_access_handle.test | LINK | 0.199605 | 0.674960 | 0.806041 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.207701 | 0.724599 | 1.018380 | — | — | — |
| windows_stream_handle.test | LINK | 0.201272 | 0.674227 | 0.809837 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.206239 | 0.726661 | 1.015018 | — | — | — |
| writable_pipe.test | LINK | 0.375230 | 3.010891 | 2.534367 | — | — | — |
| writable_pipe_select.test | LINK | 0.435143 | 3.150203 | 2.662824 | — | — | — |
| write.test | RUN | 1.679550 | 15.924957 | 14.219460 | 0.001828 | 0.002048 | 0.002070 |
| write_select.test | RUN | 1.720276 | 16.021081 | 14.431190 | 0.002086 | 0.001941 | 0.002098 |
| write_at.test | RUN | 1.745861 | 21.791697 | 18.185174 | 0.002060 | 0.002096 | 0.002120 |
| write_at_select.test | RUN | 1.754187 | 21.693237 | 18.304116 | 0.002203 | 0.002190 | 0.002108 |
| any_executor.test | RUN | 0.703350 | 7.167818 | 5.902675 | 0.001866 | 0.001812 | 0.002038 |
| blocking.test | RUN | 1.500937 | 9.207853 | 11.740677 | 0.003511 | 0.003506 | 0.003520 |
| blocking_adaptation.test | RUN | 0.760985 | 3.864053 | 5.184611 | 0.002130 | 0.002504 | 0.002524 |
| context_as.test | RUN | 0.440643 | 2.797447 | 1.754915 | 0.001286 | 0.001559 | 0.001577 |
| executor.test | RUN | 0.110115 | 0.253625 | 0.306984 | 0.001433 | 0.001247 | 0.001346 |
| inline_exception_handling.test | RUN | 1.460300 | 8.675166 | 11.929794 | 0.003467 | 0.002459 | 0.003397 |
| invocable_archetype.test | RUN | 0.110466 | 0.252441 | 0.316283 | 0.001330 | 0.001502 | 0.001347 |
| mapping.test | RUN | 1.370709 | 8.717266 | 11.502359 | 0.002457 | 0.002498 | 0.002494 |
| outstanding_work.test | RUN | 0.672415 | 3.624699 | 5.150308 | 0.002234 | 0.002361 | 0.002359 |
| prefer_only.test | RUN | 0.221394 | 1.470261 | 1.138170 | 0.001370 | 0.001573 | 0.001346 |
| relationship.test | RUN | 0.559174 | 3.240146 | 4.911788 | 0.001540 | 0.001578 | 0.002230 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.995×, 0.991× | 1.007× |
| clang | 0.985× | 0.981×, 0.989× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001288s | 0.001229s | 0.001209s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001228s | 0.001247s | 0.001217s | byte equality observed |
| any_completion_handler.test | 10 | 0.001034s | 0.001008s | 0.000990s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001033s | 0.000998s | 0.001015s | byte equality observed |
| any_io_executor.test | 3 | 0.001247s | 0.001220s | 0.001189s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001252s | 0.001155s | 0.001256s | byte equality observed |
| append.test | 10 | 0.000989s | 0.000991s | 0.000954s | byte equality observed |
| append_select.test | 10 | 0.000975s | 0.000988s | 0.000967s | byte equality observed |
| as_tuple.test | 9 | 0.001063s | 0.001037s | 0.001023s | byte equality observed |
| as_tuple_select.test | 10 | 0.000982s | 0.000935s | 0.000926s | byte equality observed |
| bind_allocator.test | 1 | 0.001481s | 0.001469s | 0.001533s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001193s | 0.001087s | 0.001114s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000911s | 0.000913s | 0.000884s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000814s | 0.000807s | 0.000799s | byte equality observed |
| bind_executor.test | 1 | 0.001507s | 0.001529s | 0.001441s | byte equality observed |
| bind_executor_select.test | 1 | 0.001740s | 0.001805s | 0.001652s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000911s | 0.000918s | 0.000897s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000864s | 0.000874s | 0.000889s | byte equality observed |
| buffer.test | 10 | 0.000849s | 0.000888s | 0.000851s | byte equality observed |
| buffer_select.test | 10 | 0.000828s | 0.000835s | 0.000841s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001046s | 0.001024s | 0.001044s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001008s | 0.000988s | 0.001015s | byte equality observed |
| buffered_stream.test | 10 | 0.001018s | 0.001013s | 0.001001s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000998s | 0.001008s | 0.000995s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001003s | 0.001009s | 0.001006s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001008s | 0.001007s | 0.001017s | byte equality observed |
| buffers_iterator.test | 10 | 0.000832s | 0.000828s | 0.000801s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000789s | 0.000763s | 0.000748s | byte equality observed |
| cancel_after.test | 1 | 0.003342s | 0.003418s | 0.003023s | byte equality observed |
| cancel_after_select.test | 1 | 0.002848s | 0.002862s | 0.002576s | byte equality observed |
| cancel_at.test | 1 | 0.003546s | 0.003586s | 0.003114s | byte equality observed |
| cancel_at_select.test | 1 | 0.003387s | 0.003421s | 0.003146s | byte equality observed |
| co_composed.test | 10 | 0.000865s | 0.000869s | 0.000844s | byte equality observed |
| co_composed_select.test | 10 | 0.000785s | 0.000784s | 0.000782s | byte equality observed |
| compose.test | 1 | 0.001586s | 0.001561s | 0.001446s | byte equality observed |
| compose_select.test | 1 | 0.001299s | 0.001249s | 0.001248s | byte equality observed |
| composed.test | 1 | 0.001816s | 0.001773s | 0.001752s | byte equality observed |
| composed_select.test | 1 | 0.001371s | 0.001520s | 0.001353s | byte equality observed |
| config.test | 10 | 0.000907s | 0.000935s | 0.000896s | byte equality observed |
| config_select.test | 10 | 0.000914s | 0.000888s | 0.000861s | byte equality observed |
| connect_pipe.test | 10 | 0.000927s | 0.000918s | 0.000868s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000928s | 0.000861s | 0.000881s | byte equality observed |
| consign.test | 10 | 0.000890s | 0.000895s | 0.000868s | byte equality observed |
| consign_select.test | 10 | 0.000838s | 0.000859s | 0.000814s | byte equality observed |
| deadline_timer.test | 1 | 0.002234s | 0.002339s | 0.002210s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001916s | 0.002077s | 0.001980s | byte equality observed |
| deferred.test | 10 | 0.000820s | 0.000848s | 0.000816s | byte equality observed |
| deferred_select.test | 10 | 0.000755s | 0.000762s | 0.000748s | byte equality observed |
| disposition.test | 10 | 0.000788s | 0.000808s | 0.000789s | byte equality observed |
| disposition_select.test | 10 | 0.000786s | 0.000798s | 0.000795s | byte equality observed |
| error.test | 10 | 0.000782s | 0.000793s | 0.000757s | byte equality observed |
| error_select.test | 10 | 0.000770s | 0.000789s | 0.000772s | byte equality observed |
| inline_executor.test | 10 | 0.000790s | 0.000784s | 0.000765s | byte equality observed |
| inline_executor_select.test | 10 | 0.000784s | 0.000779s | 0.000763s | byte equality observed |
| inline_or_executor.test | 10 | 0.000801s | 0.000800s | 0.000766s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000794s | 0.000800s | 0.000781s | byte equality observed |
| io_context.test | 1 | 0.001964s | 0.001933s | 0.001783s | byte equality observed |
| io_context_select.test | 1 | 0.002174s | 0.002272s | 0.002035s | byte equality observed |
| io_context_strand.test | 1 | 0.002047s | 0.002154s | 0.002043s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001774s | 0.001811s | 0.001775s | byte equality observed |
| ip_host_name.test | 10 | 0.000852s | 0.000859s | 0.000847s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000771s | 0.000772s | 0.000743s | byte equality observed |
| ip_icmp.test | 10 | 0.000794s | 0.000798s | 0.000775s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000795s | 0.000811s | 0.000775s | byte equality observed |
| ip_multicast.test | 10 | 0.000865s | 0.000871s | 0.000853s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000841s | 0.000838s | 0.000824s | byte equality observed |
| ip_tcp.test | 10 | 0.001059s | 0.001068s | 0.001043s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001026s | 0.001032s | 0.001006s | byte equality observed |
| ip_udp.test | 10 | 0.000881s | 0.000874s | 0.000855s | byte equality observed |
| ip_udp_select.test | 10 | 0.000862s | 0.000864s | 0.000844s | byte equality observed |
| ip_unicast.test | 10 | 0.000825s | 0.000832s | 0.000814s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000819s | 0.000838s | 0.000798s | byte equality observed |
| ip_v6_only.test | 10 | 0.000832s | 0.000840s | 0.000813s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000817s | 0.000832s | 0.000802s | byte equality observed |
| is_read_buffered.test | 10 | 0.000763s | 0.000764s | 0.000751s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000766s | 0.000765s | 0.000756s | byte equality observed |
| is_write_buffered.test | 10 | 0.000763s | 0.000763s | 0.000751s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000771s | 0.000761s | 0.000753s | byte equality observed |
| prepend.test | 10 | 0.000830s | 0.000903s | 0.000808s | byte equality observed |
| prepend_select.test | 10 | 0.000809s | 0.000878s | 0.000794s | byte equality observed |
| read.test | 10 | 0.001120s | 0.001195s | 0.001082s | byte equality observed |
| read_at.test | 10 | 0.001335s | 0.001503s | 0.001326s | byte equality observed |
| read_at_select.test | 10 | 0.001338s | 0.001476s | 0.001319s | byte equality observed |
| read_select.test | 10 | 0.001117s | 0.001181s | 0.001075s | byte equality observed |
| read_until.test | 10 | 0.000948s | 0.000959s | 0.000917s | byte equality observed |
| read_until_select.test | 10 | 0.001004s | 0.000977s | 0.000922s | byte equality observed |
| recycling_allocator.test | 10 | 0.000835s | 0.000843s | 0.000792s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000836s | 0.000849s | 0.000805s | byte equality observed |
| signal_set.test | 10 | 0.000853s | 0.000888s | 0.000842s | byte equality observed |
| signal_set_select.test | 10 | 0.000851s | 0.000880s | 0.000852s | byte equality observed |
| socket_base.test | 10 | 0.000931s | 0.000935s | 0.000908s | byte equality observed |
| socket_base_select.test | 10 | 0.000930s | 0.000930s | 0.000883s | byte equality observed |
| spawn.test | 10 | 0.000986s | 0.001028s | 0.000975s | byte equality observed |
| spawn_select.test | 10 | 0.000999s | 0.000998s | 0.000980s | byte equality observed |
| static_thread_pool.test | 10 | 0.000837s | 0.000827s | 0.000820s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000784s | 0.000804s | 0.000785s | byte equality observed |
| strand.test | 1 | 0.001769s | 0.001705s | 0.001731s | byte equality observed |
| strand_select.test | 1 | 0.001436s | 0.001551s | 0.001456s | byte equality observed |
| streambuf.test | 10 | 0.000868s | 0.000877s | 0.000860s | byte equality observed |
| streambuf_select.test | 10 | 0.000846s | 0.000863s | 0.000841s | byte equality observed |
| thread_pool.test | 10 | 0.001589s | 0.001563s | 0.001546s | byte equality observed |
| thread_pool_select.test | 10 | 0.001583s | 0.001533s | 0.001550s | byte equality observed |
| write.test | 10 | 0.001220s | 0.001221s | 0.001173s | byte equality observed |
| write_at.test | 10 | 0.001332s | 0.001346s | 0.001307s | byte equality observed |
| write_at_select.test | 10 | 0.001322s | 0.001313s | 0.001278s | byte equality observed |
| write_select.test | 10 | 0.001209s | 0.001206s | 0.001141s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
