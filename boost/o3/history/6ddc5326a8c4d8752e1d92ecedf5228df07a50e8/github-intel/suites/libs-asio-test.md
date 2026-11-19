# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.713910 | 4.572741 | 3.929749 | 0.002663 | 0.002524 | 0.002166 |
| any_completion_executor_select.test | RUN | 0.744398 | 4.597795 | 4.104987 | 0.002220 | 0.002184 | 0.002378 |
| any_completion_handler.test | RUN | 0.800119 | 4.222436 | 3.543923 | 0.001910 | 0.001796 | 0.001902 |
| any_completion_handler_select.test | RUN | 0.815421 | 4.294106 | 3.832559 | 0.001841 | 0.001976 | 0.001900 |
| any_io_executor.test | RUN | 0.755769 | 4.879313 | 4.340711 | 0.002136 | 0.002214 | 0.002508 |
| any_io_executor_select.test | RUN | 0.769255 | 4.855314 | 4.444994 | 0.002116 | 0.002334 | 0.002138 |
| append.test | RUN | 0.691816 | 3.939267 | 3.231624 | 0.001622 | 0.001860 | 0.001700 |
| append_select.test | RUN | 0.701141 | 3.992335 | 3.188843 | 0.001675 | 0.001804 | 0.001801 |
| as_tuple.test | RUN | 0.903445 | 4.724555 | 4.495356 | 0.002090 | 0.001768 | 0.001843 |
| as_tuple_select.test | RUN | 0.917342 | 4.665323 | 4.434711 | 0.001656 | 0.001829 | 0.001818 |
| associated_allocator.test | LINK | 0.178412 | 0.384540 | 0.480027 | — | — | — |
| associated_allocator_select.test | LINK | 0.177350 | 0.392688 | 0.476873 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.197803 | 0.422388 | 0.512330 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.194802 | 0.430324 | 0.518926 | — | — | — |
| associated_executor.test | LINK | 0.284158 | 0.741924 | 0.838305 | — | — | — |
| associated_executor_select.test | LINK | 0.284777 | 0.742728 | 0.841661 | — | — | — |
| associated_immediate_executor.test | LINK | 0.259519 | 0.688592 | 0.762319 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.259628 | 0.683897 | 0.753984 | — | — | — |
| associator.test | LINK | 0.145971 | 0.331241 | 0.402570 | — | — | — |
| associator_select.test | LINK | 0.146189 | 0.326834 | 0.384457 | — | — | — |
| awaitable.test | LINK | 0.144390 | 0.333044 | 0.380683 | — | — | — |
| awaitable_select.test | LINK | 0.144474 | 0.327939 | 0.372755 | — | — | — |
| basic_datagram_socket.test | LINK | 0.459914 | 1.018542 | 1.467964 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.454066 | 1.047242 | 1.513814 | — | — | — |
| basic_deadline_timer.test | LINK | 0.530678 | 1.229690 | 1.683371 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.548549 | 1.247526 | 1.707219 | — | — | — |
| basic_file.test | LINK | 0.151943 | 0.330708 | 0.397102 | — | — | — |
| basic_file_select.test | LINK | 0.149014 | 0.316957 | 0.383634 | — | — | — |
| basic_random_access_file.test | LINK | 0.140909 | 0.320699 | 0.380728 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.149620 | 0.324528 | 0.390864 | — | — | — |
| basic_raw_socket.test | LINK | 0.443599 | 1.033625 | 1.477126 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.468990 | 1.068137 | 1.518539 | — | — | — |
| basic_readable_pipe.test | LINK | 0.432865 | 0.993337 | 1.281416 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.475585 | 1.047221 | 1.541107 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.455796 | 1.039640 | 1.466007 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.454898 | 1.084710 | 1.499175 | — | — | — |
| basic_signal_set.test | LINK | 0.425516 | 0.975593 | 1.157282 | — | — | — |
| basic_signal_set_select.test | LINK | 0.444475 | 1.030850 | 1.422248 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.451462 | 1.033703 | 1.492679 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.459582 | 1.072736 | 1.537586 | — | — | — |
| basic_stream_file.test | LINK | 0.144052 | 0.321252 | 0.379999 | — | — | — |
| basic_stream_file_select.test | LINK | 0.146986 | 0.324933 | 0.384137 | — | — | — |
| basic_stream_socket.test | LINK | 0.450137 | 1.036630 | 1.469124 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.464976 | 1.067609 | 1.521368 | — | — | — |
| basic_streambuf.test | LINK | 0.219447 | 0.462311 | 0.580446 | — | — | — |
| basic_streambuf_select.test | LINK | 0.217902 | 0.470190 | 0.586338 | — | — | — |
| basic_waitable_timer.test | LINK | 0.425471 | 0.972500 | 1.380575 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.433363 | 1.001979 | 1.420072 | — | — | — |
| basic_writable_pipe.test | LINK | 0.438531 | 1.001757 | 1.299336 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.456914 | 1.055804 | 1.558267 | — | — | — |
| bind_allocator.test | RUN | 0.753477 | 4.005378 | 3.517794 | 0.002394 | 0.002233 | 0.001894 |
| bind_allocator_select.test | RUN | 0.772458 | 4.023057 | 3.498318 | 0.001627 | 0.002031 | 0.002041 |
| bind_cancellation_slot.test | RUN | 0.771362 | 4.000904 | 3.570795 | 0.001398 | 0.001324 | 0.001358 |
| bind_cancellation_slot_select.test | RUN | 0.776457 | 4.030006 | 3.427788 | 0.001388 | 0.001372 | 0.001318 |
| bind_executor.test | RUN | 0.505932 | 2.686351 | 2.205957 | 0.002047 | 0.002003 | 0.002012 |
| bind_executor_select.test | RUN | 0.524806 | 2.745784 | 2.192918 | 0.001920 | 0.002416 | 0.001895 |
| bind_immediate_executor.test | RUN | 0.371727 | 2.237034 | 1.399901 | 0.001326 | 0.001293 | 0.001291 |
| bind_immediate_executor_select.test | RUN | 0.385922 | 2.189134 | 1.537180 | 0.001272 | 0.001374 | 0.001301 |
| buffer.test | RUN | 0.222397 | 0.883937 | 0.833332 | 0.001252 | 0.001267 | 0.001324 |
| buffer_select.test | RUN | 0.221196 | 0.885711 | 0.839455 | 0.001216 | 0.001257 | 0.001226 |
| buffer_registration.test | LINK | 0.170103 | 0.449036 | 0.481134 | — | — | — |
| buffer_registration_select.test | LINK | 0.171997 | 0.444353 | 0.484453 | — | — | — |
| buffered_read_stream.test | RUN | 0.870729 | 6.210256 | 5.298296 | 0.001582 | 0.002212 | 0.002254 |
| buffered_read_stream_select.test | RUN | 0.891213 | 6.470081 | 5.521979 | 0.001574 | 0.002084 | 0.002177 |
| buffered_stream.test | RUN | 1.486173 | 9.664411 | 9.038097 | 0.002234 | 0.002090 | 0.002290 |
| buffered_stream_select.test | RUN | 1.564838 | 9.669888 | 8.702937 | 0.002070 | 0.002126 | 0.002176 |
| buffered_write_stream.test | RUN | 1.510441 | 8.252074 | 7.765181 | 0.002185 | 0.002028 | 0.002070 |
| buffered_write_stream_select.test | RUN | 1.512406 | 8.316470 | 7.394768 | 0.002350 | 0.002082 | 0.002065 |
| buffers_iterator.test | RUN | 0.426075 | 0.757453 | 1.202304 | 0.001485 | 0.001689 | 0.001610 |
| buffers_iterator_select.test | RUN | 0.422928 | 0.741779 | 1.205531 | 0.001578 | 0.001672 | 0.001574 |
| cancel_after.test | RUN | 1.246132 | 6.398783 | 5.650264 | 0.004006 | 0.003938 | 0.004099 |
| cancel_after_select.test | RUN | 1.243051 | 6.325599 | 5.584483 | 0.003522 | 0.003465 | 0.003788 |
| cancel_at.test | RUN | 1.245936 | 5.497135 | 5.205227 | 0.003849 | 0.003229 | 0.003572 |
| cancel_at_select.test | RUN | 1.233207 | 5.333841 | 5.165204 | 0.003673 | 0.003053 | 0.003652 |
| cancellation_signal.test | LINK | 0.120353 | 0.258590 | 0.306540 | — | — | — |
| cancellation_signal_select.test | LINK | 0.172152 | 0.260610 | 0.305886 | — | — | — |
| cancellation_state.test | LINK | 0.190339 | 0.261506 | 0.308393 | — | — | — |
| cancellation_state_select.test | LINK | 0.188349 | 0.267365 | 0.308206 | — | — | — |
| cancellation_type.test | LINK | 0.143699 | 0.205126 | 0.394012 | — | — | — |
| cancellation_type_select.test | LINK | 0.146252 | 0.205622 | 0.396511 | — | — | — |
| co_composed.test | RUN | 0.147797 | 0.205052 | 0.400983 | 0.001698 | 0.001181 | 0.001492 |
| co_composed_select.test | RUN | 0.143745 | 0.205558 | 0.400579 | 0.001520 | 0.001201 | 0.001492 |
| co_spawn.test | LINK | 0.144524 | 0.204084 | 0.393497 | — | — | — |
| co_spawn_select.test | LINK | 0.146339 | 0.203989 | 0.394997 | — | — | — |
| completion_condition.test | LINK | 0.187944 | 0.423001 | 0.526637 | — | — | — |
| completion_condition_select.test | LINK | 0.185451 | 0.386798 | 0.520943 | — | — | — |
| compose.test | RUN | 0.929921 | 4.975669 | 4.498587 | 0.002321 | 0.002178 | 0.002320 |
| compose_select.test | RUN | 0.950642 | 4.881926 | 4.529644 | 0.002220 | 0.002586 | 0.001980 |
| composed.test | RUN | 0.919426 | 4.942962 | 4.473211 | 0.001826 | 0.001786 | 0.001832 |
| composed_select.test | RUN | 0.894712 | 4.880114 | 4.484009 | 0.001981 | 0.001638 | 0.001682 |
| config.test | RUN | 0.399492 | 3.123026 | 2.070688 | 0.001809 | 0.001768 | 0.001748 |
| config_select.test | RUN | 0.517732 | 3.262740 | 2.288385 | 0.001862 | 0.001705 | 0.001782 |
| connect.test | LINK | 1.492177 | 10.345583 | 9.496512 | — | — | — |
| connect_select.test | LINK | 1.517244 | 10.296301 | 9.417321 | — | — | — |
| connect_pipe.test | RUN | 0.810949 | 3.938243 | 3.446727 | 0.001825 | 0.001872 | 0.001814 |
| connect_pipe_select.test | RUN | 0.824380 | 4.115475 | 3.706125 | 0.001729 | 0.001742 | 0.001919 |
| consign.test | RUN | 0.698804 | 3.867354 | 3.133971 | 0.001848 | 0.001660 | 0.001832 |
| consign_select.test | RUN | 0.700669 | 3.941634 | 3.137441 | 0.001764 | 0.001710 | 0.001771 |
| coroutine.test | LINK | 0.154895 | 0.376704 | 0.429582 | — | — | — |
| coroutine_select.test | LINK | 0.148518 | 0.377275 | 0.450798 | — | — | — |
| deadline_timer.test | RUN | 1.027810 | 5.064794 | 4.590898 | 0.003219 | 0.002910 | 0.003515 |
| deadline_timer_select.test | RUN | 1.035821 | 4.997798 | 4.539941 | 0.003174 | 0.003146 | 0.003442 |
| deferred.test | RUN | 0.167714 | 0.353539 | 0.434197 | 0.001675 | 0.001527 | 0.001643 |
| deferred_select.test | RUN | 0.163202 | 0.354142 | 0.446115 | 0.001787 | 0.001691 | 0.001690 |
| detached.test | LINK | 0.182552 | 0.392359 | 0.479398 | — | — | — |
| detached_select.test | LINK | 0.188719 | 0.395341 | 0.485890 | — | — | — |
| disposition.test | RUN | 0.209697 | 0.931189 | 0.896176 | 0.001339 | 0.001800 | 0.001812 |
| disposition_select.test | RUN | 0.166869 | 0.933917 | 0.903352 | 0.001323 | 0.001609 | 0.001853 |
| error.test | RUN | 0.153290 | 0.897251 | 0.816556 | 0.001324 | 0.001582 | 0.001690 |
| error_select.test | RUN | 0.151743 | 0.897736 | 0.788709 | 0.001316 | 0.001665 | 0.001732 |
| file_base.test | LINK | 0.187455 | 0.741810 | 0.850425 | — | — | — |
| file_base_select.test | LINK | 0.192193 | 0.740631 | 0.706024 | — | — | — |
| fwd_first.test | LINK | 0.434873 | 1.193048 | 1.518675 | — | — | — |
| fwd_last.test | LINK | 0.428636 | 0.994381 | 1.500833 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.163359 | 0.421054 | 0.551163 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.158582 | 0.413350 | 0.541717 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.738790 | 3.783591 | 3.219891 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.731081 | 3.920106 | 3.157808 | — | — | — |
| generic_raw_protocol.test | LINK | 0.737949 | 3.817062 | 3.222396 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.729007 | 3.954478 | 3.156891 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.679933 | 3.211294 | 2.747569 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.643852 | 3.256888 | 2.736197 | — | — | — |
| generic_stream_protocol.test | LINK | 0.672576 | 3.446615 | 2.952855 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.669037 | 3.554415 | 2.921411 | — | — | — |
| high_resolution_timer.test | LINK | 0.274472 | 0.594013 | 0.853636 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.280647 | 0.613310 | 0.859661 | — | — | — |
| immediate.test | LINK | 0.190241 | 0.464652 | 0.525685 | — | — | — |
| immediate_select.test | LINK | 0.185129 | 0.467844 | 0.522683 | — | — | — |
| inline_executor.test | RUN | 0.234009 | 0.735561 | 0.795494 | 0.001317 | 0.001181 | 0.001225 |
| inline_executor_select.test | RUN | 0.232291 | 0.727784 | 0.786664 | 0.001325 | 0.001209 | 0.001247 |
| inline_or_executor.test | RUN | 0.395104 | 2.215899 | 1.614690 | 0.001330 | 0.001283 | 0.001325 |
| inline_or_executor_select.test | RUN | 0.408548 | 2.269803 | 1.717929 | 0.001322 | 0.001310 | 0.001301 |
| io_context.test | RUN | 0.572982 | 3.415042 | 2.795207 | 0.002419 | 0.002188 | 0.002215 |
| io_context_select.test | RUN | 0.585921 | 3.322254 | 2.755166 | 0.002368 | 0.002016 | 0.002313 |
| io_context_strand.test | RUN | 0.543606 | 3.257348 | 2.412554 | 0.002330 | 0.002439 | 0.002412 |
| io_context_strand_select.test | RUN | 0.558502 | 3.456843 | 2.419359 | 0.002200 | 0.002581 | 0.002124 |
| ip_address.test | LINK | 0.194121 | 1.011239 | 0.667106 | — | — | — |
| ip_address_select.test | LINK | 0.199433 | 1.012352 | 0.670138 | — | — | — |
| ip_address_v4.test | LINK | 0.203880 | 0.789850 | 0.733293 | — | — | — |
| ip_address_v4_select.test | LINK | 0.196010 | 0.882950 | 0.733669 | — | — | — |
| ip_address_v6.test | LINK | 0.226172 | 0.887214 | 0.899022 | — | — | — |
| ip_address_v6_select.test | LINK | 0.225584 | 0.884701 | 0.887795 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.169193 | 0.426631 | 0.571708 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.167314 | 0.432060 | 0.573611 | — | — | — |
| ip_basic_resolver.test | LINK | 0.276904 | 0.622344 | 0.850444 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.278852 | 0.626702 | 0.876146 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.092392 | 0.202150 | 0.241919 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.091959 | 0.205448 | 0.241914 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.167860 | 0.416559 | 0.561268 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.171751 | 0.419438 | 0.564191 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.159007 | 0.402241 | 0.541231 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.159942 | 0.397928 | 0.531849 | — | — | — |
| ip_host_name.test | RUN | 0.174426 | 0.554072 | 0.808243 | 0.001272 | 0.001130 | 0.001288 |
| ip_host_name_select.test | RUN | 0.175424 | 0.546525 | 0.806278 | 0.001269 | 0.001149 | 0.001627 |
| ip_icmp.test | RUN | 0.923733 | 6.817190 | 6.717734 | 0.001314 | 0.001538 | 0.001735 |
| ip_icmp_select.test | RUN | 0.930677 | 6.721440 | 6.580431 | 0.001284 | 0.001454 | 0.001471 |
| ip_multicast.test | RUN | 0.502184 | 4.094323 | 3.724806 | 0.001438 | 0.001796 | 0.001634 |
| ip_multicast_select.test | RUN | 0.511585 | 4.084444 | 3.673378 | 0.001330 | 0.001566 | 0.002004 |
| ip_resolver_query_base.test | LINK | 0.104476 | 0.355717 | 0.417008 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.105288 | 0.346789 | 0.419203 | — | — | — |
| ip_tcp.test | RUN | 1.376872 | 12.162579 | 10.369786 | 0.001825 | 0.002371 | 0.002439 |
| ip_tcp_select.test | RUN | 1.379677 | 12.728740 | 10.031304 | 0.001738 | 0.002289 | 0.002393 |
| ip_udp.test | RUN | 0.980602 | 8.608428 | 7.081658 | 0.001486 | 0.001882 | 0.001914 |
| ip_udp_select.test | RUN | 0.988237 | 8.794887 | 6.912622 | 0.001458 | 0.001955 | 0.001927 |
| ip_unicast.test | RUN | 0.466058 | 3.740097 | 3.244541 | 0.001419 | 0.001600 | 0.001586 |
| ip_unicast_select.test | RUN | 0.478680 | 3.792240 | 3.219164 | 0.001415 | 0.001668 | 0.001544 |
| ip_v6_only.test | RUN | 0.509500 | 3.883715 | 3.353226 | 0.001427 | 0.001832 | 0.001822 |
| ip_v6_only_select.test | RUN | 0.494727 | 4.006514 | 3.321994 | 0.001380 | 0.001594 | 0.001869 |
| is_read_buffered.test | RUN | 0.328027 | 1.146490 | 1.715814 | 0.001291 | 0.001550 | 0.001618 |
| is_read_buffered_select.test | RUN | 0.331377 | 1.201376 | 1.750863 | 0.001298 | 0.001579 | 0.001154 |
| is_write_buffered.test | RUN | 0.323349 | 1.156416 | 1.689842 | 0.001287 | 0.001632 | 0.001719 |
| is_write_buffered_select.test | RUN | 0.385291 | 1.182353 | 1.741526 | 0.001561 | 0.001545 | 0.001740 |
| local_basic_endpoint.test | LINK | 0.244785 | 0.649378 | 0.892860 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.246504 | 0.652607 | 0.896253 | — | — | — |
| local_connect_pair.test | LINK | 0.682333 | 3.825078 | 3.106985 | — | — | — |
| local_connect_pair_select.test | LINK | 0.687032 | 3.800401 | 3.066395 | — | — | — |
| local_datagram_protocol.test | LINK | 0.953827 | 4.971323 | 4.409342 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.955979 | 5.054633 | 4.336316 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.943035 | 4.928927 | 4.326783 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.949988 | 4.940672 | 4.298722 | — | — | — |
| local_stream_protocol.test | LINK | 0.874276 | 4.671817 | 4.125961 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.898068 | 4.706306 | 4.095402 | — | — | — |
| placeholders.test | LINK | 0.159838 | 0.354673 | 0.431652 | — | — | — |
| placeholders_select.test | LINK | 0.159078 | 0.349817 | 0.431003 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.444902 | 0.970506 | 1.312110 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.456896 | 1.024601 | 1.564729 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.438805 | 0.976790 | 1.284679 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.453747 | 1.022183 | 1.575787 | — | — | — |
| posix_descriptor_base.test | LINK | 0.180417 | 0.356636 | 0.418430 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.176249 | 0.361502 | 0.419295 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.933958 | 4.691121 | 4.121168 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.957084 | 4.776683 | 4.209388 | — | — | — |
| prepend.test | RUN | 0.707961 | 3.861361 | 3.256422 | 0.001932 | 0.001634 | 0.001821 |
| prepend_select.test | RUN | 0.711086 | 3.896693 | 3.254485 | 0.001733 | 0.001708 | 0.001773 |
| random_access_file.test | LINK | 0.398322 | 0.874677 | 1.045516 | — | — | — |
| random_access_file_select.test | LINK | 0.412607 | 0.923465 | 1.332593 | — | — | — |
| read.test | RUN | 2.261767 | 23.184159 | 18.978736 | 0.002490 | 0.002447 | 0.002466 |
| read_select.test | RUN | 2.267525 | 23.341330 | 19.185423 | 0.002505 | 0.002446 | 0.002279 |
| read_at.test | RUN | 2.252270 | 30.541089 | 25.456241 | 0.002919 | 0.002895 | 0.002977 |
| read_at_select.test | RUN | 2.264978 | 30.265603 | 25.689819 | 0.002991 | 0.002962 | 0.002766 |
| read_until.test | RUN | 1.169598 | 9.328556 | 6.928513 | 0.001852 | 0.002130 | 0.002006 |
| read_until_select.test | RUN | 1.195871 | 9.345801 | 7.177246 | 0.001810 | 0.002012 | 0.002060 |
| readable_pipe.test | LINK | 0.731404 | 3.919455 | 3.216604 | — | — | — |
| readable_pipe_select.test | LINK | 0.757481 | 4.165879 | 3.409636 | — | — | — |
| recycling_allocator.test | RUN | 0.217908 | 0.544785 | 0.631995 | 0.001653 | 0.001727 | 0.001716 |
| recycling_allocator_select.test | RUN | 0.212198 | 0.544593 | 0.636760 | 0.001566 | 0.001648 | 0.001618 |
| redirect_disposition.test | LINK | 0.949403 | 5.469091 | 4.986367 | — | — | — |
| redirect_disposition_select.test | LINK | 0.970341 | 5.374014 | 4.914022 | — | — | — |
| redirect_error.test | LINK | 0.854666 | 4.614356 | 4.306681 | — | — | — |
| redirect_error_select.test | LINK | 0.851263 | 4.530156 | 4.282144 | — | — | — |
| registered_buffer.test | LINK | 0.209825 | 0.445761 | 0.578524 | — | — | — |
| registered_buffer_select.test | LINK | 0.209891 | 0.450736 | 0.577958 | — | — | — |
| signal_set.test | RUN | 0.703711 | 3.842081 | 3.002576 | 0.001778 | 0.001592 | 0.001726 |
| signal_set_select.test | RUN | 0.737913 | 3.982308 | 3.267651 | 0.001684 | 0.001823 | 0.001714 |
| signal_set_base.test | LINK | 0.171982 | 0.362768 | 0.411327 | — | — | — |
| signal_set_base_select.test | LINK | 0.175731 | 0.362067 | 0.409046 | — | — | — |
| socket_base.test | RUN | 0.862325 | 5.559047 | 4.538509 | 0.001964 | 0.001928 | 0.001900 |
| socket_base_select.test | RUN | 0.855712 | 5.439221 | 4.495426 | 0.001788 | 0.001781 | 0.001842 |
| spawn.test | RUN | 1.481169 | 9.229616 | 7.776782 | 0.002269 | 0.001863 | 0.002026 |
| spawn_select.test | RUN | 1.495649 | 9.211975 | 7.756424 | 0.002116 | 0.001949 | 0.002074 |
| static_thread_pool.test | RUN | 0.383810 | 0.859884 | 1.009560 | 0.001702 | 0.001629 | 0.001727 |
| static_thread_pool_select.test | RUN | 0.399965 | 0.929746 | 1.299898 | 0.001600 | 0.001670 | 0.001793 |
| steady_timer.test | LINK | 0.432652 | 0.970470 | 1.397947 | — | — | — |
| steady_timer_select.test | LINK | 0.439456 | 1.004490 | 1.426990 | — | — | — |
| strand.test | RUN | 0.938951 | 5.214332 | 4.749000 | 0.002466 | 0.002714 | 0.002497 |
| strand_select.test | RUN | 0.947944 | 5.193291 | 4.672205 | 0.002582 | 0.002384 | 0.002505 |
| stream_file.test | LINK | 0.406969 | 0.885583 | 1.043293 | — | — | — |
| stream_file_select.test | LINK | 0.416260 | 0.913533 | 1.359279 | — | — | — |
| streambuf.test | RUN | 0.252230 | 0.467008 | 0.767811 | 0.001275 | 0.001225 | 0.001734 |
| streambuf_select.test | RUN | 0.255921 | 0.466831 | 0.649672 | 0.001315 | 0.001227 | 0.001258 |
| system_timer.test | LINK | 0.596021 | 3.234650 | 2.845113 | — | — | — |
| system_timer_select.test | LINK | 0.605060 | 3.140122 | 2.665175 | — | — | — |
| system_context.test | LINK | 0.248038 | 0.538360 | 0.623840 | — | — | — |
| system_context_select.test | LINK | 0.261400 | 0.570442 | 0.778279 | — | — | — |
| system_executor.test | LINK | 0.340694 | 1.825559 | 1.274238 | — | — | — |
| system_executor_select.test | LINK | 0.352488 | 1.763915 | 1.395245 | — | — | — |
| this_coro.test | LINK | 0.096094 | 0.200999 | 0.245008 | — | — | — |
| this_coro_select.test | LINK | 0.091900 | 0.201997 | 0.245248 | — | — | — |
| thread_pool.test | RUN | 0.412612 | 3.087986 | 1.659064 | 0.002420 | 0.002674 | 0.002481 |
| thread_pool_select.test | RUN | 0.420792 | 3.080774 | 1.786097 | 0.002404 | 0.003118 | 0.003342 |
| time_traits.test | LINK | 0.210892 | 0.685477 | 0.559657 | — | — | — |
| time_traits_select.test | LINK | 0.208063 | 0.678414 | 0.785080 | — | — | — |
| ts_buffer.test | LINK | 0.200787 | 0.757132 | 0.864164 | — | — | — |
| ts_buffer_select.test | LINK | 0.201914 | 0.750739 | 0.814370 | — | — | — |
| ts_executor.test | LINK | 0.290992 | 1.025652 | 1.370201 | — | — | — |
| ts_executor_select.test | LINK | 0.302972 | 1.099194 | 1.668835 | — | — | — |
| ts_internet.test | LINK | 0.317910 | 1.151278 | 1.714067 | — | — | — |
| ts_internet_select.test | LINK | 0.323466 | 1.180591 | 1.747331 | — | — | — |
| ts_io_context.test | LINK | 0.257135 | 0.896346 | 1.042345 | — | — | — |
| ts_io_context_select.test | LINK | 0.265580 | 0.943408 | 1.299464 | — | — | — |
| ts_net.test | LINK | 0.374373 | 1.372263 | 2.114934 | — | — | — |
| ts_net_select.test | LINK | 0.380851 | 1.392316 | 2.166559 | — | — | — |
| ts_netfwd.test | LINK | 0.383104 | 1.379182 | 2.139999 | — | — | — |
| ts_netfwd_select.test | LINK | 0.387037 | 1.398888 | 2.170042 | — | — | — |
| ts_socket.test | LINK | 0.310591 | 1.084287 | 1.627239 | — | — | — |
| ts_socket_select.test | LINK | 0.313109 | 1.102658 | 1.631468 | — | — | — |
| ts_timer.test | LINK | 0.274963 | 0.973345 | 1.410595 | — | — | — |
| ts_timer_select.test | LINK | 0.283113 | 1.002938 | 1.434704 | — | — | — |
| use_awaitable.test | LINK | 0.091653 | 0.323813 | 0.399230 | — | — | — |
| use_awaitable_select.test | LINK | 0.094166 | 0.332036 | 0.388605 | — | — | — |
| wait_traits.test | LINK | 0.093955 | 0.322935 | 0.388435 | — | — | — |
| wait_traits_select.test | LINK | 0.095865 | 0.318116 | 0.400288 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.092597 | 0.313115 | 0.386690 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.095135 | 0.316326 | 0.391584 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.091862 | 0.320977 | 0.401415 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.093010 | 0.320073 | 0.392173 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.092407 | 0.324301 | 0.389653 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.095303 | 0.321291 | 0.393457 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.093388 | 0.317270 | 0.397212 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.107127 | 0.319823 | 0.392858 | — | — | — |
| windows_object_handle.test | LINK | 0.401722 | 0.888142 | 1.042156 | — | — | — |
| windows_object_handle_select.test | LINK | 0.417077 | 0.937820 | 1.319934 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.411440 | 0.935049 | 1.145830 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.427688 | 0.996372 | 1.431720 | — | — | — |
| windows_random_access_handle.test | LINK | 0.395158 | 0.898258 | 1.054140 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.414680 | 0.948446 | 1.312863 | — | — | — |
| windows_stream_handle.test | LINK | 0.398533 | 0.895069 | 1.048972 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.415365 | 0.948527 | 1.320678 | — | — | — |
| writable_pipe.test | LINK | 0.745390 | 3.872360 | 3.370610 | — | — | — |
| writable_pipe_select.test | LINK | 0.778689 | 4.028692 | 3.515689 | — | — | — |
| write.test | RUN | 2.262911 | 19.478547 | 18.853214 | 0.002317 | 0.004110 | 0.002451 |
| write_select.test | RUN | 2.295662 | 19.620662 | 19.032274 | 0.002494 | 0.002460 | 0.002490 |
| write_at.test | RUN | 2.321767 | 25.809571 | 24.299973 | 0.002590 | 0.002540 | 0.002673 |
| write_at_select.test | RUN | 2.324618 | 25.976988 | 24.344658 | 0.002766 | 0.003678 | 0.002681 |
| any_executor.test | RUN | 0.929533 | 8.635923 | 7.803416 | 0.002458 | 0.002126 | 0.002575 |
| blocking.test | RUN | 2.030675 | 11.505329 | 15.657226 | 0.005187 | 0.004816 | 0.005068 |
| blocking_adaptation.test | RUN | 1.047701 | 5.052154 | 7.045806 | 0.003207 | 0.003016 | 0.003190 |
| context_as.test | RUN | 0.601927 | 3.480846 | 2.427839 | 0.001928 | 0.001780 | 0.002018 |
| executor.test | RUN | 0.153105 | 0.337541 | 0.421965 | 0.001655 | 0.001666 | 0.001748 |
| inline_exception_handling.test | RUN | 1.933410 | 10.872522 | 15.775580 | 0.003357 | 0.003298 | 0.004321 |
| invocable_archetype.test | RUN | 0.149634 | 0.324744 | 0.426203 | 0.001298 | 0.001605 | 0.001732 |
| mapping.test | RUN | 1.917949 | 10.587950 | 15.337728 | 0.003463 | 0.003238 | 0.003540 |
| outstanding_work.test | RUN | 0.933747 | 4.763562 | 6.937205 | 0.003114 | 0.003087 | 0.003294 |
| prefer_only.test | RUN | 0.306162 | 1.842277 | 1.551367 | 0.001797 | 0.001656 | 0.001724 |
| relationship.test | RUN | 0.840899 | 4.109919 | 6.936376 | 0.002152 | 0.002080 | 0.003165 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.007×, 1.016× | 1.003× |
| clang | 0.978× | 0.984×, 0.971× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001675s | 0.001780s | 0.001777s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001677s | 0.001731s | 0.001716s | byte equality observed |
| any_completion_handler.test | 8 | 0.001365s | 0.001384s | 0.001359s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001333s | 0.001351s | 0.001343s | byte equality observed |
| any_io_executor.test | 5 | 0.001686s | 0.001701s | 0.001682s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001672s | 0.001681s | 0.001707s | byte equality observed |
| append.test | 10 | 0.001299s | 0.001291s | 0.001269s | byte equality observed |
| append_select.test | 7 | 0.001280s | 0.001270s | 0.001250s | byte equality observed |
| as_tuple.test | 5 | 0.001348s | 0.001360s | 0.001329s | byte equality observed |
| as_tuple_select.test | 10 | 0.001260s | 0.001287s | 0.001267s | byte equality observed |
| bind_allocator.test | 1 | 0.001771s | 0.001808s | 0.001744s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001501s | 0.001497s | 0.001447s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001147s | 0.001170s | 0.001122s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001079s | 0.001076s | 0.001042s | byte equality observed |
| bind_executor.test | 1 | 0.001723s | 0.001764s | 0.001667s | byte equality observed |
| bind_executor_select.test | 1 | 0.001852s | 0.001873s | 0.001844s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001117s | 0.001110s | 0.001111s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001171s | 0.001126s | 0.001117s | byte equality observed |
| buffer.test | 10 | 0.001077s | 0.001076s | 0.001097s | byte equality observed |
| buffer_select.test | 10 | 0.001077s | 0.001072s | 0.001084s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001387s | 0.001334s | 0.001332s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001337s | 0.001359s | 0.001335s | byte equality observed |
| buffered_stream.test | 10 | 0.001381s | 0.001359s | 0.001372s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001347s | 0.001324s | 0.001338s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001338s | 0.001321s | 0.001351s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001362s | 0.001338s | 0.001308s | byte equality observed |
| buffers_iterator.test | 10 | 0.001060s | 0.001042s | 0.001025s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001001s | 0.000977s | 0.000964s | byte equality observed |
| cancel_after.test | 1 | 0.003598s | 0.003638s | 0.003430s | byte equality observed |
| cancel_after_select.test | 1 | 0.003106s | 0.003161s | 0.002871s | byte equality observed |
| cancel_at.test | 1 | 0.003789s | 0.003763s | 0.003705s | byte equality observed |
| cancel_at_select.test | 1 | 0.003457s | 0.003528s | 0.003453s | byte equality observed |
| co_composed.test | 10 | 0.001031s | 0.001010s | 0.001054s | byte equality observed |
| co_composed_select.test | 10 | 0.001000s | 0.000988s | 0.001017s | byte equality observed |
| compose.test | 1 | 0.001739s | 0.001749s | 0.001767s | byte equality observed |
| compose_select.test | 1 | 0.001525s | 0.001501s | 0.001440s | byte equality observed |
| composed.test | 1 | 0.001944s | 0.001950s | 0.001928s | byte equality observed |
| composed_select.test | 1 | 0.001688s | 0.001663s | 0.001669s | byte equality observed |
| config.test | 9 | 0.001117s | 0.001126s | 0.001097s | byte equality observed |
| config_select.test | 10 | 0.001171s | 0.001113s | 0.001126s | byte equality observed |
| connect_pipe.test | 10 | 0.001189s | 0.001175s | 0.001161s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001152s | 0.001147s | 0.001164s | byte equality observed |
| consign.test | 10 | 0.001142s | 0.001177s | 0.001125s | byte equality observed |
| consign_select.test | 10 | 0.001056s | 0.001072s | 0.001035s | byte equality observed |
| deadline_timer.test | 1 | 0.002567s | 0.002519s | 0.002477s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002321s | 0.002240s | 0.002224s | byte equality observed |
| deferred.test | 10 | 0.001022s | 0.001009s | 0.001013s | byte equality observed |
| deferred_select.test | 10 | 0.000970s | 0.000942s | 0.000946s | byte equality observed |
| disposition.test | 10 | 0.001028s | 0.001012s | 0.001000s | byte equality observed |
| disposition_select.test | 10 | 0.001020s | 0.001024s | 0.001023s | byte equality observed |
| error.test | 10 | 0.001005s | 0.000993s | 0.000967s | byte equality observed |
| error_select.test | 10 | 0.000998s | 0.000973s | 0.000969s | byte equality observed |
| inline_executor.test | 10 | 0.001004s | 0.000974s | 0.000984s | byte equality observed |
| inline_executor_select.test | 10 | 0.001000s | 0.000990s | 0.000991s | byte equality observed |
| inline_or_executor.test | 10 | 0.001000s | 0.000993s | 0.001002s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001001s | 0.001021s | 0.001006s | byte equality observed |
| io_context.test | 1 | 0.002003s | 0.002083s | 0.002050s | byte equality observed |
| io_context_select.test | 1 | 0.002237s | 0.002236s | 0.002250s | byte equality observed |
| io_context_strand.test | 1 | 0.002286s | 0.002257s | 0.002240s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001988s | 0.002011s | 0.001983s | byte equality observed |
| ip_host_name.test | 10 | 0.001022s | 0.001037s | 0.001024s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000946s | 0.000937s | 0.000964s | byte equality observed |
| ip_icmp.test | 10 | 0.000981s | 0.001024s | 0.000988s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000968s | 0.001011s | 0.000978s | byte equality observed |
| ip_multicast.test | 10 | 0.001100s | 0.001094s | 0.001091s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001058s | 0.001052s | 0.001058s | byte equality observed |
| ip_tcp.test | 10 | 0.001363s | 0.001348s | 0.001360s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001326s | 0.001297s | 0.001315s | byte equality observed |
| ip_udp.test | 10 | 0.001116s | 0.001107s | 0.001093s | byte equality observed |
| ip_udp_select.test | 10 | 0.001097s | 0.001096s | 0.001064s | byte equality observed |
| ip_unicast.test | 10 | 0.001075s | 0.001066s | 0.001049s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001053s | 0.001050s | 0.001031s | byte equality observed |
| ip_v6_only.test | 10 | 0.001070s | 0.001069s | 0.001044s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001054s | 0.001067s | 0.001022s | byte equality observed |
| is_read_buffered.test | 10 | 0.000986s | 0.000997s | 0.000955s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000982s | 0.000988s | 0.000955s | byte equality observed |
| is_write_buffered.test | 10 | 0.000974s | 0.001001s | 0.000953s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000988s | 0.001067s | 0.000958s | byte equality observed |
| prepend.test | 10 | 0.001050s | 0.001134s | 0.001039s | byte equality observed |
| prepend_select.test | 10 | 0.001025s | 0.001108s | 0.001014s | byte equality observed |
| read.test | 10 | 0.001425s | 0.001521s | 0.001380s | byte equality observed |
| read_at.test | 10 | 0.001866s | 0.001972s | 0.001761s | byte equality observed |
| read_at_select.test | 10 | 0.001920s | 0.001997s | 0.001861s | byte equality observed |
| read_select.test | 10 | 0.001544s | 0.001533s | 0.001518s | byte equality observed |
| read_until.test | 10 | 0.001267s | 0.001264s | 0.001265s | byte equality observed |
| read_until_select.test | 10 | 0.001269s | 0.001259s | 0.001189s | byte equality observed |
| recycling_allocator.test | 10 | 0.001040s | 0.001035s | 0.001033s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001063s | 0.001062s | 0.001066s | byte equality observed |
| signal_set.test | 10 | 0.001088s | 0.001075s | 0.001079s | byte equality observed |
| signal_set_select.test | 10 | 0.001097s | 0.001126s | 0.001065s | byte equality observed |
| socket_base.test | 10 | 0.001184s | 0.001163s | 0.001148s | byte equality observed |
| socket_base_select.test | 10 | 0.001163s | 0.001155s | 0.001151s | byte equality observed |
| spawn.test | 10 | 0.001273s | 0.001323s | 0.001283s | byte equality observed |
| spawn_select.test | 10 | 0.001276s | 0.001267s | 0.001284s | byte equality observed |
| static_thread_pool.test | 10 | 0.001034s | 0.001023s | 0.001054s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001041s | 0.001011s | 0.001019s | byte equality observed |
| strand.test | 1 | 0.002017s | 0.002142s | 0.002034s | byte equality observed |
| strand_select.test | 1 | 0.001764s | 0.001756s | 0.001710s | byte equality observed |
| streambuf.test | 10 | 0.001115s | 0.001095s | 0.001169s | byte equality observed |
| streambuf_select.test | 10 | 0.001118s | 0.001114s | 0.001110s | byte equality observed |
| thread_pool.test | 9 | 0.002403s | 0.002445s | 0.002392s | byte equality observed |
| thread_pool_select.test | 9 | 0.002425s | 0.002368s | 0.002384s | byte equality observed |
| write.test | 10 | 0.001585s | 0.001535s | 0.001557s | byte equality observed |
| write_at.test | 10 | 0.001736s | 0.001749s | 0.001746s | byte equality observed |
| write_at_select.test | 10 | 0.001749s | 0.001744s | 0.001704s | byte equality observed |
| write_select.test | 10 | 0.001576s | 0.001534s | 0.001540s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
