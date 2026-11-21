# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.634293 | 3.730922 | 3.514026 | 0.002446 | 0.002617 | 0.002390 |
| any_completion_executor_select.test | RUN | 0.621528 | 3.729830 | 3.653018 | 0.002304 | 0.002327 | 0.002298 |
| any_completion_handler.test | RUN | 0.672490 | 3.311324 | 3.236349 | 0.001837 | 0.001997 | 0.002002 |
| any_completion_handler_select.test | RUN | 0.720880 | 3.455284 | 3.425601 | 0.001924 | 0.002098 | 0.001864 |
| any_io_executor.test | RUN | 0.630677 | 3.955368 | 3.815658 | 0.002234 | 0.002468 | 0.002154 |
| any_io_executor_select.test | RUN | 0.664722 | 3.925330 | 3.974469 | 0.001931 | 0.002485 | 0.002286 |
| append.test | RUN | 0.588751 | 3.127235 | 2.805174 | 0.001815 | 0.001977 | 0.001933 |
| append_select.test | RUN | 0.594505 | 3.237146 | 2.848055 | 0.001790 | 0.001676 | 0.001706 |
| as_tuple.test | RUN | 0.767963 | 3.822592 | 3.977600 | 0.001934 | 0.001831 | 0.001700 |
| as_tuple_select.test | RUN | 0.778336 | 3.802191 | 3.964340 | 0.001610 | 0.001902 | 0.001320 |
| associated_allocator.test | LINK | 0.172702 | 0.331639 | 0.437877 | — | — | — |
| associated_allocator_select.test | LINK | 0.160977 | 0.337998 | 0.441200 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.175763 | 0.372200 | 0.477737 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.179875 | 0.376219 | 0.471437 | — | — | — |
| associated_executor.test | LINK | 0.257558 | 0.641799 | 0.787921 | — | — | — |
| associated_executor_select.test | LINK | 0.258066 | 0.629491 | 0.793567 | — | — | — |
| associated_immediate_executor.test | LINK | 0.240500 | 0.588205 | 0.723021 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.236236 | 0.571223 | 0.731579 | — | — | — |
| associator.test | LINK | 0.135228 | 0.274372 | 0.380850 | — | — | — |
| associator_select.test | LINK | 0.135631 | 0.283269 | 0.385208 | — | — | — |
| awaitable.test | LINK | 0.136855 | 0.276700 | 0.376796 | — | — | — |
| awaitable_select.test | LINK | 0.136098 | 0.272676 | 0.382136 | — | — | — |
| basic_datagram_socket.test | LINK | 0.395667 | 0.866665 | 1.406536 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.411593 | 0.887457 | 1.470216 | — | — | — |
| basic_deadline_timer.test | LINK | 0.488719 | 1.042144 | 1.632507 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.498004 | 1.070669 | 1.629140 | — | — | — |
| basic_file.test | LINK | 0.136620 | 0.287287 | 0.379749 | — | — | — |
| basic_file_select.test | LINK | 0.132549 | 0.281642 | 0.379400 | — | — | — |
| basic_random_access_file.test | LINK | 0.136854 | 0.280969 | 0.357161 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.133509 | 0.275548 | 0.391397 | — | — | — |
| basic_raw_socket.test | LINK | 0.397835 | 0.873858 | 1.434640 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.404797 | 0.892027 | 1.450083 | — | — | — |
| basic_readable_pipe.test | LINK | 0.393811 | 0.817432 | 1.231165 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.417051 | 0.868769 | 1.535136 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.399176 | 0.869189 | 1.423130 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.406466 | 0.889289 | 1.436829 | — | — | — |
| basic_signal_set.test | LINK | 0.371654 | 0.817667 | 1.136004 | — | — | — |
| basic_signal_set_select.test | LINK | 0.394887 | 0.855130 | 1.378353 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.411123 | 0.907688 | 1.412167 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.405798 | 0.861818 | 1.439754 | — | — | — |
| basic_stream_file.test | LINK | 0.131209 | 0.283958 | 0.394283 | — | — | — |
| basic_stream_file_select.test | LINK | 0.135424 | 0.279977 | 0.391102 | — | — | — |
| basic_stream_socket.test | LINK | 0.392461 | 0.897014 | 1.429610 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.408060 | 0.918021 | 1.443826 | — | — | — |
| basic_streambuf.test | LINK | 0.199741 | 0.418773 | 0.573897 | — | — | — |
| basic_streambuf_select.test | LINK | 0.198496 | 0.414549 | 0.581138 | — | — | — |
| basic_waitable_timer.test | LINK | 0.373618 | 0.822587 | 1.362257 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.383353 | 0.846993 | 1.401885 | — | — | — |
| basic_writable_pipe.test | LINK | 0.390885 | 0.837795 | 1.225442 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.415336 | 0.882286 | 1.509238 | — | — | — |
| bind_allocator.test | RUN | 0.629190 | 3.197063 | 3.158369 | 0.002212 | 0.002180 | 0.001796 |
| bind_allocator_select.test | RUN | 0.647632 | 3.305919 | 3.123063 | 0.001854 | 0.002060 | 0.002010 |
| bind_cancellation_slot.test | RUN | 0.646830 | 3.246611 | 3.176629 | 0.001395 | 0.001491 | 0.001412 |
| bind_cancellation_slot_select.test | RUN | 0.625024 | 3.307596 | 2.958021 | 0.001449 | 0.001403 | 0.001384 |
| bind_executor.test | RUN | 0.436520 | 2.258399 | 1.900951 | 0.002018 | 0.002077 | 0.002148 |
| bind_executor_select.test | RUN | 0.441035 | 2.304013 | 1.912478 | 0.001886 | 0.001897 | 0.001919 |
| bind_immediate_executor.test | RUN | 0.331368 | 1.863787 | 1.212667 | 0.001646 | 0.001389 | 0.001302 |
| bind_immediate_executor_select.test | RUN | 0.336483 | 1.833107 | 1.331286 | 0.001268 | 0.001566 | 0.001317 |
| buffer.test | RUN | 0.201064 | 0.775775 | 0.756963 | 0.001438 | 0.001391 | 0.001309 |
| buffer_select.test | RUN | 0.202348 | 0.770414 | 0.751076 | 0.001244 | 0.001358 | 0.001367 |
| buffer_registration.test | LINK | 0.163558 | 0.406644 | 0.452203 | — | — | — |
| buffer_registration_select.test | LINK | 0.165583 | 0.402561 | 0.452925 | — | — | — |
| buffered_read_stream.test | RUN | 0.720228 | 5.018904 | 4.403934 | 0.001767 | 0.002374 | 0.002394 |
| buffered_read_stream_select.test | RUN | 0.722833 | 5.118427 | 4.613093 | 0.001547 | 0.002256 | 0.002268 |
| buffered_stream.test | RUN | 1.080202 | 7.768684 | 7.741568 | 0.002294 | 0.002264 | 0.002285 |
| buffered_stream_select.test | RUN | 1.086657 | 7.801625 | 7.512582 | 0.002178 | 0.002181 | 0.002204 |
| buffered_write_stream.test | RUN | 1.176977 | 6.634005 | 6.642124 | 0.001928 | 0.002340 | 0.002259 |
| buffered_write_stream_select.test | RUN | 1.187429 | 6.758045 | 6.375088 | 0.002194 | 0.002439 | 0.002206 |
| buffers_iterator.test | RUN | 0.377953 | 0.634020 | 1.073602 | 0.001541 | 0.001731 | 0.001740 |
| buffers_iterator_select.test | RUN | 0.370851 | 0.635680 | 1.078644 | 0.001588 | 0.001718 | 0.001644 |
| cancel_after.test | RUN | 1.011871 | 5.200115 | 4.822828 | 0.003504 | 0.003892 | 0.003824 |
| cancel_after_select.test | RUN | 1.003361 | 5.192595 | 4.792061 | 0.003461 | 0.003798 | 0.003758 |
| cancel_at.test | RUN | 0.998856 | 4.594545 | 4.543816 | 0.003376 | 0.003276 | 0.003021 |
| cancel_at_select.test | RUN | 0.981451 | 4.467243 | 4.521479 | 0.003401 | 0.003185 | 0.003246 |
| cancellation_signal.test | LINK | 0.146959 | 0.241497 | 0.286200 | — | — | — |
| cancellation_signal_select.test | LINK | 0.147070 | 0.241163 | 0.292604 | — | — | — |
| cancellation_state.test | LINK | 0.179318 | 0.240962 | 0.296173 | — | — | — |
| cancellation_state_select.test | LINK | 0.174839 | 0.242731 | 0.465376 | — | — | — |
| cancellation_type.test | LINK | 0.134670 | 0.194159 | 0.383836 | — | — | — |
| cancellation_type_select.test | LINK | 0.135606 | 0.189566 | 0.389664 | — | — | — |
| co_composed.test | RUN | 0.135888 | 0.191614 | 0.390697 | 0.001617 | 0.001568 | 0.001710 |
| co_composed_select.test | RUN | 0.135630 | 0.201664 | 0.368629 | 0.001608 | 0.001878 | 0.001706 |
| co_spawn.test | LINK | 0.134079 | 0.245085 | 0.369715 | — | — | — |
| co_spawn_select.test | LINK | 0.136352 | 0.200751 | 0.369961 | — | — | — |
| completion_condition.test | LINK | 0.174205 | 0.404886 | 0.487909 | — | — | — |
| completion_condition_select.test | LINK | 0.173424 | 0.424448 | 0.486063 | — | — | — |
| compose.test | RUN | 0.787155 | 4.034901 | 3.959275 | 0.001874 | 0.002329 | 0.002283 |
| compose_select.test | RUN | 0.782312 | 3.969227 | 3.929472 | 0.002211 | 0.002232 | 0.001750 |
| composed.test | RUN | 0.776738 | 3.916426 | 3.949675 | 0.002017 | 0.001998 | 0.001906 |
| composed_select.test | RUN | 0.737864 | 3.861682 | 3.809794 | 0.001792 | 0.001864 | 0.001820 |
| config.test | RUN | 0.379503 | 2.524349 | 1.771404 | 0.001796 | 0.001657 | 0.001726 |
| config_select.test | RUN | 0.409995 | 2.565351 | 1.987202 | 0.001688 | 0.001743 | 0.001730 |
| connect.test | LINK | 1.214766 | 8.292312 | 7.938771 | — | — | — |
| connect_select.test | LINK | 1.227159 | 8.315169 | 8.040944 | — | — | — |
| connect_pipe.test | RUN | 0.672704 | 3.184535 | 3.063862 | 0.001735 | 0.001838 | 0.001852 |
| connect_pipe_select.test | RUN | 0.703913 | 3.308222 | 3.305660 | 0.001756 | 0.002008 | 0.001922 |
| consign.test | RUN | 0.581363 | 3.070259 | 2.881314 | 0.001964 | 0.001908 | 0.001902 |
| consign_select.test | RUN | 0.583519 | 3.167444 | 2.882407 | 0.001678 | 0.001944 | 0.001720 |
| coroutine.test | LINK | 0.138081 | 0.331068 | 0.372417 | — | — | — |
| coroutine_select.test | LINK | 0.140038 | 0.335658 | 0.417514 | — | — | — |
| deadline_timer.test | RUN | 0.845141 | 4.173103 | 3.965406 | 0.003404 | 0.003207 | 0.003356 |
| deadline_timer_select.test | RUN | 0.857895 | 4.103379 | 3.973419 | 0.003039 | 0.002894 | 0.003483 |
| deferred.test | RUN | 0.151545 | 0.311124 | 0.424017 | 0.001720 | 0.001810 | 0.001711 |
| deferred_select.test | RUN | 0.155249 | 0.277837 | 0.425663 | 0.001616 | 0.001670 | 0.001689 |
| detached.test | LINK | 0.168107 | 0.359394 | 0.475504 | — | — | — |
| detached_select.test | LINK | 0.163267 | 0.344931 | 0.460818 | — | — | — |
| disposition.test | RUN | 0.152420 | 0.801928 | 0.826517 | 0.001398 | 0.001802 | 0.002028 |
| disposition_select.test | RUN | 0.153779 | 0.806520 | 0.834668 | 0.001262 | 0.001733 | 0.001714 |
| error.test | RUN | 0.142968 | 0.749138 | 0.734938 | 0.001348 | 0.001688 | 0.001577 |
| error_select.test | RUN | 0.143708 | 0.753191 | 0.746857 | 0.001260 | 0.001729 | 0.001672 |
| file_base.test | LINK | 0.182217 | 0.624567 | 0.716344 | — | — | — |
| file_base_select.test | LINK | 0.175304 | 0.636169 | 0.667051 | — | — | — |
| fwd_first.test | LINK | 0.398024 | 0.976884 | 1.391837 | — | — | — |
| fwd_last.test | LINK | 0.398787 | 0.952642 | 1.367544 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.157633 | 0.372626 | 0.495075 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.155297 | 0.370133 | 0.495983 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.604994 | 3.208181 | 2.695140 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.604030 | 3.326556 | 2.673110 | — | — | — |
| generic_raw_protocol.test | LINK | 0.613674 | 3.204479 | 2.711667 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.602007 | 3.317592 | 2.661974 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.531857 | 2.724129 | 2.309175 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.527085 | 2.789872 | 2.312028 | — | — | — |
| generic_stream_protocol.test | LINK | 0.564566 | 2.950039 | 2.480068 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.568297 | 3.035026 | 2.494815 | — | — | — |
| high_resolution_timer.test | LINK | 0.254984 | 0.554449 | 0.777822 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.260399 | 0.575527 | 0.801077 | — | — | — |
| immediate.test | LINK | 0.177752 | 0.424726 | 0.486768 | — | — | — |
| immediate_select.test | LINK | 0.176572 | 0.426029 | 0.486781 | — | — | — |
| inline_executor.test | RUN | 0.231262 | 0.658185 | 0.722484 | 0.001304 | 0.001380 | 0.001342 |
| inline_executor_select.test | RUN | 0.231555 | 0.656304 | 0.716608 | 0.001346 | 0.001383 | 0.001279 |
| inline_or_executor.test | RUN | 0.346305 | 1.915684 | 1.365069 | 0.001433 | 0.001423 | 0.001291 |
| inline_or_executor_select.test | RUN | 0.348727 | 1.964231 | 1.502330 | 0.001418 | 0.001397 | 0.001324 |
| io_context.test | RUN | 0.491206 | 2.911535 | 2.376979 | 0.002226 | 0.002282 | 0.002250 |
| io_context_select.test | RUN | 0.497612 | 2.849265 | 2.384041 | 0.001673 | 0.002156 | 0.002061 |
| io_context_strand.test | RUN | 0.470750 | 2.456697 | 2.077780 | 0.002210 | 0.002304 | 0.002131 |
| io_context_strand_select.test | RUN | 0.475517 | 2.446667 | 2.068034 | 0.001625 | 0.002010 | 0.002068 |
| ip_address.test | LINK | 0.182899 | 0.583089 | 0.606318 | — | — | — |
| ip_address_select.test | LINK | 0.182625 | 0.582437 | 0.610096 | — | — | — |
| ip_address_v4.test | LINK | 0.185549 | 0.610966 | 0.668346 | — | — | — |
| ip_address_v4_select.test | LINK | 0.186076 | 0.619015 | 0.671494 | — | — | — |
| ip_address_v6.test | LINK | 0.208008 | 0.802805 | 0.817180 | — | — | — |
| ip_address_v6_select.test | LINK | 0.208033 | 0.801721 | 0.822431 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.162429 | 0.395966 | 0.534430 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.163743 | 0.398771 | 0.532263 | — | — | — |
| ip_basic_resolver.test | LINK | 0.258977 | 0.564355 | 1.153523 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.262063 | 0.586045 | 1.353358 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.091934 | 0.190192 | 0.395503 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.091880 | 0.190578 | 0.392558 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.161603 | 0.387259 | 0.878948 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.161618 | 0.389126 | 0.882106 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.155372 | 0.373359 | 0.852556 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.155441 | 0.371686 | 0.840981 | — | — | — |
| ip_host_name.test | RUN | 0.164374 | 0.564322 | 0.943359 | 0.001348 | 0.001846 | 0.001760 |
| ip_host_name_select.test | RUN | 0.165007 | 0.528448 | 0.947090 | 0.001336 | 0.001753 | 0.001724 |
| ip_icmp.test | RUN | 0.743430 | 6.605074 | 5.808864 | 0.001398 | 0.001814 | 0.001700 |
| ip_icmp_select.test | RUN | 0.748650 | 6.760109 | 5.562061 | 0.001113 | 0.001870 | 0.001701 |
| ip_multicast.test | RUN | 0.433741 | 3.371805 | 3.315549 | 0.001451 | 0.001906 | 0.002008 |
| ip_multicast_select.test | RUN | 0.442847 | 3.338133 | 3.298608 | 0.001184 | 0.001970 | 0.001934 |
| ip_resolver_query_base.test | LINK | 0.107191 | 0.317685 | 0.408540 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.107603 | 0.316478 | 0.392883 | — | — | — |
| ip_tcp.test | RUN | 1.096488 | 9.673811 | 8.804341 | 0.001654 | 0.002616 | 0.002398 |
| ip_tcp_select.test | RUN | 1.083583 | 10.107859 | 8.650216 | 0.001864 | 0.002500 | 0.002492 |
| ip_udp.test | RUN | 0.791942 | 6.994812 | 6.072183 | 0.001548 | 0.002005 | 0.001852 |
| ip_udp_select.test | RUN | 0.791062 | 7.177417 | 5.931282 | 0.001500 | 0.002107 | 0.001943 |
| ip_unicast.test | RUN | 0.401260 | 3.072698 | 2.861538 | 0.001457 | 0.001885 | 0.001925 |
| ip_unicast_select.test | RUN | 0.412433 | 3.092825 | 2.865138 | 0.001227 | 0.001936 | 0.001759 |
| ip_v6_only.test | RUN | 0.424014 | 3.165434 | 3.047906 | 0.001450 | 0.002006 | 0.001754 |
| ip_v6_only_select.test | RUN | 0.426234 | 3.261800 | 2.963734 | 0.001149 | 0.001994 | 0.001896 |
| is_read_buffered.test | RUN | 0.300266 | 0.983032 | 1.646320 | 0.001328 | 0.001860 | 0.001711 |
| is_read_buffered_select.test | RUN | 0.302945 | 1.001667 | 1.663313 | 0.001342 | 0.001833 | 0.001654 |
| is_write_buffered.test | RUN | 0.298628 | 0.982755 | 1.593507 | 0.001294 | 0.001712 | 0.001239 |
| is_write_buffered_select.test | RUN | 0.314344 | 1.018416 | 1.666138 | 0.001466 | 0.001819 | 0.001706 |
| local_basic_endpoint.test | LINK | 0.156310 | 0.563516 | 0.886631 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.157189 | 0.566239 | 0.892155 | — | — | — |
| local_connect_pair.test | LINK | 0.397275 | 3.074395 | 2.818185 | — | — | — |
| local_connect_pair_select.test | LINK | 0.392077 | 3.079997 | 2.753648 | — | — | — |
| local_datagram_protocol.test | LINK | 0.522605 | 3.976306 | 3.828636 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.525965 | 4.005429 | 3.734189 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.534661 | 3.897315 | 3.806573 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.535773 | 3.971512 | 3.782824 | — | — | — |
| local_stream_protocol.test | LINK | 0.730099 | 3.763938 | 3.637749 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.741192 | 3.788307 | 3.589524 | — | — | — |
| placeholders.test | LINK | 0.148145 | 0.299320 | 0.400998 | — | — | — |
| placeholders_select.test | LINK | 0.142439 | 0.305231 | 0.400505 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.386314 | 0.843318 | 1.214839 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.402064 | 0.902058 | 1.490802 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.380990 | 0.841088 | 1.202532 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.407704 | 0.896243 | 1.494079 | — | — | — |
| posix_descriptor_base.test | LINK | 0.161900 | 0.310211 | 0.425324 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.160194 | 0.316145 | 0.431465 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.763205 | 3.800416 | 3.562242 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.773820 | 3.853836 | 3.694246 | — | — | — |
| prepend.test | RUN | 0.594000 | 3.114311 | 2.869997 | 0.001727 | 0.001850 | 0.001727 |
| prepend_select.test | RUN | 0.601331 | 3.174535 | 2.861685 | 0.001601 | 0.001841 | 0.001605 |
| random_access_file.test | LINK | 0.351032 | 0.745741 | 0.998917 | — | — | — |
| random_access_file_select.test | LINK | 0.361675 | 0.805619 | 1.208368 | — | — | — |
| read.test | RUN | 1.793838 | 19.170294 | 16.294751 | 0.002424 | 0.002452 | 0.002413 |
| read_select.test | RUN | 1.832871 | 19.189805 | 16.485290 | 0.002410 | 0.002532 | 0.002552 |
| read_at.test | RUN | 1.829098 | 26.961270 | 21.929322 | 0.003015 | 0.002836 | 0.002623 |
| read_at_select.test | RUN | 1.831233 | 26.713827 | 22.057359 | 0.002832 | 0.003144 | 0.002635 |
| read_until.test | RUN | 0.944451 | 7.379938 | 6.344749 | 0.001775 | 0.002118 | 0.002038 |
| read_until_select.test | RUN | 0.973904 | 7.416011 | 6.608381 | 0.001883 | 0.002084 | 0.001978 |
| readable_pipe.test | LINK | 0.612923 | 3.154461 | 2.814091 | — | — | — |
| readable_pipe_select.test | LINK | 0.620400 | 3.309927 | 3.004940 | — | — | — |
| recycling_allocator.test | RUN | 0.194683 | 0.485036 | 0.618390 | 0.001707 | 0.001852 | 0.001590 |
| recycling_allocator_select.test | RUN | 0.196881 | 0.486343 | 0.613284 | 0.001837 | 0.001785 | 0.001710 |
| redirect_disposition.test | LINK | 0.786219 | 4.398545 | 4.371922 | — | — | — |
| redirect_disposition_select.test | LINK | 0.790858 | 4.386105 | 4.330610 | — | — | — |
| redirect_error.test | LINK | 0.715332 | 3.679803 | 3.750073 | — | — | — |
| redirect_error_select.test | LINK | 0.714631 | 3.695719 | 3.743641 | — | — | — |
| registered_buffer.test | LINK | 0.193418 | 0.396185 | 0.553635 | — | — | — |
| registered_buffer_select.test | LINK | 0.193148 | 0.400829 | 0.554084 | — | — | — |
| signal_set.test | RUN | 0.600631 | 3.057362 | 2.625797 | 0.001792 | 0.001717 | 0.001868 |
| signal_set_select.test | RUN | 0.622690 | 3.181795 | 2.979701 | 0.001804 | 0.001732 | 0.001694 |
| signal_set_base.test | LINK | 0.155649 | 0.310531 | 0.388806 | — | — | — |
| signal_set_base_select.test | LINK | 0.157111 | 0.300085 | 0.411537 | — | — | — |
| socket_base.test | RUN | 0.719022 | 4.516522 | 4.134623 | 0.001980 | 0.002108 | 0.002036 |
| socket_base_select.test | RUN | 0.728822 | 4.434649 | 4.127444 | 0.002028 | 0.002082 | 0.001972 |
| spawn.test | RUN | 1.242672 | 7.402137 | 6.953782 | 0.002107 | 0.001968 | 0.002064 |
| spawn_select.test | RUN | 1.249959 | 7.407374 | 6.915259 | 0.002056 | 0.002266 | 0.002138 |
| static_thread_pool.test | RUN | 0.337827 | 0.730103 | 0.991511 | 0.001596 | 0.001746 | 0.001829 |
| static_thread_pool_select.test | RUN | 0.352475 | 0.773678 | 1.251025 | 0.001430 | 0.001728 | 0.001748 |
| steady_timer.test | LINK | 0.382289 | 0.843069 | 1.336686 | — | — | — |
| steady_timer_select.test | LINK | 0.390051 | 0.850139 | 1.356156 | — | — | — |
| strand.test | RUN | 0.765266 | 4.184451 | 4.183974 | 0.002248 | 0.002545 | 0.002583 |
| strand_select.test | RUN | 0.770128 | 4.157854 | 4.033410 | 0.002223 | 0.002166 | 0.002291 |
| stream_file.test | LINK | 0.369302 | 0.771842 | 1.029383 | — | — | — |
| stream_file_select.test | LINK | 0.376913 | 0.817802 | 1.290908 | — | — | — |
| streambuf.test | RUN | 0.194225 | 0.576323 | 0.704628 | 0.001063 | 0.001207 | 0.001688 |
| streambuf_select.test | RUN | 0.201429 | 0.470446 | 0.684314 | 0.001296 | 0.001349 | 0.001895 |
| system_timer.test | LINK | 0.503543 | 2.724366 | 2.606265 | — | — | — |
| system_timer_select.test | LINK | 0.500863 | 2.695887 | 2.375417 | — | — | — |
| system_context.test | LINK | 0.233323 | 0.493136 | 0.597727 | — | — | — |
| system_context_select.test | LINK | 0.240611 | 0.526532 | 0.722204 | — | — | — |
| system_executor.test | LINK | 0.303376 | 1.565167 | 1.120002 | — | — | — |
| system_executor_select.test | LINK | 0.307813 | 1.520687 | 1.259507 | — | — | — |
| this_coro.test | LINK | 0.096023 | 0.191812 | 0.237960 | — | — | — |
| this_coro_select.test | LINK | 0.093403 | 0.189723 | 0.239262 | — | — | — |
| thread_pool.test | RUN | 0.358732 | 2.001647 | 1.440259 | 0.002588 | 0.002899 | 0.002541 |
| thread_pool_select.test | RUN | 0.367841 | 2.041449 | 1.576456 | 0.002499 | 0.003299 | 0.002445 |
| time_traits.test | LINK | 0.206290 | 0.458810 | 0.472756 | — | — | — |
| time_traits_select.test | LINK | 0.205319 | 0.587304 | 0.472753 | — | — | — |
| ts_buffer.test | LINK | 0.195662 | 0.652543 | 0.494659 | — | — | — |
| ts_buffer_select.test | LINK | 0.195209 | 0.624990 | 0.612476 | — | — | — |
| ts_executor.test | LINK | 0.270431 | 0.901219 | 1.099716 | — | — | — |
| ts_executor_select.test | LINK | 0.279667 | 0.946665 | 1.453026 | — | — | — |
| ts_internet.test | LINK | 0.294606 | 0.973098 | 1.640702 | — | — | — |
| ts_internet_select.test | LINK | 0.304390 | 1.019207 | 1.671853 | — | — | — |
| ts_io_context.test | LINK | 0.237736 | 0.750566 | 0.964478 | — | — | — |
| ts_io_context_select.test | LINK | 0.251256 | 0.790843 | 1.254956 | — | — | — |
| ts_net.test | LINK | 0.347174 | 1.166079 | 2.001486 | — | — | — |
| ts_net_select.test | LINK | 0.362681 | 1.205325 | 2.035190 | — | — | — |
| ts_netfwd.test | LINK | 0.349023 | 1.172310 | 1.985920 | — | — | — |
| ts_netfwd_select.test | LINK | 0.373797 | 1.208960 | 2.035610 | — | — | — |
| ts_socket.test | LINK | 0.286409 | 0.919305 | 1.548207 | — | — | — |
| ts_socket_select.test | LINK | 0.295813 | 0.954666 | 1.585475 | — | — | — |
| ts_timer.test | LINK | 0.257729 | 0.826193 | 1.317322 | — | — | — |
| ts_timer_select.test | LINK | 0.265677 | 0.854665 | 1.335383 | — | — | — |
| use_awaitable.test | LINK | 0.092506 | 0.276845 | 0.398082 | — | — | — |
| use_awaitable_select.test | LINK | 0.092732 | 0.269515 | 0.366535 | — | — | — |
| wait_traits.test | LINK | 0.092835 | 0.292136 | 0.371743 | — | — | — |
| wait_traits_select.test | LINK | 0.092266 | 0.281262 | 0.354697 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.092883 | 0.280846 | 0.368796 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.093199 | 0.274207 | 0.352656 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.095027 | 0.285254 | 0.366032 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.092349 | 0.281549 | 0.380447 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.092543 | 0.276676 | 0.374917 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.091900 | 0.261018 | 0.381419 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.093154 | 0.285941 | 0.381249 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.094092 | 0.277060 | 0.347106 | — | — | — |
| windows_object_handle.test | LINK | 0.244568 | 0.747786 | 0.997236 | — | — | — |
| windows_object_handle_select.test | LINK | 0.254839 | 0.803902 | 1.231239 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.283371 | 0.809952 | 1.116629 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.363759 | 0.853046 | 1.366230 | — | — | — |
| windows_random_access_handle.test | LINK | 0.353397 | 0.748769 | 0.983546 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.381671 | 0.800704 | 1.261618 | — | — | — |
| windows_stream_handle.test | LINK | 0.347085 | 0.767441 | 1.026353 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.379372 | 0.809153 | 1.253524 | — | — | — |
| writable_pipe.test | LINK | 0.640323 | 3.122385 | 2.958139 | — | — | — |
| writable_pipe_select.test | LINK | 0.658361 | 3.238759 | 3.170779 | — | — | — |
| write.test | RUN | 1.791693 | 15.997995 | 16.276664 | 0.002487 | 0.002388 | 0.002353 |
| write_select.test | RUN | 1.839909 | 16.116280 | 16.276443 | 0.002466 | 0.002424 | 0.002456 |
| write_at.test | RUN | 1.856868 | 22.064302 | 20.736801 | 0.002614 | 0.002692 | 0.002632 |
| write_at_select.test | RUN | 1.882862 | 22.211396 | 20.871890 | 0.002648 | 0.002730 | 0.002632 |
| any_executor.test | RUN | 0.757958 | 7.285596 | 6.220145 | 0.002248 | 0.002591 | 0.002100 |
| blocking.test | RUN | 1.940153 | 9.318709 | 13.368359 | 0.007098 | 0.006326 | 0.007401 |
| blocking_adaptation.test | RUN | 0.938521 | 3.992478 | 6.054615 | 0.003812 | 0.004154 | 0.003838 |
| context_as.test | RUN | 0.513580 | 2.839563 | 2.049363 | 0.001650 | 0.001796 | 0.001812 |
| executor.test | RUN | 0.146072 | 0.289656 | 0.400628 | 0.001788 | 0.001766 | 0.001760 |
| inline_exception_handling.test | RUN | 1.911759 | 8.759824 | 13.270805 | 0.006853 | 0.005036 | 0.005198 |
| invocable_archetype.test | RUN | 0.135209 | 0.290083 | 0.384037 | 0.001747 | 0.001743 | 0.001697 |
| mapping.test | RUN | 1.712863 | 8.930039 | 13.265450 | 0.005225 | 0.005251 | 0.005185 |
| outstanding_work.test | RUN | 0.896536 | 3.782068 | 5.922595 | 0.004016 | 0.003630 | 0.004029 |
| prefer_only.test | RUN | 0.265462 | 1.471953 | 1.357601 | 0.001682 | 0.001912 | 0.001724 |
| relationship.test | RUN | 0.662350 | 3.345357 | 4.651048 | 0.002848 | 0.002905 | 0.002857 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.000×, 1.004× | 1.001× |
| clang | 0.998× | 1.002×, 0.994× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001640s | 0.001604s | 0.001642s | byte equality observed |
| any_completion_executor_select.test | 7 | 0.001617s | 0.001566s | 0.001627s | byte equality observed |
| any_completion_handler.test | 10 | 0.001255s | 0.001263s | 0.001261s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001231s | 0.001248s | 0.001274s | byte equality observed |
| any_io_executor.test | 6 | 0.001601s | 0.001537s | 0.001583s | byte equality observed |
| any_io_executor_select.test | 8 | 0.001577s | 0.001557s | 0.001575s | byte equality observed |
| append.test | 10 | 0.001196s | 0.001198s | 0.001211s | byte equality observed |
| append_select.test | 9 | 0.001193s | 0.001167s | 0.001176s | byte equality observed |
| as_tuple.test | 10 | 0.001276s | 0.001258s | 0.001294s | byte equality observed |
| as_tuple_select.test | 7 | 0.001175s | 0.001209s | 0.001222s | byte equality observed |
| bind_allocator.test | 1 | 0.001650s | 0.001639s | 0.001617s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001334s | 0.001373s | 0.001420s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001131s | 0.001161s | 0.001160s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001047s | 0.001054s | 0.001060s | byte equality observed |
| bind_executor.test | 1 | 0.001654s | 0.001615s | 0.001612s | byte equality observed |
| bind_executor_select.test | 1 | 0.001957s | 0.001937s | 0.001890s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001078s | 0.001095s | 0.001069s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001066s | 0.001060s | 0.001092s | byte equality observed |
| buffer.test | 10 | 0.001044s | 0.001031s | 0.001030s | byte equality observed |
| buffer_select.test | 10 | 0.001021s | 0.001033s | 0.001016s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001314s | 0.001325s | 0.001335s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001286s | 0.001311s | 0.001288s | byte equality observed |
| buffered_stream.test | 10 | 0.001323s | 0.001314s | 0.001349s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001326s | 0.001309s | 0.001304s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001308s | 0.001278s | 0.001318s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001329s | 0.001290s | 0.001278s | byte equality observed |
| buffers_iterator.test | 10 | 0.001000s | 0.001040s | 0.000983s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000986s | 0.000977s | 0.000969s | byte equality observed |
| cancel_after.test | 1 | 0.003236s | 0.003246s | 0.003233s | byte equality observed |
| cancel_after_select.test | 1 | 0.002720s | 0.002764s | 0.002718s | byte equality observed |
| cancel_at.test | 1 | 0.003481s | 0.003406s | 0.003517s | byte equality observed |
| cancel_at_select.test | 1 | 0.003329s | 0.003365s | 0.003308s | byte equality observed |
| co_composed.test | 10 | 0.001039s | 0.001014s | 0.001024s | byte equality observed |
| co_composed_select.test | 10 | 0.000988s | 0.000981s | 0.000975s | byte equality observed |
| compose.test | 1 | 0.001645s | 0.001655s | 0.001619s | byte equality observed |
| compose_select.test | 1 | 0.001376s | 0.001450s | 0.001370s | byte equality observed |
| composed.test | 1 | 0.002003s | 0.001993s | 0.002002s | byte equality observed |
| composed_select.test | 1 | 0.001461s | 0.001568s | 0.001483s | byte equality observed |
| config.test | 10 | 0.001108s | 0.001078s | 0.001089s | byte equality observed |
| config_select.test | 10 | 0.001064s | 0.001060s | 0.001045s | byte equality observed |
| connect_pipe.test | 10 | 0.001078s | 0.001121s | 0.001069s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001091s | 0.001108s | 0.001068s | byte equality observed |
| consign.test | 10 | 0.001069s | 0.001093s | 0.001078s | byte equality observed |
| consign_select.test | 10 | 0.000999s | 0.001049s | 0.001053s | byte equality observed |
| deadline_timer.test | 1 | 0.002291s | 0.002314s | 0.002293s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002083s | 0.002124s | 0.002094s | byte equality observed |
| deferred.test | 10 | 0.000994s | 0.001002s | 0.001003s | byte equality observed |
| deferred_select.test | 10 | 0.000944s | 0.000948s | 0.000939s | byte equality observed |
| disposition.test | 10 | 0.000994s | 0.001006s | 0.000990s | byte equality observed |
| disposition_select.test | 10 | 0.000994s | 0.001006s | 0.000970s | byte equality observed |
| error.test | 10 | 0.000971s | 0.000977s | 0.000982s | byte equality observed |
| error_select.test | 10 | 0.000978s | 0.000981s | 0.000987s | byte equality observed |
| inline_executor.test | 10 | 0.000993s | 0.001000s | 0.001009s | byte equality observed |
| inline_executor_select.test | 10 | 0.001000s | 0.000997s | 0.000989s | byte equality observed |
| inline_or_executor.test | 10 | 0.000995s | 0.001003s | 0.000986s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000991s | 0.001002s | 0.000998s | byte equality observed |
| io_context.test | 1 | 0.001902s | 0.001912s | 0.001841s | byte equality observed |
| io_context_select.test | 1 | 0.002263s | 0.002188s | 0.002256s | byte equality observed |
| io_context_strand.test | 1 | 0.002234s | 0.002226s | 0.002244s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002015s | 0.002019s | 0.002022s | byte equality observed |
| ip_host_name.test | 10 | 0.001013s | 0.001015s | 0.001007s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000960s | 0.000961s | 0.000955s | byte equality observed |
| ip_icmp.test | 10 | 0.000992s | 0.000991s | 0.000977s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000988s | 0.001004s | 0.000972s | byte equality observed |
| ip_multicast.test | 10 | 0.001077s | 0.001079s | 0.001071s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001052s | 0.001054s | 0.001041s | byte equality observed |
| ip_tcp.test | 10 | 0.001456s | 0.001483s | 0.001449s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001384s | 0.001378s | 0.001384s | byte equality observed |
| ip_udp.test | 10 | 0.001095s | 0.001093s | 0.001104s | byte equality observed |
| ip_udp_select.test | 10 | 0.001083s | 0.001081s | 0.001071s | byte equality observed |
| ip_unicast.test | 10 | 0.001045s | 0.001039s | 0.001063s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001028s | 0.001031s | 0.001043s | byte equality observed |
| ip_v6_only.test | 10 | 0.001050s | 0.001056s | 0.001048s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001042s | 0.001076s | 0.001045s | byte equality observed |
| is_read_buffered.test | 10 | 0.000988s | 0.000991s | 0.000968s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001004s | 0.000991s | 0.000984s | byte equality observed |
| is_write_buffered.test | 10 | 0.001018s | 0.000986s | 0.000982s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001005s | 0.001011s | 0.000984s | byte equality observed |
| prepend.test | 10 | 0.001078s | 0.001075s | 0.001050s | byte equality observed |
| prepend_select.test | 10 | 0.001054s | 0.001020s | 0.001077s | byte equality observed |
| read.test | 10 | 0.001479s | 0.001458s | 0.001440s | byte equality observed |
| read_at.test | 10 | 0.001817s | 0.001838s | 0.001676s | byte equality observed |
| read_at_select.test | 10 | 0.001841s | 0.001825s | 0.001702s | byte equality observed |
| read_select.test | 10 | 0.001462s | 0.001439s | 0.001453s | byte equality observed |
| read_until.test | 10 | 0.001204s | 0.001205s | 0.001200s | byte equality observed |
| read_until_select.test | 10 | 0.001204s | 0.001175s | 0.001232s | byte equality observed |
| recycling_allocator.test | 10 | 0.001006s | 0.001012s | 0.001024s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001014s | 0.001044s | 0.000994s | byte equality observed |
| signal_set.test | 10 | 0.001034s | 0.001048s | 0.001035s | byte equality observed |
| signal_set_select.test | 10 | 0.001058s | 0.001035s | 0.001003s | byte equality observed |
| socket_base.test | 10 | 0.001172s | 0.001154s | 0.001136s | byte equality observed |
| socket_base_select.test | 10 | 0.001121s | 0.001130s | 0.001122s | byte equality observed |
| spawn.test | 10 | 0.001239s | 0.001234s | 0.001268s | byte equality observed |
| spawn_select.test | 10 | 0.001223s | 0.001229s | 0.001243s | byte equality observed |
| static_thread_pool.test | 10 | 0.001002s | 0.001007s | 0.001064s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000976s | 0.000985s | 0.000996s | byte equality observed |
| strand.test | 1 | 0.001881s | 0.001878s | 0.001931s | byte equality observed |
| strand_select.test | 1 | 0.001641s | 0.001707s | 0.001639s | byte equality observed |
| streambuf.test | 10 | 0.001022s | 0.001055s | 0.001052s | byte equality observed |
| streambuf_select.test | 10 | 0.001029s | 0.001052s | 0.001041s | byte equality observed |
| thread_pool.test | 10 | 0.002199s | 0.002211s | 0.002196s | byte equality observed |
| thread_pool_select.test | 10 | 0.002178s | 0.002196s | 0.002173s | byte equality observed |
| write.test | 10 | 0.001529s | 0.001471s | 0.001484s | byte equality observed |
| write_at.test | 10 | 0.001623s | 0.001629s | 0.001559s | byte equality observed |
| write_at_select.test | 10 | 0.001601s | 0.001599s | 0.001598s | byte equality observed |
| write_select.test | 10 | 0.001488s | 0.001471s | 0.001479s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
