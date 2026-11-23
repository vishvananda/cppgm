# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.525036 | 3.389944 | 2.911351 | 0.001397 | 0.001950 | 0.001602 |
| any_completion_executor_select.test | RUN | 0.529949 | 3.408217 | 3.052294 | 0.001608 | 0.001810 | 0.001371 |
| any_completion_handler.test | RUN | 0.601570 | 3.046928 | 2.710280 | 0.001231 | 0.001290 | 0.001180 |
| any_completion_handler_select.test | RUN | 0.602605 | 3.152430 | 2.804962 | 0.001399 | 0.001559 | 0.001183 |
| any_io_executor.test | RUN | 0.550437 | 3.611666 | 3.218502 | 0.001538 | 0.001864 | 0.001587 |
| any_io_executor_select.test | RUN | 0.564881 | 3.612803 | 3.315098 | 0.001508 | 0.001916 | 0.001703 |
| append.test | RUN | 0.507176 | 2.937272 | 2.339111 | 0.001075 | 0.001343 | 0.001128 |
| append_select.test | RUN | 0.517908 | 2.974046 | 2.318859 | 0.001226 | 0.001405 | 0.001134 |
| as_tuple.test | RUN | 0.664958 | 3.498440 | 3.314293 | 0.001396 | 0.001309 | 0.001307 |
| as_tuple_select.test | RUN | 0.672822 | 3.478533 | 3.315412 | 0.001339 | 0.001327 | 0.001206 |
| associated_allocator.test | LINK | 0.124925 | 0.288461 | 0.354504 | — | — | — |
| associated_allocator_select.test | LINK | 0.128028 | 0.283587 | 0.339581 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.137165 | 0.309120 | 0.379053 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.136740 | 0.302737 | 0.385223 | — | — | — |
| associated_executor.test | LINK | 0.204368 | 0.536729 | 0.644777 | — | — | — |
| associated_executor_select.test | LINK | 0.206488 | 0.531005 | 0.647644 | — | — | — |
| associated_immediate_executor.test | LINK | 0.188507 | 0.499780 | 0.585700 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.187043 | 0.491086 | 0.554580 | — | — | — |
| associator.test | LINK | 0.098880 | 0.233741 | 0.282462 | — | — | — |
| associator_select.test | LINK | 0.100874 | 0.236420 | 0.286164 | — | — | — |
| awaitable.test | LINK | 0.099969 | 0.233842 | 0.277851 | — | — | — |
| awaitable_select.test | LINK | 0.101067 | 0.234958 | 0.293529 | — | — | — |
| basic_datagram_socket.test | LINK | 0.318713 | 0.755563 | 1.113210 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.320562 | 0.775607 | 1.111488 | — | — | — |
| basic_deadline_timer.test | LINK | 0.378948 | 0.886858 | 1.260205 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.391397 | 0.904905 | 1.266914 | — | — | — |
| basic_file.test | LINK | 0.104648 | 0.238824 | 0.279103 | — | — | — |
| basic_file_select.test | LINK | 0.103323 | 0.233673 | 0.287126 | — | — | — |
| basic_random_access_file.test | LINK | 0.104196 | 0.233796 | 0.279306 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.103126 | 0.230748 | 0.291582 | — | — | — |
| basic_raw_socket.test | LINK | 0.325039 | 0.764475 | 1.084668 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.318140 | 0.782495 | 1.121408 | — | — | — |
| basic_readable_pipe.test | LINK | 0.310502 | 0.728024 | 0.939394 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.325219 | 0.772240 | 1.157088 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.329384 | 0.755645 | 1.100221 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.329515 | 0.774459 | 1.114572 | — | — | — |
| basic_signal_set.test | LINK | 0.300334 | 0.697134 | 0.868181 | — | — | — |
| basic_signal_set_select.test | LINK | 0.315961 | 0.752576 | 1.075906 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.335297 | 0.758490 | 1.094244 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.337677 | 0.781693 | 1.132578 | — | — | — |
| basic_stream_file.test | LINK | 0.098528 | 0.234919 | 0.294431 | — | — | — |
| basic_stream_file_select.test | LINK | 0.099373 | 0.231688 | 0.289003 | — | — | — |
| basic_stream_socket.test | LINK | 0.324856 | 0.762055 | 1.091556 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.331077 | 0.781143 | 1.116429 | — | — | — |
| basic_streambuf.test | LINK | 0.155005 | 0.347523 | 0.430361 | — | — | — |
| basic_streambuf_select.test | LINK | 0.157081 | 0.344338 | 0.420187 | — | — | — |
| basic_waitable_timer.test | LINK | 0.300988 | 0.718447 | 1.034844 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.307254 | 0.735948 | 1.059382 | — | — | — |
| basic_writable_pipe.test | LINK | 0.307230 | 0.713053 | 0.943282 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.325376 | 0.777927 | 1.146168 | — | — | — |
| bind_allocator.test | RUN | 0.545338 | 2.952860 | 2.607762 | 0.001876 | 0.001714 | 0.001666 |
| bind_allocator_select.test | RUN | 0.557457 | 2.977596 | 2.607230 | 0.001566 | 0.001236 | 0.001552 |
| bind_cancellation_slot.test | RUN | 0.559624 | 3.014758 | 2.650759 | 0.000956 | 0.000912 | 0.001013 |
| bind_cancellation_slot_select.test | RUN | 0.571620 | 2.959688 | 2.508861 | 0.000898 | 0.000943 | 0.000906 |
| bind_executor.test | RUN | 0.380470 | 2.033563 | 1.658222 | 0.001607 | 0.001622 | 0.001654 |
| bind_executor_select.test | RUN | 0.388360 | 2.056672 | 1.632692 | 0.001398 | 0.001526 | 0.001341 |
| bind_immediate_executor.test | RUN | 0.283175 | 1.688260 | 1.045564 | 0.000982 | 0.000933 | 0.000896 |
| bind_immediate_executor_select.test | RUN | 0.293803 | 1.632704 | 1.138606 | 0.000907 | 0.000932 | 0.000852 |
| buffer.test | RUN | 0.168181 | 0.697927 | 0.615233 | 0.001050 | 0.000906 | 0.000869 |
| buffer_select.test | RUN | 0.169067 | 0.696879 | 0.607380 | 0.000943 | 0.000916 | 0.000804 |
| buffer_registration.test | LINK | 0.137741 | 0.346608 | 0.363305 | — | — | — |
| buffer_registration_select.test | LINK | 0.134695 | 0.347893 | 0.359058 | — | — | — |
| buffered_read_stream.test | RUN | 0.662214 | 4.550590 | 3.715707 | 0.001222 | 0.001620 | 0.001517 |
| buffered_read_stream_select.test | RUN | 0.669673 | 4.722694 | 3.546129 | 0.001092 | 0.001507 | 0.001468 |
| buffered_stream.test | RUN | 0.908343 | 7.206555 | 6.653450 | 0.001724 | 0.001596 | 0.001641 |
| buffered_stream_select.test | RUN | 0.937082 | 7.273709 | 6.400861 | 0.001590 | 0.001598 | 0.001447 |
| buffered_write_stream.test | RUN | 1.101667 | 6.190343 | 5.609955 | 0.001607 | 0.001731 | 0.001267 |
| buffered_write_stream_select.test | RUN | 1.113418 | 6.278517 | 5.486993 | 0.001474 | 0.001609 | 0.001421 |
| buffers_iterator.test | RUN | 0.327936 | 0.542471 | 0.884562 | 0.001176 | 0.001268 | 0.001201 |
| buffers_iterator_select.test | RUN | 0.322428 | 0.546195 | 0.874690 | 0.001157 | 0.001232 | 0.001076 |
| cancel_after.test | RUN | 0.907224 | 4.869649 | 4.080886 | 0.003595 | 0.003217 | 0.003494 |
| cancel_after_select.test | RUN | 0.917957 | 4.788756 | 4.058145 | 0.003019 | 0.003143 | 0.002926 |
| cancel_at.test | RUN | 0.815175 | 4.354080 | 4.002663 | 0.002917 | 0.002791 | 0.002858 |
| cancel_at_select.test | RUN | 0.787921 | 4.219631 | 4.022635 | 0.002631 | 0.002617 | 0.002990 |
| cancellation_signal.test | LINK | 0.091680 | 0.204287 | 0.352196 | — | — | — |
| cancellation_signal_select.test | LINK | 0.096959 | 0.200251 | 0.351577 | — | — | — |
| cancellation_state.test | LINK | 0.096981 | 0.204585 | 0.369956 | — | — | — |
| cancellation_state_select.test | LINK | 0.122839 | 0.198403 | 0.367035 | — | — | — |
| cancellation_type.test | LINK | 0.104856 | 0.156943 | 0.291989 | — | — | — |
| cancellation_type_select.test | LINK | 0.101228 | 0.155531 | 0.287404 | — | — | — |
| co_composed.test | RUN | 0.105057 | 0.157128 | 0.290828 | 0.001171 | 0.000881 | 0.001124 |
| co_composed_select.test | RUN | 0.103697 | 0.176961 | 0.289479 | 0.001331 | 0.001199 | 0.001086 |
| co_spawn.test | LINK | 0.100219 | 0.202141 | 0.283694 | — | — | — |
| co_spawn_select.test | LINK | 0.099138 | 0.202393 | 0.286059 | — | — | — |
| completion_condition.test | LINK | 0.134952 | 0.365701 | 0.381204 | — | — | — |
| completion_condition_select.test | LINK | 0.128409 | 0.360772 | 0.385329 | — | — | — |
| compose.test | RUN | 0.678787 | 3.737974 | 3.320933 | 0.001846 | 0.001719 | 0.001630 |
| compose_select.test | RUN | 0.686950 | 3.677799 | 3.237592 | 0.001257 | 0.001714 | 0.001688 |
| composed.test | RUN | 0.679095 | 3.636660 | 3.232713 | 0.001425 | 0.001233 | 0.001386 |
| composed_select.test | RUN | 0.660466 | 3.599327 | 3.234402 | 0.001325 | 0.001308 | 0.001304 |
| config.test | RUN | 0.320478 | 2.373457 | 1.493366 | 0.001371 | 0.001277 | 0.001227 |
| config_select.test | RUN | 0.346277 | 2.438581 | 1.677537 | 0.001288 | 0.001271 | 0.001339 |
| connect.test | LINK | 1.109482 | 7.871940 | 6.896550 | — | — | — |
| connect_select.test | LINK | 1.113598 | 7.946154 | 6.869923 | — | — | — |
| connect_pipe.test | RUN | 0.583838 | 2.986210 | 2.559762 | 0.001289 | 0.001462 | 0.001197 |
| connect_pipe_select.test | RUN | 0.606875 | 3.098594 | 2.740494 | 0.001517 | 0.001443 | 0.001233 |
| consign.test | RUN | 0.509966 | 2.917618 | 2.377679 | 0.001363 | 0.001277 | 0.001213 |
| consign_select.test | RUN | 0.517587 | 2.978264 | 2.334680 | 0.001145 | 0.001460 | 0.001180 |
| coroutine.test | LINK | 0.107817 | 0.279506 | 0.320469 | — | — | — |
| coroutine_select.test | LINK | 0.113938 | 0.279358 | 0.324572 | — | — | — |
| deadline_timer.test | RUN | 0.742391 | 3.761997 | 3.459960 | 0.002687 | 0.003301 | 0.003197 |
| deadline_timer_select.test | RUN | 0.752889 | 3.732816 | 3.418255 | 0.002377 | 0.002485 | 0.002603 |
| deferred.test | RUN | 0.113386 | 0.251830 | 0.322116 | 0.001354 | 0.001313 | 0.001172 |
| deferred_select.test | RUN | 0.112327 | 0.254727 | 0.317423 | 0.001147 | 0.001240 | 0.001062 |
| detached.test | LINK | 0.122090 | 0.282071 | 0.345671 | — | — | — |
| detached_select.test | LINK | 0.124193 | 0.281238 | 0.346299 | — | — | — |
| disposition.test | RUN | 0.134816 | 0.704730 | 0.659355 | 0.000921 | 0.001434 | 0.001481 |
| disposition_select.test | RUN | 0.133713 | 0.695925 | 0.671539 | 0.000985 | 0.001289 | 0.001171 |
| error.test | RUN | 0.115137 | 0.677304 | 0.606754 | 0.001026 | 0.001296 | 0.001501 |
| error_select.test | RUN | 0.114212 | 0.672335 | 0.595545 | 0.000906 | 0.001297 | 0.001145 |
| file_base.test | LINK | 0.138614 | 0.545839 | 0.690040 | — | — | — |
| file_base_select.test | LINK | 0.138989 | 0.543378 | 0.639921 | — | — | — |
| fwd_first.test | LINK | 0.322270 | 0.918208 | 1.251802 | — | — | — |
| fwd_last.test | LINK | 0.322771 | 0.857388 | 1.229464 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.119204 | 0.317195 | 0.418597 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.118236 | 0.317724 | 0.413663 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.553309 | 2.971163 | 2.446338 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.549352 | 3.048783 | 2.414585 | — | — | — |
| generic_raw_protocol.test | LINK | 0.558310 | 2.961833 | 2.461014 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.553772 | 3.077715 | 2.399695 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.477373 | 2.506044 | 2.068468 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.477486 | 2.521209 | 2.065657 | — | — | — |
| generic_stream_protocol.test | LINK | 0.510841 | 2.685419 | 2.195883 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.508773 | 2.739846 | 2.199503 | — | — | — |
| high_resolution_timer.test | LINK | 0.204587 | 0.462720 | 0.633490 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.208938 | 0.492540 | 0.645042 | — | — | — |
| immediate.test | LINK | 0.136710 | 0.366454 | 0.409117 | — | — | — |
| immediate_select.test | LINK | 0.138519 | 0.364165 | 0.396608 | — | — | — |
| inline_executor.test | RUN | 0.169065 | 0.574280 | 0.606030 | 0.000894 | 0.000919 | 0.000918 |
| inline_executor_select.test | RUN | 0.170964 | 0.572412 | 0.603628 | 0.000885 | 0.001043 | 0.000901 |
| inline_or_executor.test | RUN | 0.297529 | 1.872830 | 1.204844 | 0.000930 | 0.001133 | 0.000912 |
| inline_or_executor_select.test | RUN | 0.310441 | 1.917954 | 1.309777 | 0.001041 | 0.001181 | 0.000893 |
| io_context.test | RUN | 0.444090 | 3.012721 | 2.113198 | 0.001925 | 0.003390 | 0.001964 |
| io_context_select.test | RUN | 0.447530 | 2.997599 | 2.114725 | 0.001559 | 0.002776 | 0.001814 |
| io_context_strand.test | RUN | 0.414788 | 2.549618 | 1.842210 | 0.001758 | 0.001691 | 0.001711 |
| io_context_strand_select.test | RUN | 0.419187 | 2.482384 | 1.824063 | 0.001580 | 0.001747 | 0.001552 |
| ip_address.test | LINK | 0.149898 | 0.507542 | 0.504235 | — | — | — |
| ip_address_select.test | LINK | 0.147714 | 0.503048 | 0.501805 | — | — | — |
| ip_address_v4.test | LINK | 0.147893 | 0.533672 | 0.894753 | — | — | — |
| ip_address_v4_select.test | LINK | 0.148468 | 0.530051 | 0.894194 | — | — | — |
| ip_address_v6.test | LINK | 0.168791 | 0.705516 | 1.074524 | — | — | — |
| ip_address_v6_select.test | LINK | 0.167982 | 0.697498 | 1.109044 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.127080 | 0.326421 | 0.710229 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.126518 | 0.331503 | 0.705015 | — | — | — |
| ip_basic_resolver.test | LINK | 0.215201 | 0.480571 | 1.051644 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.218501 | 0.494108 | 1.075981 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069563 | 0.155742 | 0.301993 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.068502 | 0.157950 | 0.298720 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.128201 | 0.388038 | 0.684486 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.127613 | 0.328217 | 0.683264 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.121764 | 0.388818 | 0.645391 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.121601 | 0.470103 | 0.648957 | — | — | — |
| ip_host_name.test | RUN | 0.130246 | 0.646234 | 0.755225 | 0.000978 | 0.001272 | 0.001183 |
| ip_host_name_select.test | RUN | 0.130323 | 0.645729 | 0.760928 | 0.000872 | 0.001223 | 0.001318 |
| ip_icmp.test | RUN | 0.689407 | 6.353743 | 5.089438 | 0.000954 | 0.001419 | 0.001255 |
| ip_icmp_select.test | RUN | 0.687650 | 6.499826 | 4.883099 | 0.001041 | 0.001324 | 0.001234 |
| ip_multicast.test | RUN | 0.381518 | 3.133399 | 2.808727 | 0.001069 | 0.001535 | 0.001336 |
| ip_multicast_select.test | RUN | 0.388749 | 3.087163 | 2.768037 | 0.001074 | 0.001465 | 0.001409 |
| ip_resolver_query_base.test | LINK | 0.080883 | 0.265482 | 0.307549 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.080400 | 0.261149 | 0.309266 | — | — | — |
| ip_tcp.test | RUN | 1.046633 | 9.422561 | 7.571103 | 0.001320 | 0.001832 | 0.001634 |
| ip_tcp_select.test | RUN | 1.049235 | 9.787408 | 7.421095 | 0.001156 | 0.001855 | 0.001634 |
| ip_udp.test | RUN | 0.755456 | 6.679001 | 5.209361 | 0.001015 | 0.001643 | 0.001280 |
| ip_udp_select.test | RUN | 0.749299 | 6.788141 | 5.142944 | 0.001050 | 0.001402 | 0.001411 |
| ip_unicast.test | RUN | 0.355667 | 2.866165 | 2.426813 | 0.001004 | 0.001433 | 0.001367 |
| ip_unicast_select.test | RUN | 0.358942 | 2.898646 | 2.406943 | 0.001064 | 0.001392 | 0.001247 |
| ip_v6_only.test | RUN | 0.365549 | 2.947566 | 2.527091 | 0.001006 | 0.001377 | 0.001112 |
| ip_v6_only_select.test | RUN | 0.369638 | 3.070050 | 2.521013 | 0.001009 | 0.001384 | 0.001194 |
| is_read_buffered.test | RUN | 0.245383 | 0.862081 | 1.293860 | 0.000898 | 0.001276 | 0.001264 |
| is_read_buffered_select.test | RUN | 0.250460 | 0.890687 | 1.333202 | 0.000891 | 0.001306 | 0.001078 |
| is_write_buffered.test | RUN | 0.244843 | 0.832499 | 1.253830 | 0.000941 | 0.001207 | 0.001158 |
| is_write_buffered_select.test | RUN | 0.249029 | 0.885111 | 1.283883 | 0.000929 | 0.001428 | 0.001104 |
| local_basic_endpoint.test | LINK | 0.121257 | 0.486837 | 0.659311 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.120721 | 0.486424 | 0.650435 | — | — | — |
| local_connect_pair.test | LINK | 0.340977 | 2.922445 | 2.305139 | — | — | — |
| local_connect_pair_select.test | LINK | 0.342267 | 2.915486 | 2.301702 | — | — | — |
| local_datagram_protocol.test | LINK | 0.468770 | 3.815448 | 3.282532 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.479261 | 3.862835 | 3.194480 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.481950 | 3.761218 | 3.253590 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.485562 | 3.839735 | 3.276029 | — | — | — |
| local_stream_protocol.test | LINK | 0.445702 | 3.558170 | 3.118211 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.454004 | 3.599369 | 3.114507 | — | — | — |
| placeholders.test | LINK | 0.076900 | 0.257984 | 0.326267 | — | — | — |
| placeholders_select.test | LINK | 0.076538 | 0.261933 | 0.333028 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.212789 | 0.727317 | 0.992819 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.223488 | 0.786115 | 1.211875 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.215827 | 0.728927 | 0.968917 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.224727 | 0.781038 | 1.174579 | — | — | — |
| posix_descriptor_base.test | LINK | 0.083342 | 0.267544 | 0.323742 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.083740 | 0.267558 | 0.317972 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.464361 | 3.660005 | 3.026946 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.473763 | 3.618243 | 3.114035 | — | — | — |
| prepend.test | RUN | 0.389493 | 2.913408 | 2.390075 | 0.001595 | 0.001260 | 0.001209 |
| prepend_select.test | RUN | 0.399378 | 2.975304 | 2.372624 | 0.001262 | 0.001266 | 0.001164 |
| random_access_file.test | LINK | 0.289424 | 0.650423 | 0.774056 | — | — | — |
| random_access_file_select.test | LINK | 0.300384 | 0.691766 | 0.975066 | — | — | — |
| read.test | RUN | 1.683173 | 18.201793 | 13.659475 | 0.002008 | 0.001671 | 0.001609 |
| read_select.test | RUN | 1.690800 | 18.298322 | 13.906747 | 0.001796 | 0.001729 | 0.001662 |
| read_at.test | RUN | 1.688814 | 23.800509 | 17.999456 | 0.001973 | 0.002110 | 0.001955 |
| read_at_select.test | RUN | 1.704035 | 23.604452 | 18.161448 | 0.002028 | 0.002192 | 0.001948 |
| read_until.test | RUN | 0.877091 | 7.134448 | 5.267160 | 0.001628 | 0.001266 | 0.001365 |
| read_until_select.test | RUN | 0.889685 | 7.147646 | 5.460682 | 0.001359 | 0.001393 | 0.001346 |
| readable_pipe.test | LINK | 0.548567 | 2.882408 | 2.389053 | — | — | — |
| readable_pipe_select.test | LINK | 0.563861 | 3.053469 | 2.553895 | — | — | — |
| recycling_allocator.test | RUN | 0.156088 | 0.409552 | 0.467990 | 0.001249 | 0.001246 | 0.001141 |
| recycling_allocator_select.test | RUN | 0.159114 | 0.407360 | 0.469216 | 0.001139 | 0.001268 | 0.001213 |
| redirect_disposition.test | LINK | 0.697777 | 4.065630 | 3.640119 | — | — | — |
| redirect_disposition_select.test | LINK | 0.707923 | 4.011061 | 3.614525 | — | — | — |
| redirect_error.test | LINK | 0.623123 | 3.382948 | 3.151989 | — | — | — |
| redirect_error_select.test | LINK | 0.631636 | 3.364136 | 3.124116 | — | — | — |
| registered_buffer.test | LINK | 0.155759 | 0.325362 | 0.422075 | — | — | — |
| registered_buffer_select.test | LINK | 0.148493 | 0.331151 | 0.424851 | — | — | — |
| signal_set.test | RUN | 0.522222 | 2.866929 | 2.271185 | 0.001177 | 0.001197 | 0.001146 |
| signal_set_select.test | RUN | 0.540852 | 2.991636 | 2.445027 | 0.001256 | 0.001185 | 0.001151 |
| signal_set_base.test | LINK | 0.118702 | 0.256963 | 0.312527 | — | — | — |
| signal_set_base_select.test | LINK | 0.117081 | 0.259218 | 0.314360 | — | — | — |
| socket_base.test | RUN | 0.632484 | 4.180559 | 3.391948 | 0.001553 | 0.001515 | 0.001353 |
| socket_base_select.test | RUN | 0.640618 | 4.013466 | 3.388703 | 0.001315 | 0.001336 | 0.001255 |
| spawn.test | RUN | 1.109429 | 6.907697 | 5.912316 | 0.001532 | 0.001666 | 0.001434 |
| spawn_select.test | RUN | 1.114390 | 6.935262 | 5.843029 | 0.001482 | 0.001520 | 0.001355 |
| static_thread_pool.test | RUN | 0.273936 | 0.649382 | 0.754678 | 0.001221 | 0.001259 | 0.001177 |
| static_thread_pool_select.test | RUN | 0.289207 | 0.692012 | 1.017858 | 0.001153 | 0.001246 | 0.001138 |
| steady_timer.test | LINK | 0.309123 | 0.696995 | 1.083437 | — | — | — |
| steady_timer_select.test | LINK | 0.322683 | 0.720094 | 1.073514 | — | — | — |
| strand.test | RUN | 0.687196 | 3.903367 | 3.471729 | 0.001882 | 0.001949 | 0.001846 |
| strand_select.test | RUN | 0.697122 | 3.851384 | 3.509799 | 0.001796 | 0.001924 | 0.002251 |
| stream_file.test | LINK | 0.288907 | 0.618642 | 0.785593 | — | — | — |
| stream_file_select.test | LINK | 0.307249 | 0.562890 | 0.993680 | — | — | — |
| streambuf.test | RUN | 0.176802 | 0.363607 | 0.575314 | 0.000957 | 0.000958 | 0.001156 |
| streambuf_select.test | RUN | 0.166461 | 0.365089 | 0.461341 | 0.000917 | 0.000925 | 0.000803 |
| system_timer.test | LINK | 0.450924 | 2.471447 | 2.321860 | — | — | — |
| system_timer_select.test | LINK | 0.451380 | 2.434105 | 1.997524 | — | — | — |
| system_context.test | LINK | 0.192698 | 0.419995 | 0.466394 | — | — | — |
| system_context_select.test | LINK | 0.197059 | 0.446696 | 0.589542 | — | — | — |
| system_executor.test | LINK | 0.259049 | 1.410201 | 0.949568 | — | — | — |
| system_executor_select.test | LINK | 0.265310 | 1.362935 | 1.052509 | — | — | — |
| this_coro.test | LINK | 0.069763 | 0.156284 | 0.181661 | — | — | — |
| this_coro_select.test | LINK | 0.071740 | 0.153834 | 0.183126 | — | — | — |
| thread_pool.test | RUN | 0.312723 | 1.803655 | 1.236749 | 0.001670 | 0.001587 | 0.001603 |
| thread_pool_select.test | RUN | 0.320703 | 1.807887 | 1.326745 | 0.001585 | 0.001518 | 0.001486 |
| time_traits.test | LINK | 0.162034 | 0.328519 | 0.369407 | — | — | — |
| time_traits_select.test | LINK | 0.159832 | 0.326068 | 0.390243 | — | — | — |
| ts_buffer.test | LINK | 0.152936 | 0.530394 | 0.407902 | — | — | — |
| ts_buffer_select.test | LINK | 0.153637 | 0.545656 | 0.399574 | — | — | — |
| ts_executor.test | LINK | 0.221568 | 0.775124 | 0.616865 | — | — | — |
| ts_executor_select.test | LINK | 0.231034 | 0.813226 | 0.736746 | — | — | — |
| ts_internet.test | LINK | 0.244140 | 0.851507 | 0.858920 | — | — | — |
| ts_internet_select.test | LINK | 0.251295 | 0.856919 | 0.921671 | — | — | — |
| ts_io_context.test | LINK | 0.194846 | 0.643539 | 0.687108 | — | — | — |
| ts_io_context_select.test | LINK | 0.203775 | 0.687411 | 0.970042 | — | — | — |
| ts_net.test | LINK | 0.288007 | 1.012287 | 1.525987 | — | — | — |
| ts_net_select.test | LINK | 0.291031 | 1.027156 | 1.561078 | — | — | — |
| ts_netfwd.test | LINK | 0.286689 | 0.999651 | 1.524646 | — | — | — |
| ts_netfwd_select.test | LINK | 0.288153 | 1.039509 | 1.558776 | — | — | — |
| ts_socket.test | LINK | 0.234108 | 0.791735 | 1.175091 | — | — | — |
| ts_socket_select.test | LINK | 0.246116 | 0.806590 | 1.197445 | — | — | — |
| ts_timer.test | LINK | 0.211366 | 0.708343 | 1.025508 | — | — | — |
| ts_timer_select.test | LINK | 0.214230 | 0.722323 | 1.065798 | — | — | — |
| use_awaitable.test | LINK | 0.068858 | 0.231950 | 0.280271 | — | — | — |
| use_awaitable_select.test | LINK | 0.070564 | 0.229481 | 0.289691 | — | — | — |
| wait_traits.test | LINK | 0.070095 | 0.236054 | 0.283279 | — | — | — |
| wait_traits_select.test | LINK | 0.071002 | 0.231221 | 0.282227 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.070007 | 0.237151 | 0.284472 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.069536 | 0.239090 | 0.281901 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070047 | 0.239908 | 0.285361 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071388 | 0.232771 | 0.281303 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.070238 | 0.231366 | 0.287597 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.073217 | 0.226071 | 0.286196 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071824 | 0.234776 | 0.285501 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.069848 | 0.234111 | 0.285963 | — | — | — |
| windows_object_handle.test | LINK | 0.197350 | 0.650838 | 0.780500 | — | — | — |
| windows_object_handle_select.test | LINK | 0.205504 | 0.679342 | 0.976722 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.204404 | 0.682466 | 0.843279 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.211465 | 0.727927 | 1.054995 | — | — | — |
| windows_random_access_handle.test | LINK | 0.199065 | 0.642696 | 0.778718 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.206116 | 0.692699 | 0.963943 | — | — | — |
| windows_stream_handle.test | LINK | 0.197892 | 0.645532 | 0.771352 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.206074 | 0.698493 | 0.974468 | — | — | — |
| writable_pipe.test | LINK | 0.375032 | 2.879117 | 2.484607 | — | — | — |
| writable_pipe_select.test | LINK | 0.392820 | 2.987959 | 2.605699 | — | — | — |
| write.test | RUN | 1.655937 | 14.878712 | 13.399339 | 0.001451 | 0.001615 | 0.001610 |
| write_select.test | RUN | 1.695480 | 14.988446 | 13.746937 | 0.001727 | 0.001715 | 0.001587 |
| write_at.test | RUN | 1.734045 | 20.453974 | 17.032696 | 0.001973 | 0.001978 | 0.001796 |
| write_at_select.test | RUN | 1.735915 | 20.399550 | 17.497711 | 0.001908 | 0.001866 | 0.001758 |
| any_executor.test | RUN | 0.679136 | 6.498524 | 5.594727 | 0.001913 | 0.001965 | 0.001706 |
| blocking.test | RUN | 1.485324 | 8.911421 | 11.393976 | 0.003306 | 0.003085 | 0.003201 |
| blocking_adaptation.test | RUN | 0.736044 | 3.786448 | 5.084741 | 0.002104 | 0.002071 | 0.001915 |
| context_as.test | RUN | 0.430978 | 2.675115 | 1.716274 | 0.001295 | 0.001415 | 0.001242 |
| executor.test | RUN | 0.108596 | 0.239180 | 0.298940 | 0.001252 | 0.001348 | 0.001135 |
| inline_exception_handling.test | RUN | 1.442993 | 8.369734 | 11.509908 | 0.002354 | 0.002269 | 0.002265 |
| invocable_archetype.test | RUN | 0.104494 | 0.243660 | 0.302057 | 0.001328 | 0.001249 | 0.001069 |
| mapping.test | RUN | 1.474905 | 8.169859 | 10.805461 | 0.002470 | 0.002257 | 0.002326 |
| outstanding_work.test | RUN | 0.671159 | 3.522878 | 4.851653 | 0.002177 | 0.001886 | 0.002068 |
| prefer_only.test | RUN | 0.220095 | 1.410115 | 1.076562 | 0.001367 | 0.001324 | 0.001223 |
| relationship.test | RUN | 0.538638 | 3.121334 | 5.027127 | 0.001512 | 0.001550 | 0.001492 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030× | 1.009×, 1.050× | 1.004× |
| clang | 0.983× | 0.994×, 0.972× | 1.035× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001241s | 0.001257s | 0.001305s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001219s | 0.001242s | 0.001238s | byte equality observed |
| any_completion_handler.test | 8 | 0.001034s | 0.001032s | 0.001018s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001033s | 0.001024s | 0.001026s | byte equality observed |
| any_io_executor.test | 4 | 0.001198s | 0.001211s | 0.001240s | byte equality observed |
| any_io_executor_select.test | 10 | 0.001233s | 0.001205s | 0.001255s | byte equality observed |
| append.test | 10 | 0.000976s | 0.000983s | 0.000977s | byte equality observed |
| append_select.test | 10 | 0.000961s | 0.000969s | 0.000957s | byte equality observed |
| as_tuple.test | 10 | 0.001045s | 0.001055s | 0.001038s | byte equality observed |
| as_tuple_select.test | 10 | 0.000984s | 0.000980s | 0.000987s | byte equality observed |
| bind_allocator.test | 1 | 0.001482s | 0.001440s | 0.001486s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001221s | 0.001165s | 0.001180s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000883s | 0.000933s | 0.000886s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000797s | 0.000821s | 0.000810s | byte equality observed |
| bind_executor.test | 1 | 0.001429s | 0.001481s | 0.001466s | byte equality observed |
| bind_executor_select.test | 1 | 0.001713s | 0.001667s | 0.001674s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000907s | 0.000921s | 0.000898s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000861s | 0.000909s | 0.000872s | byte equality observed |
| buffer.test | 10 | 0.000839s | 0.000848s | 0.000848s | byte equality observed |
| buffer_select.test | 10 | 0.000847s | 0.000816s | 0.000818s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001039s | 0.001048s | 0.001015s | byte equality observed |
| buffered_read_stream_select.test | 9 | 0.001010s | 0.001061s | 0.000997s | byte equality observed |
| buffered_stream.test | 10 | 0.001003s | 0.001010s | 0.000988s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000981s | 0.001010s | 0.000976s | byte equality observed |
| buffered_write_stream.test | 10 | 0.000995s | 0.001035s | 0.000990s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000992s | 0.001010s | 0.000983s | byte equality observed |
| buffers_iterator.test | 10 | 0.000825s | 0.000810s | 0.000830s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000797s | 0.000773s | 0.000819s | byte equality observed |
| cancel_after.test | 1 | 0.003152s | 0.002979s | 0.003247s | byte equality observed |
| cancel_after_select.test | 1 | 0.002580s | 0.002568s | 0.002654s | byte equality observed |
| cancel_at.test | 1 | 0.003115s | 0.003292s | 0.003387s | byte equality observed |
| cancel_at_select.test | 1 | 0.002949s | 0.002965s | 0.003226s | byte equality observed |
| co_composed.test | 10 | 0.000873s | 0.000869s | 0.000891s | byte equality observed |
| co_composed_select.test | 10 | 0.000825s | 0.000806s | 0.000857s | byte equality observed |
| compose.test | 1 | 0.001439s | 0.001530s | 0.001533s | byte equality observed |
| compose_select.test | 1 | 0.001179s | 0.001229s | 0.001240s | byte equality observed |
| composed.test | 1 | 0.001766s | 0.001729s | 0.001818s | byte equality observed |
| composed_select.test | 1 | 0.001340s | 0.001323s | 0.001473s | byte equality observed |
| config.test | 10 | 0.000949s | 0.000924s | 0.000926s | byte equality observed |
| config_select.test | 10 | 0.000924s | 0.000886s | 0.000913s | byte equality observed |
| connect_pipe.test | 10 | 0.000912s | 0.000897s | 0.000916s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000879s | 0.000882s | 0.000857s | byte equality observed |
| consign.test | 10 | 0.000866s | 0.000921s | 0.000911s | byte equality observed |
| consign_select.test | 10 | 0.000845s | 0.000875s | 0.000867s | byte equality observed |
| deadline_timer.test | 1 | 0.002246s | 0.002148s | 0.002279s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002019s | 0.001948s | 0.002012s | byte equality observed |
| deferred.test | 10 | 0.000834s | 0.000835s | 0.000827s | byte equality observed |
| deferred_select.test | 10 | 0.000752s | 0.000761s | 0.000751s | byte equality observed |
| disposition.test | 10 | 0.000794s | 0.000790s | 0.000798s | byte equality observed |
| disposition_select.test | 10 | 0.000797s | 0.000792s | 0.000776s | byte equality observed |
| error.test | 10 | 0.000791s | 0.000774s | 0.000765s | byte equality observed |
| error_select.test | 10 | 0.000779s | 0.000775s | 0.000772s | byte equality observed |
| inline_executor.test | 10 | 0.000787s | 0.000781s | 0.000769s | byte equality observed |
| inline_executor_select.test | 10 | 0.000788s | 0.000775s | 0.000757s | byte equality observed |
| inline_or_executor.test | 10 | 0.000789s | 0.000788s | 0.000782s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000794s | 0.000788s | 0.000766s | byte equality observed |
| io_context.test | 1 | 0.001815s | 0.001788s | 0.001832s | byte equality observed |
| io_context_select.test | 1 | 0.001970s | 0.002096s | 0.002129s | byte equality observed |
| io_context_strand.test | 1 | 0.002099s | 0.002134s | 0.002079s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001811s | 0.001772s | 0.001852s | byte equality observed |
| ip_host_name.test | 10 | 0.000861s | 0.000866s | 0.000855s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000773s | 0.000773s | 0.000769s | byte equality observed |
| ip_icmp.test | 10 | 0.000788s | 0.000790s | 0.000771s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000781s | 0.000792s | 0.000771s | byte equality observed |
| ip_multicast.test | 10 | 0.000854s | 0.000846s | 0.000843s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000840s | 0.000832s | 0.000817s | byte equality observed |
| ip_tcp.test | 10 | 0.001056s | 0.001043s | 0.001051s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001012s | 0.001003s | 0.001007s | byte equality observed |
| ip_udp.test | 10 | 0.000859s | 0.000861s | 0.000848s | byte equality observed |
| ip_udp_select.test | 10 | 0.000852s | 0.000852s | 0.000842s | byte equality observed |
| ip_unicast.test | 10 | 0.000825s | 0.000819s | 0.000814s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000817s | 0.000809s | 0.000800s | byte equality observed |
| ip_v6_only.test | 10 | 0.000820s | 0.000816s | 0.000814s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000809s | 0.000808s | 0.000794s | byte equality observed |
| is_read_buffered.test | 10 | 0.000751s | 0.000746s | 0.000749s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000757s | 0.000749s | 0.000744s | byte equality observed |
| is_write_buffered.test | 10 | 0.000753s | 0.000754s | 0.000747s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000750s | 0.000750s | 0.000750s | byte equality observed |
| prepend.test | 10 | 0.000814s | 0.000825s | 0.000807s | byte equality observed |
| prepend_select.test | 10 | 0.000790s | 0.000808s | 0.000783s | byte equality observed |
| read.test | 10 | 0.001105s | 0.001166s | 0.001081s | byte equality observed |
| read_at.test | 10 | 0.001320s | 0.001481s | 0.001328s | byte equality observed |
| read_at_select.test | 10 | 0.001330s | 0.001506s | 0.001334s | byte equality observed |
| read_select.test | 10 | 0.001113s | 0.001182s | 0.001082s | byte equality observed |
| read_until.test | 10 | 0.000920s | 0.000990s | 0.000900s | byte equality observed |
| read_until_select.test | 10 | 0.000954s | 0.000994s | 0.000895s | byte equality observed |
| recycling_allocator.test | 10 | 0.000831s | 0.000848s | 0.000786s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000831s | 0.000854s | 0.000828s | byte equality observed |
| signal_set.test | 10 | 0.000859s | 0.000873s | 0.000838s | byte equality observed |
| signal_set_select.test | 10 | 0.000849s | 0.000851s | 0.000857s | byte equality observed |
| socket_base.test | 10 | 0.000915s | 0.000935s | 0.000931s | byte equality observed |
| socket_base_select.test | 10 | 0.000909s | 0.000904s | 0.000906s | byte equality observed |
| spawn.test | 10 | 0.001014s | 0.000994s | 0.001007s | byte equality observed |
| spawn_select.test | 10 | 0.000978s | 0.000990s | 0.000996s | byte equality observed |
| static_thread_pool.test | 10 | 0.000824s | 0.000818s | 0.000797s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000774s | 0.000790s | 0.000813s | byte equality observed |
| strand.test | 1 | 0.001704s | 0.001729s | 0.001723s | byte equality observed |
| strand_select.test | 1 | 0.001487s | 0.001470s | 0.001467s | byte equality observed |
| streambuf.test | 10 | 0.000852s | 0.000856s | 0.000891s | byte equality observed |
| streambuf_select.test | 10 | 0.000856s | 0.000846s | 0.000866s | byte equality observed |
| thread_pool.test | 10 | 0.001596s | 0.001540s | 0.001651s | byte equality observed |
| thread_pool_select.test | 10 | 0.001595s | 0.001577s | 0.001583s | byte equality observed |
| write.test | 10 | 0.001227s | 0.001188s | 0.001177s | byte equality observed |
| write_at.test | 10 | 0.001319s | 0.001344s | 0.001291s | byte equality observed |
| write_at_select.test | 10 | 0.001329s | 0.001306s | 0.001281s | byte equality observed |
| write_select.test | 10 | 0.001216s | 0.001173s | 0.001174s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
