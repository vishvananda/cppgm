# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.827436 | 5.151332 | 5.299777 | 0.002918 | 0.002986 | 0.002806 |
| any_completion_executor_select.test | RUN | 0.885448 | 5.085566 | 5.555871 | 0.002514 | 0.002664 | 0.002825 |
| any_completion_handler.test | RUN | 0.942802 | 4.463372 | 4.924872 | 0.002091 | 0.002524 | 0.002203 |
| any_completion_handler_select.test | RUN | 0.971704 | 4.577410 | 5.202816 | 0.002148 | 0.002369 | 0.002188 |
| any_io_executor.test | RUN | 0.934918 | 5.422094 | 5.725550 | 0.002644 | 0.002589 | 0.002858 |
| any_io_executor_select.test | RUN | 0.913997 | 5.343537 | 6.002147 | 0.002487 | 0.002747 | 0.003012 |
| append.test | RUN | 0.829445 | 4.188496 | 4.392962 | 0.002151 | 0.002300 | 0.002263 |
| append_select.test | RUN | 0.835550 | 4.295788 | 4.366297 | 0.002103 | 0.002348 | 0.002120 |
| as_tuple.test | RUN | 1.039629 | 5.075649 | 5.802449 | 0.002671 | 0.002406 | 0.001830 |
| as_tuple_select.test | RUN | 1.041741 | 5.059889 | 5.940824 | 0.002028 | 0.002118 | 0.001359 |
| associated_allocator.test | LINK | 0.225032 | 0.493743 | 0.739484 | — | — | — |
| associated_allocator_select.test | LINK | 0.237732 | 0.488339 | 0.740463 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.248579 | 0.527401 | 0.800341 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.246642 | 0.529016 | 0.805746 | — | — | — |
| associated_executor.test | LINK | 0.361338 | 0.903838 | 1.275219 | — | — | — |
| associated_executor_select.test | LINK | 0.360094 | 0.875354 | 1.229581 | — | — | — |
| associated_immediate_executor.test | LINK | 0.339193 | 0.814384 | 1.155733 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.343082 | 0.798011 | 1.079102 | — | — | — |
| associator.test | LINK | 0.187464 | 0.401141 | 0.616974 | — | — | — |
| associator_select.test | LINK | 0.187167 | 0.389573 | 0.572191 | — | — | — |
| awaitable.test | LINK | 0.183437 | 0.387568 | 0.569271 | — | — | — |
| awaitable_select.test | LINK | 0.188730 | 0.386545 | 0.577427 | — | — | — |
| basic_datagram_socket.test | LINK | 0.559243 | 1.214439 | 2.306970 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.566894 | 1.267948 | 2.365692 | — | — | — |
| basic_deadline_timer.test | LINK | 0.676331 | 1.411332 | 2.620788 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.701304 | 1.448451 | 2.706356 | — | — | — |
| basic_file.test | LINK | 0.194425 | 0.403043 | 0.579642 | — | — | — |
| basic_file_select.test | LINK | 0.183188 | 0.388836 | 0.594400 | — | — | — |
| basic_random_access_file.test | LINK | 0.192183 | 0.391383 | 0.564164 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.188865 | 0.397001 | 0.598065 | — | — | — |
| basic_raw_socket.test | LINK | 0.553496 | 1.208478 | 2.323307 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.565037 | 1.261344 | 2.330126 | — | — | — |
| basic_readable_pipe.test | LINK | 0.545414 | 1.156609 | 1.986751 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.561616 | 1.229236 | 2.385159 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.555417 | 1.202890 | 2.283126 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.563244 | 1.258662 | 2.369967 | — | — | — |
| basic_signal_set.test | LINK | 0.518679 | 1.112729 | 1.671996 | — | — | — |
| basic_signal_set_select.test | LINK | 0.540314 | 1.192622 | 2.232783 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.563898 | 1.212295 | 2.215783 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.575637 | 1.261932 | 2.327258 | — | — | — |
| basic_stream_file.test | LINK | 0.184913 | 0.385297 | 0.605244 | — | — | — |
| basic_stream_file_select.test | LINK | 0.188609 | 0.391780 | 0.606582 | — | — | — |
| basic_stream_socket.test | LINK | 0.568608 | 1.216001 | 2.291002 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.590856 | 1.274409 | 2.322123 | — | — | — |
| basic_streambuf.test | LINK | 0.282847 | 0.548883 | 0.920665 | — | — | — |
| basic_streambuf_select.test | LINK | 0.293024 | 0.562874 | 0.907024 | — | — | — |
| basic_waitable_timer.test | LINK | 0.528454 | 1.130293 | 2.175420 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.529124 | 1.161425 | 2.222041 | — | — | — |
| basic_writable_pipe.test | LINK | 0.544943 | 1.183097 | 1.972937 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.565760 | 1.245977 | 2.449974 | — | — | — |
| bind_allocator.test | RUN | 0.884429 | 4.346262 | 4.837578 | 0.002538 | 0.002612 | 0.001847 |
| bind_allocator_select.test | RUN | 0.913143 | 4.398138 | 4.747018 | 0.001866 | 0.002411 | 0.002136 |
| bind_cancellation_slot.test | RUN | 0.885207 | 4.372539 | 4.735062 | 0.001622 | 0.001615 | 0.002106 |
| bind_cancellation_slot_select.test | RUN | 0.916849 | 4.317024 | 4.535660 | 0.001622 | 0.001658 | 0.001536 |
| bind_executor.test | RUN | 0.558182 | 2.978178 | 2.779458 | 0.002175 | 0.002938 | 0.002514 |
| bind_executor_select.test | RUN | 0.566735 | 3.062456 | 3.023717 | 0.001963 | 0.002682 | 0.002712 |
| bind_immediate_executor.test | RUN | 0.417027 | 2.548809 | 1.850109 | 0.001516 | 0.001538 | 0.001584 |
| bind_immediate_executor_select.test | RUN | 0.428975 | 2.490897 | 2.289690 | 0.001548 | 0.001606 | 0.001584 |
| buffer.test | RUN | 0.263357 | 1.022838 | 1.165419 | 0.001499 | 0.001453 | 0.001537 |
| buffer_select.test | RUN | 0.259281 | 1.009625 | 1.139693 | 0.001433 | 0.001504 | 0.001446 |
| buffer_registration.test | LINK | 0.215019 | 0.519823 | 0.670390 | — | — | — |
| buffer_registration_select.test | LINK | 0.213339 | 0.518850 | 0.648138 | — | — | — |
| buffered_read_stream.test | RUN | 0.907160 | 6.842992 | 7.456857 | 0.001910 | 0.002722 | 0.002802 |
| buffered_read_stream_select.test | RUN | 0.917902 | 6.945576 | 7.818716 | 0.001803 | 0.002666 | 0.002757 |
| buffered_stream.test | RUN | 1.711071 | 10.209985 | 10.630962 | 0.002686 | 0.002670 | 0.002820 |
| buffered_stream_select.test | RUN | 1.733469 | 10.325912 | 10.796113 | 0.002421 | 0.002603 | 0.002854 |
| buffered_write_stream.test | RUN | 1.641950 | 8.673430 | 9.478502 | 0.002691 | 0.002812 | 0.002640 |
| buffered_write_stream_select.test | RUN | 1.642777 | 8.810759 | 9.198797 | 0.002509 | 0.002640 | 0.002685 |
| buffers_iterator.test | RUN | 0.522385 | 0.898741 | 1.644970 | 0.002317 | 0.002059 | 0.001972 |
| buffers_iterator_select.test | RUN | 0.504013 | 0.891624 | 1.674472 | 0.001940 | 0.002014 | 0.002126 |
| cancel_after.test | RUN | 1.369785 | 6.932218 | 7.169088 | 0.003742 | 0.004458 | 0.004383 |
| cancel_after_select.test | RUN | 1.363571 | 6.926696 | 6.827213 | 0.003862 | 0.004178 | 0.003714 |
| cancel_at.test | RUN | 1.273154 | 5.744364 | 6.101456 | 0.003678 | 0.003753 | 0.003714 |
| cancel_at_select.test | RUN | 1.251162 | 5.682585 | 5.761904 | 0.003356 | 0.003398 | 0.003665 |
| cancellation_signal.test | LINK | 0.152087 | 0.310680 | 0.420518 | — | — | — |
| cancellation_signal_select.test | LINK | 0.160943 | 0.311435 | 0.434367 | — | — | — |
| cancellation_state.test | LINK | 0.247455 | 0.310933 | 0.426165 | — | — | — |
| cancellation_state_select.test | LINK | 0.245229 | 0.316896 | 0.433964 | — | — | — |
| cancellation_type.test | LINK | 0.186047 | 0.245887 | 0.335118 | — | — | — |
| cancellation_type_select.test | LINK | 0.185690 | 0.246755 | 0.344210 | — | — | — |
| co_composed.test | RUN | 0.184613 | 0.247469 | 0.328865 | 0.001849 | 0.001538 | 0.001521 |
| co_composed_select.test | RUN | 0.186079 | 0.251019 | 0.343085 | 0.001761 | 0.001614 | 0.001369 |
| co_spawn.test | LINK | 0.187941 | 0.251775 | 0.383162 | — | — | — |
| co_spawn_select.test | LINK | 0.189959 | 0.246763 | 0.507339 | — | — | — |
| completion_condition.test | LINK | 0.241497 | 0.483110 | 0.693934 | — | — | — |
| completion_condition_select.test | LINK | 0.238586 | 0.577096 | 0.794687 | — | — | — |
| compose.test | RUN | 1.074322 | 5.382389 | 6.008493 | 0.002524 | 0.002544 | 0.002447 |
| compose_select.test | RUN | 1.065269 | 5.385216 | 5.850398 | 0.002592 | 0.002500 | 0.002043 |
| composed.test | RUN | 0.984208 | 5.280588 | 5.848203 | 0.002200 | 0.002206 | 0.002064 |
| composed_select.test | RUN | 0.993791 | 5.181304 | 5.742675 | 0.001794 | 0.002196 | 0.002031 |
| config.test | RUN | 0.477569 | 3.533777 | 2.498935 | 0.001980 | 0.002302 | 0.002056 |
| config_select.test | RUN | 0.503525 | 3.544797 | 3.014347 | 0.002074 | 0.002154 | 0.002131 |
| connect.test | LINK | 1.637200 | 11.393117 | 12.342734 | — | — | — |
| connect_select.test | LINK | 1.672104 | 11.352656 | 12.485788 | — | — | — |
| connect_pipe.test | RUN | 0.929873 | 4.269893 | 4.577395 | 0.001941 | 0.002192 | 0.002110 |
| connect_pipe_select.test | RUN | 0.963853 | 4.420255 | 5.043321 | 0.001761 | 0.002324 | 0.002240 |
| consign.test | RUN | 0.805128 | 4.161267 | 4.185025 | 0.002073 | 0.001874 | 0.002226 |
| consign_select.test | RUN | 0.802353 | 4.229272 | 4.121981 | 0.001970 | 0.002062 | 0.002066 |
| coroutine.test | LINK | 0.191923 | 0.462505 | 0.637042 | — | — | — |
| coroutine_select.test | LINK | 0.205126 | 0.449867 | 0.675299 | — | — | — |
| deadline_timer.test | RUN | 1.162399 | 5.498011 | 6.177478 | 0.003593 | 0.003499 | 0.003724 |
| deadline_timer_select.test | RUN | 1.162621 | 5.408689 | 6.151430 | 0.002867 | 0.003276 | 0.003737 |
| deferred.test | RUN | 0.218226 | 0.419446 | 0.670023 | 0.001954 | 0.002348 | 0.002108 |
| deferred_select.test | RUN | 0.221589 | 0.437054 | 0.654605 | 0.001786 | 0.002098 | 0.002109 |
| detached.test | LINK | 0.232137 | 0.480097 | 0.675380 | — | — | — |
| detached_select.test | LINK | 0.234014 | 0.478374 | 0.698515 | — | — | — |
| disposition.test | RUN | 0.195145 | 1.102671 | 1.233546 | 0.001534 | 0.002279 | 0.002220 |
| disposition_select.test | RUN | 0.196917 | 1.094795 | 1.235498 | 0.001510 | 0.002241 | 0.002198 |
| error.test | RUN | 0.179181 | 1.061267 | 1.108098 | 0.001451 | 0.002152 | 0.002174 |
| error_select.test | RUN | 0.183232 | 1.043853 | 1.104791 | 0.001438 | 0.002088 | 0.002238 |
| file_base.test | LINK | 0.225338 | 0.878762 | 1.207972 | — | — | — |
| file_base_select.test | LINK | 0.227003 | 0.862012 | 1.012790 | — | — | — |
| fwd_first.test | LINK | 0.515485 | 1.297199 | 2.110153 | — | — | — |
| fwd_last.test | LINK | 0.511219 | 1.183189 | 2.100685 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.197323 | 0.489691 | 0.760520 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.200733 | 0.485919 | 0.744234 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.769192 | 4.100337 | 3.809787 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.774688 | 4.219687 | 3.861782 | — | — | — |
| generic_raw_protocol.test | LINK | 0.777379 | 4.062422 | 3.861449 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.767862 | 4.207126 | 3.803151 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.673179 | 3.466920 | 3.321065 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.680726 | 3.481565 | 3.316423 | — | — | — |
| generic_stream_protocol.test | LINK | 0.713390 | 3.717419 | 3.544747 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.715224 | 3.785657 | 3.604985 | — | — | — |
| high_resolution_timer.test | LINK | 0.324265 | 0.727464 | 1.170941 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.328539 | 0.752962 | 1.212030 | — | — | — |
| immediate.test | LINK | 0.227464 | 0.570616 | 0.733835 | — | — | — |
| immediate_select.test | LINK | 0.225545 | 0.560674 | 0.724900 | — | — | — |
| inline_executor.test | RUN | 0.276817 | 0.853783 | 1.067673 | 0.001524 | 0.001598 | 0.001503 |
| inline_executor_select.test | RUN | 0.282113 | 0.847496 | 1.067601 | 0.001490 | 0.001585 | 0.001479 |
| inline_or_executor.test | RUN | 0.431698 | 2.446850 | 1.978076 | 0.001607 | 0.001577 | 0.001510 |
| inline_or_executor_select.test | RUN | 0.446866 | 2.528173 | 2.208148 | 0.001482 | 0.001572 | 0.001537 |
| io_context.test | RUN | 0.640738 | 3.712310 | 3.384028 | 0.002583 | 0.002688 | 0.002506 |
| io_context_select.test | RUN | 0.638602 | 3.635271 | 3.447526 | 0.002332 | 0.002514 | 0.002378 |
| io_context_strand.test | RUN | 0.599221 | 4.333757 | 3.973930 | 0.002477 | 0.002972 | 0.002884 |
| io_context_strand_select.test | RUN | 0.601708 | 4.546150 | 3.811243 | 0.002301 | 0.003038 | 0.002974 |
| ip_address.test | LINK | 0.226916 | 1.196053 | 1.725660 | — | — | — |
| ip_address_select.test | LINK | 0.229832 | 1.177321 | 1.675825 | — | — | — |
| ip_address_v4.test | LINK | 0.234327 | 1.268660 | 1.384746 | — | — | — |
| ip_address_v4_select.test | LINK | 0.232166 | 1.259105 | 1.042243 | — | — | — |
| ip_address_v6.test | LINK | 0.264674 | 1.592790 | 1.221027 | — | — | — |
| ip_address_v6_select.test | LINK | 0.264591 | 1.411785 | 1.223864 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.209986 | 0.513878 | 0.814753 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.211091 | 0.522932 | 0.804260 | — | — | — |
| ip_basic_resolver.test | LINK | 0.329889 | 0.738439 | 1.194376 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.335623 | 0.765989 | 1.245558 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.114838 | 0.247087 | 0.340119 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.116591 | 0.247028 | 0.340685 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.207379 | 0.509269 | 0.789871 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.212906 | 0.524819 | 0.797801 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.199564 | 0.496416 | 0.754083 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.200982 | 0.481346 | 0.770202 | — | — | — |
| ip_host_name.test | RUN | 0.207668 | 0.643824 | 0.847007 | 0.001529 | 0.001578 | 0.001408 |
| ip_host_name_select.test | RUN | 0.211841 | 0.642062 | 0.915915 | 0.001424 | 0.001574 | 0.002102 |
| ip_icmp.test | RUN | 0.955955 | 7.192041 | 8.543221 | 0.001591 | 0.002144 | 0.002258 |
| ip_icmp_select.test | RUN | 0.966558 | 7.495127 | 8.424370 | 0.001563 | 0.002047 | 0.002038 |
| ip_multicast.test | RUN | 0.565907 | 4.551184 | 5.162832 | 0.001808 | 0.002136 | 0.002364 |
| ip_multicast_select.test | RUN | 0.568639 | 4.450861 | 5.106040 | 0.002195 | 0.002078 | 0.002338 |
| ip_resolver_query_base.test | LINK | 0.135022 | 0.424452 | 0.618075 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.136171 | 0.413254 | 0.610181 | — | — | — |
| ip_tcp.test | RUN | 1.392778 | 12.934577 | 12.667436 | 0.002278 | 0.003040 | 0.003253 |
| ip_tcp_select.test | RUN | 1.425269 | 13.486120 | 12.190584 | 0.002226 | 0.003014 | 0.003223 |
| ip_udp.test | RUN | 1.026956 | 9.247669 | 8.918427 | 0.001640 | 0.002212 | 0.001955 |
| ip_udp_select.test | RUN | 1.038822 | 9.478418 | 8.680273 | 0.001707 | 0.002333 | 0.002130 |
| ip_unicast.test | RUN | 0.520870 | 4.104616 | 4.509548 | 0.001738 | 0.002181 | 0.002219 |
| ip_unicast_select.test | RUN | 0.581644 | 4.184158 | 4.476870 | 0.002137 | 0.002364 | 0.002038 |
| ip_v6_only.test | RUN | 0.864818 | 4.270821 | 4.615360 | 0.002036 | 0.002390 | 0.002270 |
| ip_v6_only_select.test | RUN | 0.880586 | 4.419575 | 4.611312 | 0.002107 | 0.001761 | 0.002316 |
| is_read_buffered.test | RUN | 0.622267 | 1.362160 | 2.638018 | 0.001947 | 0.002098 | 0.001818 |
| is_read_buffered_select.test | RUN | 0.637318 | 1.454149 | 2.611827 | 0.001638 | 0.002064 | 0.001975 |
| is_write_buffered.test | RUN | 0.612772 | 1.415191 | 2.570606 | 0.002076 | 0.002088 | 0.002186 |
| is_write_buffered_select.test | RUN | 0.620855 | 1.390713 | 2.711336 | 0.001832 | 0.001951 | 0.002054 |
| local_basic_endpoint.test | LINK | 0.315209 | 0.762613 | 1.428777 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.313184 | 0.763873 | 1.454035 | — | — | — |
| local_connect_pair.test | LINK | 0.809635 | 4.130700 | 4.316850 | — | — | — |
| local_connect_pair_select.test | LINK | 0.809730 | 4.150226 | 4.270551 | — | — | — |
| local_datagram_protocol.test | LINK | 1.047504 | 5.360816 | 5.862885 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.078303 | 5.472885 | 5.680879 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.076434 | 5.320778 | 5.728446 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.081173 | 5.410561 | 5.692714 | — | — | — |
| local_stream_protocol.test | LINK | 0.990870 | 5.123663 | 5.528304 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.026923 | 5.142082 | 5.384449 | — | — | — |
| placeholders.test | LINK | 0.203959 | 0.429786 | 0.629994 | — | — | — |
| placeholders_select.test | LINK | 0.198164 | 0.432303 | 0.627273 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.544719 | 1.140716 | 1.884518 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.554952 | 1.188196 | 2.441932 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.534838 | 1.176574 | 1.970530 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.570003 | 1.210025 | 2.390266 | — | — | — |
| posix_descriptor_base.test | LINK | 0.228778 | 0.462317 | 0.656865 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.224138 | 0.456690 | 0.650399 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.029666 | 5.058949 | 5.318654 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.080147 | 5.162027 | 5.521386 | — | — | — |
| prepend.test | RUN | 0.810873 | 4.200358 | 4.389270 | 0.002090 | 0.002172 | 0.002145 |
| prepend_select.test | RUN | 0.832408 | 4.303735 | 4.365765 | 0.001938 | 0.002088 | 0.001955 |
| random_access_file.test | LINK | 0.494980 | 1.025473 | 1.478187 | — | — | — |
| random_access_file_select.test | LINK | 0.512221 | 1.133107 | 2.081828 | — | — | — |
| read.test | RUN | 2.513617 | 25.859391 | 23.492895 | 0.002848 | 0.002846 | 0.002885 |
| read_select.test | RUN | 2.534407 | 25.530965 | 23.726976 | 0.002748 | 0.002818 | 0.002578 |
| read_at.test | RUN | 2.551078 | 35.149993 | 32.520293 | 0.003633 | 0.003784 | 0.003300 |
| read_at_select.test | RUN | 2.547707 | 34.816332 | 32.995814 | 0.003529 | 0.003522 | 0.003583 |
| read_until.test | RUN | 1.305133 | 10.161657 | 8.521623 | 0.002247 | 0.002533 | 0.002176 |
| read_until_select.test | RUN | 1.329056 | 10.234859 | 9.043125 | 0.002079 | 0.002556 | 0.002451 |
| readable_pipe.test | LINK | 0.819589 | 4.284996 | 4.009274 | — | — | — |
| readable_pipe_select.test | LINK | 0.870626 | 4.527327 | 4.592400 | — | — | — |
| recycling_allocator.test | RUN | 0.270641 | 0.672874 | 0.939422 | 0.001878 | 0.002170 | 0.002121 |
| recycling_allocator_select.test | RUN | 0.265256 | 0.675529 | 0.905562 | 0.001856 | 0.002137 | 0.002047 |
| redirect_disposition.test | LINK | 1.081243 | 6.028998 | 6.501765 | — | — | — |
| redirect_disposition_select.test | LINK | 1.101993 | 6.000409 | 6.471940 | — | — | — |
| redirect_error.test | LINK | 0.973668 | 4.936379 | 5.712037 | — | — | — |
| redirect_error_select.test | LINK | 1.006197 | 4.925548 | 5.795525 | — | — | — |
| registered_buffer.test | LINK | 0.266812 | 0.569537 | 0.851465 | — | — | — |
| registered_buffer_select.test | LINK | 0.274666 | 0.553230 | 0.837976 | — | — | — |
| signal_set.test | RUN | 0.804101 | 4.162854 | 3.843280 | 0.002096 | 0.002146 | 0.002101 |
| signal_set_select.test | RUN | 0.841714 | 4.330565 | 4.501034 | 0.002596 | 0.002247 | 0.002138 |
| signal_set_base.test | LINK | 0.220993 | 0.443313 | 0.649372 | — | — | — |
| signal_set_base_select.test | LINK | 0.237982 | 0.453422 | 0.646928 | — | — | — |
| socket_base.test | RUN | 1.003544 | 6.325075 | 6.140085 | 0.002400 | 0.002474 | 0.002498 |
| socket_base_select.test | RUN | 1.020376 | 6.073616 | 6.140716 | 0.002411 | 0.002101 | 0.002300 |
| spawn.test | RUN | 1.670906 | 9.950150 | 10.114646 | 0.002328 | 0.002566 | 0.002512 |
| spawn_select.test | RUN | 1.672610 | 9.940225 | 10.134745 | 0.002140 | 0.002619 | 0.002525 |
| static_thread_pool.test | RUN | 0.482255 | 0.993844 | 1.529441 | 0.001938 | 0.002096 | 0.002070 |
| static_thread_pool_select.test | RUN | 0.503467 | 1.122264 | 2.019324 | 0.002000 | 0.002067 | 0.002102 |
| steady_timer.test | LINK | 0.529853 | 1.143449 | 2.135217 | — | — | — |
| steady_timer_select.test | LINK | 0.537458 | 1.171313 | 2.136581 | — | — | — |
| strand.test | RUN | 1.038117 | 5.625397 | 6.170802 | 0.002758 | 0.002880 | 0.003076 |
| strand_select.test | RUN | 1.090014 | 5.638565 | 5.817524 | 0.002683 | 0.002600 | 0.002497 |
| stream_file.test | LINK | 0.512909 | 1.048020 | 1.583367 | — | — | — |
| stream_file_select.test | LINK | 0.520380 | 1.136271 | 2.064569 | — | — | — |
| streambuf.test | RUN | 0.271578 | 0.846176 | 1.117475 | 0.001553 | 0.001554 | 0.001842 |
| streambuf_select.test | RUN | 0.194695 | 0.816011 | 1.101122 | 0.001504 | 0.001549 | 0.001962 |
| system_timer.test | LINK | 0.635709 | 3.514532 | 3.838570 | — | — | — |
| system_timer_select.test | LINK | 0.648686 | 3.421760 | 3.362889 | — | — | — |
| system_context.test | LINK | 0.292592 | 0.652292 | 0.854968 | — | — | — |
| system_context_select.test | LINK | 0.310420 | 0.691985 | 1.064520 | — | — | — |
| system_executor.test | LINK | 0.382519 | 1.999351 | 1.589037 | — | — | — |
| system_executor_select.test | LINK | 0.406587 | 1.994072 | 1.767946 | — | — | — |
| this_coro.test | LINK | 0.118574 | 0.245211 | 0.334860 | — | — | — |
| this_coro_select.test | LINK | 0.121539 | 0.246558 | 0.336048 | — | — | — |
| thread_pool.test | RUN | 0.456516 | 3.260947 | 2.902644 | 0.003152 | 0.003346 | 0.003583 |
| thread_pool_select.test | RUN | 0.476985 | 3.737593 | 3.265277 | 0.003177 | 0.003748 | 0.003908 |
| time_traits.test | LINK | 0.264942 | 0.858846 | 0.838651 | — | — | — |
| time_traits_select.test | LINK | 0.259862 | 0.837460 | 1.311277 | — | — | — |
| ts_buffer.test | LINK | 0.250130 | 0.907250 | 1.251071 | — | — | — |
| ts_buffer_select.test | LINK | 0.251090 | 0.887553 | 1.267806 | — | — | — |
| ts_executor.test | LINK | 0.373844 | 1.216928 | 1.981337 | — | — | — |
| ts_executor_select.test | LINK | 0.359642 | 1.317168 | 2.528300 | — | — | — |
| ts_internet.test | LINK | 0.376669 | 1.386246 | 2.511045 | — | — | — |
| ts_internet_select.test | LINK | 0.384731 | 1.367097 | 2.665231 | — | — | — |
| ts_io_context.test | LINK | 0.303561 | 1.046409 | 1.514226 | — | — | — |
| ts_io_context_select.test | LINK | 0.314042 | 1.146242 | 2.060638 | — | — | — |
| ts_net.test | LINK | 0.449012 | 1.643891 | 3.192065 | — | — | — |
| ts_net_select.test | LINK | 0.461024 | 1.620314 | 3.274868 | — | — | — |
| ts_netfwd.test | LINK | 0.447088 | 1.603950 | 3.211575 | — | — | — |
| ts_netfwd_select.test | LINK | 0.455790 | 1.699155 | 3.261584 | — | — | — |
| ts_socket.test | LINK | 0.376184 | 1.303154 | 2.465138 | — | — | — |
| ts_socket_select.test | LINK | 0.382663 | 1.301657 | 2.576282 | — | — | — |
| ts_timer.test | LINK | 0.333529 | 1.103442 | 2.081043 | — | — | — |
| ts_timer_select.test | LINK | 0.345802 | 1.179848 | 2.140195 | — | — | — |
| use_awaitable.test | LINK | 0.119339 | 0.386696 | 0.583897 | — | — | — |
| use_awaitable_select.test | LINK | 0.129413 | 0.403430 | 0.585154 | — | — | — |
| wait_traits.test | LINK | 0.185238 | 0.386341 | 0.602198 | — | — | — |
| wait_traits_select.test | LINK | 0.196107 | 0.397364 | 0.591816 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.192632 | 0.386348 | 0.598610 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.186180 | 0.385450 | 0.577536 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.184892 | 0.399073 | 0.601851 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.187657 | 0.388060 | 0.588338 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.186111 | 0.388638 | 0.591852 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.181961 | 0.393661 | 0.608994 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.186834 | 0.391738 | 0.592137 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.186549 | 0.399897 | 0.597826 | — | — | — |
| windows_object_handle.test | LINK | 0.495185 | 1.045886 | 1.545342 | — | — | — |
| windows_object_handle_select.test | LINK | 0.513231 | 1.104194 | 2.064171 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.511965 | 1.133959 | 1.704922 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.539090 | 1.193011 | 2.192968 | — | — | — |
| windows_random_access_handle.test | LINK | 0.497532 | 1.041018 | 1.534356 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.515181 | 1.132623 | 2.044340 | — | — | — |
| windows_stream_handle.test | LINK | 0.485985 | 1.039911 | 1.536723 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.521241 | 1.125745 | 2.007245 | — | — | — |
| writable_pipe.test | LINK | 0.857882 | 4.176949 | 4.450019 | — | — | — |
| writable_pipe_select.test | LINK | 0.891740 | 4.401260 | 4.697369 | — | — | — |
| write.test | RUN | 2.468203 | 21.070237 | 23.750107 | 0.002840 | 0.002616 | 0.002689 |
| write_select.test | RUN | 2.499971 | 21.141328 | 23.827180 | 0.002880 | 0.002873 | 0.002686 |
| write_at.test | RUN | 2.566612 | 29.166497 | 30.339427 | 0.003174 | 0.003022 | 0.003213 |
| write_at_select.test | RUN | 2.602161 | 29.239419 | 30.629484 | 0.003133 | 0.003196 | 0.003213 |
| any_executor.test | RUN | 1.084488 | 10.348185 | 8.899783 | 0.002985 | 0.003230 | 0.002904 |
| blocking.test | RUN | 2.808076 | 12.358848 | 20.070879 | 0.008884 | 0.008390 | 0.008774 |
| blocking_adaptation.test | RUN | 1.400951 | 5.592636 | 9.329515 | 0.004318 | 0.004894 | 0.005005 |
| context_as.test | RUN | 0.696733 | 3.910831 | 3.070770 | 0.002300 | 0.002049 | 0.002250 |
| executor.test | RUN | 0.192402 | 0.424178 | 0.606012 | 0.002221 | 0.002091 | 0.002056 |
| inline_exception_handling.test | RUN | 2.741496 | 11.650692 | 18.831397 | 0.008347 | 0.005857 | 0.005794 |
| invocable_archetype.test | RUN | 0.184153 | 0.381831 | 0.594774 | 0.002017 | 0.002143 | 0.001972 |
| mapping.test | RUN | 2.345077 | 11.922222 | 19.935304 | 0.005777 | 0.006052 | 0.005980 |
| outstanding_work.test | RUN | 1.289973 | 5.044226 | 8.994367 | 0.005037 | 0.004821 | 0.003889 |
| prefer_only.test | RUN | 0.396299 | 2.101161 | 2.066132 | 0.002098 | 0.001990 | 0.002025 |
| relationship.test | RUN | 1.010292 | 4.365898 | 8.632993 | 0.003446 | 0.003336 | 0.003366 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.003×, 1.005× | 0.998× |
| clang | 0.995× | 0.998×, 0.993× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002027s | 0.001918s | 0.001996s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001961s | 0.001904s | 0.001958s | byte equality observed |
| any_completion_handler.test | 10 | 0.001559s | 0.001547s | 0.001541s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001550s | 0.001536s | 0.001568s | byte equality observed |
| any_io_executor.test | 5 | 0.001970s | 0.001934s | 0.001963s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001980s | 0.001930s | 0.001973s | byte equality observed |
| append.test | 9 | 0.001495s | 0.001471s | 0.001467s | byte equality observed |
| append_select.test | 10 | 0.001463s | 0.001436s | 0.001454s | byte equality observed |
| as_tuple.test | 10 | 0.001579s | 0.001572s | 0.001555s | byte equality observed |
| as_tuple_select.test | 9 | 0.001477s | 0.001475s | 0.001470s | byte equality observed |
| bind_allocator.test | 1 | 0.001935s | 0.001855s | 0.001892s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001632s | 0.001618s | 0.001635s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001322s | 0.001349s | 0.001317s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001242s | 0.001251s | 0.001247s | byte equality observed |
| bind_executor.test | 1 | 0.001859s | 0.001835s | 0.001821s | byte equality observed |
| bind_executor_select.test | 1 | 0.002097s | 0.002101s | 0.002051s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001315s | 0.001255s | 0.001277s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001307s | 0.001296s | 0.001350s | byte equality observed |
| buffer.test | 10 | 0.001306s | 0.001246s | 0.001262s | byte equality observed |
| buffer_select.test | 10 | 0.001239s | 0.001274s | 0.001283s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001644s | 0.001620s | 0.001612s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001592s | 0.001595s | 0.001643s | byte equality observed |
| buffered_stream.test | 10 | 0.001646s | 0.001665s | 0.001616s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001605s | 0.001647s | 0.001618s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001679s | 0.001605s | 0.001629s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001609s | 0.001616s | 0.001607s | byte equality observed |
| buffers_iterator.test | 7 | 0.001237s | 0.001201s | 0.001244s | byte equality observed |
| buffers_iterator_select.test | 9 | 0.001200s | 0.001146s | 0.001158s | byte equality observed |
| cancel_after.test | 1 | 0.003415s | 0.003370s | 0.003472s | byte equality observed |
| cancel_after_select.test | 1 | 0.002997s | 0.002959s | 0.002981s | byte equality observed |
| cancel_at.test | 1 | 0.003659s | 0.003607s | 0.003786s | byte equality observed |
| cancel_at_select.test | 1 | 0.003500s | 0.003541s | 0.003436s | byte equality observed |
| co_composed.test | 10 | 0.001214s | 0.001202s | 0.001205s | byte equality observed |
| co_composed_select.test | 10 | 0.001185s | 0.001154s | 0.001170s | byte equality observed |
| compose.test | 1 | 0.001915s | 0.001858s | 0.001910s | byte equality observed |
| compose_select.test | 1 | 0.001567s | 0.001603s | 0.001589s | byte equality observed |
| composed.test | 1 | 0.002154s | 0.002144s | 0.002109s | byte equality observed |
| composed_select.test | 1 | 0.001642s | 0.001675s | 0.001632s | byte equality observed |
| config.test | 10 | 0.001301s | 0.001275s | 0.001276s | byte equality observed |
| config_select.test | 10 | 0.001323s | 0.001343s | 0.001288s | byte equality observed |
| connect_pipe.test | 10 | 0.001370s | 0.001375s | 0.001380s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001351s | 0.001340s | 0.001363s | byte equality observed |
| consign.test | 10 | 0.001321s | 0.001369s | 0.001372s | byte equality observed |
| consign_select.test | 10 | 0.001253s | 0.001251s | 0.001237s | byte equality observed |
| deadline_timer.test | 1 | 0.002646s | 0.002556s | 0.002649s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002368s | 0.002391s | 0.002394s | byte equality observed |
| deferred.test | 10 | 0.001159s | 0.001163s | 0.001181s | byte equality observed |
| deferred_select.test | 10 | 0.001120s | 0.001105s | 0.001134s | byte equality observed |
| disposition.test | 10 | 0.001197s | 0.001185s | 0.001204s | byte equality observed |
| disposition_select.test | 10 | 0.001192s | 0.001182s | 0.001197s | byte equality observed |
| error.test | 10 | 0.001165s | 0.001159s | 0.001164s | byte equality observed |
| error_select.test | 10 | 0.001168s | 0.001176s | 0.001167s | byte equality observed |
| inline_executor.test | 10 | 0.001183s | 0.001181s | 0.001176s | byte equality observed |
| inline_executor_select.test | 10 | 0.001183s | 0.001180s | 0.001177s | byte equality observed |
| inline_or_executor.test | 10 | 0.001189s | 0.001183s | 0.001170s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001189s | 0.001184s | 0.001175s | byte equality observed |
| io_context.test | 1 | 0.002150s | 0.002131s | 0.002158s | byte equality observed |
| io_context_select.test | 1 | 0.002481s | 0.002445s | 0.002503s | byte equality observed |
| io_context_strand.test | 1 | 0.002476s | 0.002433s | 0.002431s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002187s | 0.002193s | 0.002246s | byte equality observed |
| ip_host_name.test | 10 | 0.001180s | 0.001179s | 0.001183s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001141s | 0.001140s | 0.001144s | byte equality observed |
| ip_icmp.test | 10 | 0.001185s | 0.001193s | 0.001173s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001184s | 0.001192s | 0.001167s | byte equality observed |
| ip_multicast.test | 10 | 0.001273s | 0.001272s | 0.001271s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001234s | 0.001245s | 0.001236s | byte equality observed |
| ip_tcp.test | 10 | 0.001758s | 0.001765s | 0.001750s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001693s | 0.001759s | 0.001675s | byte equality observed |
| ip_udp.test | 10 | 0.001284s | 0.001445s | 0.001278s | byte equality observed |
| ip_udp_select.test | 10 | 0.001254s | 0.001428s | 0.001256s | byte equality observed |
| ip_unicast.test | 10 | 0.001219s | 0.001369s | 0.001224s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001200s | 0.001340s | 0.001213s | byte equality observed |
| ip_v6_only.test | 10 | 0.001238s | 0.001437s | 0.001229s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001216s | 0.001352s | 0.001213s | byte equality observed |
| is_read_buffered.test | 10 | 0.001146s | 0.001282s | 0.001160s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001264s | 0.001301s | 0.001261s | byte equality observed |
| is_write_buffered.test | 10 | 0.001321s | 0.001274s | 0.001306s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001267s | 0.001231s | 0.001222s | byte equality observed |
| prepend.test | 10 | 0.001304s | 0.001316s | 0.001332s | byte equality observed |
| prepend_select.test | 10 | 0.001269s | 0.001308s | 0.001292s | byte equality observed |
| read.test | 10 | 0.001795s | 0.001771s | 0.001741s | byte equality observed |
| read_at.test | 9 | 0.002174s | 0.002246s | 0.002199s | byte equality observed |
| read_at_select.test | 9 | 0.002174s | 0.002308s | 0.002140s | byte equality observed |
| read_select.test | 10 | 0.001771s | 0.001760s | 0.001737s | byte equality observed |
| read_until.test | 10 | 0.001504s | 0.001469s | 0.001471s | byte equality observed |
| read_until_select.test | 10 | 0.001493s | 0.001446s | 0.001486s | byte equality observed |
| recycling_allocator.test | 10 | 0.001283s | 0.001257s | 0.001259s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001262s | 0.001237s | 0.001250s | byte equality observed |
| signal_set.test | 10 | 0.001261s | 0.001274s | 0.001296s | byte equality observed |
| signal_set_select.test | 10 | 0.001303s | 0.001318s | 0.001266s | byte equality observed |
| socket_base.test | 10 | 0.001378s | 0.001388s | 0.001424s | byte equality observed |
| socket_base_select.test | 10 | 0.001450s | 0.001394s | 0.001409s | byte equality observed |
| spawn.test | 10 | 0.001494s | 0.001486s | 0.001492s | byte equality observed |
| spawn_select.test | 10 | 0.001528s | 0.001496s | 0.001484s | byte equality observed |
| static_thread_pool.test | 10 | 0.001253s | 0.001243s | 0.001262s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001168s | 0.001215s | 0.001159s | byte equality observed |
| strand.test | 1 | 0.002339s | 0.002229s | 0.002335s | byte equality observed |
| strand_select.test | 1 | 0.001891s | 0.001896s | 0.001854s | byte equality observed |
| streambuf.test | 10 | 0.001247s | 0.001303s | 0.001246s | byte equality observed |
| streambuf_select.test | 10 | 0.001260s | 0.001288s | 0.001345s | byte equality observed |
| thread_pool.test | 8 | 0.002892s | 0.002905s | 0.002934s | byte equality observed |
| thread_pool_select.test | 9 | 0.002845s | 0.002920s | 0.002871s | byte equality observed |
| write.test | 10 | 0.001860s | 0.001818s | 0.001823s | byte equality observed |
| write_at.test | 10 | 0.002004s | 0.001993s | 0.001893s | byte equality observed |
| write_at_select.test | 10 | 0.002002s | 0.002037s | 0.001944s | byte equality observed |
| write_select.test | 10 | 0.001876s | 0.001848s | 0.001840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
