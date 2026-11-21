# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.659165 | 3.908999 | 3.702790 | 0.002654 | 0.002446 | 0.002524 |
| any_completion_executor_select.test | RUN | 0.661266 | 3.949952 | 3.963517 | 0.002820 | 0.002640 | 0.001941 |
| any_completion_handler.test | RUN | 0.734357 | 3.490942 | 3.367363 | 0.001972 | 0.002125 | 0.002171 |
| any_completion_handler_select.test | RUN | 0.789935 | 3.638824 | 3.641462 | 0.002008 | 0.002108 | 0.002005 |
| any_io_executor.test | RUN | 0.680371 | 4.198206 | 4.117158 | 0.002214 | 0.002605 | 0.002499 |
| any_io_executor_select.test | RUN | 0.690002 | 4.192360 | 4.205102 | 0.002265 | 0.002396 | 0.002552 |
| append.test | RUN | 0.616643 | 3.312209 | 3.071421 | 0.001951 | 0.002150 | 0.002116 |
| append_select.test | RUN | 0.616809 | 3.411697 | 2.915251 | 0.002010 | 0.001678 | 0.001774 |
| as_tuple.test | RUN | 0.830995 | 4.043332 | 4.188874 | 0.002241 | 0.002012 | 0.002048 |
| as_tuple_select.test | RUN | 0.832850 | 4.021312 | 4.180983 | 0.001898 | 0.002196 | 0.001667 |
| associated_allocator.test | LINK | 0.184847 | 0.349942 | 0.457419 | — | — | — |
| associated_allocator_select.test | LINK | 0.177708 | 0.351683 | 0.463565 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.195876 | 0.377406 | 0.500887 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.195840 | 0.380409 | 0.486661 | — | — | — |
| associated_executor.test | LINK | 0.279975 | 0.646492 | 0.808967 | — | — | — |
| associated_executor_select.test | LINK | 0.276921 | 0.656764 | 0.803108 | — | — | — |
| associated_immediate_executor.test | LINK | 0.258900 | 0.611721 | 0.732553 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.256770 | 0.627857 | 0.742477 | — | — | — |
| associator.test | LINK | 0.146196 | 0.306655 | 0.389833 | — | — | — |
| associator_select.test | LINK | 0.145660 | 0.294127 | 0.395830 | — | — | — |
| awaitable.test | LINK | 0.144949 | 0.311895 | 0.386716 | — | — | — |
| awaitable_select.test | LINK | 0.142714 | 0.294803 | 0.386650 | — | — | — |
| basic_datagram_socket.test | LINK | 0.428366 | 0.908204 | 1.494219 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.439098 | 0.956381 | 1.541855 | — | — | — |
| basic_deadline_timer.test | LINK | 0.511120 | 1.134254 | 1.720072 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.530797 | 1.133722 | 1.736575 | — | — | — |
| basic_file.test | LINK | 0.146673 | 0.292247 | 0.388234 | — | — | — |
| basic_file_select.test | LINK | 0.145524 | 0.295232 | 0.392720 | — | — | — |
| basic_random_access_file.test | LINK | 0.145273 | 0.293087 | 0.385737 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.143462 | 0.284215 | 0.389469 | — | — | — |
| basic_raw_socket.test | LINK | 0.430344 | 0.935382 | 1.470413 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.439971 | 0.952285 | 1.519907 | — | — | — |
| basic_readable_pipe.test | LINK | 0.418103 | 0.912241 | 1.270208 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.428382 | 0.952563 | 1.561885 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.432134 | 0.921243 | 1.447095 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.438782 | 0.898161 | 1.488016 | — | — | — |
| basic_signal_set.test | LINK | 0.398204 | 0.873751 | 1.161838 | — | — | — |
| basic_signal_set_select.test | LINK | 0.428268 | 0.916260 | 1.452551 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.434999 | 0.928972 | 1.465369 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.448445 | 0.957169 | 1.482978 | — | — | — |
| basic_stream_file.test | LINK | 0.146280 | 0.301179 | 0.406964 | — | — | — |
| basic_stream_file_select.test | LINK | 0.150932 | 0.308460 | 0.408688 | — | — | — |
| basic_stream_socket.test | LINK | 0.486147 | 0.929603 | 1.478575 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.497319 | 0.947196 | 1.493709 | — | — | — |
| basic_streambuf.test | LINK | 0.259293 | 0.431409 | 0.588062 | — | — | — |
| basic_streambuf_select.test | LINK | 0.223920 | 0.441545 | 0.599476 | — | — | — |
| basic_waitable_timer.test | LINK | 0.417265 | 0.869726 | 1.399780 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.424147 | 0.900471 | 1.409724 | — | — | — |
| basic_writable_pipe.test | LINK | 0.417091 | 0.900563 | 1.304796 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.442973 | 0.940708 | 1.579216 | — | — | — |
| bind_allocator.test | RUN | 0.731915 | 3.379202 | 3.360150 | 0.002250 | 0.002464 | 0.002147 |
| bind_allocator_select.test | RUN | 0.732688 | 3.426444 | 3.286745 | 0.002146 | 0.002496 | 0.002141 |
| bind_cancellation_slot.test | RUN | 0.690396 | 3.431492 | 3.354555 | 0.001511 | 0.001693 | 0.001572 |
| bind_cancellation_slot_select.test | RUN | 0.699435 | 3.401769 | 3.257356 | 0.001596 | 0.001625 | 0.001513 |
| bind_executor.test | RUN | 0.471852 | 2.409529 | 2.080795 | 0.002274 | 0.002354 | 0.002218 |
| bind_executor_select.test | RUN | 0.486021 | 2.438173 | 2.079900 | 0.002196 | 0.002041 | 0.002136 |
| bind_immediate_executor.test | RUN | 0.355442 | 1.961909 | 1.306083 | 0.001583 | 0.001388 | 0.001522 |
| bind_immediate_executor_select.test | RUN | 0.365080 | 1.927753 | 1.447184 | 0.001651 | 0.001403 | 0.001473 |
| buffer.test | RUN | 0.219696 | 0.850785 | 0.801177 | 0.001564 | 0.001463 | 0.001479 |
| buffer_select.test | RUN | 0.217196 | 0.844332 | 0.806888 | 0.001315 | 0.001349 | 0.001458 |
| buffer_registration.test | LINK | 0.176646 | 0.432464 | 0.485108 | — | — | — |
| buffer_registration_select.test | LINK | 0.176134 | 0.433137 | 0.493070 | — | — | — |
| buffered_read_stream.test | RUN | 0.762764 | 5.456545 | 4.751786 | 0.001950 | 0.002412 | 0.002433 |
| buffered_read_stream_select.test | RUN | 0.771152 | 5.438669 | 5.129532 | 0.001906 | 0.002291 | 0.002360 |
| buffered_stream.test | RUN | 1.215679 | 8.538472 | 8.268123 | 0.002406 | 0.002481 | 0.002517 |
| buffered_stream_select.test | RUN | 1.283514 | 8.570296 | 8.055022 | 0.002431 | 0.002509 | 0.002408 |
| buffered_write_stream.test | RUN | 1.245192 | 7.229590 | 7.081737 | 0.002193 | 0.002638 | 0.002532 |
| buffered_write_stream_select.test | RUN | 1.245008 | 7.392011 | 6.816594 | 0.002090 | 0.002554 | 0.002466 |
| buffers_iterator.test | RUN | 0.383142 | 0.689683 | 1.111027 | 0.001686 | 0.001912 | 0.001918 |
| buffers_iterator_select.test | RUN | 0.367876 | 0.692743 | 1.127222 | 0.001877 | 0.001969 | 0.001914 |
| cancel_after.test | RUN | 1.067830 | 5.566230 | 5.227448 | 0.004189 | 0.004312 | 0.004488 |
| cancel_after_select.test | RUN | 1.066973 | 5.468887 | 5.182932 | 0.004305 | 0.004390 | 0.004530 |
| cancel_at.test | RUN | 1.053234 | 4.900284 | 4.911310 | 0.003539 | 0.003625 | 0.004235 |
| cancel_at_select.test | RUN | 1.055128 | 4.840230 | 4.793001 | 0.003724 | 0.003996 | 0.004003 |
| cancellation_signal.test | LINK | 0.166353 | 0.257616 | 0.321338 | — | — | — |
| cancellation_signal_select.test | LINK | 0.189629 | 0.264509 | 0.333532 | — | — | — |
| cancellation_state.test | LINK | 0.188567 | 0.263401 | 0.386549 | — | — | — |
| cancellation_state_select.test | LINK | 0.185848 | 0.260709 | 0.453691 | — | — | — |
| cancellation_type.test | LINK | 0.144624 | 0.206801 | 0.337392 | — | — | — |
| cancellation_type_select.test | LINK | 0.145710 | 0.207105 | 0.373362 | — | — | — |
| co_composed.test | RUN | 0.146857 | 0.208448 | 0.364669 | 0.001774 | 0.001511 | 0.001994 |
| co_composed_select.test | RUN | 0.144574 | 0.212989 | 0.407580 | 0.001715 | 0.001923 | 0.001749 |
| co_spawn.test | LINK | 0.143067 | 0.272275 | 0.406730 | — | — | — |
| co_spawn_select.test | LINK | 0.146707 | 0.288248 | 0.386872 | — | — | — |
| completion_condition.test | LINK | 0.188928 | 0.447216 | 0.543021 | — | — | — |
| completion_condition_select.test | LINK | 0.182653 | 0.447453 | 0.520530 | — | — | — |
| compose.test | RUN | 0.818326 | 4.202085 | 4.337600 | 0.002488 | 0.002364 | 0.002642 |
| compose_select.test | RUN | 0.818507 | 4.153781 | 4.307031 | 0.002167 | 0.001820 | 0.002467 |
| composed.test | RUN | 0.794631 | 4.174436 | 4.227230 | 0.002302 | 0.002248 | 0.002226 |
| composed_select.test | RUN | 0.808737 | 4.112932 | 4.129717 | 0.002017 | 0.001978 | 0.002132 |
| config.test | RUN | 0.415067 | 2.650253 | 1.813219 | 0.002072 | 0.001753 | 0.002013 |
| config_select.test | RUN | 0.482542 | 2.755566 | 2.131103 | 0.002039 | 0.001920 | 0.001990 |
| connect.test | LINK | 1.253739 | 9.247573 | 8.966349 | — | — | — |
| connect_select.test | LINK | 1.276781 | 9.144750 | 9.120698 | — | — | — |
| connect_pipe.test | RUN | 0.710508 | 3.378801 | 3.301635 | 0.001940 | 0.002020 | 0.002166 |
| connect_pipe_select.test | RUN | 0.730687 | 3.527338 | 3.478784 | 0.001898 | 0.002084 | 0.002050 |
| consign.test | RUN | 0.613066 | 3.308154 | 2.955020 | 0.001976 | 0.001986 | 0.002142 |
| consign_select.test | RUN | 0.637296 | 3.411579 | 2.914435 | 0.001996 | 0.001976 | 0.001854 |
| coroutine.test | LINK | 0.149193 | 0.332743 | 0.478861 | — | — | — |
| coroutine_select.test | LINK | 0.151221 | 0.353309 | 0.429294 | — | — | — |
| deadline_timer.test | RUN | 0.890131 | 4.375112 | 4.228842 | 0.003458 | 0.003264 | 0.003665 |
| deadline_timer_select.test | RUN | 0.896674 | 4.330518 | 4.230124 | 0.003078 | 0.003557 | 0.003058 |
| deferred.test | RUN | 0.157371 | 0.323669 | 0.447193 | 0.001612 | 0.001916 | 0.001916 |
| deferred_select.test | RUN | 0.155243 | 0.330784 | 0.450436 | 0.001813 | 0.001938 | 0.001914 |
| detached.test | LINK | 0.176667 | 0.357583 | 0.480680 | — | — | — |
| detached_select.test | LINK | 0.180777 | 0.353621 | 0.490699 | — | — | — |
| disposition.test | RUN | 0.160766 | 0.844544 | 0.862384 | 0.001526 | 0.002095 | 0.001971 |
| disposition_select.test | RUN | 0.160032 | 0.838030 | 0.872266 | 0.001486 | 0.001999 | 0.002124 |
| error.test | RUN | 0.150513 | 0.817484 | 0.766715 | 0.001534 | 0.002104 | 0.001803 |
| error_select.test | RUN | 0.149322 | 0.842767 | 0.742794 | 0.001541 | 0.001981 | 0.001916 |
| file_base.test | LINK | 0.187840 | 0.702865 | 0.700724 | — | — | — |
| file_base_select.test | LINK | 0.189974 | 0.706210 | 0.621490 | — | — | — |
| fwd_first.test | LINK | 0.432225 | 0.972629 | 1.497556 | — | — | — |
| fwd_last.test | LINK | 0.435325 | 0.955947 | 1.514416 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.168724 | 0.393406 | 0.527852 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.173772 | 0.387818 | 0.537477 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.633824 | 3.409494 | 2.986930 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.635310 | 3.550943 | 2.990832 | — | — | — |
| generic_raw_protocol.test | LINK | 0.631047 | 3.416201 | 3.017743 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.643234 | 3.568265 | 2.958872 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.558794 | 3.017033 | 2.524164 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.560940 | 3.081567 | 2.507557 | — | — | — |
| generic_stream_protocol.test | LINK | 0.590794 | 3.186497 | 2.747275 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.592836 | 3.311097 | 2.769475 | — | — | — |
| high_resolution_timer.test | LINK | 0.273861 | 0.621898 | 0.860641 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.277810 | 0.620016 | 0.887434 | — | — | — |
| immediate.test | LINK | 0.194651 | 0.456307 | 0.536808 | — | — | — |
| immediate_select.test | LINK | 0.193394 | 0.458450 | 0.532322 | — | — | — |
| inline_executor.test | RUN | 0.231502 | 0.712953 | 0.795886 | 0.001500 | 0.001564 | 0.001561 |
| inline_executor_select.test | RUN | 0.230301 | 0.735706 | 0.810145 | 0.001515 | 0.001532 | 0.001517 |
| inline_or_executor.test | RUN | 0.359494 | 2.113487 | 1.526672 | 0.001542 | 0.001510 | 0.001497 |
| inline_or_executor_select.test | RUN | 0.376015 | 2.166425 | 1.634545 | 0.001556 | 0.001547 | 0.001491 |
| io_context.test | RUN | 0.524620 | 3.119040 | 2.643048 | 0.002427 | 0.002473 | 0.002467 |
| io_context_select.test | RUN | 0.526039 | 3.084651 | 2.672050 | 0.002192 | 0.002292 | 0.002343 |
| io_context_strand.test | RUN | 0.500199 | 2.643162 | 2.277546 | 0.002357 | 0.002523 | 0.002486 |
| io_context_strand_select.test | RUN | 0.513761 | 2.569676 | 2.323479 | 0.002306 | 0.002437 | 0.002285 |
| ip_address.test | LINK | 0.191764 | 0.606439 | 0.647061 | — | — | — |
| ip_address_select.test | LINK | 0.193491 | 0.613765 | 0.650915 | — | — | — |
| ip_address_v4.test | LINK | 0.196708 | 0.639569 | 0.710667 | — | — | — |
| ip_address_v4_select.test | LINK | 0.196305 | 0.635673 | 0.697715 | — | — | — |
| ip_address_v6.test | LINK | 0.218312 | 0.827033 | 0.851692 | — | — | — |
| ip_address_v6_select.test | LINK | 0.221460 | 0.829653 | 0.855057 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.171411 | 0.411304 | 0.553803 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.170976 | 0.406385 | 0.562098 | — | — | — |
| ip_basic_resolver.test | LINK | 0.275956 | 0.588416 | 0.832078 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.284528 | 0.602027 | 0.870159 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.099886 | 0.194888 | 0.240562 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.097169 | 0.197280 | 0.241571 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.170968 | 0.397605 | 0.543947 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.172935 | 0.397581 | 0.551259 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.162911 | 0.386066 | 0.733435 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.166695 | 0.383966 | 0.649556 | — | — | — |
| ip_host_name.test | RUN | 0.174355 | 0.517900 | 0.989389 | 0.001420 | 0.001331 | 0.001867 |
| ip_host_name_select.test | RUN | 0.176450 | 0.521441 | 1.015187 | 0.001491 | 0.001321 | 0.002062 |
| ip_icmp.test | RUN | 0.770254 | 6.392955 | 6.058519 | 0.001435 | 0.002067 | 0.001776 |
| ip_icmp_select.test | RUN | 0.769128 | 6.715849 | 5.908811 | 0.001460 | 0.002127 | 0.001880 |
| ip_multicast.test | RUN | 0.454698 | 3.710826 | 3.443830 | 0.001573 | 0.002224 | 0.001832 |
| ip_multicast_select.test | RUN | 0.462814 | 3.670068 | 3.399393 | 0.001616 | 0.001906 | 0.001912 |
| ip_resolver_query_base.test | LINK | 0.117891 | 0.317279 | 0.403930 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.116979 | 0.326569 | 0.406887 | — | — | — |
| ip_tcp.test | RUN | 1.138432 | 10.384633 | 9.092824 | 0.002084 | 0.002925 | 0.002511 |
| ip_tcp_select.test | RUN | 1.131558 | 10.806977 | 8.736531 | 0.002038 | 0.002743 | 0.002482 |
| ip_udp.test | RUN | 0.830092 | 7.378138 | 6.277733 | 0.001654 | 0.002020 | 0.001916 |
| ip_udp_select.test | RUN | 0.823602 | 7.556426 | 6.131510 | 0.001620 | 0.002176 | 0.001692 |
| ip_unicast.test | RUN | 0.428375 | 3.181306 | 3.063009 | 0.001592 | 0.002142 | 0.001564 |
| ip_unicast_select.test | RUN | 0.428605 | 3.229997 | 3.017075 | 0.001542 | 0.002260 | 0.001512 |
| ip_v6_only.test | RUN | 0.440636 | 3.389271 | 3.116190 | 0.001532 | 0.002270 | 0.001877 |
| ip_v6_only_select.test | RUN | 0.444932 | 3.483000 | 3.087513 | 0.001602 | 0.002065 | 0.001654 |
| is_read_buffered.test | RUN | 0.317594 | 1.028217 | 1.695565 | 0.001350 | 0.001853 | 0.001575 |
| is_read_buffered_select.test | RUN | 0.322434 | 1.102796 | 1.732282 | 0.001456 | 0.001944 | 0.001474 |
| is_write_buffered.test | RUN | 0.311022 | 1.058537 | 1.686274 | 0.001414 | 0.002006 | 0.001632 |
| is_write_buffered_select.test | RUN | 0.321299 | 1.123619 | 1.728335 | 0.001440 | 0.001868 | 0.001507 |
| local_basic_endpoint.test | LINK | 0.166097 | 0.613769 | 0.892994 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.167636 | 0.609173 | 0.899952 | — | — | — |
| local_connect_pair.test | LINK | 0.407536 | 3.259696 | 2.879014 | — | — | — |
| local_connect_pair_select.test | LINK | 0.415374 | 3.238008 | 2.842806 | — | — | — |
| local_datagram_protocol.test | LINK | 0.599516 | 4.263564 | 3.951304 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.659783 | 4.261506 | 3.880411 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.809858 | 4.137703 | 3.891839 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.816697 | 4.287993 | 3.862227 | — | — | — |
| local_stream_protocol.test | LINK | 0.750869 | 3.987169 | 3.761977 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.782312 | 4.110196 | 3.717212 | — | — | — |
| placeholders.test | LINK | 0.155592 | 0.324866 | 0.422048 | — | — | — |
| placeholders_select.test | LINK | 0.151488 | 0.321131 | 0.425110 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.405194 | 0.894954 | 1.301485 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.425709 | 0.939258 | 1.541466 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.397525 | 0.901481 | 1.283223 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.425053 | 0.946674 | 1.552891 | — | — | — |
| posix_descriptor_base.test | LINK | 0.169098 | 0.321045 | 0.387832 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.171999 | 0.325531 | 0.388242 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.791183 | 3.949906 | 3.712256 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.808928 | 4.054557 | 3.797403 | — | — | — |
| prepend.test | RUN | 0.612249 | 3.227952 | 2.917808 | 0.001972 | 0.002042 | 0.001843 |
| prepend_select.test | RUN | 0.622002 | 3.299181 | 2.903921 | 0.001688 | 0.001970 | 0.001975 |
| random_access_file.test | LINK | 0.370338 | 0.788409 | 0.954006 | — | — | — |
| random_access_file_select.test | LINK | 0.379574 | 0.834860 | 1.274007 | — | — | — |
| read.test | RUN | 1.880093 | 21.174118 | 16.817454 | 0.002623 | 0.002218 | 0.002357 |
| read_select.test | RUN | 1.889493 | 20.935429 | 17.136100 | 0.002613 | 0.002428 | 0.002407 |
| read_at.test | RUN | 1.876066 | 30.543917 | 23.221877 | 0.002729 | 0.003073 | 0.002995 |
| read_at_select.test | RUN | 1.889678 | 30.610615 | 23.499888 | 0.002992 | 0.003201 | 0.002860 |
| read_until.test | RUN | 0.986738 | 7.999636 | 5.936314 | 0.002079 | 0.002136 | 0.002139 |
| read_until_select.test | RUN | 0.993920 | 8.050735 | 6.112905 | 0.002104 | 0.001972 | 0.002126 |
| readable_pipe.test | LINK | 0.621458 | 3.293409 | 2.896068 | — | — | — |
| readable_pipe_select.test | LINK | 0.649103 | 3.454335 | 3.123377 | — | — | — |
| recycling_allocator.test | RUN | 0.201330 | 0.505105 | 0.628585 | 0.001596 | 0.001716 | 0.001878 |
| recycling_allocator_select.test | RUN | 0.201681 | 0.504614 | 0.631107 | 0.001798 | 0.001885 | 0.001759 |
| redirect_disposition.test | LINK | 0.809847 | 4.504745 | 4.514172 | — | — | — |
| redirect_disposition_select.test | LINK | 0.827737 | 4.480627 | 4.408495 | — | — | — |
| redirect_error.test | LINK | 0.731772 | 3.812149 | 3.913593 | — | — | — |
| redirect_error_select.test | LINK | 0.759752 | 3.819276 | 3.891271 | — | — | — |
| registered_buffer.test | LINK | 0.200819 | 0.407006 | 0.535021 | — | — | — |
| registered_buffer_select.test | LINK | 0.195767 | 0.400578 | 0.541403 | — | — | — |
| signal_set.test | RUN | 0.598866 | 3.249499 | 2.697597 | 0.001900 | 0.002082 | 0.001888 |
| signal_set_select.test | RUN | 0.621601 | 3.359717 | 3.064218 | 0.001920 | 0.002072 | 0.001856 |
| signal_set_base.test | LINK | 0.158745 | 0.322907 | 0.425197 | — | — | — |
| signal_set_base_select.test | LINK | 0.169849 | 0.325500 | 0.414020 | — | — | — |
| socket_base.test | RUN | 0.750123 | 5.140041 | 4.304849 | 0.002176 | 0.002080 | 0.002080 |
| socket_base_select.test | RUN | 0.757543 | 4.960631 | 4.210608 | 0.002086 | 0.002184 | 0.002058 |
| spawn.test | RUN | 1.266530 | 7.766925 | 7.154334 | 0.002196 | 0.002365 | 0.002275 |
| spawn_select.test | RUN | 1.257182 | 7.792109 | 7.186822 | 0.002121 | 0.002250 | 0.002178 |
| static_thread_pool.test | RUN | 0.363876 | 0.755985 | 1.005854 | 0.001827 | 0.001876 | 0.001832 |
| static_thread_pool_select.test | RUN | 0.376978 | 0.812026 | 1.263049 | 0.001771 | 0.001893 | 0.001840 |
| steady_timer.test | LINK | 0.396036 | 0.899601 | 1.400885 | — | — | — |
| steady_timer_select.test | LINK | 0.398722 | 0.899026 | 1.363532 | — | — | — |
| strand.test | RUN | 0.784342 | 4.405411 | 4.207524 | 0.002394 | 0.002982 | 0.002857 |
| strand_select.test | RUN | 0.807312 | 4.353497 | 4.184264 | 0.002685 | 0.002822 | 0.002415 |
| stream_file.test | LINK | 0.377681 | 0.826645 | 1.047809 | — | — | — |
| stream_file_select.test | LINK | 0.391057 | 0.858448 | 1.301999 | — | — | — |
| streambuf.test | RUN | 0.214489 | 0.567195 | 0.727347 | 0.001488 | 0.001466 | 0.002016 |
| streambuf_select.test | RUN | 0.169318 | 0.496977 | 0.718642 | 0.001467 | 0.001317 | 0.001621 |
| system_timer.test | LINK | 0.593194 | 2.917603 | 2.736845 | — | — | — |
| system_timer_select.test | LINK | 0.580483 | 2.883000 | 2.487895 | — | — | — |
| system_context.test | LINK | 0.245471 | 0.534541 | 0.607282 | — | — | — |
| system_context_select.test | LINK | 0.253695 | 0.591408 | 0.773544 | — | — | — |
| system_executor.test | LINK | 0.318800 | 1.662348 | 1.166331 | — | — | — |
| system_executor_select.test | LINK | 0.329577 | 1.640315 | 1.309170 | — | — | — |
| this_coro.test | LINK | 0.102349 | 0.195322 | 0.236591 | — | — | — |
| this_coro_select.test | LINK | 0.101502 | 0.195117 | 0.241864 | — | — | — |
| thread_pool.test | RUN | 0.391577 | 2.272854 | 1.479099 | 0.002737 | 0.002766 | 0.002631 |
| thread_pool_select.test | RUN | 0.396199 | 2.392497 | 1.623412 | 0.002644 | 0.003198 | 0.002590 |
| time_traits.test | LINK | 0.212782 | 0.616693 | 0.494716 | — | — | — |
| time_traits_select.test | LINK | 0.217007 | 0.609511 | 0.482543 | — | — | — |
| ts_buffer.test | LINK | 0.209845 | 0.673076 | 0.582913 | — | — | — |
| ts_buffer_select.test | LINK | 0.214543 | 0.667970 | 0.722772 | — | — | — |
| ts_executor.test | LINK | 0.294845 | 0.926789 | 1.318550 | — | — | — |
| ts_executor_select.test | LINK | 0.295487 | 0.985146 | 1.540597 | — | — | — |
| ts_internet.test | LINK | 0.315123 | 1.023692 | 1.634211 | — | — | — |
| ts_internet_select.test | LINK | 0.321466 | 1.044669 | 1.673537 | — | — | — |
| ts_io_context.test | LINK | 0.252241 | 0.785221 | 1.002004 | — | — | — |
| ts_io_context_select.test | LINK | 0.264471 | 0.848022 | 1.259788 | — | — | — |
| ts_net.test | LINK | 0.367629 | 1.227139 | 2.034983 | — | — | — |
| ts_net_select.test | LINK | 0.374436 | 1.256307 | 2.089817 | — | — | — |
| ts_netfwd.test | LINK | 0.370866 | 1.226746 | 2.056218 | — | — | — |
| ts_netfwd_select.test | LINK | 0.373386 | 1.277922 | 2.081975 | — | — | — |
| ts_socket.test | LINK | 0.307075 | 0.961103 | 1.571356 | — | — | — |
| ts_socket_select.test | LINK | 0.306028 | 0.976740 | 1.607399 | — | — | — |
| ts_timer.test | LINK | 0.270993 | 0.869225 | 1.390241 | — | — | — |
| ts_timer_select.test | LINK | 0.272876 | 0.896153 | 1.376667 | — | — | — |
| use_awaitable.test | LINK | 0.098810 | 0.291537 | 0.405707 | — | — | — |
| use_awaitable_select.test | LINK | 0.096884 | 0.280875 | 0.381696 | — | — | — |
| wait_traits.test | LINK | 0.099163 | 0.294820 | 0.383983 | — | — | — |
| wait_traits_select.test | LINK | 0.096172 | 0.286588 | 0.388460 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.098125 | 0.286309 | 0.387758 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.097608 | 0.290293 | 0.385043 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.098206 | 0.290748 | 0.383491 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.096865 | 0.288445 | 0.392298 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.097946 | 0.294112 | 0.357109 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.097143 | 0.285283 | 0.361092 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.098728 | 0.290219 | 0.359837 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.097739 | 0.289235 | 0.355882 | — | — | — |
| windows_object_handle.test | LINK | 0.361015 | 0.818506 | 1.022698 | — | — | — |
| windows_object_handle_select.test | LINK | 0.369419 | 0.876634 | 1.272327 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.384029 | 0.853728 | 1.111664 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.394189 | 0.895333 | 1.387841 | — | — | — |
| windows_random_access_handle.test | LINK | 0.362717 | 0.786397 | 1.015061 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.385288 | 0.821410 | 1.290953 | — | — | — |
| windows_stream_handle.test | LINK | 0.369191 | 0.791894 | 1.008969 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.389588 | 0.854026 | 1.295618 | — | — | — |
| writable_pipe.test | LINK | 0.644929 | 3.223605 | 3.014719 | — | — | — |
| writable_pipe_select.test | LINK | 0.689550 | 3.352484 | 3.172543 | — | — | — |
| write.test | RUN | 1.846123 | 17.302325 | 16.550187 | 0.002697 | 0.002530 | 0.002703 |
| write_select.test | RUN | 1.908344 | 17.311805 | 16.825750 | 0.002549 | 0.002662 | 0.002534 |
| write_at.test | RUN | 1.927707 | 24.705742 | 22.300651 | 0.002761 | 0.002782 | 0.002760 |
| write_at_select.test | RUN | 1.917589 | 25.029278 | 22.844292 | 0.002564 | 0.002848 | 0.002763 |
| any_executor.test | RUN | 0.776241 | 8.494820 | 6.708616 | 0.002438 | 0.002760 | 0.002530 |
| blocking.test | RUN | 1.941891 | 9.899560 | 13.854863 | 0.007249 | 0.007209 | 0.007486 |
| blocking_adaptation.test | RUN | 1.001808 | 4.100385 | 6.554893 | 0.003890 | 0.004162 | 0.004026 |
| context_as.test | RUN | 0.533854 | 2.838930 | 2.168044 | 0.002189 | 0.002134 | 0.002125 |
| executor.test | RUN | 0.155780 | 0.308939 | 0.414471 | 0.001866 | 0.001838 | 0.001841 |
| inline_exception_handling.test | RUN | 2.012564 | 8.997502 | 12.803211 | 0.005528 | 0.005165 | 0.005190 |
| invocable_archetype.test | RUN | 0.142986 | 0.294908 | 0.396930 | 0.001831 | 0.001903 | 0.001886 |
| mapping.test | RUN | 1.848688 | 8.923013 | 13.983576 | 0.005305 | 0.005178 | 0.005336 |
| outstanding_work.test | RUN | 0.889869 | 3.785700 | 6.227469 | 0.004258 | 0.004110 | 0.004291 |
| prefer_only.test | RUN | 0.301332 | 1.566630 | 1.412168 | 0.001906 | 0.001710 | 0.001939 |
| relationship.test | RUN | 0.654164 | 3.832655 | 6.241492 | 0.003669 | 0.004114 | 0.003853 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.988×, 0.986× | 1.022× |
| clang | 1.009× | 0.998×, 1.020× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001590s | 0.001645s | 0.001581s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001575s | 0.001591s | 0.001569s | byte equality observed |
| any_completion_handler.test | 6 | 0.001292s | 0.001280s | 0.001257s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001276s | 0.001255s | 0.001251s | byte equality observed |
| any_io_executor.test | 6 | 0.001554s | 0.001585s | 0.001550s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001570s | 0.001544s | 0.001592s | byte equality observed |
| append.test | 9 | 0.001220s | 0.001207s | 0.001191s | byte equality observed |
| append_select.test | 10 | 0.001187s | 0.001172s | 0.001180s | byte equality observed |
| as_tuple.test | 8 | 0.001311s | 0.001289s | 0.001284s | byte equality observed |
| as_tuple_select.test | 9 | 0.001207s | 0.001169s | 0.001228s | byte equality observed |
| bind_allocator.test | 1 | 0.001687s | 0.001634s | 0.001700s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001371s | 0.001252s | 0.001419s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001111s | 0.001143s | 0.001139s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001039s | 0.001065s | 0.001054s | byte equality observed |
| bind_executor.test | 1 | 0.001639s | 0.001617s | 0.001668s | byte equality observed |
| bind_executor_select.test | 1 | 0.001977s | 0.001953s | 0.001953s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001111s | 0.001076s | 0.001095s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001056s | 0.001063s | 0.001079s | byte equality observed |
| buffer.test | 10 | 0.001037s | 0.001013s | 0.001027s | byte equality observed |
| buffer_select.test | 10 | 0.001026s | 0.001022s | 0.001002s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001314s | 0.001309s | 0.001342s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001293s | 0.001298s | 0.001315s | byte equality observed |
| buffered_stream.test | 10 | 0.001328s | 0.001304s | 0.001324s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001299s | 0.001266s | 0.001290s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001283s | 0.001294s | 0.001368s | byte equality observed |
| buffered_write_stream_select.test | 9 | 0.001299s | 0.001275s | 0.001298s | byte equality observed |
| buffers_iterator.test | 10 | 0.001025s | 0.000993s | 0.001006s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000972s | 0.000977s | 0.000958s | byte equality observed |
| cancel_after.test | 1 | 0.003358s | 0.003211s | 0.003363s | byte equality observed |
| cancel_after_select.test | 1 | 0.002803s | 0.002725s | 0.002811s | byte equality observed |
| cancel_at.test | 1 | 0.003513s | 0.003482s | 0.003606s | byte equality observed |
| cancel_at_select.test | 1 | 0.003443s | 0.003292s | 0.003319s | byte equality observed |
| co_composed.test | 10 | 0.001008s | 0.001023s | 0.001017s | byte equality observed |
| co_composed_select.test | 10 | 0.000970s | 0.000986s | 0.000982s | byte equality observed |
| compose.test | 1 | 0.001708s | 0.001680s | 0.001698s | byte equality observed |
| compose_select.test | 1 | 0.001371s | 0.001375s | 0.001401s | byte equality observed |
| composed.test | 1 | 0.002020s | 0.001955s | 0.002030s | byte equality observed |
| composed_select.test | 1 | 0.001488s | 0.001440s | 0.001537s | byte equality observed |
| config.test | 10 | 0.001088s | 0.001076s | 0.001095s | byte equality observed |
| config_select.test | 10 | 0.001060s | 0.001031s | 0.001039s | byte equality observed |
| connect_pipe.test | 10 | 0.001086s | 0.001095s | 0.001106s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001062s | 0.001046s | 0.001084s | byte equality observed |
| consign.test | 10 | 0.001083s | 0.001066s | 0.001089s | byte equality observed |
| consign_select.test | 10 | 0.001038s | 0.001010s | 0.001019s | byte equality observed |
| deadline_timer.test | 1 | 0.002301s | 0.002340s | 0.002375s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002137s | 0.002102s | 0.002101s | byte equality observed |
| deferred.test | 10 | 0.000997s | 0.000984s | 0.000998s | byte equality observed |
| deferred_select.test | 10 | 0.000949s | 0.000943s | 0.000945s | byte equality observed |
| disposition.test | 10 | 0.001005s | 0.000993s | 0.000996s | byte equality observed |
| disposition_select.test | 10 | 0.001011s | 0.001012s | 0.000997s | byte equality observed |
| error.test | 10 | 0.000982s | 0.000980s | 0.000966s | byte equality observed |
| error_select.test | 10 | 0.000975s | 0.000970s | 0.000967s | byte equality observed |
| inline_executor.test | 10 | 0.000992s | 0.000978s | 0.000973s | byte equality observed |
| inline_executor_select.test | 10 | 0.000986s | 0.000981s | 0.000986s | byte equality observed |
| inline_or_executor.test | 10 | 0.000999s | 0.000984s | 0.000981s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000989s | 0.000988s | 0.000990s | byte equality observed |
| io_context.test | 1 | 0.001902s | 0.001848s | 0.001921s | byte equality observed |
| io_context_select.test | 1 | 0.002194s | 0.002167s | 0.002260s | byte equality observed |
| io_context_strand.test | 1 | 0.002259s | 0.002229s | 0.002286s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002033s | 0.002003s | 0.002031s | byte equality observed |
| ip_host_name.test | 10 | 0.001006s | 0.001009s | 0.001005s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000980s | 0.000959s | 0.000963s | byte equality observed |
| ip_icmp.test | 10 | 0.000996s | 0.000991s | 0.000971s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000990s | 0.000997s | 0.000974s | byte equality observed |
| ip_multicast.test | 10 | 0.001077s | 0.001062s | 0.001068s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001053s | 0.001043s | 0.001043s | byte equality observed |
| ip_tcp.test | 10 | 0.001496s | 0.001447s | 0.001456s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001396s | 0.001377s | 0.001400s | byte equality observed |
| ip_udp.test | 10 | 0.001110s | 0.001084s | 0.001084s | byte equality observed |
| ip_udp_select.test | 10 | 0.001103s | 0.001068s | 0.001066s | byte equality observed |
| ip_unicast.test | 10 | 0.001092s | 0.001041s | 0.001067s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001063s | 0.001025s | 0.001052s | byte equality observed |
| ip_v6_only.test | 10 | 0.001075s | 0.001061s | 0.001059s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001069s | 0.001067s | 0.001063s | byte equality observed |
| is_read_buffered.test | 10 | 0.001013s | 0.001014s | 0.001025s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000994s | 0.001010s | 0.001005s | byte equality observed |
| is_write_buffered.test | 10 | 0.001010s | 0.000970s | 0.001004s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001010s | 0.001014s | 0.001024s | byte equality observed |
| prepend.test | 10 | 0.001066s | 0.001086s | 0.001096s | byte equality observed |
| prepend_select.test | 10 | 0.001049s | 0.001052s | 0.001095s | byte equality observed |
| read.test | 10 | 0.001460s | 0.001433s | 0.001514s | byte equality observed |
| read_at.test | 10 | 0.001837s | 0.001831s | 0.001722s | byte equality observed |
| read_at_select.test | 10 | 0.001840s | 0.001816s | 0.001690s | byte equality observed |
| read_select.test | 10 | 0.001457s | 0.001404s | 0.001433s | byte equality observed |
| read_until.test | 10 | 0.001206s | 0.001181s | 0.001182s | byte equality observed |
| read_until_select.test | 10 | 0.001188s | 0.001190s | 0.001173s | byte equality observed |
| recycling_allocator.test | 10 | 0.001006s | 0.001012s | 0.001038s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001013s | 0.000999s | 0.000987s | byte equality observed |
| signal_set.test | 10 | 0.001034s | 0.001035s | 0.001012s | byte equality observed |
| signal_set_select.test | 10 | 0.001042s | 0.001028s | 0.001030s | byte equality observed |
| socket_base.test | 10 | 0.001151s | 0.001130s | 0.001123s | byte equality observed |
| socket_base_select.test | 10 | 0.001134s | 0.001111s | 0.001112s | byte equality observed |
| spawn.test | 10 | 0.001222s | 0.001220s | 0.001211s | byte equality observed |
| spawn_select.test | 10 | 0.001225s | 0.001226s | 0.001242s | byte equality observed |
| static_thread_pool.test | 10 | 0.001010s | 0.001011s | 0.001012s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001011s | 0.000973s | 0.000982s | byte equality observed |
| strand.test | 1 | 0.001927s | 0.001961s | 0.001942s | byte equality observed |
| strand_select.test | 1 | 0.001677s | 0.001616s | 0.001649s | byte equality observed |
| streambuf.test | 10 | 0.001047s | 0.001036s | 0.001043s | byte equality observed |
| streambuf_select.test | 10 | 0.001029s | 0.001039s | 0.001042s | byte equality observed |
| thread_pool.test | 10 | 0.002191s | 0.002193s | 0.002202s | byte equality observed |
| thread_pool_select.test | 10 | 0.002189s | 0.002185s | 0.002221s | byte equality observed |
| write.test | 10 | 0.001536s | 0.001451s | 0.001484s | byte equality observed |
| write_at.test | 10 | 0.001641s | 0.001585s | 0.001554s | byte equality observed |
| write_at_select.test | 10 | 0.001624s | 0.001569s | 0.001554s | byte equality observed |
| write_select.test | 10 | 0.001494s | 0.001473s | 0.001465s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
