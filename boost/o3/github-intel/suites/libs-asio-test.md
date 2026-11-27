# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.517276 | 3.473985 | 2.831047 | 0.001350 | 0.002119 | 0.001620 |
| any_completion_executor_select.test | RUN | 0.522161 | 3.424163 | 3.045020 | 0.001313 | 0.001641 | 0.001531 |
| any_completion_handler.test | RUN | 0.595791 | 3.110173 | 2.589439 | 0.001424 | 0.001465 | 0.001440 |
| any_completion_handler_select.test | RUN | 0.588086 | 3.264894 | 2.773732 | 0.001390 | 0.001448 | 0.001112 |
| any_io_executor.test | RUN | 0.544425 | 3.710102 | 3.088738 | 0.001520 | 0.002056 | 0.001434 |
| any_io_executor_select.test | RUN | 0.561126 | 3.589921 | 3.280086 | 0.001308 | 0.001799 | 0.001692 |
| append.test | RUN | 0.503951 | 2.939148 | 2.336105 | 0.001103 | 0.001507 | 0.001230 |
| append_select.test | RUN | 0.527155 | 3.066494 | 2.330198 | 0.001486 | 0.001467 | 0.001149 |
| as_tuple.test | RUN | 0.664544 | 3.641099 | 3.245217 | 0.001318 | 0.001766 | 0.001190 |
| as_tuple_select.test | RUN | 0.669260 | 3.522772 | 3.287172 | 0.001288 | 0.001502 | 0.001106 |
| associated_allocator.test | LINK | 0.126631 | 0.297307 | 0.343456 | — | — | — |
| associated_allocator_select.test | LINK | 0.129125 | 0.290551 | 0.353169 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.140549 | 0.314035 | 0.377408 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.138126 | 0.314738 | 0.385681 | — | — | — |
| associated_executor.test | LINK | 0.202003 | 0.543402 | 0.638260 | — | — | — |
| associated_executor_select.test | LINK | 0.209018 | 0.546778 | 0.640579 | — | — | — |
| associated_immediate_executor.test | LINK | 0.182578 | 0.508231 | 0.542565 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.189286 | 0.501607 | 0.571994 | — | — | — |
| associator.test | LINK | 0.101555 | 0.239067 | 0.284551 | — | — | — |
| associator_select.test | LINK | 0.099668 | 0.243239 | 0.279028 | — | — | — |
| awaitable.test | LINK | 0.101073 | 0.242946 | 0.277858 | — | — | — |
| awaitable_select.test | LINK | 0.102204 | 0.239555 | 0.279849 | — | — | — |
| basic_datagram_socket.test | LINK | 0.325515 | 0.761898 | 1.058063 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.331807 | 0.792920 | 1.088495 | — | — | — |
| basic_deadline_timer.test | LINK | 0.388304 | 0.914555 | 1.230993 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.389423 | 0.915167 | 1.258062 | — | — | — |
| basic_file.test | LINK | 0.097351 | 0.241429 | 0.276817 | — | — | — |
| basic_file_select.test | LINK | 0.097190 | 0.242155 | 0.280005 | — | — | — |
| basic_random_access_file.test | LINK | 0.103272 | 0.245480 | 0.276704 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.101909 | 0.238636 | 0.283097 | — | — | — |
| basic_raw_socket.test | LINK | 0.323389 | 0.762382 | 1.082906 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.328804 | 0.772231 | 1.102404 | — | — | — |
| basic_readable_pipe.test | LINK | 0.308665 | 0.716586 | 0.930774 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.318658 | 0.786295 | 1.126465 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.325137 | 0.771235 | 1.082281 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.332378 | 0.787329 | 1.091499 | — | — | — |
| basic_signal_set.test | LINK | 0.301041 | 0.703254 | 0.841697 | — | — | — |
| basic_signal_set_select.test | LINK | 0.305821 | 0.764640 | 1.046238 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.333513 | 0.770049 | 1.077195 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.330535 | 0.799386 | 1.125269 | — | — | — |
| basic_stream_file.test | LINK | 0.098423 | 0.246524 | 0.289829 | — | — | — |
| basic_stream_file_select.test | LINK | 0.095815 | 0.244538 | 0.291450 | — | — | — |
| basic_stream_socket.test | LINK | 0.318002 | 0.772529 | 1.065625 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.329216 | 0.792718 | 1.120301 | — | — | — |
| basic_streambuf.test | LINK | 0.155312 | 0.348014 | 0.416134 | — | — | — |
| basic_streambuf_select.test | LINK | 0.155668 | 0.355009 | 0.424195 | — | — | — |
| basic_waitable_timer.test | LINK | 0.296181 | 0.705277 | 1.006888 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.305107 | 0.715899 | 1.019989 | — | — | — |
| basic_writable_pipe.test | LINK | 0.307894 | 0.743488 | 0.940313 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.321598 | 0.780346 | 1.152572 | — | — | — |
| bind_allocator.test | RUN | 0.556537 | 2.997647 | 2.517653 | 0.001866 | 0.001741 | 0.001582 |
| bind_allocator_select.test | RUN | 0.563467 | 3.030282 | 2.504734 | 0.001236 | 0.001640 | 0.001117 |
| bind_cancellation_slot.test | RUN | 0.560551 | 3.035645 | 2.619906 | 0.000935 | 0.001025 | 0.000848 |
| bind_cancellation_slot_select.test | RUN | 0.575483 | 3.013992 | 2.500035 | 0.000970 | 0.000946 | 0.000847 |
| bind_executor.test | RUN | 0.383536 | 2.071529 | 1.601731 | 0.001651 | 0.001643 | 0.001548 |
| bind_executor_select.test | RUN | 0.390512 | 2.076990 | 1.598931 | 0.001401 | 0.001496 | 0.001273 |
| bind_immediate_executor.test | RUN | 0.286445 | 1.693226 | 1.034574 | 0.000987 | 0.000957 | 0.000927 |
| bind_immediate_executor_select.test | RUN | 0.289863 | 1.646010 | 1.112724 | 0.000945 | 0.000967 | 0.001182 |
| buffer.test | RUN | 0.168562 | 0.690478 | 0.609878 | 0.000894 | 0.000905 | 0.000841 |
| buffer_select.test | RUN | 0.169031 | 0.698492 | 0.599699 | 0.000837 | 0.000932 | 0.000801 |
| buffer_registration.test | LINK | 0.132004 | 0.346108 | 0.352026 | — | — | — |
| buffer_registration_select.test | LINK | 0.133207 | 0.341189 | 0.347884 | — | — | — |
| buffered_read_stream.test | RUN | 0.657519 | 4.661744 | 3.496290 | 0.001248 | 0.001596 | 0.001548 |
| buffered_read_stream_select.test | RUN | 0.668929 | 4.621013 | 3.637433 | 0.001110 | 0.001678 | 0.001534 |
| buffered_stream.test | RUN | 0.919854 | 7.273870 | 6.444974 | 0.001752 | 0.001844 | 0.001716 |
| buffered_stream_select.test | RUN | 0.952776 | 7.409603 | 6.328699 | 0.001586 | 0.001832 | 0.001471 |
| buffered_write_stream.test | RUN | 1.123326 | 6.428379 | 5.508361 | 0.001591 | 0.001877 | 0.001470 |
| buffered_write_stream_select.test | RUN | 1.180496 | 6.420418 | 5.408650 | 0.001540 | 0.001770 | 0.001429 |
| buffers_iterator.test | RUN | 0.324613 | 0.560313 | 0.855448 | 0.001350 | 0.001567 | 0.001170 |
| buffers_iterator_select.test | RUN | 0.316697 | 0.564558 | 0.872822 | 0.001226 | 0.001536 | 0.001032 |
| cancel_after.test | RUN | 0.921070 | 4.922919 | 3.974888 | 0.003106 | 0.003785 | 0.002548 |
| cancel_after_select.test | RUN | 0.939199 | 4.942911 | 4.002273 | 0.003198 | 0.003500 | 0.002134 |
| cancel_at.test | RUN | 0.822566 | 4.430489 | 3.925698 | 0.002909 | 0.003274 | 0.002205 |
| cancel_at_select.test | RUN | 0.796021 | 4.337395 | 3.960731 | 0.002586 | 0.003220 | 0.002075 |
| cancellation_signal.test | LINK | 0.093932 | 0.205423 | 0.265912 | — | — | — |
| cancellation_signal_select.test | LINK | 0.090975 | 0.207548 | 0.339495 | — | — | — |
| cancellation_state.test | LINK | 0.090949 | 0.205793 | 0.364502 | — | — | — |
| cancellation_state_select.test | LINK | 0.092502 | 0.202911 | 0.367909 | — | — | — |
| cancellation_type.test | LINK | 0.106737 | 0.157677 | 0.291365 | — | — | — |
| cancellation_type_select.test | LINK | 0.100869 | 0.159472 | 0.285263 | — | — | — |
| co_composed.test | RUN | 0.099751 | 0.159276 | 0.282331 | 0.001132 | 0.001017 | 0.001004 |
| co_composed_select.test | RUN | 0.105754 | 0.163236 | 0.289383 | 0.001114 | 0.001256 | 0.001077 |
| co_spawn.test | LINK | 0.103496 | 0.163930 | 0.286060 | — | — | — |
| co_spawn_select.test | LINK | 0.105875 | 0.236919 | 0.282569 | — | — | — |
| completion_condition.test | LINK | 0.134685 | 0.375217 | 0.378593 | — | — | — |
| completion_condition_select.test | LINK | 0.137369 | 0.376894 | 0.394332 | — | — | — |
| compose.test | RUN | 0.690632 | 3.811921 | 3.284460 | 0.001769 | 0.002143 | 0.001654 |
| compose_select.test | RUN | 0.691400 | 3.719219 | 3.191033 | 0.001527 | 0.001585 | 0.001449 |
| composed.test | RUN | 0.685537 | 3.744967 | 3.189898 | 0.001325 | 0.001646 | 0.001299 |
| composed_select.test | RUN | 0.677450 | 3.721757 | 3.116298 | 0.001277 | 0.001578 | 0.001182 |
| config.test | RUN | 0.356967 | 2.399129 | 1.395109 | 0.001386 | 0.002214 | 0.001132 |
| config_select.test | RUN | 0.384509 | 2.512141 | 1.597441 | 0.001303 | 0.001440 | 0.001159 |
| connect.test | LINK | 1.099726 | 8.162465 | 6.795841 | — | — | — |
| connect_select.test | LINK | 1.096756 | 8.002510 | 6.709954 | — | — | — |
| connect_pipe.test | RUN | 0.579652 | 3.011945 | 2.485482 | 0.001408 | 0.001606 | 0.001186 |
| connect_pipe_select.test | RUN | 0.596802 | 3.177188 | 2.684168 | 0.001489 | 0.001834 | 0.001213 |
| consign.test | RUN | 0.496127 | 2.964925 | 2.298218 | 0.001457 | 0.001819 | 0.001201 |
| consign_select.test | RUN | 0.506271 | 3.055172 | 2.317197 | 0.001236 | 0.001235 | 0.001275 |
| coroutine.test | LINK | 0.102811 | 0.291470 | 0.318148 | — | — | — |
| coroutine_select.test | LINK | 0.107324 | 0.283325 | 0.328515 | — | — | — |
| deadline_timer.test | RUN | 0.748862 | 3.815944 | 3.303954 | 0.002768 | 0.002796 | 0.002574 |
| deadline_timer_select.test | RUN | 0.750308 | 3.778082 | 3.347857 | 0.002334 | 0.003122 | 0.002061 |
| deferred.test | RUN | 0.112057 | 0.262815 | 0.311505 | 0.001126 | 0.001322 | 0.001177 |
| deferred_select.test | RUN | 0.110918 | 0.262148 | 0.311226 | 0.001108 | 0.001218 | 0.001084 |
| detached.test | LINK | 0.126705 | 0.292956 | 0.344977 | — | — | — |
| detached_select.test | LINK | 0.134509 | 0.288708 | 0.346805 | — | — | — |
| disposition.test | RUN | 0.124291 | 0.715758 | 0.656410 | 0.000949 | 0.001513 | 0.001320 |
| disposition_select.test | RUN | 0.121610 | 0.704456 | 0.652504 | 0.000894 | 0.001497 | 0.001172 |
| error.test | RUN | 0.114215 | 0.693505 | 0.598918 | 0.000952 | 0.001523 | 0.001120 |
| error_select.test | RUN | 0.114118 | 0.684128 | 0.563298 | 0.000906 | 0.001483 | 0.001127 |
| file_base.test | LINK | 0.141690 | 0.562250 | 0.630966 | — | — | — |
| file_base_select.test | LINK | 0.137283 | 0.554403 | 0.516441 | — | — | — |
| fwd_first.test | LINK | 0.326177 | 0.923152 | 1.105190 | — | — | — |
| fwd_last.test | LINK | 0.327546 | 0.806342 | 1.102655 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.120791 | 0.323860 | 0.400108 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.122468 | 0.326635 | 0.396977 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.554596 | 3.070186 | 2.357548 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.555566 | 3.138443 | 2.293507 | — | — | — |
| generic_raw_protocol.test | LINK | 0.552692 | 3.068228 | 2.357333 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.554432 | 3.135031 | 2.304835 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.470760 | 2.590765 | 2.009582 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.473835 | 2.594571 | 1.972591 | — | — | — |
| generic_stream_protocol.test | LINK | 0.510213 | 2.785525 | 2.159118 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.509615 | 2.833716 | 2.115989 | — | — | — |
| high_resolution_timer.test | LINK | 0.204541 | 0.490458 | 0.610864 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.206774 | 0.501852 | 0.630058 | — | — | — |
| immediate.test | LINK | 0.137345 | 0.374311 | 0.377186 | — | — | — |
| immediate_select.test | LINK | 0.140902 | 0.374824 | 0.384580 | — | — | — |
| inline_executor.test | RUN | 0.174741 | 0.587504 | 0.573857 | 0.000948 | 0.000982 | 0.000842 |
| inline_executor_select.test | RUN | 0.173660 | 0.589676 | 0.579751 | 0.000890 | 0.001038 | 0.000836 |
| inline_or_executor.test | RUN | 0.302485 | 1.787726 | 1.152259 | 0.000964 | 0.001061 | 0.000855 |
| inline_or_executor_select.test | RUN | 0.302974 | 1.847880 | 1.269097 | 0.000869 | 0.001094 | 0.000856 |
| io_context.test | RUN | 0.438106 | 2.746471 | 2.036036 | 0.001830 | 0.001982 | 0.001741 |
| io_context_select.test | RUN | 0.439759 | 2.724146 | 2.049719 | 0.001627 | 0.002139 | 0.001649 |
| io_context_strand.test | RUN | 0.418743 | 2.341369 | 1.805884 | 0.001766 | 0.001706 | 0.001671 |
| io_context_strand_select.test | RUN | 0.423768 | 2.272030 | 1.754979 | 0.001455 | 0.001819 | 0.001461 |
| ip_address.test | LINK | 0.146902 | 0.517621 | 0.751271 | — | — | — |
| ip_address_select.test | LINK | 0.145514 | 0.511784 | 0.810379 | — | — | — |
| ip_address_v4.test | LINK | 0.146726 | 0.544507 | 0.891289 | — | — | — |
| ip_address_v4_select.test | LINK | 0.145699 | 0.543914 | 0.876711 | — | — | — |
| ip_address_v6.test | LINK | 0.168364 | 0.720149 | 1.082499 | — | — | — |
| ip_address_v6_select.test | LINK | 0.169615 | 0.725169 | 1.082879 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.126278 | 0.338725 | 0.683544 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.126409 | 0.335541 | 0.689071 | — | — | — |
| ip_basic_resolver.test | LINK | 0.208605 | 0.493774 | 1.009913 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.213457 | 0.510008 | 1.049610 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069192 | 0.158894 | 0.295078 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.068668 | 0.159161 | 0.293006 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.127713 | 0.492764 | 0.659904 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.126397 | 0.501484 | 0.679680 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.121036 | 0.320497 | 0.637087 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.121359 | 0.475925 | 0.655277 | — | — | — |
| ip_host_name.test | RUN | 0.134281 | 0.651281 | 0.727822 | 0.000895 | 0.001423 | 0.001062 |
| ip_host_name_select.test | RUN | 0.134354 | 0.663588 | 0.740867 | 0.000830 | 0.001410 | 0.001036 |
| ip_icmp.test | RUN | 0.696782 | 6.445102 | 4.839842 | 0.000916 | 0.001396 | 0.001217 |
| ip_icmp_select.test | RUN | 0.696333 | 6.446300 | 4.808454 | 0.000980 | 0.001534 | 0.001176 |
| ip_multicast.test | RUN | 0.386248 | 3.170277 | 2.690668 | 0.001070 | 0.001521 | 0.001272 |
| ip_multicast_select.test | RUN | 0.393658 | 3.121877 | 2.724583 | 0.001045 | 0.001827 | 0.001166 |
| ip_resolver_query_base.test | LINK | 0.081109 | 0.263503 | 0.308575 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.081015 | 0.263260 | 0.306428 | — | — | — |
| ip_tcp.test | RUN | 1.019851 | 9.495629 | 7.462314 | 0.001284 | 0.002032 | 0.001620 |
| ip_tcp_select.test | RUN | 1.024829 | 9.812811 | 7.401429 | 0.001169 | 0.001973 | 0.001592 |
| ip_udp.test | RUN | 0.736703 | 6.688938 | 5.132300 | 0.000986 | 0.001799 | 0.001269 |
| ip_udp_select.test | RUN | 0.728100 | 6.805668 | 5.092723 | 0.001030 | 0.001651 | 0.001318 |
| ip_unicast.test | RUN | 0.350382 | 2.852939 | 2.368805 | 0.000981 | 0.001496 | 0.001208 |
| ip_unicast_select.test | RUN | 0.354885 | 2.916716 | 2.395569 | 0.000954 | 0.001441 | 0.001292 |
| ip_v6_only.test | RUN | 0.365682 | 2.969256 | 2.473709 | 0.000958 | 0.001499 | 0.001198 |
| ip_v6_only_select.test | RUN | 0.371973 | 3.073201 | 2.493872 | 0.000954 | 0.001570 | 0.001200 |
| is_read_buffered.test | RUN | 0.241847 | 0.867218 | 1.258625 | 0.000886 | 0.001356 | 0.001019 |
| is_read_buffered_select.test | RUN | 0.246551 | 0.890040 | 1.319491 | 0.000926 | 0.001264 | 0.001035 |
| is_write_buffered.test | RUN | 0.241401 | 0.876384 | 1.241514 | 0.000873 | 0.001555 | 0.001114 |
| is_write_buffered_select.test | RUN | 0.248442 | 0.912814 | 1.274822 | 0.000911 | 0.001330 | 0.001043 |
| local_basic_endpoint.test | LINK | 0.118944 | 0.482273 | 0.661680 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.119919 | 0.485944 | 0.655872 | — | — | — |
| local_connect_pair.test | LINK | 0.340089 | 2.912066 | 2.259042 | — | — | — |
| local_connect_pair_select.test | LINK | 0.342976 | 2.923258 | 2.232349 | — | — | — |
| local_datagram_protocol.test | LINK | 0.472888 | 3.830831 | 3.168330 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.479334 | 3.874626 | 3.100101 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.478885 | 3.721498 | 3.207856 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.481750 | 3.738546 | 3.198459 | — | — | — |
| local_stream_protocol.test | LINK | 0.446451 | 3.574867 | 3.001060 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.461509 | 3.621850 | 2.959577 | — | — | — |
| placeholders.test | LINK | 0.079550 | 0.256328 | 0.313966 | — | — | — |
| placeholders_select.test | LINK | 0.079170 | 0.258813 | 0.312735 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.219216 | 0.718142 | 0.961855 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.224287 | 0.766275 | 1.164584 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.215517 | 0.726063 | 0.937365 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.221174 | 0.783228 | 1.152816 | — | — | — |
| posix_descriptor_base.test | LINK | 0.082906 | 0.265798 | 0.313804 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.080084 | 0.263616 | 0.314777 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.462059 | 3.562246 | 3.055483 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.470092 | 3.591313 | 3.066332 | — | — | — |
| prepend.test | RUN | 0.349369 | 2.938310 | 2.399511 | 0.001162 | 0.001416 | 0.001210 |
| prepend_select.test | RUN | 0.354065 | 3.004368 | 2.371958 | 0.001141 | 0.001331 | 0.001096 |
| random_access_file.test | LINK | 0.276203 | 0.650383 | 0.773581 | — | — | — |
| random_access_file_select.test | LINK | 0.295572 | 0.702550 | 0.967055 | — | — | — |
| read.test | RUN | 1.671670 | 18.292906 | 13.669501 | 0.001877 | 0.001792 | 0.001740 |
| read_select.test | RUN | 1.685454 | 18.202794 | 14.139437 | 0.001636 | 0.001808 | 0.001960 |
| read_at.test | RUN | 1.656957 | 24.209316 | 18.388063 | 0.001899 | 0.002471 | 0.001942 |
| read_at_select.test | RUN | 1.676695 | 23.620860 | 18.800059 | 0.001953 | 0.002253 | 0.001925 |
| read_until.test | RUN | 0.870313 | 7.106535 | 5.042614 | 0.001544 | 0.001568 | 0.001381 |
| read_until_select.test | RUN | 0.883351 | 7.273923 | 5.280536 | 0.001311 | 0.001478 | 0.001375 |
| readable_pipe.test | LINK | 0.523785 | 2.969969 | 2.347680 | — | — | — |
| readable_pipe_select.test | LINK | 0.547761 | 3.135316 | 2.498173 | — | — | — |
| recycling_allocator.test | RUN | 0.156122 | 0.416064 | 0.472423 | 0.001164 | 0.001273 | 0.001220 |
| recycling_allocator_select.test | RUN | 0.145891 | 0.416046 | 0.467884 | 0.001151 | 0.001321 | 0.001088 |
| redirect_disposition.test | LINK | 0.678341 | 4.126935 | 3.620635 | — | — | — |
| redirect_disposition_select.test | LINK | 0.693597 | 4.064583 | 3.657642 | — | — | — |
| redirect_error.test | LINK | 0.608275 | 3.398861 | 3.111973 | — | — | — |
| redirect_error_select.test | LINK | 0.617405 | 3.402340 | 3.185960 | — | — | — |
| registered_buffer.test | LINK | 0.143380 | 0.321342 | 0.423272 | — | — | — |
| registered_buffer_select.test | LINK | 0.151084 | 0.320761 | 0.405272 | — | — | — |
| signal_set.test | RUN | 0.512831 | 2.894909 | 2.255275 | 0.001191 | 0.001365 | 0.001150 |
| signal_set_select.test | RUN | 0.532734 | 2.973625 | 2.396507 | 0.001173 | 0.001290 | 0.001151 |
| signal_set_base.test | LINK | 0.116598 | 0.258849 | 0.297727 | — | — | — |
| signal_set_base_select.test | LINK | 0.120037 | 0.266149 | 0.304000 | — | — | — |
| socket_base.test | RUN | 0.614821 | 4.143028 | 3.388894 | 0.001275 | 0.001523 | 0.001437 |
| socket_base_select.test | RUN | 0.621539 | 4.119570 | 3.358398 | 0.001204 | 0.001574 | 0.001299 |
| spawn.test | RUN | 1.088287 | 6.989598 | 5.675069 | 0.001582 | 0.001786 | 0.001277 |
| spawn_select.test | RUN | 1.107649 | 6.962628 | 5.631350 | 0.001316 | 0.001735 | 0.001352 |
| static_thread_pool.test | RUN | 0.273560 | 0.645543 | 0.749675 | 0.000893 | 0.001248 | 0.001139 |
| static_thread_pool_select.test | RUN | 0.280202 | 0.686416 | 0.968839 | 0.001077 | 0.001297 | 0.001308 |
| steady_timer.test | LINK | 0.302753 | 0.713381 | 1.026363 | — | — | — |
| steady_timer_select.test | LINK | 0.311731 | 0.732818 | 1.052289 | — | — | — |
| strand.test | RUN | 0.682413 | 3.891667 | 3.501097 | 0.002032 | 0.002166 | 0.001873 |
| strand_select.test | RUN | 0.682428 | 3.844433 | 3.417093 | 0.001777 | 0.001910 | 0.001624 |
| stream_file.test | LINK | 0.281112 | 0.611562 | 0.761601 | — | — | — |
| stream_file_select.test | LINK | 0.298197 | 0.525516 | 0.964420 | — | — | — |
| streambuf.test | RUN | 0.173523 | 0.365902 | 0.543432 | 0.001067 | 0.000928 | 0.001163 |
| streambuf_select.test | RUN | 0.174331 | 0.362599 | 0.504881 | 0.000895 | 0.000932 | 0.001210 |
| system_timer.test | LINK | 0.455098 | 2.520880 | 2.133669 | — | — | — |
| system_timer_select.test | LINK | 0.456325 | 2.456640 | 2.023893 | — | — | — |
| system_context.test | LINK | 0.194656 | 0.415199 | 0.469878 | — | — | — |
| system_context_select.test | LINK | 0.202408 | 0.440787 | 0.577611 | — | — | — |
| system_executor.test | LINK | 0.264923 | 1.420490 | 0.956115 | — | — | — |
| system_executor_select.test | LINK | 0.274130 | 1.377353 | 1.031190 | — | — | — |
| this_coro.test | LINK | 0.073465 | 0.160697 | 0.183467 | — | — | — |
| this_coro_select.test | LINK | 0.073334 | 0.159158 | 0.183519 | — | — | — |
| thread_pool.test | RUN | 0.321189 | 1.822750 | 1.225972 | 0.001838 | 0.001532 | 0.001786 |
| thread_pool_select.test | RUN | 0.329990 | 1.823245 | 1.337617 | 0.001658 | 0.001448 | 0.001616 |
| time_traits.test | LINK | 0.163792 | 0.330755 | 0.384056 | — | — | — |
| time_traits_select.test | LINK | 0.161862 | 0.394136 | 0.374409 | — | — | — |
| ts_buffer.test | LINK | 0.156068 | 0.552550 | 0.392759 | — | — | — |
| ts_buffer_select.test | LINK | 0.157869 | 0.560823 | 0.396902 | — | — | — |
| ts_executor.test | LINK | 0.223102 | 0.775797 | 0.617420 | — | — | — |
| ts_executor_select.test | LINK | 0.234513 | 0.813091 | 0.752653 | — | — | — |
| ts_internet.test | LINK | 0.240402 | 0.851456 | 0.774319 | — | — | — |
| ts_internet_select.test | LINK | 0.248213 | 0.847518 | 1.269161 | — | — | — |
| ts_io_context.test | LINK | 0.195901 | 0.649772 | 0.768946 | — | — | — |
| ts_io_context_select.test | LINK | 0.206397 | 0.698751 | 0.909418 | — | — | — |
| ts_net.test | LINK | 0.286949 | 0.999982 | 1.551187 | — | — | — |
| ts_net_select.test | LINK | 0.294899 | 1.038761 | 1.561405 | — | — | — |
| ts_netfwd.test | LINK | 0.291199 | 1.010775 | 1.541336 | — | — | — |
| ts_netfwd_select.test | LINK | 0.301083 | 1.037465 | 1.536341 | — | — | — |
| ts_socket.test | LINK | 0.247339 | 0.785413 | 1.176627 | — | — | — |
| ts_socket_select.test | LINK | 0.246617 | 0.811730 | 1.196024 | — | — | — |
| ts_timer.test | LINK | 0.210839 | 0.716108 | 1.009522 | — | — | — |
| ts_timer_select.test | LINK | 0.214514 | 0.731082 | 1.034221 | — | — | — |
| use_awaitable.test | LINK | 0.069990 | 0.237266 | 0.293808 | — | — | — |
| use_awaitable_select.test | LINK | 0.070635 | 0.241795 | 0.298306 | — | — | — |
| wait_traits.test | LINK | 0.070129 | 0.244623 | 0.292751 | — | — | — |
| wait_traits_select.test | LINK | 0.070741 | 0.236922 | 0.291174 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.069255 | 0.236331 | 0.286595 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.069687 | 0.238695 | 0.295876 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070549 | 0.241494 | 0.291118 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.068716 | 0.235303 | 0.290631 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.067333 | 0.233727 | 0.287155 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.067683 | 0.237113 | 0.295744 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.067233 | 0.239539 | 0.290590 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.069899 | 0.232872 | 0.294279 | — | — | — |
| windows_object_handle.test | LINK | 0.194878 | 0.657597 | 0.767659 | — | — | — |
| windows_object_handle_select.test | LINK | 0.203809 | 0.700281 | 0.973651 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.208126 | 0.700687 | 0.849145 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.213371 | 0.729358 | 1.040894 | — | — | — |
| windows_random_access_handle.test | LINK | 0.195802 | 0.656433 | 0.765036 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.205387 | 0.697654 | 0.971139 | — | — | — |
| windows_stream_handle.test | LINK | 0.196257 | 0.662383 | 0.778037 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.203260 | 0.695525 | 0.957047 | — | — | — |
| writable_pipe.test | LINK | 0.375795 | 2.922622 | 2.467816 | — | — | — |
| writable_pipe_select.test | LINK | 0.386178 | 3.056794 | 2.652116 | — | — | — |
| write.test | RUN | 1.637320 | 15.067362 | 13.703633 | 0.001760 | 0.001910 | 0.001759 |
| write_select.test | RUN | 1.678848 | 15.295750 | 13.446610 | 0.001776 | 0.001782 | 0.001616 |
| write_at.test | RUN | 1.711434 | 19.783448 | 17.090949 | 0.001729 | 0.001905 | 0.001804 |
| write_at_select.test | RUN | 1.746859 | 20.361022 | 17.561419 | 0.001969 | 0.001941 | 0.001883 |
| any_executor.test | RUN | 0.677997 | 6.622817 | 5.636694 | 0.001638 | 0.001605 | 0.001405 |
| blocking.test | RUN | 1.502588 | 8.700383 | 11.189505 | 0.003396 | 0.003174 | 0.003419 |
| blocking_adaptation.test | RUN | 0.732254 | 3.758476 | 5.090323 | 0.002166 | 0.002037 | 0.002003 |
| context_as.test | RUN | 0.431809 | 2.539479 | 1.718208 | 0.001392 | 0.001340 | 0.001295 |
| executor.test | RUN | 0.109929 | 0.240898 | 0.299839 | 0.001305 | 0.001112 | 0.001214 |
| inline_exception_handling.test | RUN | 1.400599 | 7.603671 | 10.770963 | 0.002366 | 0.002267 | 0.002370 |
| invocable_archetype.test | RUN | 0.106213 | 0.237766 | 0.304814 | 0.001287 | 0.001251 | 0.001259 |
| mapping.test | RUN | 1.462027 | 8.265453 | 11.344015 | 0.002527 | 0.002310 | 0.002368 |
| outstanding_work.test | RUN | 0.679891 | 3.513719 | 4.902246 | 0.002014 | 0.002056 | 0.002084 |
| prefer_only.test | RUN | 0.215564 | 1.398994 | 1.075019 | 0.001204 | 0.001220 | 0.001232 |
| relationship.test | RUN | 0.519126 | 3.433508 | 4.843834 | 0.001508 | 0.002143 | 0.002188 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.992×, 0.993× | 0.992× |
| clang | 0.991× | 0.983×, 1.000× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001251s | 0.001289s | 0.001293s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001257s | 0.001223s | 0.001247s | byte equality observed |
| any_completion_handler.test | 10 | 0.001025s | 0.000998s | 0.001027s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001019s | 0.000995s | 0.001002s | byte equality observed |
| any_io_executor.test | 10 | 0.001230s | 0.001206s | 0.001239s | byte equality observed |
| any_io_executor_select.test | 6 | 0.001237s | 0.001157s | 0.001250s | byte equality observed |
| append.test | 10 | 0.000992s | 0.000936s | 0.000962s | byte equality observed |
| append_select.test | 10 | 0.000974s | 0.000956s | 0.000971s | byte equality observed |
| as_tuple.test | 8 | 0.001047s | 0.001028s | 0.001002s | byte equality observed |
| as_tuple_select.test | 10 | 0.000986s | 0.000871s | 0.000962s | byte equality observed |
| bind_allocator.test | 1 | 0.001511s | 0.001509s | 0.001508s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001216s | 0.001144s | 0.001202s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000903s | 0.000888s | 0.000907s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000803s | 0.000799s | 0.000821s | byte equality observed |
| bind_executor.test | 1 | 0.001515s | 0.001473s | 0.001513s | byte equality observed |
| bind_executor_select.test | 1 | 0.001788s | 0.001809s | 0.001704s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000927s | 0.000905s | 0.000887s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000891s | 0.000856s | 0.000850s | byte equality observed |
| buffer.test | 10 | 0.000851s | 0.000837s | 0.000812s | byte equality observed |
| buffer_select.test | 10 | 0.000828s | 0.000833s | 0.000805s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001046s | 0.001067s | 0.001029s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001024s | 0.000991s | 0.001009s | byte equality observed |
| buffered_stream.test | 10 | 0.001009s | 0.001009s | 0.001008s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001010s | 0.001000s | 0.000972s | byte equality observed |
| buffered_write_stream.test | 10 | 0.000995s | 0.000998s | 0.000977s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000992s | 0.000992s | 0.000986s | byte equality observed |
| buffers_iterator.test | 10 | 0.000806s | 0.000822s | 0.000817s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000794s | 0.000734s | 0.000744s | byte equality observed |
| cancel_after.test | 1 | 0.003543s | 0.003484s | 0.003446s | byte equality observed |
| cancel_after_select.test | 1 | 0.002953s | 0.002840s | 0.002877s | byte equality observed |
| cancel_at.test | 1 | 0.003646s | 0.003771s | 0.003599s | byte equality observed |
| cancel_at_select.test | 1 | 0.003491s | 0.003553s | 0.003466s | byte equality observed |
| co_composed.test | 10 | 0.000864s | 0.000849s | 0.000830s | byte equality observed |
| co_composed_select.test | 10 | 0.000774s | 0.000771s | 0.000778s | byte equality observed |
| compose.test | 1 | 0.001641s | 0.001543s | 0.001599s | byte equality observed |
| compose_select.test | 1 | 0.001254s | 0.001218s | 0.001229s | byte equality observed |
| composed.test | 1 | 0.001923s | 0.001856s | 0.001897s | byte equality observed |
| composed_select.test | 1 | 0.001456s | 0.001462s | 0.001403s | byte equality observed |
| config.test | 10 | 0.000908s | 0.000887s | 0.000887s | byte equality observed |
| config_select.test | 10 | 0.000865s | 0.000893s | 0.000884s | byte equality observed |
| connect_pipe.test | 10 | 0.000889s | 0.000889s | 0.000857s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000882s | 0.000881s | 0.000859s | byte equality observed |
| consign.test | 10 | 0.000885s | 0.000882s | 0.000892s | byte equality observed |
| consign_select.test | 10 | 0.000838s | 0.000857s | 0.000820s | byte equality observed |
| deadline_timer.test | 1 | 0.002318s | 0.002420s | 0.002323s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002012s | 0.002046s | 0.001913s | byte equality observed |
| deferred.test | 10 | 0.000826s | 0.000835s | 0.000842s | byte equality observed |
| deferred_select.test | 10 | 0.000739s | 0.000737s | 0.000740s | byte equality observed |
| disposition.test | 10 | 0.000803s | 0.000791s | 0.000783s | byte equality observed |
| disposition_select.test | 10 | 0.000782s | 0.000784s | 0.000795s | byte equality observed |
| error.test | 10 | 0.000765s | 0.000767s | 0.000760s | byte equality observed |
| error_select.test | 10 | 0.000769s | 0.000762s | 0.000753s | byte equality observed |
| inline_executor.test | 10 | 0.000762s | 0.000776s | 0.000768s | byte equality observed |
| inline_executor_select.test | 10 | 0.000780s | 0.000780s | 0.000771s | byte equality observed |
| inline_or_executor.test | 10 | 0.000790s | 0.000784s | 0.000765s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000793s | 0.000784s | 0.000763s | byte equality observed |
| io_context.test | 1 | 0.001832s | 0.001840s | 0.001918s | byte equality observed |
| io_context_select.test | 1 | 0.002152s | 0.002183s | 0.002200s | byte equality observed |
| io_context_strand.test | 1 | 0.002126s | 0.002119s | 0.002135s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001808s | 0.001794s | 0.001848s | byte equality observed |
| ip_host_name.test | 10 | 0.000848s | 0.000840s | 0.000838s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000775s | 0.000761s | 0.000743s | byte equality observed |
| ip_icmp.test | 10 | 0.000793s | 0.000787s | 0.000744s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000785s | 0.000782s | 0.000761s | byte equality observed |
| ip_multicast.test | 10 | 0.000852s | 0.000860s | 0.000820s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000834s | 0.000829s | 0.000811s | byte equality observed |
| ip_tcp.test | 10 | 0.001051s | 0.001061s | 0.001038s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001024s | 0.001012s | 0.000981s | byte equality observed |
| ip_udp.test | 10 | 0.000865s | 0.000851s | 0.000828s | byte equality observed |
| ip_udp_select.test | 10 | 0.000861s | 0.000848s | 0.000841s | byte equality observed |
| ip_unicast.test | 10 | 0.000822s | 0.000818s | 0.000805s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000808s | 0.000814s | 0.000796s | byte equality observed |
| ip_v6_only.test | 10 | 0.000821s | 0.000832s | 0.000804s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000808s | 0.000823s | 0.000805s | byte equality observed |
| is_read_buffered.test | 10 | 0.000756s | 0.000749s | 0.000749s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000761s | 0.000758s | 0.000759s | byte equality observed |
| is_write_buffered.test | 10 | 0.000759s | 0.000753s | 0.000747s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000750s | 0.000745s | 0.000748s | byte equality observed |
| prepend.test | 10 | 0.000821s | 0.000831s | 0.000804s | byte equality observed |
| prepend_select.test | 10 | 0.000799s | 0.000838s | 0.000782s | byte equality observed |
| read.test | 10 | 0.001109s | 0.001179s | 0.001067s | byte equality observed |
| read_at.test | 10 | 0.001328s | 0.001442s | 0.001302s | byte equality observed |
| read_at_select.test | 10 | 0.001335s | 0.001464s | 0.001300s | byte equality observed |
| read_select.test | 10 | 0.001099s | 0.001180s | 0.001062s | byte equality observed |
| read_until.test | 10 | 0.000912s | 0.000937s | 0.000884s | byte equality observed |
| read_until_select.test | 10 | 0.000931s | 0.000943s | 0.000880s | byte equality observed |
| recycling_allocator.test | 10 | 0.000822s | 0.000822s | 0.000749s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000830s | 0.000796s | 0.000752s | byte equality observed |
| signal_set.test | 10 | 0.000825s | 0.000839s | 0.000799s | byte equality observed |
| signal_set_select.test | 10 | 0.000830s | 0.000847s | 0.000815s | byte equality observed |
| socket_base.test | 10 | 0.000926s | 0.000914s | 0.000917s | byte equality observed |
| socket_base_select.test | 10 | 0.000897s | 0.000900s | 0.000892s | byte equality observed |
| spawn.test | 10 | 0.001007s | 0.001006s | 0.000961s | byte equality observed |
| spawn_select.test | 10 | 0.000967s | 0.000968s | 0.000967s | byte equality observed |
| static_thread_pool.test | 10 | 0.000830s | 0.000804s | 0.000807s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000794s | 0.000760s | 0.000764s | byte equality observed |
| strand.test | 1 | 0.001765s | 0.001812s | 0.001788s | byte equality observed |
| strand_select.test | 1 | 0.001421s | 0.001426s | 0.001448s | byte equality observed |
| streambuf.test | 10 | 0.000876s | 0.000891s | 0.000886s | byte equality observed |
| streambuf_select.test | 10 | 0.000849s | 0.000834s | 0.000847s | byte equality observed |
| thread_pool.test | 10 | 0.001557s | 0.001576s | 0.001553s | byte equality observed |
| thread_pool_select.test | 10 | 0.001523s | 0.001523s | 0.001526s | byte equality observed |
| write.test | 10 | 0.001217s | 0.001211s | 0.001165s | byte equality observed |
| write_at.test | 10 | 0.001308s | 0.001315s | 0.001274s | byte equality observed |
| write_at_select.test | 10 | 0.001302s | 0.001312s | 0.001275s | byte equality observed |
| write_select.test | 10 | 0.001190s | 0.001175s | 0.001170s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
