# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.534821 | 3.059406 | 2.544371 | 0.002362 | 0.002202 | 0.002148 |
| any_completion_executor_select.test | RUN | 0.553503 | 2.954283 | 2.621131 | 0.002320 | 0.002219 | 0.002105 |
| any_completion_handler.test | RUN | 0.643814 | 2.743041 | 2.333217 | 0.001935 | 0.001917 | 0.001785 |
| any_completion_handler_select.test | RUN | 0.621164 | 2.846439 | 2.487636 | 0.001979 | 0.001910 | 0.003855 |
| any_io_executor.test | RUN | 0.557153 | 3.282529 | 2.690472 | 0.002038 | 0.002585 | 0.001877 |
| any_io_executor_select.test | RUN | 0.594841 | 3.268625 | 2.801271 | 0.002372 | 0.002316 | 0.002091 |
| append.test | RUN | 0.541791 | 2.697252 | 2.056591 | 0.001704 | 0.001806 | 0.001680 |
| append_select.test | RUN | 0.515783 | 2.733578 | 2.036401 | 0.001935 | 0.001636 | 0.001725 |
| as_tuple.test | RUN | 0.650434 | 3.220836 | 2.804666 | 0.002002 | 0.001714 | 0.001790 |
| as_tuple_select.test | RUN | 0.700748 | 3.114471 | 2.862489 | 0.001538 | 0.001800 | 0.001430 |
| associated_allocator.test | LINK | 0.140358 | 0.245263 | 0.317302 | — | — | — |
| associated_allocator_select.test | LINK | 0.157693 | 0.247829 | 0.305945 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.172073 | 0.316460 | 0.330780 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.162891 | 0.307786 | 0.359638 | — | — | — |
| associated_executor.test | LINK | 0.227912 | 0.493835 | 0.548728 | — | — | — |
| associated_executor_select.test | LINK | 0.223833 | 0.488900 | 0.575001 | — | — | — |
| associated_immediate_executor.test | LINK | 0.207381 | 0.452166 | 0.524440 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.204938 | 0.475425 | 0.493634 | — | — | — |
| associator.test | LINK | 0.118876 | 0.237647 | 0.260693 | — | — | — |
| associator_select.test | LINK | 0.128326 | 0.215057 | 0.262383 | — | — | — |
| awaitable.test | LINK | 0.120304 | 0.235278 | 0.245618 | — | — | — |
| awaitable_select.test | LINK | 0.125868 | 0.217568 | 0.248479 | — | — | — |
| basic_datagram_socket.test | LINK | 0.395727 | 0.666483 | 0.904130 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.387472 | 0.676006 | 0.953478 | — | — | — |
| basic_deadline_timer.test | LINK | 0.452430 | 0.843399 | 1.043744 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.449532 | 0.852383 | 1.058457 | — | — | — |
| basic_file.test | LINK | 0.120572 | 0.229653 | 0.249961 | — | — | — |
| basic_file_select.test | LINK | 0.124199 | 0.211609 | 0.247216 | — | — | — |
| basic_random_access_file.test | LINK | 0.123269 | 0.206979 | 0.246541 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.120421 | 0.214177 | 0.252620 | — | — | — |
| basic_raw_socket.test | LINK | 0.360850 | 0.689435 | 0.927496 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.359885 | 0.720529 | 0.941416 | — | — | — |
| basic_readable_pipe.test | LINK | 0.342660 | 0.698210 | 0.801491 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.353870 | 0.723642 | 0.974095 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.355179 | 0.722446 | 0.938702 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.372815 | 0.732684 | 0.979727 | — | — | — |
| basic_signal_set.test | LINK | 0.344941 | 0.667582 | 0.752146 | — | — | — |
| basic_signal_set_select.test | LINK | 0.354247 | 0.709609 | 0.936946 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.374730 | 0.699070 | 0.955018 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.362275 | 0.736486 | 0.969895 | — | — | — |
| basic_stream_file.test | LINK | 0.117917 | 0.216934 | 0.271914 | — | — | — |
| basic_stream_file_select.test | LINK | 0.119764 | 0.226312 | 0.259169 | — | — | — |
| basic_stream_socket.test | LINK | 0.368613 | 0.726990 | 0.930111 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.362324 | 0.703561 | 0.937202 | — | — | — |
| basic_streambuf.test | LINK | 0.183614 | 0.312022 | 0.354681 | — | — | — |
| basic_streambuf_select.test | LINK | 0.188581 | 0.311769 | 0.359548 | — | — | — |
| basic_waitable_timer.test | LINK | 0.330522 | 0.630061 | 0.860905 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.332843 | 0.650039 | 0.914122 | — | — | — |
| basic_writable_pipe.test | LINK | 0.339114 | 0.652003 | 0.809135 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.343729 | 0.703410 | 1.007996 | — | — | — |
| bind_allocator.test | RUN | 0.553601 | 2.630811 | 2.315023 | 0.002437 | 0.002338 | 0.001422 |
| bind_allocator_select.test | RUN | 0.586817 | 2.627081 | 2.299631 | 0.001875 | 0.001706 | 0.001973 |
| bind_cancellation_slot.test | RUN | 0.577399 | 2.634814 | 2.355617 | 0.001377 | 0.001446 | 0.001277 |
| bind_cancellation_slot_select.test | RUN | 0.579942 | 2.682085 | 2.275151 | 0.001485 | 0.001510 | 0.001197 |
| bind_executor.test | RUN | 0.398076 | 1.881396 | 1.446165 | 0.002261 | 0.001986 | 0.002036 |
| bind_executor_select.test | RUN | 0.408002 | 1.852172 | 1.403857 | 0.001907 | 0.001894 | 0.001832 |
| bind_immediate_executor.test | RUN | 0.294261 | 1.550498 | 0.929801 | 0.001450 | 0.001362 | 0.001184 |
| bind_immediate_executor_select.test | RUN | 0.311143 | 1.512103 | 1.013318 | 0.001490 | 0.001215 | 0.001174 |
| buffer.test | RUN | 0.186286 | 0.605454 | 0.590214 | 0.001477 | 0.001345 | 0.001325 |
| buffer_select.test | RUN | 0.186212 | 0.606024 | 0.586660 | 0.001469 | 0.001133 | 0.001218 |
| buffer_registration.test | LINK | 0.156184 | 0.311687 | 0.327765 | — | — | — |
| buffer_registration_select.test | LINK | 0.151020 | 0.308862 | 0.326960 | — | — | — |
| buffered_read_stream.test | RUN | 0.611940 | 3.880508 | 3.362660 | 0.001845 | 0.002246 | 0.002054 |
| buffered_read_stream_select.test | RUN | 0.624247 | 3.940469 | 3.384752 | 0.001710 | 0.001825 | 0.002190 |
| buffered_stream.test | RUN | 0.802454 | 6.522738 | 6.084320 | 0.002368 | 0.002442 | 0.001912 |
| buffered_stream_select.test | RUN | 0.888273 | 6.564693 | 5.813527 | 0.002256 | 0.002214 | 0.002176 |
| buffered_write_stream.test | RUN | 1.006433 | 5.519540 | 5.251362 | 0.002106 | 0.002134 | 0.002385 |
| buffered_write_stream_select.test | RUN | 1.018084 | 5.594988 | 4.978074 | 0.001960 | 0.001964 | 0.002334 |
| buffers_iterator.test | RUN | 0.299548 | 0.501530 | 0.813585 | 0.001715 | 0.001818 | 0.001712 |
| buffers_iterator_select.test | RUN | 0.304876 | 0.502205 | 0.821204 | 0.001753 | 0.001617 | 0.001336 |
| cancel_after.test | RUN | 0.827574 | 4.174897 | 3.679216 | 0.004102 | 0.003456 | 0.003374 |
| cancel_after_select.test | RUN | 0.838152 | 4.172242 | 3.739858 | 0.003952 | 0.003122 | 0.002799 |
| cancel_at.test | RUN | 0.750333 | 3.936207 | 3.708305 | 0.003205 | 0.003016 | 0.003199 |
| cancel_at_select.test | RUN | 0.705275 | 3.894026 | 3.627334 | 0.003166 | 0.002674 | 0.003009 |
| cancellation_signal.test | LINK | 0.100853 | 0.185065 | 0.231689 | — | — | — |
| cancellation_signal_select.test | LINK | 0.103783 | 0.180135 | 0.262357 | — | — | — |
| cancellation_state.test | LINK | 0.106821 | 0.185615 | 0.295177 | — | — | — |
| cancellation_state_select.test | LINK | 0.146690 | 0.185069 | 0.324264 | — | — | — |
| cancellation_type.test | LINK | 0.118857 | 0.187724 | 0.277824 | — | — | — |
| cancellation_type_select.test | LINK | 0.112885 | 0.205512 | 0.267697 | — | — | — |
| co_composed.test | RUN | 0.118391 | 0.212224 | 0.267801 | 0.001454 | 0.001655 | 0.001608 |
| co_composed_select.test | RUN | 0.116249 | 0.206888 | 0.261111 | 0.001477 | 0.001237 | 0.001644 |
| co_spawn.test | LINK | 0.113175 | 0.213166 | 0.269589 | — | — | — |
| co_spawn_select.test | LINK | 0.115229 | 0.205636 | 0.263062 | — | — | — |
| completion_condition.test | LINK | 0.153249 | 0.312732 | 0.363368 | — | — | — |
| completion_condition_select.test | LINK | 0.144767 | 0.315670 | 0.357985 | — | — | — |
| compose.test | RUN | 0.651631 | 3.220871 | 3.002303 | 0.002342 | 0.002341 | 0.002192 |
| compose_select.test | RUN | 0.674398 | 3.162075 | 3.013468 | 0.002198 | 0.002061 | 0.002248 |
| composed.test | RUN | 0.662214 | 3.199713 | 2.978251 | 0.002024 | 0.002053 | 0.001921 |
| composed_select.test | RUN | 0.618435 | 3.180899 | 2.905228 | 0.001961 | 0.001764 | 0.001926 |
| config.test | RUN | 0.354619 | 2.110509 | 1.243982 | 0.001829 | 0.001791 | 0.001726 |
| config_select.test | RUN | 0.385336 | 2.170656 | 1.460084 | 0.001579 | 0.001600 | 0.001712 |
| connect.test | LINK | 0.972191 | 6.937385 | 6.205583 | — | — | — |
| connect_select.test | LINK | 1.023260 | 6.952636 | 6.243794 | — | — | — |
| connect_pipe.test | RUN | 0.548016 | 2.627162 | 2.292276 | 0.001458 | 0.001860 | 0.001854 |
| connect_pipe_select.test | RUN | 0.574058 | 2.724285 | 2.406341 | 0.001684 | 0.001833 | 0.001830 |
| consign.test | RUN | 0.505114 | 2.639435 | 2.118425 | 0.001792 | 0.001772 | 0.001764 |
| consign_select.test | RUN | 0.508689 | 2.670528 | 2.091120 | 0.001438 | 0.001738 | 0.001746 |
| coroutine.test | LINK | 0.123257 | 0.249380 | 0.287474 | — | — | — |
| coroutine_select.test | LINK | 0.120400 | 0.250618 | 0.299312 | — | — | — |
| deadline_timer.test | RUN | 0.710411 | 3.483260 | 3.043957 | 0.003375 | 0.003117 | 0.003816 |
| deadline_timer_select.test | RUN | 0.737788 | 3.481419 | 3.031430 | 0.003024 | 0.003285 | 0.002774 |
| deferred.test | RUN | 0.119196 | 0.228112 | 0.290004 | 0.001648 | 0.001516 | 0.001683 |
| deferred_select.test | RUN | 0.123036 | 0.230337 | 0.283906 | 0.001265 | 0.001634 | 0.001664 |
| detached.test | LINK | 0.143848 | 0.257688 | 0.324825 | — | — | — |
| detached_select.test | LINK | 0.185636 | 0.259136 | 0.344683 | — | — | — |
| disposition.test | RUN | 0.135611 | 0.682682 | 0.610682 | 0.001327 | 0.001658 | 0.001882 |
| disposition_select.test | RUN | 0.133379 | 0.703849 | 0.621006 | 0.001340 | 0.001744 | 0.001837 |
| error.test | RUN | 0.122088 | 0.619081 | 0.555188 | 0.001288 | 0.001498 | 0.001767 |
| error_select.test | RUN | 0.121212 | 0.618512 | 0.536852 | 0.001304 | 0.001760 | 0.001734 |
| file_base.test | LINK | 0.158821 | 0.488708 | 0.554701 | — | — | — |
| file_base_select.test | LINK | 0.159747 | 0.493794 | 0.417938 | — | — | — |
| fwd_first.test | LINK | 0.363829 | 0.820764 | 1.033636 | — | — | — |
| fwd_last.test | LINK | 0.360678 | 0.819461 | 1.020651 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.139230 | 0.347631 | 0.368211 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.134992 | 0.342827 | 0.369205 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.546316 | 2.884314 | 2.128416 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.547098 | 2.985309 | 2.093430 | — | — | — |
| generic_raw_protocol.test | LINK | 0.527817 | 2.773101 | 2.116861 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.539674 | 2.795670 | 2.098555 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.471893 | 2.395319 | 1.758708 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.479931 | 2.420331 | 1.795189 | — | — | — |
| generic_stream_protocol.test | LINK | 0.495870 | 2.520704 | 1.882785 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.501689 | 2.538735 | 1.846513 | — | — | — |
| high_resolution_timer.test | LINK | 0.218138 | 0.457237 | 0.559561 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.219812 | 0.474376 | 0.573978 | — | — | — |
| immediate.test | LINK | 0.157972 | 0.345598 | 0.346385 | — | — | — |
| immediate_select.test | LINK | 0.161578 | 0.343475 | 0.349357 | — | — | — |
| inline_executor.test | RUN | 0.190186 | 0.518280 | 0.521672 | 0.001439 | 0.001336 | 0.001209 |
| inline_executor_select.test | RUN | 0.193574 | 0.535065 | 0.514508 | 0.001606 | 0.001311 | 0.001211 |
| inline_or_executor.test | RUN | 0.313277 | 1.629982 | 1.075152 | 0.001368 | 0.001358 | 0.001244 |
| inline_or_executor_select.test | RUN | 0.317438 | 1.696473 | 1.171137 | 0.001479 | 0.001480 | 0.001191 |
| io_context.test | RUN | 0.449490 | 2.531507 | 1.823188 | 0.002420 | 0.002331 | 0.002030 |
| io_context_select.test | RUN | 0.449518 | 2.481124 | 1.829094 | 0.002265 | 0.002184 | 0.001900 |
| io_context_strand.test | RUN | 0.419328 | 2.139375 | 1.552261 | 0.002400 | 0.002214 | 0.001966 |
| io_context_strand_select.test | RUN | 0.424141 | 2.088021 | 1.539639 | 0.002372 | 0.001994 | 0.001780 |
| ip_address.test | LINK | 0.172226 | 0.492183 | 0.428914 | — | — | — |
| ip_address_select.test | LINK | 0.178816 | 0.507188 | 0.434959 | — | — | — |
| ip_address_v4.test | LINK | 0.165812 | 0.513115 | 0.474777 | — | — | — |
| ip_address_v4_select.test | LINK | 0.172183 | 0.520274 | 0.471886 | — | — | — |
| ip_address_v6.test | LINK | 0.189831 | 0.658129 | 0.636972 | — | — | — |
| ip_address_v6_select.test | LINK | 0.193071 | 0.672739 | 0.804262 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.155945 | 0.396150 | 0.596788 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.150360 | 0.408469 | 0.589221 | — | — | — |
| ip_basic_resolver.test | LINK | 0.234808 | 0.701397 | 0.879683 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.232645 | 0.686764 | 0.900872 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.083203 | 0.217758 | 0.245657 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.082700 | 0.224647 | 0.254244 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.141357 | 0.458533 | 0.576949 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.145566 | 0.465174 | 0.557579 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.140684 | 0.448659 | 0.551627 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.142322 | 0.453853 | 0.562952 | — | — | — |
| ip_host_name.test | RUN | 0.151605 | 0.580361 | 0.638881 | 0.001366 | 0.001724 | 0.001373 |
| ip_host_name_select.test | RUN | 0.150651 | 0.598351 | 0.626923 | 0.001399 | 0.001663 | 0.001479 |
| ip_icmp.test | RUN | 0.684653 | 5.559216 | 4.338056 | 0.001356 | 0.001790 | 0.001687 |
| ip_icmp_select.test | RUN | 0.687987 | 5.673080 | 4.247821 | 0.001493 | 0.001824 | 0.001601 |
| ip_multicast.test | RUN | 0.386303 | 2.747759 | 2.432696 | 0.001585 | 0.001804 | 0.001746 |
| ip_multicast_select.test | RUN | 0.392027 | 2.733896 | 2.363884 | 0.001686 | 0.001904 | 0.001889 |
| ip_resolver_query_base.test | LINK | 0.102343 | 0.236815 | 0.265018 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.096368 | 0.236839 | 0.274641 | — | — | — |
| ip_tcp.test | RUN | 0.942346 | 8.209710 | 6.728654 | 0.001912 | 0.002226 | 0.002287 |
| ip_tcp_select.test | RUN | 0.945286 | 8.547988 | 6.645137 | 0.001854 | 0.002524 | 0.002362 |
| ip_udp.test | RUN | 0.700639 | 5.863201 | 4.616480 | 0.001533 | 0.001928 | 0.001846 |
| ip_udp_select.test | RUN | 0.698760 | 6.060729 | 4.414136 | 0.001738 | 0.001903 | 0.001742 |
| ip_unicast.test | RUN | 0.382185 | 2.558765 | 2.130626 | 0.001489 | 0.001925 | 0.001721 |
| ip_unicast_select.test | RUN | 0.389443 | 2.605424 | 2.124633 | 0.001568 | 0.001995 | 0.001703 |
| ip_v6_only.test | RUN | 0.404798 | 2.640524 | 2.195092 | 0.001464 | 0.001699 | 0.001445 |
| ip_v6_only_select.test | RUN | 0.460277 | 2.761293 | 2.178239 | 0.001689 | 0.001978 | 0.001509 |
| is_read_buffered.test | RUN | 0.283815 | 0.804359 | 1.144532 | 0.001498 | 0.001774 | 0.001626 |
| is_read_buffered_select.test | RUN | 0.290476 | 0.841996 | 1.167387 | 0.001538 | 0.001735 | 0.001642 |
| is_write_buffered.test | RUN | 0.292098 | 0.828941 | 1.106136 | 0.001326 | 0.001608 | 0.001474 |
| is_write_buffered_select.test | RUN | 0.287318 | 0.849286 | 1.111441 | 0.001352 | 0.001778 | 0.001524 |
| local_basic_endpoint.test | LINK | 0.144360 | 0.480112 | 0.573564 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.140950 | 0.445158 | 0.564293 | — | — | — |
| local_connect_pair.test | LINK | 0.372794 | 2.651836 | 2.005179 | — | — | — |
| local_connect_pair_select.test | LINK | 0.371824 | 2.699209 | 2.023150 | — | — | — |
| local_datagram_protocol.test | LINK | 0.485401 | 3.473047 | 2.920686 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.496583 | 3.544583 | 2.792797 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.484702 | 3.360721 | 2.816552 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.502790 | 3.463320 | 2.808534 | — | — | — |
| local_stream_protocol.test | LINK | 0.458357 | 3.180796 | 2.617711 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.476954 | 3.229920 | 2.582423 | — | — | — |
| placeholders.test | LINK | 0.098812 | 0.241572 | 0.298020 | — | — | — |
| placeholders_select.test | LINK | 0.093492 | 0.238242 | 0.274421 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.234207 | 0.677507 | 0.858141 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.242378 | 0.725135 | 1.037354 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.227927 | 0.662556 | 0.841295 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.303760 | 0.711766 | 1.047018 | — | — | — |
| posix_descriptor_base.test | LINK | 0.147075 | 0.257047 | 0.290346 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.144832 | 0.246003 | 0.279650 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.664494 | 3.228587 | 2.750297 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.675681 | 3.243669 | 2.733413 | — | — | — |
| prepend.test | RUN | 0.517460 | 2.594297 | 2.104997 | 0.001856 | 0.001860 | 0.001841 |
| prepend_select.test | RUN | 0.523724 | 2.690073 | 2.100872 | 0.001598 | 0.001833 | 0.001707 |
| random_access_file.test | LINK | 0.316772 | 0.596431 | 0.673834 | — | — | — |
| random_access_file_select.test | LINK | 0.331834 | 0.637297 | 0.835854 | — | — | — |
| read.test | RUN | 1.568508 | 15.894704 | 11.983715 | 0.002463 | 0.002201 | 0.002154 |
| read_select.test | RUN | 1.567529 | 15.725998 | 11.977430 | 0.002374 | 0.002260 | 0.002259 |
| read_at.test | RUN | 1.562520 | 23.551073 | 16.330275 | 0.002589 | 0.002838 | 0.002496 |
| read_at_select.test | RUN | 1.566683 | 23.535852 | 16.404702 | 0.002694 | 0.002761 | 0.002436 |
| read_until.test | RUN | 0.825954 | 6.281091 | 4.373036 | 0.001726 | 0.001839 | 0.001914 |
| read_until_select.test | RUN | 0.811026 | 6.281335 | 4.566337 | 0.001772 | 0.002056 | 0.001551 |
| readable_pipe.test | LINK | 0.540150 | 2.706204 | 2.096775 | — | — | — |
| readable_pipe_select.test | LINK | 0.545470 | 2.823724 | 2.215429 | — | — | — |
| recycling_allocator.test | RUN | 0.166655 | 0.399437 | 0.437351 | 0.001706 | 0.001720 | 0.001598 |
| recycling_allocator_select.test | RUN | 0.165741 | 0.399336 | 0.403717 | 0.001785 | 0.001583 | 0.001614 |
| redirect_disposition.test | LINK | 0.697405 | 3.808751 | 3.166182 | — | — | — |
| redirect_disposition_select.test | LINK | 0.706204 | 3.813923 | 3.175930 | — | — | — |
| redirect_error.test | LINK | 0.657369 | 3.207932 | 2.806244 | — | — | — |
| redirect_error_select.test | LINK | 0.670489 | 3.221096 | 2.845789 | — | — | — |
| registered_buffer.test | LINK | 0.167873 | 0.319595 | 0.441141 | — | — | — |
| registered_buffer_select.test | LINK | 0.174181 | 0.333059 | 0.374193 | — | — | — |
| signal_set.test | RUN | 0.516267 | 2.694262 | 1.962850 | 0.002004 | 0.001933 | 0.001664 |
| signal_set_select.test | RUN | 0.534416 | 2.765852 | 2.125581 | 0.001576 | 0.001851 | 0.001688 |
| signal_set_base.test | LINK | 0.141147 | 0.256311 | 0.274881 | — | — | — |
| signal_set_base_select.test | LINK | 0.138802 | 0.262529 | 0.280507 | — | — | — |
| socket_base.test | RUN | 0.632022 | 4.407934 | 2.921302 | 0.002118 | 0.002102 | 0.001906 |
| socket_base_select.test | RUN | 0.646301 | 4.193715 | 2.925270 | 0.001823 | 0.001932 | 0.001802 |
| spawn.test | RUN | 1.115568 | 6.479801 | 5.230600 | 0.002257 | 0.001952 | 0.002109 |
| spawn_select.test | RUN | 1.119933 | 6.479478 | 5.216146 | 0.002161 | 0.002312 | 0.001964 |
| static_thread_pool.test | RUN | 0.318161 | 0.604113 | 0.682389 | 0.001808 | 0.001734 | 0.001632 |
| static_thread_pool_select.test | RUN | 0.333713 | 0.622183 | 0.871706 | 0.001777 | 0.001655 | 0.001682 |
| steady_timer.test | LINK | 0.358557 | 0.680886 | 0.934661 | — | — | — |
| steady_timer_select.test | LINK | 0.359544 | 0.708820 | 0.958212 | — | — | — |
| strand.test | RUN | 0.719529 | 3.611310 | 3.164165 | 0.002707 | 0.002771 | 0.002355 |
| strand_select.test | RUN | 0.731419 | 3.544411 | 3.052859 | 0.002878 | 0.002574 | 0.002384 |
| stream_file.test | LINK | 0.337961 | 0.655165 | 0.756772 | — | — | — |
| stream_file_select.test | LINK | 0.354014 | 0.666069 | 0.869468 | — | — | — |
| streambuf.test | RUN | 0.174681 | 0.443441 | 0.491909 | 0.001461 | 0.001396 | 0.001612 |
| streambuf_select.test | RUN | 0.168015 | 0.373779 | 0.454937 | 0.001461 | 0.001422 | 0.001196 |
| system_timer.test | LINK | 0.467227 | 2.467622 | 2.009132 | — | — | — |
| system_timer_select.test | LINK | 0.466597 | 2.402064 | 1.857764 | — | — | — |
| system_context.test | LINK | 0.214388 | 0.407498 | 0.430599 | — | — | — |
| system_context_select.test | LINK | 0.219655 | 0.434890 | 0.528806 | — | — | — |
| system_executor.test | LINK | 0.277633 | 1.417308 | 0.852136 | — | — | — |
| system_executor_select.test | LINK | 0.291297 | 1.400834 | 0.995715 | — | — | — |
| this_coro.test | LINK | 0.087553 | 0.162872 | 0.169614 | — | — | — |
| this_coro_select.test | LINK | 0.084683 | 0.162588 | 0.177716 | — | — | — |
| thread_pool.test | RUN | 0.329469 | 1.725794 | 1.123382 | 0.002612 | 0.002397 | 0.002292 |
| thread_pool_select.test | RUN | 0.334538 | 1.706994 | 1.195903 | 0.002507 | 0.002565 | 0.002444 |
| time_traits.test | LINK | 0.188350 | 0.335147 | 0.354360 | — | — | — |
| time_traits_select.test | LINK | 0.182617 | 0.333599 | 0.347398 | — | — | — |
| ts_buffer.test | LINK | 0.174406 | 0.377646 | 0.371033 | — | — | — |
| ts_buffer_select.test | LINK | 0.173049 | 0.451802 | 0.379574 | — | — | — |
| ts_executor.test | LINK | 0.239166 | 0.789722 | 0.586995 | — | — | — |
| ts_executor_select.test | LINK | 0.248738 | 0.824300 | 0.705238 | — | — | — |
| ts_internet.test | LINK | 0.262363 | 0.851209 | 0.730937 | — | — | — |
| ts_internet_select.test | LINK | 0.276371 | 0.880656 | 0.919942 | — | — | — |
| ts_io_context.test | LINK | 0.217608 | 0.619322 | 0.731311 | — | — | — |
| ts_io_context_select.test | LINK | 0.224724 | 0.664167 | 0.782860 | — | — | — |
| ts_net.test | LINK | 0.305180 | 0.953413 | 1.328959 | — | — | — |
| ts_net_select.test | LINK | 0.311511 | 1.010587 | 1.389068 | — | — | — |
| ts_netfwd.test | LINK | 0.310641 | 0.958494 | 1.343407 | — | — | — |
| ts_netfwd_select.test | LINK | 0.320100 | 1.008342 | 1.375983 | — | — | — |
| ts_socket.test | LINK | 0.249032 | 0.750966 | 1.049430 | — | — | — |
| ts_socket_select.test | LINK | 0.257690 | 0.797056 | 1.051641 | — | — | — |
| ts_timer.test | LINK | 0.228114 | 0.668039 | 0.916190 | — | — | — |
| ts_timer_select.test | LINK | 0.227134 | 0.712422 | 0.907189 | — | — | — |
| use_awaitable.test | LINK | 0.084019 | 0.240012 | 0.258072 | — | — | — |
| use_awaitable_select.test | LINK | 0.083393 | 0.227150 | 0.254390 | — | — | — |
| wait_traits.test | LINK | 0.083429 | 0.232123 | 0.248524 | — | — | — |
| wait_traits_select.test | LINK | 0.082066 | 0.236876 | 0.256864 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.084225 | 0.224709 | 0.254941 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.082623 | 0.223228 | 0.249399 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.082082 | 0.228795 | 0.262052 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.083044 | 0.225395 | 0.260436 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.082580 | 0.223946 | 0.260612 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.086617 | 0.221495 | 0.255497 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.088127 | 0.227904 | 0.263537 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.089606 | 0.222375 | 0.262591 | — | — | — |
| windows_object_handle.test | LINK | 0.231268 | 0.599059 | 0.683312 | — | — | — |
| windows_object_handle_select.test | LINK | 0.240406 | 0.642974 | 0.860013 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.243064 | 0.651913 | 0.758606 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.257358 | 0.689425 | 0.927772 | — | — | — |
| windows_random_access_handle.test | LINK | 0.231683 | 0.623536 | 0.702050 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.244766 | 0.670030 | 0.861174 | — | — | — |
| windows_stream_handle.test | LINK | 0.310643 | 0.612044 | 0.694147 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.323260 | 0.667899 | 0.856054 | — | — | — |
| writable_pipe.test | LINK | 0.552799 | 2.628159 | 2.196871 | — | — | — |
| writable_pipe_select.test | LINK | 0.574483 | 2.756449 | 2.328599 | — | — | — |
| write.test | RUN | 1.572445 | 13.609519 | 11.902444 | 0.002367 | 0.002348 | 0.001858 |
| write_select.test | RUN | 1.582374 | 13.661236 | 11.872050 | 0.002163 | 0.002412 | 0.001997 |
| write_at.test | RUN | 1.602910 | 20.994364 | 15.200044 | 0.002509 | 0.002381 | 0.002533 |
| write_at_select.test | RUN | 1.618178 | 20.738405 | 15.380665 | 0.002605 | 0.002227 | 0.002425 |
| any_executor.test | RUN | 0.669634 | 6.918250 | 5.009331 | 0.002609 | 0.002376 | 0.002306 |
| blocking.test | RUN | 1.427638 | 8.174584 | 9.841351 | 0.006753 | 0.005823 | 0.006421 |
| blocking_adaptation.test | RUN | 0.713864 | 3.385203 | 4.382929 | 0.003614 | 0.003846 | 0.003662 |
| context_as.test | RUN | 0.438711 | 2.390050 | 1.514208 | 0.001734 | 0.002170 | 0.001734 |
| executor.test | RUN | 0.122507 | 0.238546 | 0.268980 | 0.001855 | 0.001800 | 0.001658 |
| inline_exception_handling.test | RUN | 1.422388 | 7.093365 | 9.786743 | 0.006054 | 0.004865 | 0.004680 |
| invocable_archetype.test | RUN | 0.118685 | 0.230902 | 0.276873 | 0.001806 | 0.001619 | 0.001538 |
| mapping.test | RUN | 1.311274 | 7.518353 | 9.787644 | 0.004917 | 0.004992 | 0.004430 |
| outstanding_work.test | RUN | 0.659963 | 3.232095 | 4.333167 | 0.003906 | 0.003770 | 0.003643 |
| prefer_only.test | RUN | 0.246300 | 1.332385 | 0.963511 | 0.001918 | 0.001743 | 0.001776 |
| relationship.test | RUN | 0.621067 | 3.102157 | 3.690305 | 0.002672 | 0.003721 | 0.002694 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997×† | 1.037×, 0.958× | 0.982× |
| clang | 1.009× | 0.995×, 1.023× | 1.022× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 5 | 0.001462s | 0.001400s | 0.001447s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001430s | 0.001404s | 0.001435s | byte equality observed |
| any_completion_handler.test | 10 | 0.001168s | 0.001135s | 0.001160s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001164s | 0.001124s | 0.001142s | byte equality observed |
| any_io_executor.test | 8 | 0.001439s | 0.001388s | 0.001435s | byte equality observed |
| any_io_executor_select.test | 6 | 0.001423s | 0.001358s | 0.001434s | byte equality observed |
| append.test | 10 | 0.001117s | 0.001094s | 0.001125s | byte equality observed |
| append_select.test | 10 | 0.001110s | 0.001071s | 0.001092s | byte equality observed |
| as_tuple.test | 9 | 0.001181s | 0.001134s | 0.001172s | byte equality observed |
| as_tuple_select.test | 9 | 0.001121s | 0.001101s | 0.001121s | byte equality observed |
| bind_allocator.test | 1 | 0.001573s | 0.001461s | 0.001481s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001288s | 0.001223s | 0.001305s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001035s | 0.001005s | 0.001057s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000950s | 0.000951s | 0.000948s | byte equality observed |
| bind_executor.test | 1 | 0.001510s | 0.001432s | 0.001472s | byte equality observed |
| bind_executor_select.test | 1 | 0.001923s | 0.001543s | 0.001913s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000999s | 0.001018s | 0.000976s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000977s | 0.000990s | 0.000940s | byte equality observed |
| buffer.test | 10 | 0.000925s | 0.000949s | 0.000955s | byte equality observed |
| buffer_select.test | 10 | 0.000936s | 0.000938s | 0.000901s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001252s | 0.001225s | 0.001332s | byte equality observed |
| buffered_read_stream_select.test | 9 | 0.001196s | 0.001187s | 0.001238s | byte equality observed |
| buffered_stream.test | 10 | 0.001233s | 0.001187s | 0.001281s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001201s | 0.001159s | 0.001242s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001221s | 0.001191s | 0.001395s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001201s | 0.001173s | 0.001420s | byte equality observed |
| buffers_iterator.test | 10 | 0.000935s | 0.000913s | 0.000996s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000913s | 0.000893s | 0.001082s | byte equality observed |
| cancel_after.test | 1 | 0.002829s | 0.002340s | 0.002871s | byte equality observed |
| cancel_after_select.test | 1 | 0.002329s | 0.002022s | 0.002315s | byte equality observed |
| cancel_at.test | 1 | 0.002995s | 0.002722s | 0.002861s | byte equality observed |
| cancel_at_select.test | 1 | 0.002868s | 0.002498s | 0.002788s | byte equality observed |
| co_composed.test | 10 | 0.000929s | 0.000936s | 0.000943s | byte equality observed |
| co_composed_select.test | 10 | 0.000887s | 0.000873s | 0.000894s | byte equality observed |
| compose.test | 1 | 0.001391s | 0.001400s | 0.001478s | byte equality observed |
| compose_select.test | 1 | 0.001217s | 0.001148s | 0.001171s | byte equality observed |
| composed.test | 1 | 0.001866s | 0.001637s | 0.001803s | byte equality observed |
| composed_select.test | 1 | 0.001328s | 0.001228s | 0.001278s | byte equality observed |
| config.test | 10 | 0.000984s | 0.000971s | 0.001012s | byte equality observed |
| config_select.test | 10 | 0.000955s | 0.000970s | 0.001006s | byte equality observed |
| connect_pipe.test | 10 | 0.000975s | 0.000964s | 0.000987s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000965s | 0.000946s | 0.000976s | byte equality observed |
| consign.test | 10 | 0.000963s | 0.000953s | 0.000978s | byte equality observed |
| consign_select.test | 10 | 0.000934s | 0.000915s | 0.000965s | byte equality observed |
| deadline_timer.test | 1 | 0.002131s | 0.002031s | 0.002215s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001872s | 0.001818s | 0.001911s | byte equality observed |
| deferred.test | 10 | 0.000884s | 0.000894s | 0.000903s | byte equality observed |
| deferred_select.test | 10 | 0.000836s | 0.000848s | 0.000849s | byte equality observed |
| disposition.test | 10 | 0.000887s | 0.000902s | 0.000925s | byte equality observed |
| disposition_select.test | 10 | 0.000882s | 0.000908s | 0.000924s | byte equality observed |
| error.test | 10 | 0.000858s | 0.000856s | 0.000892s | byte equality observed |
| error_select.test | 10 | 0.000872s | 0.000882s | 0.000893s | byte equality observed |
| inline_executor.test | 10 | 0.000894s | 0.000875s | 0.000889s | byte equality observed |
| inline_executor_select.test | 10 | 0.000887s | 0.000869s | 0.000886s | byte equality observed |
| inline_or_executor.test | 10 | 0.000894s | 0.000891s | 0.000897s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000888s | 0.000889s | 0.000897s | byte equality observed |
| io_context.test | 1 | 0.001692s | 0.001715s | 0.001772s | byte equality observed |
| io_context_select.test | 1 | 0.001939s | 0.001822s | 0.002040s | byte equality observed |
| io_context_strand.test | 1 | 0.002059s | 0.002019s | 0.002149s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001721s | 0.001765s | 0.001933s | byte equality observed |
| ip_host_name.test | 10 | 0.000900s | 0.000898s | 0.000932s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000855s | 0.000859s | 0.000891s | byte equality observed |
| ip_icmp.test | 10 | 0.000885s | 0.000885s | 0.000893s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000871s | 0.000872s | 0.000899s | byte equality observed |
| ip_multicast.test | 10 | 0.000946s | 0.000942s | 0.000974s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000924s | 0.000945s | 0.000955s | byte equality observed |
| ip_tcp.test | 10 | 0.001301s | 0.001316s | 0.001350s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001246s | 0.001247s | 0.001313s | byte equality observed |
| ip_udp.test | 10 | 0.000959s | 0.000976s | 0.000995s | byte equality observed |
| ip_udp_select.test | 10 | 0.000946s | 0.000971s | 0.000989s | byte equality observed |
| ip_unicast.test | 10 | 0.000912s | 0.000940s | 0.000948s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000899s | 0.000923s | 0.000938s | byte equality observed |
| ip_v6_only.test | 10 | 0.000915s | 0.000934s | 0.000960s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000893s | 0.000931s | 0.000935s | byte equality observed |
| is_read_buffered.test | 10 | 0.000829s | 0.000881s | 0.000864s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000831s | 0.000908s | 0.000865s | byte equality observed |
| is_write_buffered.test | 10 | 0.000848s | 0.000907s | 0.000867s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000860s | 0.000910s | 0.000883s | byte equality observed |
| prepend.test | 10 | 0.000926s | 0.000978s | 0.001000s | byte equality observed |
| prepend_select.test | 10 | 0.000920s | 0.000981s | 0.000974s | byte equality observed |
| read.test | 10 | 0.001289s | 0.001314s | 0.001334s | byte equality observed |
| read_at.test | 10 | 0.001483s | 0.001528s | 0.001453s | byte equality observed |
| read_at_select.test | 10 | 0.001521s | 0.001529s | 0.001451s | byte equality observed |
| read_select.test | 10 | 0.001298s | 0.001294s | 0.001301s | byte equality observed |
| read_until.test | 10 | 0.001115s | 0.001086s | 0.001069s | byte equality observed |
| read_until_select.test | 10 | 0.001076s | 0.001075s | 0.001087s | byte equality observed |
| recycling_allocator.test | 10 | 0.000904s | 0.000929s | 0.000917s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000898s | 0.000914s | 0.000917s | byte equality observed |
| signal_set.test | 10 | 0.000925s | 0.000938s | 0.000917s | byte equality observed |
| signal_set_select.test | 10 | 0.000927s | 0.000942s | 0.000956s | byte equality observed |
| socket_base.test | 10 | 0.001031s | 0.001030s | 0.001028s | byte equality observed |
| socket_base_select.test | 10 | 0.001010s | 0.001015s | 0.001000s | byte equality observed |
| spawn.test | 10 | 0.001103s | 0.001103s | 0.001121s | byte equality observed |
| spawn_select.test | 10 | 0.001114s | 0.001097s | 0.001104s | byte equality observed |
| static_thread_pool.test | 10 | 0.000901s | 0.000912s | 0.000910s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000886s | 0.000880s | 0.000899s | byte equality observed |
| strand.test | 1 | 0.001701s | 0.001680s | 0.001733s | byte equality observed |
| strand_select.test | 1 | 0.001422s | 0.001416s | 0.001476s | byte equality observed |
| streambuf.test | 10 | 0.000947s | 0.000941s | 0.000979s | byte equality observed |
| streambuf_select.test | 10 | 0.000941s | 0.000922s | 0.000931s | byte equality observed |
| thread_pool.test | 10 | 0.001919s | 0.001881s | 0.001937s | byte equality observed |
| thread_pool_select.test | 10 | 0.001875s | 0.001892s | 0.001937s | byte equality observed |
| write.test | 10 | 0.001343s | 0.001335s | 0.001361s | byte equality observed |
| write_at.test | 10 | 0.001411s | 0.001423s | 0.001441s | byte equality observed |
| write_at_select.test | 10 | 0.001399s | 0.001427s | 0.001424s | byte equality observed |
| write_select.test | 10 | 0.001332s | 0.001319s | 0.001382s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
