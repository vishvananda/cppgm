# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.609293 | 3.788453 | 3.476580 | 0.002447 | 0.002572 | 0.002304 |
| any_completion_executor_select.test | RUN | 0.654645 | 3.688857 | 3.657271 | 0.002174 | 0.002674 | 0.002080 |
| any_completion_handler.test | RUN | 0.703280 | 3.476508 | 3.234594 | 0.001914 | 0.001870 | 0.001911 |
| any_completion_handler_select.test | RUN | 0.716497 | 3.528452 | 3.432252 | 0.001983 | 0.002098 | 0.001986 |
| any_io_executor.test | RUN | 0.652916 | 3.947328 | 3.769664 | 0.001898 | 0.002366 | 0.002477 |
| any_io_executor_select.test | RUN | 0.670635 | 3.959847 | 3.961630 | 0.001860 | 0.002614 | 0.002130 |
| append.test | RUN | 0.611080 | 3.159230 | 2.887354 | 0.001734 | 0.001976 | 0.001614 |
| append_select.test | RUN | 0.602281 | 3.263674 | 2.868999 | 0.001784 | 0.002000 | 0.001786 |
| as_tuple.test | RUN | 0.760163 | 3.782777 | 3.945340 | 0.002060 | 0.001996 | 0.001998 |
| as_tuple_select.test | RUN | 0.758370 | 3.776193 | 3.933869 | 0.001618 | 0.002124 | 0.001806 |
| associated_allocator.test | LINK | 0.165027 | 0.346274 | 0.475450 | — | — | — |
| associated_allocator_select.test | LINK | 0.171723 | 0.348685 | 0.470837 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.178202 | 0.388467 | 0.502208 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.178182 | 0.377927 | 0.500766 | — | — | — |
| associated_executor.test | LINK | 0.257859 | 0.640407 | 0.796788 | — | — | — |
| associated_executor_select.test | LINK | 0.262172 | 0.632502 | 0.795283 | — | — | — |
| associated_immediate_executor.test | LINK | 0.239782 | 0.595350 | 0.722657 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.243417 | 0.569058 | 0.695689 | — | — | — |
| associator.test | LINK | 0.132027 | 0.286263 | 0.378232 | — | — | — |
| associator_select.test | LINK | 0.131322 | 0.281402 | 0.390808 | — | — | — |
| awaitable.test | LINK | 0.137575 | 0.286641 | 0.380380 | — | — | — |
| awaitable_select.test | LINK | 0.136807 | 0.291239 | 0.375792 | — | — | — |
| basic_datagram_socket.test | LINK | 0.406567 | 0.879139 | 1.422508 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.407088 | 0.897982 | 1.468839 | — | — | — |
| basic_deadline_timer.test | LINK | 0.502167 | 1.057931 | 1.620015 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.508333 | 1.085815 | 1.658651 | — | — | — |
| basic_file.test | LINK | 0.134587 | 0.278901 | 0.383089 | — | — | — |
| basic_file_select.test | LINK | 0.130464 | 0.288706 | 0.384451 | — | — | — |
| basic_random_access_file.test | LINK | 0.135694 | 0.282123 | 0.362727 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.137461 | 0.284688 | 0.359406 | — | — | — |
| basic_raw_socket.test | LINK | 0.399961 | 0.891018 | 1.425210 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.405640 | 0.908525 | 1.466637 | — | — | — |
| basic_readable_pipe.test | LINK | 0.401582 | 0.841798 | 1.226812 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.401562 | 0.912549 | 1.522898 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.404648 | 0.886112 | 1.435262 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.405463 | 0.909506 | 1.465923 | — | — | — |
| basic_signal_set.test | LINK | 0.387378 | 0.811872 | 1.093294 | — | — | — |
| basic_signal_set_select.test | LINK | 0.395295 | 0.888049 | 1.389260 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.409984 | 0.899752 | 1.386887 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.409987 | 0.934575 | 1.455052 | — | — | — |
| basic_stream_file.test | LINK | 0.140778 | 0.281292 | 0.399550 | — | — | — |
| basic_stream_file_select.test | LINK | 0.138435 | 0.271403 | 0.394025 | — | — | — |
| basic_stream_socket.test | LINK | 0.400870 | 0.884501 | 1.434767 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.412650 | 0.924397 | 1.386869 | — | — | — |
| basic_streambuf.test | LINK | 0.198728 | 0.403410 | 0.578486 | — | — | — |
| basic_streambuf_select.test | LINK | 0.198439 | 0.419019 | 0.577747 | — | — | — |
| basic_waitable_timer.test | LINK | 0.377362 | 0.841096 | 1.325876 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.387106 | 0.833881 | 1.378104 | — | — | — |
| basic_writable_pipe.test | LINK | 0.391457 | 0.862047 | 1.223138 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.409938 | 0.898517 | 1.482747 | — | — | — |
| bind_allocator.test | RUN | 0.642537 | 3.233743 | 3.125391 | 0.002220 | 0.001833 | 0.002256 |
| bind_allocator_select.test | RUN | 0.656921 | 3.259602 | 3.127937 | 0.002121 | 0.002033 | 0.001744 |
| bind_cancellation_slot.test | RUN | 0.651149 | 3.247561 | 3.176366 | 0.001463 | 0.001484 | 0.001419 |
| bind_cancellation_slot_select.test | RUN | 0.651922 | 3.231825 | 3.053608 | 0.001410 | 0.001460 | 0.001395 |
| bind_executor.test | RUN | 0.443937 | 2.252339 | 1.902556 | 0.002054 | 0.002132 | 0.001987 |
| bind_executor_select.test | RUN | 0.444503 | 2.277271 | 1.907174 | 0.001851 | 0.001925 | 0.001884 |
| bind_immediate_executor.test | RUN | 0.336607 | 1.862811 | 1.211269 | 0.001424 | 0.001349 | 0.001319 |
| bind_immediate_executor_select.test | RUN | 0.350857 | 1.814675 | 1.359518 | 0.001190 | 0.001468 | 0.001336 |
| buffer.test | RUN | 0.203741 | 0.775823 | 0.758240 | 0.001339 | 0.001403 | 0.001350 |
| buffer_select.test | RUN | 0.211204 | 0.777968 | 0.764888 | 0.001279 | 0.001307 | 0.001299 |
| buffer_registration.test | LINK | 0.166211 | 0.399279 | 0.448490 | — | — | — |
| buffer_registration_select.test | LINK | 0.169276 | 0.402876 | 0.451835 | — | — | — |
| buffered_read_stream.test | RUN | 0.729875 | 5.009162 | 4.383839 | 0.001731 | 0.002009 | 0.002277 |
| buffered_read_stream_select.test | RUN | 0.732231 | 4.983730 | 4.569080 | 0.001609 | 0.001866 | 0.002146 |
| buffered_stream.test | RUN | 1.059111 | 7.705329 | 7.713605 | 0.002380 | 0.002326 | 0.001579 |
| buffered_stream_select.test | RUN | 1.143625 | 7.725920 | 7.365864 | 0.002326 | 0.002310 | 0.002030 |
| buffered_write_stream.test | RUN | 1.191478 | 6.602789 | 6.544225 | 0.002344 | 0.002016 | 0.002164 |
| buffered_write_stream_select.test | RUN | 1.217170 | 6.657326 | 6.284590 | 0.002220 | 0.002160 | 0.002180 |
| buffers_iterator.test | RUN | 0.383918 | 0.642537 | 1.104538 | 0.001794 | 0.001734 | 0.001498 |
| buffers_iterator_select.test | RUN | 0.387154 | 0.648013 | 1.097282 | 0.001563 | 0.001767 | 0.001577 |
| cancel_after.test | RUN | 1.035530 | 5.191756 | 4.883514 | 0.003632 | 0.004024 | 0.003625 |
| cancel_after_select.test | RUN | 1.025710 | 5.152832 | 4.878581 | 0.003747 | 0.003871 | 0.003726 |
| cancel_at.test | RUN | 1.013383 | 4.586816 | 4.696394 | 0.003510 | 0.003379 | 0.003346 |
| cancel_at_select.test | RUN | 1.015569 | 4.562079 | 4.610389 | 0.003514 | 0.002955 | 0.003169 |
| cancellation_signal.test | LINK | 0.123285 | 0.240354 | 0.294665 | — | — | — |
| cancellation_signal_select.test | LINK | 0.180280 | 0.241390 | 0.290346 | — | — | — |
| cancellation_state.test | LINK | 0.178189 | 0.240879 | 0.478794 | — | — | — |
| cancellation_state_select.test | LINK | 0.184774 | 0.242567 | 0.451525 | — | — | — |
| cancellation_type.test | LINK | 0.142357 | 0.190064 | 0.393928 | — | — | — |
| cancellation_type_select.test | LINK | 0.138846 | 0.192406 | 0.389435 | — | — | — |
| co_composed.test | RUN | 0.137829 | 0.191548 | 0.372985 | 0.001684 | 0.001336 | 0.001339 |
| co_composed_select.test | RUN | 0.138651 | 0.220511 | 0.374786 | 0.001646 | 0.001808 | 0.001255 |
| co_spawn.test | LINK | 0.134725 | 0.276489 | 0.375077 | — | — | — |
| co_spawn_select.test | LINK | 0.136574 | 0.273367 | 0.379957 | — | — | — |
| completion_condition.test | LINK | 0.174599 | 0.419869 | 0.517508 | — | — | — |
| completion_condition_select.test | LINK | 0.171155 | 0.426753 | 0.516244 | — | — | — |
| compose.test | RUN | 0.791393 | 3.932465 | 3.957361 | 0.002305 | 0.001655 | 0.002138 |
| compose_select.test | RUN | 0.801802 | 3.901417 | 3.929007 | 0.002226 | 0.002214 | 0.001869 |
| composed.test | RUN | 0.778126 | 3.995057 | 3.799425 | 0.002142 | 0.002022 | 0.002052 |
| composed_select.test | RUN | 0.775016 | 3.898481 | 3.762228 | 0.001866 | 0.001860 | 0.001737 |
| config.test | RUN | 0.376646 | 2.601204 | 1.625993 | 0.001861 | 0.001984 | 0.001839 |
| config_select.test | RUN | 0.432421 | 2.661233 | 1.868761 | 0.001902 | 0.001833 | 0.001612 |
| connect.test | LINK | 1.221390 | 8.393146 | 8.225755 | — | — | — |
| connect_select.test | LINK | 1.255657 | 8.451463 | 8.224969 | — | — | — |
| connect_pipe.test | RUN | 0.701365 | 3.175670 | 3.076614 | 0.001905 | 0.002006 | 0.001918 |
| connect_pipe_select.test | RUN | 0.710660 | 3.335892 | 3.291586 | 0.001631 | 0.001940 | 0.001894 |
| consign.test | RUN | 0.593607 | 3.085179 | 2.768995 | 0.001824 | 0.001670 | 0.001846 |
| consign_select.test | RUN | 0.609064 | 3.183986 | 2.710901 | 0.001924 | 0.001902 | 0.001909 |
| coroutine.test | LINK | 0.145960 | 0.334306 | 0.400774 | — | — | — |
| coroutine_select.test | LINK | 0.149984 | 0.329262 | 0.393479 | — | — | — |
| deadline_timer.test | RUN | 0.863303 | 4.094748 | 3.957466 | 0.003228 | 0.003762 | 0.003539 |
| deadline_timer_select.test | RUN | 0.871356 | 4.079180 | 3.996705 | 0.002342 | 0.003142 | 0.003317 |
| deferred.test | RUN | 0.158114 | 0.301554 | 0.428706 | 0.001743 | 0.001900 | 0.001686 |
| deferred_select.test | RUN | 0.157363 | 0.313459 | 0.427735 | 0.001812 | 0.001885 | 0.001790 |
| detached.test | LINK | 0.180469 | 0.346206 | 0.472929 | — | — | — |
| detached_select.test | LINK | 0.173879 | 0.348448 | 0.468115 | — | — | — |
| disposition.test | RUN | 0.162236 | 0.795608 | 0.833841 | 0.001490 | 0.001854 | 0.001765 |
| disposition_select.test | RUN | 0.160382 | 0.797512 | 0.832197 | 0.001438 | 0.001859 | 0.001842 |
| error.test | RUN | 0.154130 | 0.773539 | 0.740913 | 0.001521 | 0.001832 | 0.001760 |
| error_select.test | RUN | 0.152916 | 0.763537 | 0.718641 | 0.001499 | 0.001804 | 0.001775 |
| file_base.test | LINK | 0.190853 | 0.646123 | 0.693538 | — | — | — |
| file_base_select.test | LINK | 0.187253 | 0.626806 | 0.644777 | — | — | — |
| fwd_first.test | LINK | 0.417527 | 1.002840 | 1.393633 | — | — | — |
| fwd_last.test | LINK | 0.433226 | 0.904956 | 1.384085 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.165956 | 0.384009 | 0.503856 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.165683 | 0.377258 | 0.499361 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.638337 | 3.242326 | 2.705535 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.631487 | 3.327361 | 2.707021 | — | — | — |
| generic_raw_protocol.test | LINK | 0.617260 | 3.241476 | 2.723372 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.615652 | 3.334219 | 2.679132 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.536716 | 2.754475 | 2.298938 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.541461 | 2.779572 | 2.321535 | — | — | — |
| generic_stream_protocol.test | LINK | 0.573457 | 2.965898 | 2.499152 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.578319 | 3.034631 | 2.514115 | — | — | — |
| high_resolution_timer.test | LINK | 0.259854 | 0.567454 | 0.778056 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.266661 | 0.578612 | 0.803308 | — | — | — |
| immediate.test | LINK | 0.184757 | 0.431603 | 0.484665 | — | — | — |
| immediate_select.test | LINK | 0.199748 | 0.430617 | 0.485739 | — | — | — |
| inline_executor.test | RUN | 0.218813 | 0.658077 | 0.722746 | 0.001459 | 0.001416 | 0.001267 |
| inline_executor_select.test | RUN | 0.223461 | 0.664844 | 0.728187 | 0.001414 | 0.001420 | 0.001263 |
| inline_or_executor.test | RUN | 0.346216 | 1.919214 | 1.371556 | 0.001406 | 0.001376 | 0.001354 |
| inline_or_executor_select.test | RUN | 0.363041 | 1.976755 | 1.512697 | 0.001414 | 0.001416 | 0.001315 |
| io_context.test | RUN | 0.513645 | 2.917484 | 2.375334 | 0.002365 | 0.002358 | 0.002315 |
| io_context_select.test | RUN | 0.506641 | 2.866861 | 2.392290 | 0.002086 | 0.002139 | 0.002038 |
| io_context_strand.test | RUN | 0.480383 | 2.471526 | 2.092093 | 0.002220 | 0.002233 | 0.002236 |
| io_context_strand_select.test | RUN | 0.482512 | 2.446268 | 2.089174 | 0.002365 | 0.002046 | 0.002109 |
| ip_address.test | LINK | 0.192116 | 0.583703 | 0.607260 | — | — | — |
| ip_address_select.test | LINK | 0.189061 | 0.585319 | 0.622240 | — | — | — |
| ip_address_v4.test | LINK | 0.190178 | 0.620398 | 0.669203 | — | — | — |
| ip_address_v4_select.test | LINK | 0.190017 | 0.617690 | 0.672604 | — | — | — |
| ip_address_v6.test | LINK | 0.219701 | 0.808571 | 0.815234 | — | — | — |
| ip_address_v6_select.test | LINK | 0.220351 | 0.804040 | 0.834270 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.168980 | 0.401268 | 0.550218 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.171134 | 0.404847 | 0.547105 | — | — | — |
| ip_basic_resolver.test | LINK | 0.266858 | 0.570974 | 1.205652 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.269847 | 0.584185 | 1.316134 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.095165 | 0.193460 | 0.386248 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.096092 | 0.191046 | 0.365784 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.168857 | 0.388715 | 0.889211 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.169820 | 0.386599 | 0.892187 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.162860 | 0.379173 | 0.874178 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.164161 | 0.370666 | 0.871313 | — | — | — |
| ip_host_name.test | RUN | 0.170463 | 0.503082 | 0.982425 | 0.001459 | 0.001605 | 0.001764 |
| ip_host_name_select.test | RUN | 0.175766 | 0.607375 | 0.967594 | 0.001382 | 0.001895 | 0.001688 |
| ip_icmp.test | RUN | 0.769532 | 6.603199 | 5.895753 | 0.001472 | 0.001825 | 0.001865 |
| ip_icmp_select.test | RUN | 0.779380 | 6.716057 | 5.731696 | 0.001456 | 0.001970 | 0.001863 |
| ip_multicast.test | RUN | 0.449445 | 3.370989 | 3.308264 | 0.001547 | 0.001748 | 0.002028 |
| ip_multicast_select.test | RUN | 0.455534 | 3.371609 | 3.313454 | 0.001464 | 0.001705 | 0.001765 |
| ip_resolver_query_base.test | LINK | 0.112389 | 0.311029 | 0.398444 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.110884 | 0.310419 | 0.398990 | — | — | — |
| ip_tcp.test | RUN | 1.124199 | 9.730697 | 8.980054 | 0.001956 | 0.002479 | 0.002604 |
| ip_tcp_select.test | RUN | 1.136831 | 10.119672 | 8.660905 | 0.001920 | 0.002775 | 0.002644 |
| ip_udp.test | RUN | 0.806086 | 7.022006 | 6.122719 | 0.001726 | 0.001973 | 0.001852 |
| ip_udp_select.test | RUN | 0.811763 | 7.189430 | 5.993308 | 0.001544 | 0.002086 | 0.002080 |
| ip_unicast.test | RUN | 0.421994 | 3.080552 | 2.948453 | 0.001437 | 0.002093 | 0.002058 |
| ip_unicast_select.test | RUN | 0.426076 | 3.112302 | 2.907496 | 0.001495 | 0.001980 | 0.001773 |
| ip_v6_only.test | RUN | 0.429874 | 3.181903 | 3.068858 | 0.001518 | 0.002042 | 0.001738 |
| ip_v6_only_select.test | RUN | 0.443125 | 3.303083 | 3.040556 | 0.001558 | 0.002156 | 0.001953 |
| is_read_buffered.test | RUN | 0.308372 | 1.009557 | 1.631981 | 0.001373 | 0.001840 | 0.001799 |
| is_read_buffered_select.test | RUN | 0.311526 | 1.028811 | 1.671038 | 0.001357 | 0.001943 | 0.001754 |
| is_write_buffered.test | RUN | 0.309004 | 1.032180 | 1.584203 | 0.001381 | 0.001767 | 0.001886 |
| is_write_buffered_select.test | RUN | 0.314374 | 1.013241 | 1.636106 | 0.001368 | 0.001750 | 0.001634 |
| local_basic_endpoint.test | LINK | 0.157881 | 0.563695 | 0.884769 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.165900 | 0.564279 | 0.888499 | — | — | — |
| local_connect_pair.test | LINK | 0.396749 | 3.099898 | 2.812513 | — | — | — |
| local_connect_pair_select.test | LINK | 0.408814 | 3.103123 | 2.759810 | — | — | — |
| local_datagram_protocol.test | LINK | 0.527989 | 4.001740 | 3.877054 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.545932 | 4.055224 | 3.803997 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.703046 | 3.952338 | 3.828346 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.788796 | 4.060666 | 3.811102 | — | — | — |
| local_stream_protocol.test | LINK | 0.736602 | 3.770452 | 3.664343 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.752904 | 3.849927 | 3.617858 | — | — | — |
| placeholders.test | LINK | 0.147659 | 0.313683 | 0.422934 | — | — | — |
| placeholders_select.test | LINK | 0.147029 | 0.314098 | 0.410587 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.389342 | 0.838462 | 1.215158 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.402007 | 0.885360 | 1.497148 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.390552 | 0.867192 | 1.209731 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.415935 | 0.902147 | 1.478928 | — | — | — |
| posix_descriptor_base.test | LINK | 0.168625 | 0.328951 | 0.425991 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.163004 | 0.338094 | 0.427010 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.766134 | 3.829178 | 3.610605 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.791503 | 3.876202 | 3.706527 | — | — | — |
| prepend.test | RUN | 0.595575 | 3.139081 | 2.886626 | 0.001804 | 0.001764 | 0.001802 |
| prepend_select.test | RUN | 0.607816 | 3.213465 | 2.864372 | 0.001641 | 0.001878 | 0.001699 |
| random_access_file.test | LINK | 0.374469 | 0.767558 | 1.006170 | — | — | — |
| random_access_file_select.test | LINK | 0.386124 | 0.823152 | 1.269365 | — | — | — |
| read.test | RUN | 1.876338 | 19.241057 | 16.179894 | 0.002488 | 0.002472 | 0.002535 |
| read_select.test | RUN | 1.881511 | 19.405388 | 16.485754 | 0.002517 | 0.002447 | 0.002572 |
| read_at.test | RUN | 1.877204 | 27.759424 | 21.856128 | 0.003366 | 0.003232 | 0.002661 |
| read_at_select.test | RUN | 1.885739 | 27.352513 | 22.144898 | 0.002875 | 0.003138 | 0.002892 |
| read_until.test | RUN | 0.983119 | 7.513654 | 6.373618 | 0.001916 | 0.002124 | 0.001950 |
| read_until_select.test | RUN | 0.991558 | 7.572486 | 6.613469 | 0.001984 | 0.002102 | 0.002033 |
| readable_pipe.test | LINK | 0.617859 | 3.206648 | 2.803558 | — | — | — |
| readable_pipe_select.test | LINK | 0.645513 | 3.408919 | 2.968925 | — | — | — |
| recycling_allocator.test | RUN | 0.196942 | 0.502806 | 0.623480 | 0.001604 | 0.001907 | 0.001739 |
| recycling_allocator_select.test | RUN | 0.193972 | 0.500537 | 0.617638 | 0.001453 | 0.001733 | 0.001844 |
| redirect_disposition.test | LINK | 0.798222 | 4.530099 | 4.410109 | — | — | — |
| redirect_disposition_select.test | LINK | 0.806595 | 4.491799 | 4.359833 | — | — | — |
| redirect_error.test | LINK | 0.719540 | 3.709837 | 3.816064 | — | — | — |
| redirect_error_select.test | LINK | 0.737535 | 3.659522 | 3.766559 | — | — | — |
| registered_buffer.test | LINK | 0.189427 | 0.403497 | 0.548693 | — | — | — |
| registered_buffer_select.test | LINK | 0.193055 | 0.399961 | 0.528669 | — | — | — |
| signal_set.test | RUN | 0.614532 | 3.141980 | 2.597541 | 0.001796 | 0.001968 | 0.001739 |
| signal_set_select.test | RUN | 0.629475 | 3.275900 | 2.953942 | 0.001901 | 0.001901 | 0.001754 |
| signal_set_base.test | LINK | 0.159778 | 0.305172 | 0.411716 | — | — | — |
| signal_set_base_select.test | LINK | 0.159932 | 0.304070 | 0.411823 | — | — | — |
| socket_base.test | RUN | 0.741880 | 4.864670 | 4.078648 | 0.001982 | 0.002212 | 0.002018 |
| socket_base_select.test | RUN | 0.739351 | 4.783236 | 4.078971 | 0.001753 | 0.002086 | 0.001861 |
| spawn.test | RUN | 1.250784 | 7.508031 | 6.977917 | 0.002056 | 0.002105 | 0.001650 |
| spawn_select.test | RUN | 1.267311 | 7.470884 | 6.842747 | 0.002232 | 0.002199 | 0.002108 |
| static_thread_pool.test | RUN | 0.341414 | 0.758952 | 0.979684 | 0.001625 | 0.001890 | 0.001874 |
| static_thread_pool_select.test | RUN | 0.353816 | 0.815572 | 1.235603 | 0.001480 | 0.001840 | 0.001731 |
| steady_timer.test | LINK | 0.380826 | 0.832192 | 1.340182 | — | — | — |
| steady_timer_select.test | LINK | 0.388163 | 0.869809 | 1.378200 | — | — | — |
| strand.test | RUN | 0.784871 | 4.310959 | 4.130639 | 0.002549 | 0.002693 | 0.002684 |
| strand_select.test | RUN | 0.784396 | 4.280480 | 4.083013 | 0.002664 | 0.002385 | 0.002728 |
| stream_file.test | LINK | 0.372011 | 0.786447 | 1.027625 | — | — | — |
| stream_file_select.test | LINK | 0.381795 | 0.818927 | 1.294882 | — | — | — |
| streambuf.test | RUN | 0.195601 | 0.541843 | 0.683928 | 0.001123 | 0.001394 | 0.001799 |
| streambuf_select.test | RUN | 0.158119 | 0.526613 | 0.696055 | 0.001359 | 0.001421 | 0.001863 |
| system_timer.test | LINK | 0.505663 | 2.826533 | 2.544104 | — | — | — |
| system_timer_select.test | LINK | 0.518368 | 2.749751 | 2.314090 | — | — | — |
| system_context.test | LINK | 0.249409 | 0.506480 | 0.589696 | — | — | — |
| system_context_select.test | LINK | 0.247186 | 0.538185 | 0.730309 | — | — | — |
| system_executor.test | LINK | 0.310536 | 1.589631 | 1.110937 | — | — | — |
| system_executor_select.test | LINK | 0.319537 | 1.554127 | 1.243837 | — | — | — |
| this_coro.test | LINK | 0.092439 | 0.191606 | 0.231027 | — | — | — |
| this_coro_select.test | LINK | 0.096540 | 0.191668 | 0.237150 | — | — | — |
| thread_pool.test | RUN | 0.360097 | 2.124579 | 1.439714 | 0.002670 | 0.003356 | 0.002584 |
| thread_pool_select.test | RUN | 0.379118 | 2.329068 | 1.553433 | 0.002640 | 0.003049 | 0.002506 |
| time_traits.test | LINK | 0.208454 | 0.618416 | 0.471382 | — | — | — |
| time_traits_select.test | LINK | 0.208484 | 0.589477 | 0.471396 | — | — | — |
| ts_buffer.test | LINK | 0.195041 | 0.676329 | 0.503643 | — | — | — |
| ts_buffer_select.test | LINK | 0.196271 | 0.657212 | 0.498386 | — | — | — |
| ts_executor.test | LINK | 0.272449 | 0.939340 | 1.168466 | — | — | — |
| ts_executor_select.test | LINK | 0.285619 | 0.991865 | 1.377932 | — | — | — |
| ts_internet.test | LINK | 0.294627 | 1.026863 | 1.614070 | — | — | — |
| ts_internet_select.test | LINK | 0.302840 | 1.049936 | 1.649897 | — | — | — |
| ts_io_context.test | LINK | 0.239512 | 0.805897 | 0.969598 | — | — | — |
| ts_io_context_select.test | LINK | 0.256450 | 0.851070 | 1.248379 | — | — | — |
| ts_net.test | LINK | 0.357807 | 1.241043 | 2.002724 | — | — | — |
| ts_net_select.test | LINK | 0.360438 | 1.275459 | 2.027118 | — | — | — |
| ts_netfwd.test | LINK | 0.351229 | 1.262434 | 1.993296 | — | — | — |
| ts_netfwd_select.test | LINK | 0.362056 | 1.239937 | 2.012943 | — | — | — |
| ts_socket.test | LINK | 0.297218 | 0.947749 | 1.528813 | — | — | — |
| ts_socket_select.test | LINK | 0.297976 | 0.978429 | 1.581089 | — | — | — |
| ts_timer.test | LINK | 0.259917 | 0.825861 | 1.323969 | — | — | — |
| ts_timer_select.test | LINK | 0.266496 | 0.869352 | 1.358509 | — | — | — |
| use_awaitable.test | LINK | 0.095728 | 0.279307 | 0.354368 | — | — | — |
| use_awaitable_select.test | LINK | 0.097874 | 0.269551 | 0.364415 | — | — | — |
| wait_traits.test | LINK | 0.094001 | 0.269004 | 0.364096 | — | — | — |
| wait_traits_select.test | LINK | 0.095268 | 0.285524 | 0.388062 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.094754 | 0.284366 | 0.369073 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.094380 | 0.286026 | 0.356866 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.094495 | 0.291036 | 0.380790 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.095343 | 0.281464 | 0.388534 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.095114 | 0.282498 | 0.364232 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.092958 | 0.286448 | 0.370653 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.096889 | 0.285601 | 0.360271 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.093613 | 0.277225 | 0.384565 | — | — | — |
| windows_object_handle.test | LINK | 0.245962 | 0.767957 | 0.990355 | — | — | — |
| windows_object_handle_select.test | LINK | 0.266100 | 0.818162 | 1.266584 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.376541 | 0.829293 | 1.118521 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.385665 | 0.891800 | 1.358144 | — | — | — |
| windows_random_access_handle.test | LINK | 0.362465 | 0.779082 | 0.987423 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.380405 | 0.830797 | 1.258465 | — | — | — |
| windows_stream_handle.test | LINK | 0.358823 | 0.785859 | 1.029486 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.371013 | 0.839650 | 1.258249 | — | — | — |
| writable_pipe.test | LINK | 0.634167 | 3.222972 | 2.977804 | — | — | — |
| writable_pipe_select.test | LINK | 0.651390 | 3.329717 | 3.122212 | — | — | — |
| write.test | RUN | 1.837992 | 16.460206 | 16.243704 | 0.002603 | 0.002574 | 0.002378 |
| write_select.test | RUN | 1.867439 | 16.523383 | 16.435991 | 0.002312 | 0.002488 | 0.002628 |
| write_at.test | RUN | 1.903773 | 23.564030 | 20.833567 | 0.002839 | 0.002549 | 0.002561 |
| write_at_select.test | RUN | 1.904707 | 23.172995 | 21.087950 | 0.002646 | 0.002646 | 0.002760 |
| any_executor.test | RUN | 0.784942 | 7.793179 | 6.894262 | 0.002404 | 0.002480 | 0.002567 |
| blocking.test | RUN | 1.982148 | 9.485165 | 13.740066 | 0.007968 | 0.006399 | 0.007430 |
| blocking_adaptation.test | RUN | 0.949799 | 4.101415 | 6.133816 | 0.003990 | 0.004286 | 0.004104 |
| context_as.test | RUN | 0.533455 | 2.972227 | 2.016991 | 0.002031 | 0.002137 | 0.001890 |
| executor.test | RUN | 0.151442 | 0.290878 | 0.419332 | 0.001640 | 0.001921 | 0.001748 |
| inline_exception_handling.test | RUN | 1.901378 | 8.740595 | 12.498980 | 0.007473 | 0.005265 | 0.005100 |
| invocable_archetype.test | RUN | 0.133448 | 0.308531 | 0.394100 | 0.001667 | 0.001892 | 0.001742 |
| mapping.test | RUN | 1.781405 | 9.291735 | 13.682776 | 0.005331 | 0.005322 | 0.005233 |
| outstanding_work.test | RUN | 0.920754 | 3.847971 | 5.954117 | 0.003799 | 0.003934 | 0.003517 |
| prefer_only.test | RUN | 0.275221 | 1.515450 | 1.357101 | 0.001824 | 0.001866 | 0.001758 |
| relationship.test | RUN | 0.680395 | 3.608750 | 5.910169 | 0.002933 | 0.004226 | 0.002921 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.002×, 0.995× | 0.997× |
| clang | 0.989× | 0.988×, 0.989× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 7 | 0.001625s | 0.001627s | 0.001645s | byte equality observed |
| any_completion_executor_select.test | 6 | 0.001597s | 0.001593s | 0.001620s | byte equality observed |
| any_completion_handler.test | 8 | 0.001297s | 0.001247s | 0.001287s | byte equality observed |
| any_completion_handler_select.test | 9 | 0.001276s | 0.001251s | 0.001296s | byte equality observed |
| any_io_executor.test | 5 | 0.001563s | 0.001571s | 0.001623s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001592s | 0.001575s | 0.001619s | byte equality observed |
| append.test | 10 | 0.001238s | 0.001256s | 0.001224s | byte equality observed |
| append_select.test | 10 | 0.001201s | 0.001191s | 0.001186s | byte equality observed |
| as_tuple.test | 8 | 0.001291s | 0.001289s | 0.001270s | byte equality observed |
| as_tuple_select.test | 7 | 0.001237s | 0.001233s | 0.001222s | byte equality observed |
| bind_allocator.test | 1 | 0.001726s | 0.001617s | 0.001668s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001448s | 0.001407s | 0.001493s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001200s | 0.001120s | 0.001190s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001064s | 0.001046s | 0.001081s | byte equality observed |
| bind_executor.test | 1 | 0.001739s | 0.001691s | 0.001765s | byte equality observed |
| bind_executor_select.test | 1 | 0.001988s | 0.001928s | 0.002035s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001086s | 0.001085s | 0.001073s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001064s | 0.001090s | 0.001073s | byte equality observed |
| buffer.test | 10 | 0.001030s | 0.001060s | 0.001033s | byte equality observed |
| buffer_select.test | 10 | 0.001061s | 0.001068s | 0.001060s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001386s | 0.001340s | 0.001412s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001302s | 0.001301s | 0.001341s | byte equality observed |
| buffered_stream.test | 10 | 0.001362s | 0.001376s | 0.001368s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001342s | 0.001294s | 0.001358s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001358s | 0.001322s | 0.001373s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001318s | 0.001295s | 0.001351s | byte equality observed |
| buffers_iterator.test | 10 | 0.001030s | 0.001026s | 0.001019s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000992s | 0.000996s | 0.001041s | byte equality observed |
| cancel_after.test | 1 | 0.003468s | 0.003149s | 0.003671s | byte equality observed |
| cancel_after_select.test | 1 | 0.002841s | 0.002672s | 0.003037s | byte equality observed |
| cancel_at.test | 1 | 0.003930s | 0.003518s | 0.003914s | byte equality observed |
| cancel_at_select.test | 1 | 0.003525s | 0.003361s | 0.003684s | byte equality observed |
| co_composed.test | 10 | 0.001027s | 0.001041s | 0.001023s | byte equality observed |
| co_composed_select.test | 10 | 0.001008s | 0.001012s | 0.000994s | byte equality observed |
| compose.test | 1 | 0.001698s | 0.001646s | 0.001749s | byte equality observed |
| compose_select.test | 1 | 0.001422s | 0.001380s | 0.001471s | byte equality observed |
| composed.test | 1 | 0.002059s | 0.002026s | 0.002081s | byte equality observed |
| composed_select.test | 1 | 0.001504s | 0.001457s | 0.001690s | byte equality observed |
| config.test | 10 | 0.001112s | 0.001091s | 0.001090s | byte equality observed |
| config_select.test | 10 | 0.001111s | 0.001101s | 0.001105s | byte equality observed |
| connect_pipe.test | 10 | 0.001144s | 0.001134s | 0.001135s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001110s | 0.001117s | 0.001114s | byte equality observed |
| consign.test | 10 | 0.001128s | 0.001097s | 0.001109s | byte equality observed |
| consign_select.test | 10 | 0.001059s | 0.001032s | 0.001040s | byte equality observed |
| deadline_timer.test | 1 | 0.002373s | 0.002318s | 0.002472s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002162s | 0.002084s | 0.002218s | byte equality observed |
| deferred.test | 10 | 0.001008s | 0.000996s | 0.001004s | byte equality observed |
| deferred_select.test | 10 | 0.000963s | 0.000946s | 0.000953s | byte equality observed |
| disposition.test | 10 | 0.001028s | 0.001017s | 0.001038s | byte equality observed |
| disposition_select.test | 10 | 0.001028s | 0.001014s | 0.001046s | byte equality observed |
| error.test | 10 | 0.001005s | 0.000995s | 0.001012s | byte equality observed |
| error_select.test | 10 | 0.000994s | 0.000987s | 0.001018s | byte equality observed |
| inline_executor.test | 10 | 0.001011s | 0.000996s | 0.001031s | byte equality observed |
| inline_executor_select.test | 10 | 0.001003s | 0.000985s | 0.001022s | byte equality observed |
| inline_or_executor.test | 10 | 0.001005s | 0.000998s | 0.001005s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001011s | 0.001012s | 0.001000s | byte equality observed |
| io_context.test | 1 | 0.001918s | 0.001853s | 0.001973s | byte equality observed |
| io_context_select.test | 1 | 0.002243s | 0.002214s | 0.002300s | byte equality observed |
| io_context_strand.test | 1 | 0.002261s | 0.002272s | 0.002310s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002020s | 0.001957s | 0.002107s | byte equality observed |
| ip_host_name.test | 10 | 0.001029s | 0.001016s | 0.001016s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000978s | 0.000976s | 0.000973s | byte equality observed |
| ip_icmp.test | 10 | 0.001007s | 0.001015s | 0.001016s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001003s | 0.001005s | 0.001010s | byte equality observed |
| ip_multicast.test | 10 | 0.001089s | 0.001066s | 0.001107s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001058s | 0.001054s | 0.001076s | byte equality observed |
| ip_tcp.test | 10 | 0.001502s | 0.001466s | 0.001521s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001435s | 0.001411s | 0.001460s | byte equality observed |
| ip_udp.test | 10 | 0.001123s | 0.001091s | 0.001123s | byte equality observed |
| ip_udp_select.test | 10 | 0.001101s | 0.001088s | 0.001100s | byte equality observed |
| ip_unicast.test | 10 | 0.001069s | 0.001054s | 0.001075s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001050s | 0.001056s | 0.001051s | byte equality observed |
| ip_v6_only.test | 10 | 0.001058s | 0.001098s | 0.001084s | byte equality observed |
| ip_v6_only_select.test | 8 | 0.001054s | 0.001075s | 0.001061s | byte equality observed |
| is_read_buffered.test | 10 | 0.000981s | 0.000990s | 0.000978s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000992s | 0.001002s | 0.000977s | byte equality observed |
| is_write_buffered.test | 10 | 0.000998s | 0.001006s | 0.000982s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000992s | 0.000998s | 0.000986s | byte equality observed |
| prepend.test | 8 | 0.001070s | 0.001057s | 0.001080s | byte equality observed |
| prepend_select.test | 10 | 0.001057s | 0.001036s | 0.001082s | byte equality observed |
| read.test | 10 | 0.001485s | 0.001436s | 0.001492s | byte equality observed |
| read_at.test | 9 | 0.001887s | 0.001828s | 0.001720s | byte equality observed |
| read_at_select.test | 10 | 0.001875s | 0.001814s | 0.001778s | byte equality observed |
| read_select.test | 10 | 0.001468s | 0.001449s | 0.001487s | byte equality observed |
| read_until.test | 10 | 0.001237s | 0.001195s | 0.001259s | byte equality observed |
| read_until_select.test | 10 | 0.001237s | 0.001212s | 0.001224s | byte equality observed |
| recycling_allocator.test | 10 | 0.001044s | 0.001007s | 0.001045s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001009s | 0.001033s | 0.001092s | byte equality observed |
| signal_set.test | 10 | 0.001057s | 0.001041s | 0.001077s | byte equality observed |
| signal_set_select.test | 10 | 0.001072s | 0.001046s | 0.001071s | byte equality observed |
| socket_base.test | 10 | 0.001145s | 0.001158s | 0.001201s | byte equality observed |
| socket_base_select.test | 10 | 0.001161s | 0.001156s | 0.001202s | byte equality observed |
| spawn.test | 10 | 0.001235s | 0.001208s | 0.001307s | byte equality observed |
| spawn_select.test | 10 | 0.001234s | 0.001262s | 0.001279s | byte equality observed |
| static_thread_pool.test | 10 | 0.001026s | 0.000996s | 0.001020s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001001s | 0.000989s | 0.001023s | byte equality observed |
| strand.test | 1 | 0.001968s | 0.001965s | 0.001972s | byte equality observed |
| strand_select.test | 1 | 0.001647s | 0.001623s | 0.001731s | byte equality observed |
| streambuf.test | 10 | 0.001063s | 0.001052s | 0.001071s | byte equality observed |
| streambuf_select.test | 10 | 0.001057s | 0.001047s | 0.001054s | byte equality observed |
| thread_pool.test | 9 | 0.002265s | 0.002246s | 0.002283s | byte equality observed |
| thread_pool_select.test | 10 | 0.002250s | 0.002232s | 0.002249s | byte equality observed |
| write.test | 10 | 0.001543s | 0.001482s | 0.001586s | byte equality observed |
| write_at.test | 10 | 0.001644s | 0.001645s | 0.001602s | byte equality observed |
| write_at_select.test | 10 | 0.001630s | 0.001638s | 0.001593s | byte equality observed |
| write_select.test | 10 | 0.001503s | 0.001463s | 0.001505s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
