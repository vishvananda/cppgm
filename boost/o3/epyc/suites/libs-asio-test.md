# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.632264 | 3.697304 | 3.665639 | 0.002493 | 0.002299 | 0.002348 |
| any_completion_executor_select.test | RUN | 0.690859 | 3.700713 | 3.681882 | 0.002412 | 0.002308 | 0.002110 |
| any_completion_handler.test | RUN | 0.726957 | 3.345471 | 3.238343 | 0.001918 | 0.001935 | 0.001978 |
| any_completion_handler_select.test | RUN | 0.689296 | 3.445467 | 3.591603 | 0.001772 | 0.002054 | 0.002070 |
| any_io_executor.test | RUN | 0.646184 | 3.942837 | 3.889157 | 0.002058 | 0.002436 | 0.002530 |
| any_io_executor_select.test | RUN | 0.662443 | 3.909950 | 4.127691 | 0.002084 | 0.002752 | 0.002539 |
| append.test | RUN | 0.594375 | 3.172419 | 2.942053 | 0.001464 | 0.001953 | 0.001823 |
| append_select.test | RUN | 0.591423 | 3.246822 | 2.865909 | 0.001846 | 0.001974 | 0.001948 |
| as_tuple.test | RUN | 0.770569 | 3.763858 | 4.044804 | 0.001726 | 0.002044 | 0.002190 |
| as_tuple_select.test | RUN | 0.778643 | 3.743370 | 4.114125 | 0.001521 | 0.001771 | 0.001593 |
| associated_allocator.test | LINK | 0.163038 | 0.346604 | 0.496229 | — | — | — |
| associated_allocator_select.test | LINK | 0.171595 | 0.344776 | 0.488339 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.180089 | 0.377210 | 0.531886 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.179586 | 0.372808 | 0.540970 | — | — | — |
| associated_executor.test | LINK | 0.263883 | 0.646529 | 0.842290 | — | — | — |
| associated_executor_select.test | LINK | 0.263695 | 0.633059 | 0.818715 | — | — | — |
| associated_immediate_executor.test | LINK | 0.236175 | 0.595629 | 0.746633 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.242532 | 0.568094 | 0.723939 | — | — | — |
| associator.test | LINK | 0.133965 | 0.292493 | 0.412923 | — | — | — |
| associator_select.test | LINK | 0.135036 | 0.272951 | 0.350715 | — | — | — |
| awaitable.test | LINK | 0.133962 | 0.276963 | 0.405253 | — | — | — |
| awaitable_select.test | LINK | 0.134796 | 0.278263 | 0.408587 | — | — | — |
| basic_datagram_socket.test | LINK | 0.401091 | 0.861515 | 1.495358 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.412034 | 0.903842 | 1.525672 | — | — | — |
| basic_deadline_timer.test | LINK | 0.482198 | 1.041082 | 1.718989 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.493346 | 1.057749 | 1.739687 | — | — | — |
| basic_file.test | LINK | 0.140013 | 0.289879 | 0.383540 | — | — | — |
| basic_file_select.test | LINK | 0.131553 | 0.275144 | 0.383992 | — | — | — |
| basic_random_access_file.test | LINK | 0.140613 | 0.277539 | 0.385997 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.142406 | 0.273891 | 0.387586 | — | — | — |
| basic_raw_socket.test | LINK | 0.399785 | 0.874263 | 1.444741 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.413333 | 0.902220 | 1.518424 | — | — | — |
| basic_readable_pipe.test | LINK | 0.396524 | 0.849833 | 1.266545 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.416404 | 0.889085 | 1.526236 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.402604 | 0.886061 | 1.436507 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.416466 | 0.881668 | 1.468295 | — | — | — |
| basic_signal_set.test | LINK | 0.381545 | 0.839413 | 1.149077 | — | — | — |
| basic_signal_set_select.test | LINK | 0.395380 | 0.873760 | 1.426099 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.404365 | 0.887670 | 1.551602 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.416276 | 0.923476 | 1.578356 | — | — | — |
| basic_stream_file.test | LINK | 0.134096 | 0.276748 | 0.416647 | — | — | — |
| basic_stream_file_select.test | LINK | 0.143748 | 0.283540 | 0.391232 | — | — | — |
| basic_stream_socket.test | LINK | 0.407624 | 0.887920 | 1.461526 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.410087 | 0.926585 | 1.480026 | — | — | — |
| basic_streambuf.test | LINK | 0.202436 | 0.394141 | 0.582995 | — | — | — |
| basic_streambuf_select.test | LINK | 0.204270 | 0.402700 | 0.587633 | — | — | — |
| basic_waitable_timer.test | LINK | 0.386107 | 0.823409 | 1.368156 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.383506 | 0.855686 | 1.409809 | — | — | — |
| basic_writable_pipe.test | LINK | 0.387497 | 0.839827 | 1.249249 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.420931 | 0.901785 | 1.562959 | — | — | — |
| bind_allocator.test | RUN | 0.644536 | 3.194171 | 3.232514 | 0.002062 | 0.002282 | 0.002277 |
| bind_allocator_select.test | RUN | 0.670486 | 3.240061 | 3.283125 | 0.001944 | 0.001878 | 0.001911 |
| bind_cancellation_slot.test | RUN | 0.662511 | 3.240371 | 3.254281 | 0.001343 | 0.001486 | 0.001580 |
| bind_cancellation_slot_select.test | RUN | 0.672937 | 3.253116 | 3.117428 | 0.001479 | 0.001436 | 0.001368 |
| bind_executor.test | RUN | 0.431048 | 2.245763 | 2.009832 | 0.002048 | 0.002094 | 0.002045 |
| bind_executor_select.test | RUN | 0.453661 | 2.276619 | 2.024636 | 0.001902 | 0.001951 | 0.002065 |
| bind_immediate_executor.test | RUN | 0.337675 | 1.842189 | 1.269087 | 0.001421 | 0.001382 | 0.001405 |
| bind_immediate_executor_select.test | RUN | 0.338965 | 1.816891 | 1.405934 | 0.001313 | 0.001427 | 0.001498 |
| buffer.test | RUN | 0.205176 | 0.774384 | 0.810473 | 0.001361 | 0.001359 | 0.001454 |
| buffer_select.test | RUN | 0.203462 | 0.783497 | 0.805513 | 0.001272 | 0.001365 | 0.001424 |
| buffer_registration.test | LINK | 0.167042 | 0.400428 | 0.468630 | — | — | — |
| buffer_registration_select.test | LINK | 0.175335 | 0.403978 | 0.464506 | — | — | — |
| buffered_read_stream.test | RUN | 0.714514 | 4.989825 | 4.819189 | 0.001768 | 0.002118 | 0.002422 |
| buffered_read_stream_select.test | RUN | 0.736196 | 5.086860 | 4.861204 | 0.001732 | 0.002332 | 0.002358 |
| buffered_stream.test | RUN | 1.104218 | 7.726051 | 8.068539 | 0.002284 | 0.002316 | 0.002428 |
| buffered_stream_select.test | RUN | 1.166655 | 7.829364 | 7.897910 | 0.002176 | 0.002445 | 0.002061 |
| buffered_write_stream.test | RUN | 1.207665 | 6.689382 | 6.882117 | 0.002272 | 0.002474 | 0.002284 |
| buffered_write_stream_select.test | RUN | 1.193018 | 6.856770 | 6.532656 | 0.002032 | 0.002497 | 0.002331 |
| buffers_iterator.test | RUN | 0.374291 | 0.654733 | 1.111336 | 0.001705 | 0.001794 | 0.001827 |
| buffers_iterator_select.test | RUN | 0.374923 | 0.651231 | 1.114361 | 0.001621 | 0.001750 | 0.001881 |
| cancel_after.test | RUN | 1.006989 | 5.167889 | 5.107114 | 0.003841 | 0.003498 | 0.004129 |
| cancel_after_select.test | RUN | 1.020958 | 5.138232 | 4.999069 | 0.003479 | 0.003979 | 0.004118 |
| cancel_at.test | RUN | 1.008569 | 4.672462 | 4.806293 | 0.003304 | 0.003382 | 0.003709 |
| cancel_at_select.test | RUN | 1.003006 | 4.477932 | 4.759161 | 0.003219 | 0.003286 | 0.003613 |
| cancellation_signal.test | LINK | 0.128947 | 0.243738 | 0.302459 | — | — | — |
| cancellation_signal_select.test | LINK | 0.175663 | 0.243733 | 0.311963 | — | — | — |
| cancellation_state.test | LINK | 0.173711 | 0.242158 | 0.380267 | — | — | — |
| cancellation_state_select.test | LINK | 0.177042 | 0.245750 | 0.467708 | — | — | — |
| cancellation_type.test | LINK | 0.140428 | 0.192232 | 0.380573 | — | — | — |
| cancellation_type_select.test | LINK | 0.136302 | 0.195299 | 0.385714 | — | — | — |
| co_composed.test | RUN | 0.135752 | 0.195561 | 0.370110 | 0.001809 | 0.001475 | 0.001863 |
| co_composed_select.test | RUN | 0.137504 | 0.202524 | 0.382170 | 0.001582 | 0.001448 | 0.001708 |
| co_spawn.test | LINK | 0.138096 | 0.279494 | 0.352908 | — | — | — |
| co_spawn_select.test | LINK | 0.138085 | 0.281341 | 0.381928 | — | — | — |
| completion_condition.test | LINK | 0.174278 | 0.358606 | 0.507889 | — | — | — |
| completion_condition_select.test | LINK | 0.172479 | 0.413474 | 0.525882 | — | — | — |
| compose.test | RUN | 0.801595 | 4.018460 | 4.101175 | 0.002302 | 0.001689 | 0.002493 |
| compose_select.test | RUN | 0.782480 | 3.979576 | 4.102832 | 0.002178 | 0.002268 | 0.002350 |
| composed.test | RUN | 0.776367 | 4.005528 | 3.979681 | 0.001983 | 0.002012 | 0.002062 |
| composed_select.test | RUN | 0.773204 | 3.875566 | 3.909948 | 0.001735 | 0.001857 | 0.001953 |
| config.test | RUN | 0.351908 | 2.472335 | 1.739892 | 0.001813 | 0.001915 | 0.001837 |
| config_select.test | RUN | 0.443680 | 2.706694 | 2.004547 | 0.001874 | 0.001953 | 0.001879 |
| connect.test | LINK | 1.225859 | 8.325469 | 8.601111 | — | — | — |
| connect_select.test | LINK | 1.224507 | 8.280437 | 8.634142 | — | — | — |
| connect_pipe.test | RUN | 0.689197 | 3.208250 | 3.142633 | 0.001855 | 0.001985 | 0.002042 |
| connect_pipe_select.test | RUN | 0.702440 | 3.346929 | 3.376405 | 0.001663 | 0.001973 | 0.002006 |
| consign.test | RUN | 0.591650 | 3.137488 | 2.820035 | 0.001900 | 0.001860 | 0.001870 |
| consign_select.test | RUN | 0.602387 | 3.233159 | 2.798776 | 0.001934 | 0.001969 | 0.001776 |
| coroutine.test | LINK | 0.139929 | 0.338622 | 0.416677 | — | — | — |
| coroutine_select.test | LINK | 0.148280 | 0.331141 | 0.389648 | — | — | — |
| deadline_timer.test | RUN | 0.847616 | 4.088250 | 4.146752 | 0.003050 | 0.002975 | 0.003443 |
| deadline_timer_select.test | RUN | 0.860912 | 4.066381 | 4.181574 | 0.002835 | 0.003124 | 0.003062 |
| deferred.test | RUN | 0.154201 | 0.300228 | 0.390207 | 0.001748 | 0.001582 | 0.001833 |
| deferred_select.test | RUN | 0.156572 | 0.309905 | 0.388952 | 0.001761 | 0.001685 | 0.001922 |
| detached.test | LINK | 0.172803 | 0.343920 | 0.458661 | — | — | — |
| detached_select.test | LINK | 0.172060 | 0.339754 | 0.448633 | — | — | — |
| disposition.test | RUN | 0.172194 | 0.812060 | 0.819356 | 0.001443 | 0.001909 | 0.001944 |
| disposition_select.test | RUN | 0.157190 | 0.793602 | 0.817383 | 0.001402 | 0.001971 | 0.001952 |
| error.test | RUN | 0.145452 | 0.773049 | 0.728333 | 0.001389 | 0.001818 | 0.001837 |
| error_select.test | RUN | 0.150208 | 0.760715 | 0.730650 | 0.001380 | 0.001840 | 0.001844 |
| file_base.test | LINK | 0.186833 | 0.633429 | 0.798836 | — | — | — |
| file_base_select.test | LINK | 0.184987 | 0.584496 | 0.697983 | — | — | — |
| fwd_first.test | LINK | 0.403537 | 0.947566 | 1.479110 | — | — | — |
| fwd_last.test | LINK | 0.406871 | 0.909933 | 1.455385 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.163598 | 0.375985 | 0.530062 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.163338 | 0.375871 | 0.522172 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.609746 | 3.227323 | 2.887143 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.608576 | 3.304764 | 2.873815 | — | — | — |
| generic_raw_protocol.test | LINK | 0.614000 | 3.229677 | 2.781105 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.616843 | 3.317889 | 2.774755 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.530159 | 2.736956 | 2.368027 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.541342 | 2.764945 | 2.396097 | — | — | — |
| generic_stream_protocol.test | LINK | 0.567704 | 2.951829 | 2.532714 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.570673 | 3.019043 | 2.543966 | — | — | — |
| high_resolution_timer.test | LINK | 0.261723 | 0.555848 | 0.801866 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.267791 | 0.576112 | 0.839942 | — | — | — |
| immediate.test | LINK | 0.183546 | 0.428898 | 0.514012 | — | — | — |
| immediate_select.test | LINK | 0.179215 | 0.424342 | 0.509966 | — | — | — |
| inline_executor.test | RUN | 0.224243 | 0.655976 | 0.733129 | 0.001462 | 0.001398 | 0.001362 |
| inline_executor_select.test | RUN | 0.229027 | 0.664725 | 0.748277 | 0.001427 | 0.001390 | 0.001406 |
| inline_or_executor.test | RUN | 0.347718 | 1.923369 | 1.413234 | 0.001390 | 0.001385 | 0.001478 |
| inline_or_executor_select.test | RUN | 0.357461 | 1.972527 | 1.567208 | 0.001414 | 0.001482 | 0.001352 |
| io_context.test | RUN | 0.498886 | 2.893887 | 2.411014 | 0.002235 | 0.002299 | 0.002263 |
| io_context_select.test | RUN | 0.510807 | 2.856334 | 2.443195 | 0.002221 | 0.002063 | 0.002358 |
| io_context_strand.test | RUN | 0.474398 | 2.480620 | 2.182062 | 0.002271 | 0.002240 | 0.002410 |
| io_context_strand_select.test | RUN | 0.480956 | 2.466855 | 2.230718 | 0.002054 | 0.001979 | 0.002284 |
| ip_address.test | LINK | 0.180727 | 0.583777 | 0.622395 | — | — | — |
| ip_address_select.test | LINK | 0.185425 | 0.581399 | 0.620083 | — | — | — |
| ip_address_v4.test | LINK | 0.189884 | 0.614870 | 0.691179 | — | — | — |
| ip_address_v4_select.test | LINK | 0.188537 | 0.618038 | 0.690415 | — | — | — |
| ip_address_v6.test | LINK | 0.211144 | 0.795097 | 0.848156 | — | — | — |
| ip_address_v6_select.test | LINK | 0.213171 | 0.802328 | 0.842350 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.168547 | 0.401787 | 0.555197 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.177531 | 0.397236 | 0.549446 | — | — | — |
| ip_basic_resolver.test | LINK | 0.266409 | 0.566448 | 0.839305 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.269078 | 0.592112 | 0.959525 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.094236 | 0.186727 | 0.298059 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.092408 | 0.189945 | 0.377075 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.165477 | 0.388829 | 0.903602 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.164662 | 0.388181 | 0.927938 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.162466 | 0.373018 | 0.886264 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.156037 | 0.372906 | 0.880738 | — | — | — |
| ip_host_name.test | RUN | 0.169549 | 0.509372 | 0.997491 | 0.001321 | 0.001887 | 0.001868 |
| ip_host_name_select.test | RUN | 0.169402 | 0.544629 | 0.957959 | 0.001325 | 0.001364 | 0.001644 |
| ip_icmp.test | RUN | 0.752626 | 6.590287 | 6.056805 | 0.001373 | 0.001950 | 0.001924 |
| ip_icmp_select.test | RUN | 0.751893 | 6.820665 | 5.937547 | 0.001421 | 0.001944 | 0.001730 |
| ip_multicast.test | RUN | 0.443976 | 3.426743 | 3.396474 | 0.001613 | 0.001864 | 0.001533 |
| ip_multicast_select.test | RUN | 0.454114 | 3.423113 | 3.395371 | 0.001499 | 0.001832 | 0.002024 |
| ip_resolver_query_base.test | LINK | 0.109506 | 0.321198 | 0.392268 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.107821 | 0.317961 | 0.397542 | — | — | — |
| ip_tcp.test | RUN | 1.109888 | 9.750690 | 9.057389 | 0.001931 | 0.002814 | 0.002848 |
| ip_tcp_select.test | RUN | 1.102329 | 10.169753 | 8.770100 | 0.001913 | 0.002690 | 0.002655 |
| ip_udp.test | RUN | 0.811056 | 7.071482 | 6.299270 | 0.001513 | 0.002088 | 0.002194 |
| ip_udp_select.test | RUN | 0.787711 | 7.257192 | 6.154361 | 0.001523 | 0.002066 | 0.001828 |
| ip_unicast.test | RUN | 0.415433 | 3.085318 | 2.987573 | 0.001459 | 0.001880 | 0.001740 |
| ip_unicast_select.test | RUN | 0.416235 | 3.118363 | 3.018969 | 0.001403 | 0.001546 | 0.002026 |
| ip_v6_only.test | RUN | 0.423976 | 3.165941 | 3.157503 | 0.001459 | 0.001971 | 0.001787 |
| ip_v6_only_select.test | RUN | 0.433490 | 3.282460 | 3.104633 | 0.001447 | 0.001992 | 0.001578 |
| is_read_buffered.test | RUN | 0.312915 | 0.996724 | 1.689993 | 0.001392 | 0.001857 | 0.001928 |
| is_read_buffered_select.test | RUN | 0.313232 | 1.021519 | 1.774345 | 0.001327 | 0.001754 | 0.001701 |
| is_write_buffered.test | RUN | 0.303137 | 0.987656 | 1.705621 | 0.001386 | 0.001793 | 0.001822 |
| is_write_buffered_select.test | RUN | 0.309052 | 1.023447 | 1.765898 | 0.001365 | 0.001852 | 0.001996 |
| local_basic_endpoint.test | LINK | 0.161565 | 0.561734 | 0.891815 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.163693 | 0.552226 | 0.895458 | — | — | — |
| local_connect_pair.test | LINK | 0.394108 | 3.152389 | 2.853462 | — | — | — |
| local_connect_pair_select.test | LINK | 0.404758 | 3.107513 | 2.836506 | — | — | — |
| local_datagram_protocol.test | LINK | 0.527395 | 4.119304 | 3.959053 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.535215 | 4.135658 | 3.832742 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.543975 | 4.058388 | 3.991740 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.651668 | 4.088318 | 3.998224 | — | — | — |
| local_stream_protocol.test | LINK | 0.718546 | 3.867761 | 3.719540 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.758923 | 3.920745 | 3.703010 | — | — | — |
| placeholders.test | LINK | 0.147879 | 0.321631 | 0.418182 | — | — | — |
| placeholders_select.test | LINK | 0.148425 | 0.315571 | 0.423189 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.394612 | 0.847173 | 1.233454 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.404060 | 0.872456 | 1.530043 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.383930 | 0.842567 | 1.241887 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.404075 | 0.891872 | 1.541880 | — | — | — |
| posix_descriptor_base.test | LINK | 0.166977 | 0.320842 | 0.432080 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.161203 | 0.332404 | 0.435683 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.764209 | 3.861573 | 3.747498 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.783461 | 3.925249 | 3.823732 | — | — | — |
| prepend.test | RUN | 0.601449 | 3.137969 | 2.986844 | 0.001829 | 0.001898 | 0.001570 |
| prepend_select.test | RUN | 0.598035 | 3.243457 | 2.952147 | 0.001776 | 0.001677 | 0.001541 |
| random_access_file.test | LINK | 0.348741 | 0.756523 | 1.030914 | — | — | — |
| random_access_file_select.test | LINK | 0.366606 | 0.813975 | 1.282396 | — | — | — |
| read.test | RUN | 1.812461 | 19.911930 | 17.002331 | 0.002475 | 0.002448 | 0.002314 |
| read_select.test | RUN | 1.839160 | 19.612684 | 17.118414 | 0.002455 | 0.002481 | 0.002604 |
| read_at.test | RUN | 1.834103 | 26.660554 | 22.562864 | 0.003238 | 0.003206 | 0.002852 |
| read_at_select.test | RUN | 1.833181 | 26.739968 | 22.599642 | 0.002814 | 0.003052 | 0.002716 |
| read_until.test | RUN | 0.958527 | 7.446837 | 6.414590 | 0.001999 | 0.002006 | 0.002094 |
| read_until_select.test | RUN | 0.971382 | 7.413366 | 6.633404 | 0.001807 | 0.002020 | 0.002042 |
| readable_pipe.test | LINK | 0.616769 | 3.163641 | 2.916480 | — | — | — |
| readable_pipe_select.test | LINK | 0.633700 | 3.331586 | 3.163095 | — | — | — |
| recycling_allocator.test | RUN | 0.202331 | 0.474019 | 0.579668 | 0.001740 | 0.001671 | 0.001822 |
| recycling_allocator_select.test | RUN | 0.199101 | 0.477618 | 0.583618 | 0.001840 | 0.001764 | 0.001836 |
| redirect_disposition.test | LINK | 0.802425 | 4.420170 | 4.455788 | — | — | — |
| redirect_disposition_select.test | LINK | 0.803520 | 4.418257 | 4.416223 | — | — | — |
| redirect_error.test | LINK | 0.721145 | 3.675513 | 3.923340 | — | — | — |
| redirect_error_select.test | LINK | 0.719583 | 3.645872 | 3.959703 | — | — | — |
| registered_buffer.test | LINK | 0.194115 | 0.388180 | 0.526361 | — | — | — |
| registered_buffer_select.test | LINK | 0.192791 | 0.391301 | 0.534550 | — | — | — |
| signal_set.test | RUN | 0.586558 | 3.102027 | 2.799489 | 0.001742 | 0.001896 | 0.001932 |
| signal_set_select.test | RUN | 0.611027 | 3.227817 | 3.072770 | 0.001831 | 0.001850 | 0.001893 |
| signal_set_base.test | LINK | 0.166917 | 0.312190 | 0.400646 | — | — | — |
| signal_set_base_select.test | LINK | 0.157663 | 0.299353 | 0.416548 | — | — | — |
| socket_base.test | RUN | 0.733003 | 4.624847 | 4.243822 | 0.001902 | 0.001896 | 0.002122 |
| socket_base_select.test | RUN | 0.730108 | 4.511212 | 4.204354 | 0.001826 | 0.001987 | 0.002016 |
| spawn.test | RUN | 1.218332 | 7.464678 | 7.256096 | 0.001835 | 0.001871 | 0.002272 |
| spawn_select.test | RUN | 1.244365 | 7.475156 | 7.224001 | 0.002230 | 0.002086 | 0.002263 |
| static_thread_pool.test | RUN | 0.355238 | 0.728261 | 0.979498 | 0.001694 | 0.001845 | 0.001826 |
| static_thread_pool_select.test | RUN | 0.371674 | 0.783265 | 1.226364 | 0.001581 | 0.001759 | 0.001853 |
| steady_timer.test | LINK | 0.384862 | 0.836521 | 1.407504 | — | — | — |
| steady_timer_select.test | LINK | 0.396695 | 0.869106 | 1.430971 | — | — | — |
| strand.test | RUN | 0.770432 | 4.215873 | 4.303911 | 0.002296 | 0.002508 | 0.002653 |
| strand_select.test | RUN | 0.781860 | 4.225557 | 4.115358 | 0.002494 | 0.002152 | 0.002558 |
| stream_file.test | LINK | 0.356746 | 0.753441 | 1.049483 | — | — | — |
| stream_file_select.test | LINK | 0.387415 | 0.823885 | 1.336041 | — | — | — |
| streambuf.test | RUN | 0.199085 | 0.628435 | 0.710926 | 0.001397 | 0.001340 | 0.001847 |
| streambuf_select.test | RUN | 0.192616 | 0.593496 | 0.721187 | 0.001332 | 0.001363 | 0.001426 |
| system_timer.test | LINK | 0.504162 | 2.721364 | 2.701560 | — | — | — |
| system_timer_select.test | LINK | 0.511766 | 2.697652 | 2.437478 | — | — | — |
| system_context.test | LINK | 0.236007 | 0.500384 | 0.607366 | — | — | — |
| system_context_select.test | LINK | 0.253656 | 0.535324 | 0.744339 | — | — | — |
| system_executor.test | LINK | 0.302874 | 1.574875 | 1.142162 | — | — | — |
| system_executor_select.test | LINK | 0.320759 | 1.536418 | 1.301562 | — | — | — |
| this_coro.test | LINK | 0.096317 | 0.193378 | 0.238864 | — | — | — |
| this_coro_select.test | LINK | 0.094515 | 0.192095 | 0.241500 | — | — | — |
| thread_pool.test | RUN | 0.375917 | 2.026614 | 1.497269 | 0.002544 | 0.002602 | 0.002424 |
| thread_pool_select.test | RUN | 0.364763 | 2.066791 | 1.631883 | 0.002631 | 0.002478 | 0.002665 |
| time_traits.test | LINK | 0.205341 | 0.573037 | 0.490296 | — | — | — |
| time_traits_select.test | LINK | 0.212695 | 0.571849 | 0.483041 | — | — | — |
| ts_buffer.test | LINK | 0.193371 | 0.652610 | 0.714593 | — | — | — |
| ts_buffer_select.test | LINK | 0.206901 | 0.649705 | 0.861556 | — | — | — |
| ts_executor.test | LINK | 0.271340 | 0.901652 | 1.032440 | — | — | — |
| ts_executor_select.test | LINK | 0.288816 | 0.943764 | 1.606726 | — | — | — |
| ts_internet.test | LINK | 0.301971 | 0.988542 | 1.631133 | — | — | — |
| ts_internet_select.test | LINK | 0.301834 | 1.014228 | 1.698450 | — | — | — |
| ts_io_context.test | LINK | 0.242142 | 0.748365 | 1.016155 | — | — | — |
| ts_io_context_select.test | LINK | 0.252862 | 0.790291 | 1.295230 | — | — | — |
| ts_net.test | LINK | 0.361519 | 1.184894 | 2.037080 | — | — | — |
| ts_net_select.test | LINK | 0.353597 | 1.229721 | 2.090714 | — | — | — |
| ts_netfwd.test | LINK | 0.356762 | 1.183466 | 2.062676 | — | — | — |
| ts_netfwd_select.test | LINK | 0.366973 | 1.218438 | 2.101903 | — | — | — |
| ts_socket.test | LINK | 0.289358 | 0.927561 | 1.598995 | — | — | — |
| ts_socket_select.test | LINK | 0.298960 | 0.951575 | 1.634129 | — | — | — |
| ts_timer.test | LINK | 0.258643 | 0.820540 | 1.364837 | — | — | — |
| ts_timer_select.test | LINK | 0.266588 | 0.843242 | 1.380126 | — | — | — |
| use_awaitable.test | LINK | 0.094993 | 0.290943 | 0.393091 | — | — | — |
| use_awaitable_select.test | LINK | 0.094652 | 0.289963 | 0.396133 | — | — | — |
| wait_traits.test | LINK | 0.095181 | 0.281120 | 0.414540 | — | — | — |
| wait_traits_select.test | LINK | 0.093284 | 0.281629 | 0.395813 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.094145 | 0.286679 | 0.397455 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.095849 | 0.278341 | 0.370734 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.094724 | 0.280442 | 0.398349 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.095738 | 0.280702 | 0.358454 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.095752 | 0.287968 | 0.393944 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.092976 | 0.279604 | 0.369375 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.094268 | 0.287223 | 0.401652 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.095740 | 0.283273 | 0.357514 | — | — | — |
| windows_object_handle.test | LINK | 0.243176 | 0.754849 | 1.028166 | — | — | — |
| windows_object_handle_select.test | LINK | 0.288729 | 0.799670 | 1.311238 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.352265 | 0.803389 | 1.133917 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.388280 | 0.864284 | 1.410170 | — | — | — |
| windows_random_access_handle.test | LINK | 0.361410 | 0.759371 | 1.017786 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.369400 | 0.809523 | 1.285892 | — | — | — |
| windows_stream_handle.test | LINK | 0.363087 | 0.783123 | 1.013459 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.372478 | 0.803830 | 1.292006 | — | — | — |
| writable_pipe.test | LINK | 0.627228 | 3.123220 | 3.010796 | — | — | — |
| writable_pipe_select.test | LINK | 0.649906 | 3.280387 | 3.184743 | — | — | — |
| write.test | RUN | 1.804968 | 15.875087 | 16.824760 | 0.002534 | 0.002492 | 0.002348 |
| write_select.test | RUN | 1.825495 | 16.118145 | 16.915255 | 0.002134 | 0.002406 | 0.002428 |
| write_at.test | RUN | 1.878006 | 22.342368 | 21.531068 | 0.002706 | 0.002583 | 0.002794 |
| write_at_select.test | RUN | 1.901563 | 22.514452 | 21.691681 | 0.002694 | 0.002620 | 0.002740 |
| any_executor.test | RUN | 0.783527 | 7.701182 | 6.403466 | 0.002547 | 0.002511 | 0.002405 |
| blocking.test | RUN | 1.930882 | 9.457352 | 13.770950 | 0.007406 | 0.006592 | 0.007448 |
| blocking_adaptation.test | RUN | 0.937092 | 4.173903 | 6.403371 | 0.003610 | 0.004197 | 0.004044 |
| context_as.test | RUN | 0.516125 | 2.855377 | 2.144660 | 0.001914 | 0.001938 | 0.002024 |
| executor.test | RUN | 0.153387 | 0.282778 | 0.412474 | 0.001600 | 0.001861 | 0.001649 |
| inline_exception_handling.test | RUN | 1.939107 | 8.532046 | 14.005083 | 0.006825 | 0.005088 | 0.005165 |
| invocable_archetype.test | RUN | 0.137149 | 0.295535 | 0.406975 | 0.001518 | 0.001842 | 0.001832 |
| mapping.test | RUN | 1.921134 | 9.155803 | 13.197812 | 0.005286 | 0.005282 | 0.005218 |
| outstanding_work.test | RUN | 0.902022 | 3.741589 | 6.141075 | 0.003865 | 0.003990 | 0.004130 |
| prefer_only.test | RUN | 0.282145 | 1.502182 | 1.402064 | 0.001843 | 0.001826 | 0.001864 |
| relationship.test | RUN | 0.544490 | 3.810503 | 6.047773 | 0.002854 | 0.003522 | 0.004110 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.999×, 0.999× | 1.001× |
| clang | 0.993× | 0.994×, 0.992× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001588s | 0.001590s | 0.001624s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001581s | 0.001540s | 0.001599s | byte equality observed |
| any_completion_handler.test | 10 | 0.001275s | 0.001257s | 0.001226s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001263s | 0.001272s | 0.001248s | byte equality observed |
| any_io_executor.test | 9 | 0.001550s | 0.001557s | 0.001577s | byte equality observed |
| any_io_executor_select.test | 8 | 0.001550s | 0.001558s | 0.001554s | byte equality observed |
| append.test | 7 | 0.001207s | 0.001201s | 0.001206s | byte equality observed |
| append_select.test | 7 | 0.001188s | 0.001177s | 0.001175s | byte equality observed |
| as_tuple.test | 10 | 0.001266s | 0.001262s | 0.001277s | byte equality observed |
| as_tuple_select.test | 10 | 0.001230s | 0.001208s | 0.001208s | byte equality observed |
| bind_allocator.test | 1 | 0.001635s | 0.001642s | 0.001582s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001415s | 0.001390s | 0.001342s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001120s | 0.001131s | 0.001125s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001031s | 0.001049s | 0.001062s | byte equality observed |
| bind_executor.test | 1 | 0.001628s | 0.001638s | 0.001649s | byte equality observed |
| bind_executor_select.test | 1 | 0.001939s | 0.001937s | 0.001938s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001085s | 0.001100s | 0.001076s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001059s | 0.001056s | 0.001066s | byte equality observed |
| buffer.test | 10 | 0.001038s | 0.001026s | 0.001017s | byte equality observed |
| buffer_select.test | 10 | 0.001035s | 0.001028s | 0.001034s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001328s | 0.001313s | 0.001314s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001322s | 0.001311s | 0.001349s | byte equality observed |
| buffered_stream.test | 10 | 0.001299s | 0.001342s | 0.001359s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001289s | 0.001274s | 0.001304s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001324s | 0.001319s | 0.001328s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001300s | 0.001299s | 0.001297s | byte equality observed |
| buffers_iterator.test | 10 | 0.001019s | 0.001016s | 0.001013s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000990s | 0.000983s | 0.000962s | byte equality observed |
| cancel_after.test | 1 | 0.003151s | 0.003231s | 0.003227s | byte equality observed |
| cancel_after_select.test | 1 | 0.002721s | 0.002758s | 0.002758s | byte equality observed |
| cancel_at.test | 1 | 0.003523s | 0.003511s | 0.003393s | byte equality observed |
| cancel_at_select.test | 1 | 0.003344s | 0.003357s | 0.003289s | byte equality observed |
| co_composed.test | 10 | 0.001032s | 0.001045s | 0.001024s | byte equality observed |
| co_composed_select.test | 10 | 0.000989s | 0.000982s | 0.000989s | byte equality observed |
| compose.test | 1 | 0.001654s | 0.001656s | 0.001663s | byte equality observed |
| compose_select.test | 1 | 0.001371s | 0.001370s | 0.001365s | byte equality observed |
| composed.test | 1 | 0.001983s | 0.001953s | 0.002004s | byte equality observed |
| composed_select.test | 1 | 0.001472s | 0.001439s | 0.001538s | byte equality observed |
| config.test | 10 | 0.001100s | 0.001111s | 0.001083s | byte equality observed |
| config_select.test | 10 | 0.001077s | 0.001071s | 0.001075s | byte equality observed |
| connect_pipe.test | 10 | 0.001096s | 0.001118s | 0.001098s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001080s | 0.001072s | 0.001122s | byte equality observed |
| consign.test | 10 | 0.001082s | 0.001061s | 0.001085s | byte equality observed |
| consign_select.test | 10 | 0.001040s | 0.001030s | 0.001027s | byte equality observed |
| deadline_timer.test | 1 | 0.002267s | 0.002276s | 0.002287s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002074s | 0.002023s | 0.002073s | byte equality observed |
| deferred.test | 10 | 0.001004s | 0.000987s | 0.001000s | byte equality observed |
| deferred_select.test | 10 | 0.000949s | 0.000936s | 0.000947s | byte equality observed |
| disposition.test | 10 | 0.001004s | 0.000991s | 0.001009s | byte equality observed |
| disposition_select.test | 10 | 0.001003s | 0.001008s | 0.001002s | byte equality observed |
| error.test | 10 | 0.000976s | 0.000984s | 0.000968s | byte equality observed |
| error_select.test | 10 | 0.000973s | 0.000981s | 0.000977s | byte equality observed |
| inline_executor.test | 10 | 0.000986s | 0.000985s | 0.000983s | byte equality observed |
| inline_executor_select.test | 10 | 0.000992s | 0.000987s | 0.000986s | byte equality observed |
| inline_or_executor.test | 10 | 0.000987s | 0.000994s | 0.000978s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000988s | 0.000992s | 0.000981s | byte equality observed |
| io_context.test | 1 | 0.001872s | 0.001880s | 0.001890s | byte equality observed |
| io_context_select.test | 1 | 0.002242s | 0.002227s | 0.002188s | byte equality observed |
| io_context_strand.test | 1 | 0.002231s | 0.002225s | 0.002248s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001985s | 0.001999s | 0.001985s | byte equality observed |
| ip_host_name.test | 10 | 0.001011s | 0.000997s | 0.001003s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000961s | 0.000950s | 0.000965s | byte equality observed |
| ip_icmp.test | 10 | 0.000988s | 0.000995s | 0.000968s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000988s | 0.000988s | 0.000969s | byte equality observed |
| ip_multicast.test | 10 | 0.001066s | 0.001056s | 0.001060s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001048s | 0.001044s | 0.001042s | byte equality observed |
| ip_tcp.test | 10 | 0.001450s | 0.001445s | 0.001451s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001386s | 0.001360s | 0.001383s | byte equality observed |
| ip_udp.test | 10 | 0.001078s | 0.001097s | 0.001070s | byte equality observed |
| ip_udp_select.test | 10 | 0.001066s | 0.001118s | 0.001055s | byte equality observed |
| ip_unicast.test | 10 | 0.001035s | 0.001048s | 0.001031s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001019s | 0.001074s | 0.001014s | byte equality observed |
| ip_v6_only.test | 10 | 0.001037s | 0.001096s | 0.001028s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001018s | 0.001073s | 0.001011s | byte equality observed |
| is_read_buffered.test | 10 | 0.000951s | 0.000981s | 0.000947s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000955s | 0.001009s | 0.000947s | byte equality observed |
| is_write_buffered.test | 10 | 0.000958s | 0.000997s | 0.000944s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000986s | 0.000991s | 0.000949s | byte equality observed |
| prepend.test | 10 | 0.001071s | 0.001075s | 0.001046s | byte equality observed |
| prepend_select.test | 10 | 0.001047s | 0.001075s | 0.001056s | byte equality observed |
| read.test | 10 | 0.001458s | 0.001451s | 0.001430s | byte equality observed |
| read_at.test | 10 | 0.001836s | 0.001832s | 0.001711s | byte equality observed |
| read_at_select.test | 10 | 0.001849s | 0.001830s | 0.001686s | byte equality observed |
| read_select.test | 10 | 0.001435s | 0.001424s | 0.001427s | byte equality observed |
| read_until.test | 10 | 0.001193s | 0.001188s | 0.001179s | byte equality observed |
| read_until_select.test | 10 | 0.001213s | 0.001176s | 0.001209s | byte equality observed |
| recycling_allocator.test | 10 | 0.001006s | 0.001012s | 0.001000s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001012s | 0.001004s | 0.001057s | byte equality observed |
| signal_set.test | 10 | 0.001052s | 0.000997s | 0.001033s | byte equality observed |
| signal_set_select.test | 10 | 0.001058s | 0.001014s | 0.001003s | byte equality observed |
| socket_base.test | 10 | 0.001141s | 0.001169s | 0.001138s | byte equality observed |
| socket_base_select.test | 10 | 0.001166s | 0.001171s | 0.001122s | byte equality observed |
| spawn.test | 10 | 0.001219s | 0.001217s | 0.001220s | byte equality observed |
| spawn_select.test | 10 | 0.001210s | 0.001204s | 0.001240s | byte equality observed |
| static_thread_pool.test | 10 | 0.001005s | 0.001001s | 0.001004s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000979s | 0.000961s | 0.000963s | byte equality observed |
| strand.test | 1 | 0.001940s | 0.001886s | 0.001893s | byte equality observed |
| strand_select.test | 1 | 0.001619s | 0.001607s | 0.001632s | byte equality observed |
| streambuf.test | 10 | 0.001037s | 0.001064s | 0.001036s | byte equality observed |
| streambuf_select.test | 10 | 0.001013s | 0.001044s | 0.001022s | byte equality observed |
| thread_pool.test | 10 | 0.002170s | 0.002169s | 0.002237s | byte equality observed |
| thread_pool_select.test | 10 | 0.002131s | 0.002173s | 0.002221s | byte equality observed |
| write.test | 10 | 0.001486s | 0.001473s | 0.001446s | byte equality observed |
| write_at.test | 10 | 0.001615s | 0.001564s | 0.001551s | byte equality observed |
| write_at_select.test | 10 | 0.001618s | 0.001582s | 0.001539s | byte equality observed |
| write_select.test | 10 | 0.001474s | 0.001479s | 0.001475s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
