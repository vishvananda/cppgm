# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.528904 | 3.474128 | 2.937501 | 0.001647 | 0.001979 | 0.001646 |
| any_completion_executor_select.test | RUN | 0.532920 | 3.413815 | 3.070666 | 0.001927 | 0.001446 | 0.001696 |
| any_completion_handler.test | RUN | 0.593372 | 3.111376 | 2.632077 | 0.001470 | 0.001061 | 0.001339 |
| any_completion_handler_select.test | RUN | 0.591783 | 3.244643 | 2.778361 | 0.001490 | 0.001398 | 0.001309 |
| any_io_executor.test | RUN | 0.552265 | 3.699057 | 3.162228 | 0.001734 | 0.001889 | 0.001489 |
| any_io_executor_select.test | RUN | 0.561375 | 3.598339 | 3.324132 | 0.001447 | 0.001872 | 0.001772 |
| append.test | RUN | 0.495350 | 2.897149 | 2.337462 | 0.001062 | 0.001581 | 0.000864 |
| append_select.test | RUN | 0.516418 | 3.033439 | 2.322925 | 0.001194 | 0.001530 | 0.000842 |
| as_tuple.test | RUN | 0.654591 | 3.612263 | 3.346250 | 0.001275 | 0.001536 | 0.001266 |
| as_tuple_select.test | RUN | 0.667004 | 3.512332 | 3.282859 | 0.001370 | 0.001321 | 0.001243 |
| associated_allocator.test | LINK | 0.122913 | 0.289334 | 0.347167 | — | — | — |
| associated_allocator_select.test | LINK | 0.125494 | 0.291331 | 0.348223 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.138476 | 0.315741 | 0.392226 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.138491 | 0.315287 | 0.378393 | — | — | — |
| associated_executor.test | LINK | 0.201908 | 0.540996 | 0.665187 | — | — | — |
| associated_executor_select.test | LINK | 0.201188 | 0.544539 | 0.636840 | — | — | — |
| associated_immediate_executor.test | LINK | 0.183850 | 0.507942 | 0.574501 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.192084 | 0.516570 | 0.570539 | — | — | — |
| associator.test | LINK | 0.103492 | 0.239672 | 0.281328 | — | — | — |
| associator_select.test | LINK | 0.103134 | 0.237136 | 0.290905 | — | — | — |
| awaitable.test | LINK | 0.102171 | 0.239226 | 0.281102 | — | — | — |
| awaitable_select.test | LINK | 0.103825 | 0.239320 | 0.287601 | — | — | — |
| basic_datagram_socket.test | LINK | 0.319912 | 0.754488 | 1.078295 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.325293 | 0.779062 | 1.119671 | — | — | — |
| basic_deadline_timer.test | LINK | 0.386887 | 0.894009 | 1.223500 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.388207 | 0.921543 | 1.289317 | — | — | — |
| basic_file.test | LINK | 0.109436 | 0.241195 | 0.278694 | — | — | — |
| basic_file_select.test | LINK | 0.098856 | 0.239606 | 0.289874 | — | — | — |
| basic_random_access_file.test | LINK | 0.104310 | 0.236187 | 0.280137 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.101751 | 0.238193 | 0.286739 | — | — | — |
| basic_raw_socket.test | LINK | 0.322767 | 0.770749 | 1.101479 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.327699 | 0.779005 | 1.108359 | — | — | — |
| basic_readable_pipe.test | LINK | 0.307348 | 0.733797 | 0.947111 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.334511 | 0.776169 | 1.139848 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.322809 | 0.761589 | 1.087340 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.323161 | 0.789756 | 1.113946 | — | — | — |
| basic_signal_set.test | LINK | 0.299587 | 0.708229 | 0.850149 | — | — | — |
| basic_signal_set_select.test | LINK | 0.317089 | 0.751176 | 1.055711 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.322390 | 0.761526 | 1.112545 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.341886 | 0.783706 | 1.135194 | — | — | — |
| basic_stream_file.test | LINK | 0.101484 | 0.242101 | 0.285467 | — | — | — |
| basic_stream_file_select.test | LINK | 0.102464 | 0.242952 | 0.286342 | — | — | — |
| basic_stream_socket.test | LINK | 0.323430 | 0.756015 | 1.099095 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.330397 | 0.783499 | 1.105589 | — | — | — |
| basic_streambuf.test | LINK | 0.155256 | 0.347914 | 0.419169 | — | — | — |
| basic_streambuf_select.test | LINK | 0.157656 | 0.351068 | 0.418414 | — | — | — |
| basic_waitable_timer.test | LINK | 0.301375 | 0.727382 | 1.016072 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.309979 | 0.739340 | 1.040384 | — | — | — |
| basic_writable_pipe.test | LINK | 0.305024 | 0.737234 | 0.950509 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.330752 | 0.769929 | 1.137315 | — | — | — |
| bind_allocator.test | RUN | 0.553977 | 2.981946 | 2.597508 | 0.001901 | 0.001882 | 0.001460 |
| bind_allocator_select.test | RUN | 0.562514 | 3.044888 | 2.548972 | 0.001590 | 0.001527 | 0.001700 |
| bind_cancellation_slot.test | RUN | 0.560753 | 3.049005 | 2.621282 | 0.000957 | 0.001015 | 0.000878 |
| bind_cancellation_slot_select.test | RUN | 0.568630 | 3.019694 | 2.498290 | 0.000944 | 0.000966 | 0.000925 |
| bind_executor.test | RUN | 0.381838 | 2.084916 | 1.627480 | 0.001655 | 0.001611 | 0.001576 |
| bind_executor_select.test | RUN | 0.385145 | 2.087988 | 1.616099 | 0.001394 | 0.001359 | 0.001307 |
| bind_immediate_executor.test | RUN | 0.284974 | 1.707509 | 1.038037 | 0.000956 | 0.000936 | 0.000878 |
| bind_immediate_executor_select.test | RUN | 0.295624 | 1.652795 | 1.130524 | 0.000941 | 0.001009 | 0.000853 |
| buffer.test | RUN | 0.167953 | 0.688001 | 0.609878 | 0.000904 | 0.000928 | 0.000868 |
| buffer_select.test | RUN | 0.167506 | 0.693621 | 0.606380 | 0.000863 | 0.000948 | 0.000888 |
| buffer_registration.test | LINK | 0.130752 | 0.340870 | 0.359225 | — | — | — |
| buffer_registration_select.test | LINK | 0.130656 | 0.343466 | 0.363325 | — | — | — |
| buffered_read_stream.test | RUN | 0.661166 | 4.529276 | 3.584040 | 0.001236 | 0.001640 | 0.001544 |
| buffered_read_stream_select.test | RUN | 0.662567 | 4.677862 | 3.762799 | 0.001178 | 0.001653 | 0.001478 |
| buffered_stream.test | RUN | 0.902794 | 7.289569 | 6.695409 | 0.001636 | 0.001700 | 0.001466 |
| buffered_stream_select.test | RUN | 0.928450 | 7.261758 | 6.348671 | 0.001580 | 0.001419 | 0.001731 |
| buffered_write_stream.test | RUN | 1.098022 | 6.302547 | 5.639970 | 0.001584 | 0.001856 | 0.001565 |
| buffered_write_stream_select.test | RUN | 1.116219 | 6.443286 | 5.495497 | 0.001626 | 0.001696 | 0.001706 |
| buffers_iterator.test | RUN | 0.321787 | 0.551284 | 0.887902 | 0.001292 | 0.001142 | 0.001174 |
| buffers_iterator_select.test | RUN | 0.323945 | 0.560060 | 0.866906 | 0.001105 | 0.001118 | 0.001225 |
| cancel_after.test | RUN | 0.896471 | 4.926720 | 4.045371 | 0.003304 | 0.003162 | 0.003407 |
| cancel_after_select.test | RUN | 0.923883 | 4.855576 | 4.068447 | 0.003310 | 0.003427 | 0.003022 |
| cancel_at.test | RUN | 0.776887 | 4.414124 | 4.019140 | 0.003110 | 0.003138 | 0.003168 |
| cancel_at_select.test | RUN | 0.787360 | 4.252976 | 4.037210 | 0.002955 | 0.003249 | 0.003073 |
| cancellation_signal.test | LINK | 0.091331 | 0.202098 | 0.252345 | — | — | — |
| cancellation_signal_select.test | LINK | 0.093004 | 0.198618 | 0.324301 | — | — | — |
| cancellation_state.test | LINK | 0.090460 | 0.203412 | 0.368815 | — | — | — |
| cancellation_state_select.test | LINK | 0.116182 | 0.198867 | 0.376141 | — | — | — |
| cancellation_type.test | LINK | 0.107624 | 0.160961 | 0.294387 | — | — | — |
| cancellation_type_select.test | LINK | 0.101647 | 0.158991 | 0.291481 | — | — | — |
| co_composed.test | RUN | 0.102315 | 0.161334 | 0.295010 | 0.001036 | 0.000945 | 0.001151 |
| co_composed_select.test | RUN | 0.105616 | 0.158298 | 0.294360 | 0.001182 | 0.000904 | 0.001157 |
| co_spawn.test | LINK | 0.104668 | 0.237951 | 0.283576 | — | — | — |
| co_spawn_select.test | LINK | 0.101901 | 0.195047 | 0.291418 | — | — | — |
| completion_condition.test | LINK | 0.138983 | 0.377720 | 0.382312 | — | — | — |
| completion_condition_select.test | LINK | 0.132425 | 0.367668 | 0.394191 | — | — | — |
| compose.test | RUN | 0.678298 | 3.705825 | 3.374161 | 0.001773 | 0.001397 | 0.001604 |
| compose_select.test | RUN | 0.695997 | 3.679931 | 3.281186 | 0.001616 | 0.001916 | 0.001743 |
| composed.test | RUN | 0.681078 | 3.739805 | 3.241471 | 0.001357 | 0.001555 | 0.001424 |
| composed_select.test | RUN | 0.655932 | 3.642729 | 3.249347 | 0.001420 | 0.001592 | 0.001436 |
| config.test | RUN | 0.346468 | 2.403642 | 1.403944 | 0.001404 | 0.001333 | 0.001228 |
| config_select.test | RUN | 0.360712 | 2.454785 | 1.630547 | 0.001307 | 0.001307 | 0.001245 |
| connect.test | LINK | 1.094777 | 7.956454 | 6.878877 | — | — | — |
| connect_select.test | LINK | 1.116098 | 8.040263 | 7.013915 | — | — | — |
| connect_pipe.test | RUN | 0.577923 | 3.019518 | 2.571314 | 0.001305 | 0.001494 | 0.001288 |
| connect_pipe_select.test | RUN | 0.593712 | 3.124612 | 2.743511 | 0.001236 | 0.001503 | 0.001209 |
| consign.test | RUN | 0.507757 | 2.995396 | 2.352514 | 0.001214 | 0.001367 | 0.001245 |
| consign_select.test | RUN | 0.511808 | 3.000730 | 2.359292 | 0.001245 | 0.001316 | 0.001268 |
| coroutine.test | LINK | 0.109071 | 0.283741 | 0.314828 | — | — | — |
| coroutine_select.test | LINK | 0.111708 | 0.286108 | 0.324876 | — | — | — |
| deadline_timer.test | RUN | 0.752360 | 3.861691 | 3.404686 | 0.002665 | 0.003195 | 0.002901 |
| deadline_timer_select.test | RUN | 0.753139 | 3.839835 | 3.357711 | 0.002698 | 0.003082 | 0.002121 |
| deferred.test | RUN | 0.114635 | 0.252115 | 0.322009 | 0.001159 | 0.001365 | 0.001229 |
| deferred_select.test | RUN | 0.112878 | 0.262108 | 0.319737 | 0.001127 | 0.001436 | 0.001289 |
| detached.test | LINK | 0.129852 | 0.287790 | 0.353652 | — | — | — |
| detached_select.test | LINK | 0.127643 | 0.287135 | 0.349064 | — | — | — |
| disposition.test | RUN | 0.134834 | 0.702197 | 0.659485 | 0.001009 | 0.001446 | 0.001372 |
| disposition_select.test | RUN | 0.122776 | 0.688581 | 0.651278 | 0.000961 | 0.001279 | 0.001398 |
| error.test | RUN | 0.114808 | 0.665646 | 0.601931 | 0.000872 | 0.001261 | 0.001198 |
| error_select.test | RUN | 0.114162 | 0.676090 | 0.589922 | 0.000943 | 0.001308 | 0.001201 |
| file_base.test | LINK | 0.140613 | 0.549375 | 0.635066 | — | — | — |
| file_base_select.test | LINK | 0.140453 | 0.553433 | 0.575433 | — | — | — |
| fwd_first.test | LINK | 0.326714 | 0.912582 | 1.136602 | — | — | — |
| fwd_last.test | LINK | 0.329271 | 0.909446 | 1.115498 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.120900 | 0.318614 | 0.406383 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.120303 | 0.318445 | 0.394989 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.552760 | 2.989837 | 2.397604 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.552033 | 3.101980 | 2.338015 | — | — | — |
| generic_raw_protocol.test | LINK | 0.553996 | 2.981227 | 2.351709 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.548862 | 3.092392 | 2.351429 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.477912 | 2.517379 | 2.031545 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.479730 | 2.563220 | 1.983280 | — | — | — |
| generic_stream_protocol.test | LINK | 0.513787 | 2.718582 | 2.145786 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.509129 | 2.787856 | 2.167166 | — | — | — |
| high_resolution_timer.test | LINK | 0.208289 | 0.473382 | 0.620644 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.211233 | 0.491248 | 0.641151 | — | — | — |
| immediate.test | LINK | 0.146941 | 0.364176 | 0.388740 | — | — | — |
| immediate_select.test | LINK | 0.144553 | 0.365875 | 0.388838 | — | — | — |
| inline_executor.test | RUN | 0.177693 | 0.571233 | 0.581795 | 0.000996 | 0.000983 | 0.000879 |
| inline_executor_select.test | RUN | 0.176677 | 0.578596 | 0.586526 | 0.000929 | 0.000954 | 0.000857 |
| inline_or_executor.test | RUN | 0.296493 | 1.745943 | 1.162842 | 0.000976 | 0.000950 | 0.000927 |
| inline_or_executor_select.test | RUN | 0.307659 | 1.803310 | 1.275693 | 0.000949 | 0.000959 | 0.000865 |
| io_context.test | RUN | 0.443512 | 2.667766 | 2.036585 | 0.001841 | 0.001917 | 0.001750 |
| io_context_select.test | RUN | 0.441497 | 2.655961 | 2.040793 | 0.001664 | 0.001790 | 0.001596 |
| io_context_strand.test | RUN | 0.420046 | 2.275981 | 1.797388 | 0.001820 | 0.001800 | 0.001530 |
| io_context_strand_select.test | RUN | 0.426077 | 2.224175 | 1.767963 | 0.001492 | 0.001669 | 0.001547 |
| ip_address.test | LINK | 0.149864 | 0.515255 | 0.793554 | — | — | — |
| ip_address_select.test | LINK | 0.146702 | 0.505963 | 0.797038 | — | — | — |
| ip_address_v4.test | LINK | 0.153398 | 0.543237 | 0.837351 | — | — | — |
| ip_address_v4_select.test | LINK | 0.152843 | 0.537348 | 0.877268 | — | — | — |
| ip_address_v6.test | LINK | 0.174645 | 0.720148 | 1.084046 | — | — | — |
| ip_address_v6_select.test | LINK | 0.175343 | 0.707794 | 1.071757 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.130043 | 0.340483 | 0.691430 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.129688 | 0.335076 | 0.689644 | — | — | — |
| ip_basic_resolver.test | LINK | 0.214097 | 0.551287 | 1.038294 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.218989 | 0.541230 | 1.052188 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.070995 | 0.212451 | 0.295338 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.070709 | 0.225077 | 0.290883 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.128640 | 0.496262 | 0.662302 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.129168 | 0.492949 | 0.677401 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.124141 | 0.474040 | 0.661233 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.124045 | 0.474059 | 0.641927 | — | — | — |
| ip_host_name.test | RUN | 0.133587 | 0.648100 | 0.736064 | 0.000885 | 0.001246 | 0.001147 |
| ip_host_name_select.test | RUN | 0.133246 | 0.643025 | 0.719235 | 0.000923 | 0.001313 | 0.001061 |
| ip_icmp.test | RUN | 0.717970 | 6.282558 | 4.946452 | 0.000902 | 0.001207 | 0.001120 |
| ip_icmp_select.test | RUN | 0.710482 | 6.462761 | 4.778294 | 0.000932 | 0.001415 | 0.001167 |
| ip_multicast.test | RUN | 0.392361 | 3.079605 | 2.760757 | 0.001095 | 0.001340 | 0.001291 |
| ip_multicast_select.test | RUN | 0.398173 | 3.083137 | 2.686478 | 0.001029 | 0.001351 | 0.001273 |
| ip_resolver_query_base.test | LINK | 0.082065 | 0.257750 | 0.312877 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.081889 | 0.259998 | 0.308280 | — | — | — |
| ip_tcp.test | RUN | 1.070803 | 9.234441 | 7.492849 | 0.001278 | 0.001737 | 0.001436 |
| ip_tcp_select.test | RUN | 1.066145 | 9.587817 | 7.378423 | 0.001374 | 0.001800 | 0.001638 |
| ip_udp.test | RUN | 0.763315 | 6.612416 | 5.205260 | 0.001048 | 0.001479 | 0.001319 |
| ip_udp_select.test | RUN | 0.759806 | 6.771118 | 5.029598 | 0.001081 | 0.001476 | 0.001272 |
| ip_unicast.test | RUN | 0.357360 | 2.857252 | 2.398607 | 0.001034 | 0.001392 | 0.001309 |
| ip_unicast_select.test | RUN | 0.360257 | 2.841731 | 2.395684 | 0.001007 | 0.001351 | 0.001198 |
| ip_v6_only.test | RUN | 0.372993 | 2.872270 | 2.477762 | 0.001027 | 0.001388 | 0.001294 |
| ip_v6_only_select.test | RUN | 0.380933 | 3.018938 | 2.507091 | 0.000981 | 0.001438 | 0.001141 |
| is_read_buffered.test | RUN | 0.248724 | 0.853828 | 1.279823 | 0.000927 | 0.001216 | 0.001133 |
| is_read_buffered_select.test | RUN | 0.253393 | 0.878061 | 1.293236 | 0.000916 | 0.001290 | 0.001016 |
| is_write_buffered.test | RUN | 0.252571 | 0.862220 | 1.243375 | 0.000926 | 0.001273 | 0.001236 |
| is_write_buffered_select.test | RUN | 0.257667 | 0.865247 | 1.290575 | 0.000890 | 0.001217 | 0.001121 |
| local_basic_endpoint.test | LINK | 0.123060 | 0.471741 | 0.651841 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.122730 | 0.474352 | 0.645438 | — | — | — |
| local_connect_pair.test | LINK | 0.342279 | 2.869826 | 2.332177 | — | — | — |
| local_connect_pair_select.test | LINK | 0.350702 | 2.876456 | 2.243890 | — | — | — |
| local_datagram_protocol.test | LINK | 0.474518 | 3.771457 | 3.226280 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.488020 | 3.832004 | 3.218326 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.494166 | 3.706702 | 3.275547 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.495559 | 3.766282 | 3.185404 | — | — | — |
| local_stream_protocol.test | LINK | 0.448282 | 3.511449 | 3.044956 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.462285 | 3.565088 | 3.034743 | — | — | — |
| placeholders.test | LINK | 0.078486 | 0.257573 | 0.322352 | — | — | — |
| placeholders_select.test | LINK | 0.078765 | 0.260872 | 0.309470 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.216443 | 0.715066 | 0.945848 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.224552 | 0.764683 | 1.158391 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.216460 | 0.723849 | 0.933674 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.223935 | 0.764877 | 1.151049 | — | — | — |
| posix_descriptor_base.test | LINK | 0.085562 | 0.265958 | 0.309540 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.085119 | 0.264718 | 0.314677 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.469045 | 3.631492 | 3.002775 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.484315 | 3.664761 | 3.045620 | — | — | — |
| prepend.test | RUN | 0.494714 | 2.869799 | 2.375195 | 0.001205 | 0.001389 | 0.001374 |
| prepend_select.test | RUN | 0.518057 | 2.930952 | 2.355564 | 0.001193 | 0.001375 | 0.001308 |
| random_access_file.test | LINK | 0.267741 | 0.652950 | 0.775723 | — | — | — |
| random_access_file_select.test | LINK | 0.305331 | 0.693873 | 0.980289 | — | — | — |
| read.test | RUN | 1.703274 | 18.338377 | 13.552741 | 0.001790 | 0.001704 | 0.001642 |
| read_select.test | RUN | 1.725007 | 18.182559 | 13.710300 | 0.001789 | 0.001734 | 0.001605 |
| read_at.test | RUN | 1.695734 | 23.487473 | 18.444790 | 0.002086 | 0.002310 | 0.002102 |
| read_at_select.test | RUN | 1.712156 | 23.402943 | 18.484776 | 0.002123 | 0.002130 | 0.001906 |
| read_until.test | RUN | 0.894208 | 7.166615 | 5.211416 | 0.001678 | 0.001417 | 0.001343 |
| read_until_select.test | RUN | 0.902997 | 7.165677 | 5.376942 | 0.001407 | 0.001561 | 0.001354 |
| readable_pipe.test | LINK | 0.545454 | 2.914638 | 2.364813 | — | — | — |
| readable_pipe_select.test | LINK | 0.564283 | 3.021988 | 2.502921 | — | — | — |
| recycling_allocator.test | RUN | 0.160169 | 0.405914 | 0.470190 | 0.001340 | 0.001191 | 0.001082 |
| recycling_allocator_select.test | RUN | 0.162813 | 0.411973 | 0.469257 | 0.001303 | 0.001243 | 0.001112 |
| redirect_disposition.test | LINK | 0.715160 | 4.106545 | 3.645466 | — | — | — |
| redirect_disposition_select.test | LINK | 0.713023 | 4.061335 | 3.602289 | — | — | — |
| redirect_error.test | LINK | 0.630254 | 3.381465 | 3.153846 | — | — | — |
| redirect_error_select.test | LINK | 0.641296 | 3.403653 | 3.190542 | — | — | — |
| registered_buffer.test | LINK | 0.155145 | 0.331099 | 0.434487 | — | — | — |
| registered_buffer_select.test | LINK | 0.151462 | 0.323908 | 0.418800 | — | — | — |
| signal_set.test | RUN | 0.526289 | 2.868517 | 2.217016 | 0.001313 | 0.001250 | 0.001135 |
| signal_set_select.test | RUN | 0.544046 | 2.975173 | 2.422901 | 0.001453 | 0.001337 | 0.001315 |
| signal_set_base.test | LINK | 0.121419 | 0.255855 | 0.305974 | — | — | — |
| signal_set_base_select.test | LINK | 0.121189 | 0.261348 | 0.300920 | — | — | — |
| socket_base.test | RUN | 0.643182 | 4.200389 | 3.408630 | 0.001507 | 0.001352 | 0.001404 |
| socket_base_select.test | RUN | 0.653306 | 4.023108 | 3.390594 | 0.001323 | 0.001406 | 0.001362 |
| spawn.test | RUN | 1.134105 | 6.934381 | 5.807779 | 0.001642 | 0.001608 | 0.001593 |
| spawn_select.test | RUN | 1.143492 | 7.008398 | 5.870580 | 0.001558 | 0.001682 | 0.001418 |
| static_thread_pool.test | RUN | 0.276539 | 0.635181 | 0.752598 | 0.001250 | 0.001258 | 0.001253 |
| static_thread_pool_select.test | RUN | 0.292484 | 0.700920 | 0.983915 | 0.001286 | 0.001327 | 0.001157 |
| steady_timer.test | LINK | 0.321880 | 0.696414 | 1.062292 | — | — | — |
| steady_timer_select.test | LINK | 0.323522 | 0.723669 | 1.090435 | — | — | — |
| strand.test | RUN | 0.698322 | 3.880598 | 3.451867 | 0.002129 | 0.001847 | 0.001822 |
| strand_select.test | RUN | 0.709562 | 3.900132 | 3.477603 | 0.002028 | 0.001943 | 0.001839 |
| stream_file.test | LINK | 0.298181 | 0.595078 | 0.802795 | — | — | — |
| stream_file_select.test | LINK | 0.306232 | 0.525043 | 1.021430 | — | — | — |
| streambuf.test | RUN | 0.182189 | 0.363015 | 0.549278 | 0.000951 | 0.000891 | 0.001350 |
| streambuf_select.test | RUN | 0.160727 | 0.367951 | 0.553133 | 0.000910 | 0.000945 | 0.001071 |
| system_timer.test | LINK | 0.481507 | 2.487634 | 2.068869 | — | — | — |
| system_timer_select.test | LINK | 0.461083 | 2.459686 | 2.015476 | — | — | — |
| system_context.test | LINK | 0.191189 | 0.415928 | 0.462311 | — | — | — |
| system_context_select.test | LINK | 0.201283 | 0.448860 | 0.591601 | — | — | — |
| system_executor.test | LINK | 0.262070 | 1.408287 | 0.947125 | — | — | — |
| system_executor_select.test | LINK | 0.272073 | 1.380993 | 1.066281 | — | — | — |
| this_coro.test | LINK | 0.072696 | 0.156452 | 0.182566 | — | — | — |
| this_coro_select.test | LINK | 0.071866 | 0.157949 | 0.182739 | — | — | — |
| thread_pool.test | RUN | 0.319406 | 1.820979 | 1.237149 | 0.001616 | 0.001516 | 0.001581 |
| thread_pool_select.test | RUN | 0.324672 | 1.835279 | 1.350923 | 0.001569 | 0.001563 | 0.001610 |
| time_traits.test | LINK | 0.163122 | 0.331496 | 0.375872 | — | — | — |
| time_traits_select.test | LINK | 0.161864 | 0.440815 | 0.375019 | — | — | — |
| ts_buffer.test | LINK | 0.158437 | 0.509284 | 0.399045 | — | — | — |
| ts_buffer_select.test | LINK | 0.154596 | 0.551183 | 0.400738 | — | — | — |
| ts_executor.test | LINK | 0.227463 | 0.775600 | 0.621617 | — | — | — |
| ts_executor_select.test | LINK | 0.235583 | 0.812112 | 0.756541 | — | — | — |
| ts_internet.test | LINK | 0.248058 | 0.840574 | 0.788524 | — | — | — |
| ts_internet_select.test | LINK | 0.248773 | 0.856961 | 1.266102 | — | — | — |
| ts_io_context.test | LINK | 0.199877 | 0.653309 | 0.770760 | — | — | — |
| ts_io_context_select.test | LINK | 0.205799 | 0.688964 | 0.910821 | — | — | — |
| ts_net.test | LINK | 0.294868 | 1.009276 | 1.560074 | — | — | — |
| ts_net_select.test | LINK | 0.296886 | 1.052737 | 1.578779 | — | — | — |
| ts_netfwd.test | LINK | 0.293722 | 1.019886 | 1.565880 | — | — | — |
| ts_netfwd_select.test | LINK | 0.297138 | 1.051053 | 1.586674 | — | — | — |
| ts_socket.test | LINK | 0.242577 | 0.796703 | 1.199567 | — | — | — |
| ts_socket_select.test | LINK | 0.246186 | 0.821808 | 1.212182 | — | — | — |
| ts_timer.test | LINK | 0.215716 | 0.709978 | 1.042600 | — | — | — |
| ts_timer_select.test | LINK | 0.220276 | 0.727500 | 1.051715 | — | — | — |
| use_awaitable.test | LINK | 0.074534 | 0.240971 | 0.295597 | — | — | — |
| use_awaitable_select.test | LINK | 0.071812 | 0.233070 | 0.282584 | — | — | — |
| wait_traits.test | LINK | 0.074235 | 0.239860 | 0.285000 | — | — | — |
| wait_traits_select.test | LINK | 0.071586 | 0.235886 | 0.282911 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.073426 | 0.237418 | 0.281229 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071547 | 0.236097 | 0.283348 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.072016 | 0.232717 | 0.284650 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071449 | 0.236542 | 0.283040 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.072402 | 0.237124 | 0.287922 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.072737 | 0.232717 | 0.287224 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.073262 | 0.232179 | 0.290286 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.071913 | 0.236700 | 0.298714 | — | — | — |
| windows_object_handle.test | LINK | 0.200769 | 0.650969 | 0.769888 | — | — | — |
| windows_object_handle_select.test | LINK | 0.207703 | 0.689888 | 0.969619 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.208566 | 0.687195 | 0.847959 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.215106 | 0.743869 | 1.055828 | — | — | — |
| windows_random_access_handle.test | LINK | 0.205958 | 0.657060 | 0.766027 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.209009 | 0.689371 | 0.979120 | — | — | — |
| windows_stream_handle.test | LINK | 0.204457 | 0.664024 | 0.779124 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.208828 | 0.712386 | 0.993219 | — | — | — |
| writable_pipe.test | LINK | 0.409170 | 2.889592 | 2.506030 | — | — | — |
| writable_pipe_select.test | LINK | 0.427987 | 3.024874 | 2.638642 | — | — | — |
| write.test | RUN | 1.707330 | 15.064198 | 13.753580 | 0.001942 | 0.001706 | 0.001730 |
| write_select.test | RUN | 1.727767 | 15.451932 | 13.983685 | 0.001699 | 0.001800 | 0.001616 |
| write_at.test | RUN | 1.747768 | 20.198063 | 17.127444 | 0.002711 | 0.001866 | 0.001928 |
| write_at_select.test | RUN | 1.763039 | 20.419474 | 17.537072 | 0.001883 | 0.001940 | 0.001976 |
| any_executor.test | RUN | 0.697159 | 6.612641 | 5.523739 | 0.002082 | 0.001590 | 0.001617 |
| blocking.test | RUN | 1.489458 | 8.914779 | 11.574534 | 0.003553 | 0.003283 | 0.003300 |
| blocking_adaptation.test | RUN | 0.744356 | 3.703267 | 5.337232 | 0.002208 | 0.002093 | 0.002056 |
| context_as.test | RUN | 0.434524 | 2.573035 | 1.756199 | 0.001434 | 0.001544 | 0.001384 |
| executor.test | RUN | 0.111936 | 0.243472 | 0.308090 | 0.001383 | 0.001214 | 0.001275 |
| inline_exception_handling.test | RUN | 1.479279 | 7.699536 | 11.717251 | 0.003390 | 0.002258 | 0.003030 |
| invocable_archetype.test | RUN | 0.107844 | 0.243439 | 0.288227 | 0.001340 | 0.001318 | 0.001300 |
| mapping.test | RUN | 1.460070 | 8.381961 | 10.962218 | 0.002402 | 0.002371 | 0.002374 |
| outstanding_work.test | RUN | 0.690443 | 3.451188 | 4.916552 | 0.002398 | 0.002220 | 0.002038 |
| prefer_only.test | RUN | 0.221075 | 1.443923 | 1.106990 | 0.001454 | 0.001338 | 0.001369 |
| relationship.test | RUN | 0.496286 | 3.486166 | 5.016885 | 0.001496 | 0.002003 | 0.002078 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.997× | 0.992× |
| clang | 0.998× | 1.008×, 0.988× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001262s | 0.001216s | 0.001291s | byte equality observed |
| any_completion_executor_select.test | 10 | 0.001212s | 0.001208s | 0.001242s | byte equality observed |
| any_completion_handler.test | 10 | 0.001030s | 0.000974s | 0.000969s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001026s | 0.000972s | 0.001017s | byte equality observed |
| any_io_executor.test | 6 | 0.001234s | 0.001171s | 0.001210s | byte equality observed |
| any_io_executor_select.test | 10 | 0.001212s | 0.001197s | 0.001204s | byte equality observed |
| append.test | 10 | 0.000983s | 0.000956s | 0.000971s | byte equality observed |
| append_select.test | 10 | 0.000970s | 0.000952s | 0.000963s | byte equality observed |
| as_tuple.test | 10 | 0.001031s | 0.001010s | 0.001042s | byte equality observed |
| as_tuple_select.test | 10 | 0.000980s | 0.000971s | 0.000978s | byte equality observed |
| bind_allocator.test | 1 | 0.001474s | 0.001428s | 0.001491s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001203s | 0.001109s | 0.001187s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000892s | 0.000883s | 0.000906s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000810s | 0.000801s | 0.000808s | byte equality observed |
| bind_executor.test | 1 | 0.001477s | 0.001414s | 0.001464s | byte equality observed |
| bind_executor_select.test | 1 | 0.001718s | 0.001675s | 0.001779s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000902s | 0.000892s | 0.000892s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000876s | 0.000864s | 0.000890s | byte equality observed |
| buffer.test | 10 | 0.000837s | 0.000809s | 0.000823s | byte equality observed |
| buffer_select.test | 10 | 0.000813s | 0.000808s | 0.000808s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001037s | 0.001026s | 0.001034s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001011s | 0.001002s | 0.001015s | byte equality observed |
| buffered_stream.test | 10 | 0.001019s | 0.000982s | 0.001013s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001002s | 0.000994s | 0.001015s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001021s | 0.000968s | 0.001020s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000994s | 0.001012s | 0.001015s | byte equality observed |
| buffers_iterator.test | 10 | 0.000816s | 0.000786s | 0.000807s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000768s | 0.000757s | 0.000775s | byte equality observed |
| cancel_after.test | 1 | 0.003276s | 0.002931s | 0.003439s | byte equality observed |
| cancel_after_select.test | 1 | 0.002746s | 0.002428s | 0.002840s | byte equality observed |
| cancel_at.test | 1 | 0.003419s | 0.003242s | 0.003448s | byte equality observed |
| cancel_at_select.test | 1 | 0.003369s | 0.003158s | 0.003390s | byte equality observed |
| co_composed.test | 10 | 0.000863s | 0.000834s | 0.000848s | byte equality observed |
| co_composed_select.test | 10 | 0.000796s | 0.000776s | 0.000793s | byte equality observed |
| compose.test | 1 | 0.001511s | 0.001459s | 0.001556s | byte equality observed |
| compose_select.test | 1 | 0.001270s | 0.001203s | 0.001227s | byte equality observed |
| composed.test | 1 | 0.001780s | 0.001694s | 0.001860s | byte equality observed |
| composed_select.test | 1 | 0.001372s | 0.001416s | 0.001404s | byte equality observed |
| config.test | 10 | 0.000900s | 0.000906s | 0.000901s | byte equality observed |
| config_select.test | 10 | 0.000879s | 0.000860s | 0.000897s | byte equality observed |
| connect_pipe.test | 10 | 0.000900s | 0.000877s | 0.000893s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000876s | 0.000878s | 0.000903s | byte equality observed |
| consign.test | 10 | 0.000877s | 0.000866s | 0.000881s | byte equality observed |
| consign_select.test | 10 | 0.000822s | 0.000821s | 0.000862s | byte equality observed |
| deadline_timer.test | 1 | 0.002191s | 0.002196s | 0.002407s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001929s | 0.001909s | 0.002009s | byte equality observed |
| deferred.test | 10 | 0.000803s | 0.000829s | 0.000821s | byte equality observed |
| deferred_select.test | 10 | 0.000732s | 0.000728s | 0.000729s | byte equality observed |
| disposition.test | 10 | 0.000778s | 0.000792s | 0.000777s | byte equality observed |
| disposition_select.test | 10 | 0.000786s | 0.000783s | 0.000761s | byte equality observed |
| error.test | 10 | 0.000753s | 0.000769s | 0.000749s | byte equality observed |
| error_select.test | 10 | 0.000760s | 0.000766s | 0.000789s | byte equality observed |
| inline_executor.test | 10 | 0.000772s | 0.000785s | 0.000773s | byte equality observed |
| inline_executor_select.test | 10 | 0.000773s | 0.000765s | 0.000769s | byte equality observed |
| inline_or_executor.test | 10 | 0.000787s | 0.000776s | 0.000754s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000782s | 0.000792s | 0.000763s | byte equality observed |
| io_context.test | 1 | 0.001769s | 0.001753s | 0.001798s | byte equality observed |
| io_context_select.test | 1 | 0.002107s | 0.001954s | 0.002109s | byte equality observed |
| io_context_strand.test | 1 | 0.002064s | 0.002022s | 0.002167s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001783s | 0.001748s | 0.001862s | byte equality observed |
| ip_host_name.test | 10 | 0.000840s | 0.000845s | 0.000819s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000766s | 0.000750s | 0.000737s | byte equality observed |
| ip_icmp.test | 10 | 0.000776s | 0.000788s | 0.000741s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000767s | 0.000785s | 0.000744s | byte equality observed |
| ip_multicast.test | 10 | 0.000844s | 0.000838s | 0.000856s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000821s | 0.000823s | 0.000829s | byte equality observed |
| ip_tcp.test | 10 | 0.001047s | 0.001043s | 0.001047s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001000s | 0.001010s | 0.000994s | byte equality observed |
| ip_udp.test | 10 | 0.000856s | 0.000858s | 0.000853s | byte equality observed |
| ip_udp_select.test | 10 | 0.000851s | 0.000850s | 0.000838s | byte equality observed |
| ip_unicast.test | 10 | 0.000815s | 0.000818s | 0.000805s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000809s | 0.000814s | 0.000794s | byte equality observed |
| ip_v6_only.test | 10 | 0.000812s | 0.000814s | 0.000783s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000801s | 0.000805s | 0.000783s | byte equality observed |
| is_read_buffered.test | 10 | 0.000759s | 0.000733s | 0.000755s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000746s | 0.000735s | 0.000745s | byte equality observed |
| is_write_buffered.test | 10 | 0.000753s | 0.000747s | 0.000753s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000749s | 0.000769s | 0.000745s | byte equality observed |
| prepend.test | 10 | 0.000811s | 0.000866s | 0.000800s | byte equality observed |
| prepend_select.test | 10 | 0.000790s | 0.000811s | 0.000785s | byte equality observed |
| read.test | 10 | 0.001098s | 0.001142s | 0.001082s | byte equality observed |
| read_at.test | 10 | 0.001317s | 0.001431s | 0.001322s | byte equality observed |
| read_at_select.test | 10 | 0.001317s | 0.001436s | 0.001310s | byte equality observed |
| read_select.test | 10 | 0.001091s | 0.001137s | 0.001069s | byte equality observed |
| read_until.test | 10 | 0.000915s | 0.000945s | 0.000888s | byte equality observed |
| read_until_select.test | 10 | 0.000934s | 0.000971s | 0.000903s | byte equality observed |
| recycling_allocator.test | 10 | 0.000814s | 0.000803s | 0.000786s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000830s | 0.000779s | 0.000813s | byte equality observed |
| signal_set.test | 10 | 0.000841s | 0.000801s | 0.000819s | byte equality observed |
| signal_set_select.test | 10 | 0.000815s | 0.000826s | 0.000824s | byte equality observed |
| socket_base.test | 10 | 0.000901s | 0.000898s | 0.000876s | byte equality observed |
| socket_base_select.test | 10 | 0.000891s | 0.000877s | 0.000886s | byte equality observed |
| spawn.test | 10 | 0.000981s | 0.000961s | 0.000981s | byte equality observed |
| spawn_select.test | 10 | 0.000988s | 0.000960s | 0.001000s | byte equality observed |
| static_thread_pool.test | 10 | 0.000817s | 0.000811s | 0.000801s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000776s | 0.000774s | 0.000770s | byte equality observed |
| strand.test | 1 | 0.001752s | 0.001735s | 0.001716s | byte equality observed |
| strand_select.test | 1 | 0.001392s | 0.001437s | 0.001437s | byte equality observed |
| streambuf.test | 10 | 0.000892s | 0.000872s | 0.000877s | byte equality observed |
| streambuf_select.test | 10 | 0.000842s | 0.000838s | 0.000838s | byte equality observed |
| thread_pool.test | 10 | 0.001547s | 0.001564s | 0.001574s | byte equality observed |
| thread_pool_select.test | 10 | 0.001571s | 0.001507s | 0.001554s | byte equality observed |
| write.test | 10 | 0.001193s | 0.001190s | 0.001197s | byte equality observed |
| write_at.test | 10 | 0.001321s | 0.001297s | 0.001292s | byte equality observed |
| write_at_select.test | 10 | 0.001282s | 0.001279s | 0.001312s | byte equality observed |
| write_select.test | 10 | 0.001189s | 0.001165s | 0.001169s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
