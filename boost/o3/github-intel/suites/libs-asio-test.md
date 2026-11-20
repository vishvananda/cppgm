# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.507528 | 3.437338 | 3.006007 | 0.001746 | 0.001729 | 0.002009 |
| any_completion_executor_select.test | RUN | 0.526301 | 3.480233 | 3.142862 | 0.001732 | 0.001934 | 0.001791 |
| any_completion_handler.test | RUN | 0.580610 | 3.143807 | 2.740059 | 0.001390 | 0.001334 | 0.001371 |
| any_completion_handler_select.test | RUN | 0.576387 | 3.214230 | 2.910405 | 0.001381 | 0.001587 | 0.001475 |
| any_io_executor.test | RUN | 0.539945 | 3.716896 | 3.236798 | 0.001644 | 0.001797 | 0.001606 |
| any_io_executor_select.test | RUN | 0.556101 | 3.660780 | 3.353108 | 0.001428 | 0.002215 | 0.001816 |
| append.test | RUN | 0.494078 | 3.000408 | 2.475722 | 0.001127 | 0.001586 | 0.001518 |
| append_select.test | RUN | 0.510610 | 3.062172 | 2.409915 | 0.001372 | 0.001582 | 0.001381 |
| as_tuple.test | RUN | 0.653457 | 3.612092 | 3.442681 | 0.001254 | 0.001405 | 0.001492 |
| as_tuple_select.test | RUN | 0.659314 | 3.585212 | 3.440660 | 0.001307 | 0.001592 | 0.001335 |
| associated_allocator.test | LINK | 0.124954 | 0.285036 | 0.364673 | — | — | — |
| associated_allocator_select.test | LINK | 0.122099 | 0.284383 | 0.360166 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.131332 | 0.310955 | 0.383173 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.137553 | 0.309332 | 0.386245 | — | — | — |
| associated_executor.test | LINK | 0.200446 | 0.552244 | 0.633670 | — | — | — |
| associated_executor_select.test | LINK | 0.195028 | 0.549416 | 0.640860 | — | — | — |
| associated_immediate_executor.test | LINK | 0.178429 | 0.510816 | 0.580715 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.186450 | 0.511853 | 0.575006 | — | — | — |
| associator.test | LINK | 0.098576 | 0.238189 | 0.297710 | — | — | — |
| associator_select.test | LINK | 0.100013 | 0.240789 | 0.306736 | — | — | — |
| awaitable.test | LINK | 0.101818 | 0.243903 | 0.299672 | — | — | — |
| awaitable_select.test | LINK | 0.101514 | 0.245028 | 0.299749 | — | — | — |
| basic_datagram_socket.test | LINK | 0.314648 | 0.774485 | 1.125496 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.325067 | 0.788282 | 1.146676 | — | — | — |
| basic_deadline_timer.test | LINK | 0.374618 | 0.921804 | 1.279311 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.385612 | 0.932798 | 1.302801 | — | — | — |
| basic_file.test | LINK | 0.101922 | 0.247936 | 0.300647 | — | — | — |
| basic_file_select.test | LINK | 0.106420 | 0.242331 | 0.291522 | — | — | — |
| basic_random_access_file.test | LINK | 0.095174 | 0.244432 | 0.292093 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.105391 | 0.244101 | 0.296828 | — | — | — |
| basic_raw_socket.test | LINK | 0.320547 | 0.778732 | 1.139593 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.323845 | 0.795494 | 1.139819 | — | — | — |
| basic_readable_pipe.test | LINK | 0.316813 | 0.746128 | 0.967187 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.325863 | 0.790126 | 1.181830 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.320900 | 0.775211 | 1.124370 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.326846 | 0.791735 | 1.152504 | — | — | — |
| basic_signal_set.test | LINK | 0.300943 | 0.719420 | 0.880179 | — | — | — |
| basic_signal_set_select.test | LINK | 0.310952 | 0.760571 | 1.092098 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.322906 | 0.770581 | 1.126389 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.332109 | 0.794995 | 1.155130 | — | — | — |
| basic_stream_file.test | LINK | 0.102686 | 0.241236 | 0.299683 | — | — | — |
| basic_stream_file_select.test | LINK | 0.103932 | 0.246139 | 0.296429 | — | — | — |
| basic_stream_socket.test | LINK | 0.320918 | 0.782310 | 1.117950 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.322876 | 0.790723 | 1.155979 | — | — | — |
| basic_streambuf.test | LINK | 0.151877 | 0.356051 | 0.425843 | — | — | — |
| basic_streambuf_select.test | LINK | 0.154752 | 0.350807 | 0.426309 | — | — | — |
| basic_waitable_timer.test | LINK | 0.299280 | 0.732108 | 1.066100 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.304144 | 0.749861 | 1.082832 | — | — | — |
| basic_writable_pipe.test | LINK | 0.300905 | 0.736720 | 0.989758 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.326040 | 0.785535 | 1.206525 | — | — | — |
| bind_allocator.test | RUN | 0.546284 | 2.996073 | 2.670099 | 0.001634 | 0.001889 | 0.001688 |
| bind_allocator_select.test | RUN | 0.556646 | 3.072829 | 2.650041 | 0.001306 | 0.001748 | 0.001181 |
| bind_cancellation_slot.test | RUN | 0.552769 | 3.051449 | 2.726303 | 0.000946 | 0.001058 | 0.000982 |
| bind_cancellation_slot_select.test | RUN | 0.545817 | 3.062035 | 2.624022 | 0.000925 | 0.001025 | 0.000949 |
| bind_executor.test | RUN | 0.376236 | 2.095925 | 1.692371 | 0.001642 | 0.001633 | 0.001634 |
| bind_executor_select.test | RUN | 0.387653 | 2.114145 | 1.671176 | 0.001457 | 0.001554 | 0.001469 |
| bind_immediate_executor.test | RUN | 0.283787 | 1.710692 | 1.067027 | 0.000952 | 0.000985 | 0.000978 |
| bind_immediate_executor_select.test | RUN | 0.293058 | 1.675703 | 1.183166 | 0.000918 | 0.001040 | 0.000950 |
| buffer.test | RUN | 0.169640 | 0.700933 | 0.620132 | 0.000911 | 0.000953 | 0.000921 |
| buffer_select.test | RUN | 0.168455 | 0.698662 | 0.617037 | 0.000933 | 0.000942 | 0.000962 |
| buffer_registration.test | LINK | 0.127256 | 0.344744 | 0.371721 | — | — | — |
| buffer_registration_select.test | LINK | 0.133191 | 0.344899 | 0.373113 | — | — | — |
| buffered_read_stream.test | RUN | 0.652690 | 4.601744 | 3.717683 | 0.001182 | 0.001603 | 0.001815 |
| buffered_read_stream_select.test | RUN | 0.665953 | 4.614461 | 3.818133 | 0.001125 | 0.001730 | 0.001904 |
| buffered_stream.test | RUN | 0.885823 | 7.300238 | 6.642210 | 0.001579 | 0.001720 | 0.001934 |
| buffered_stream_select.test | RUN | 0.938723 | 7.323134 | 6.427621 | 0.001654 | 0.001656 | 0.001520 |
| buffered_write_stream.test | RUN | 1.078886 | 6.292795 | 5.706003 | 0.001663 | 0.001660 | 0.001349 |
| buffered_write_stream_select.test | RUN | 1.086792 | 6.365879 | 5.478504 | 0.001489 | 0.001604 | 0.001567 |
| buffers_iterator.test | RUN | 0.308882 | 0.560115 | 0.891885 | 0.001261 | 0.001241 | 0.001346 |
| buffers_iterator_select.test | RUN | 0.306428 | 0.547366 | 0.888323 | 0.001152 | 0.001269 | 0.001106 |
| cancel_after.test | RUN | 0.894709 | 4.885276 | 4.178297 | 0.003228 | 0.003245 | 0.003000 |
| cancel_after_select.test | RUN | 0.912607 | 4.873918 | 4.130330 | 0.003159 | 0.003237 | 0.003700 |
| cancel_at.test | RUN | 0.800172 | 4.401494 | 4.081093 | 0.002957 | 0.002632 | 0.002934 |
| cancel_at_select.test | RUN | 0.777548 | 4.336055 | 4.067221 | 0.002644 | 0.002658 | 0.003427 |
| cancellation_signal.test | LINK | 0.090702 | 0.202285 | 0.251958 | — | — | — |
| cancellation_signal_select.test | LINK | 0.090957 | 0.197354 | 0.249201 | — | — | — |
| cancellation_state.test | LINK | 0.090120 | 0.197631 | 0.375008 | — | — | — |
| cancellation_state_select.test | LINK | 0.112113 | 0.197172 | 0.375141 | — | — | — |
| cancellation_type.test | LINK | 0.099383 | 0.155613 | 0.297428 | — | — | — |
| cancellation_type_select.test | LINK | 0.101915 | 0.155946 | 0.298239 | — | — | — |
| co_composed.test | RUN | 0.102354 | 0.157394 | 0.301505 | 0.001207 | 0.000931 | 0.001226 |
| co_composed_select.test | RUN | 0.104076 | 0.161137 | 0.296871 | 0.001307 | 0.001272 | 0.001272 |
| co_spawn.test | LINK | 0.100828 | 0.222981 | 0.283529 | — | — | — |
| co_spawn_select.test | LINK | 0.101408 | 0.233117 | 0.293163 | — | — | — |
| completion_condition.test | LINK | 0.130503 | 0.372267 | 0.406253 | — | — | — |
| completion_condition_select.test | LINK | 0.134708 | 0.371983 | 0.399801 | — | — | — |
| compose.test | RUN | 0.684679 | 3.774351 | 3.404040 | 0.001869 | 0.002024 | 0.001846 |
| compose_select.test | RUN | 0.693499 | 3.719561 | 3.414287 | 0.001792 | 0.001645 | 0.001632 |
| composed.test | RUN | 0.674292 | 3.695861 | 3.273074 | 0.001390 | 0.001590 | 0.001418 |
| composed_select.test | RUN | 0.664120 | 3.653469 | 3.276654 | 0.001356 | 0.001414 | 0.001506 |
| config.test | RUN | 0.333181 | 2.407490 | 1.408726 | 0.001238 | 0.001401 | 0.001329 |
| config_select.test | RUN | 0.373591 | 2.488449 | 1.580073 | 0.001308 | 0.001396 | 0.001488 |
| connect.test | LINK | 1.094829 | 7.974375 | 7.183321 | — | — | — |
| connect_select.test | LINK | 1.107749 | 7.974641 | 7.165933 | — | — | — |
| connect_pipe.test | RUN | 0.580783 | 3.020627 | 2.617306 | 0.001383 | 0.001498 | 0.001362 |
| connect_pipe_select.test | RUN | 0.599683 | 3.123177 | 2.798261 | 0.001335 | 0.001575 | 0.001448 |
| consign.test | RUN | 0.508428 | 2.954120 | 2.439375 | 0.001455 | 0.001348 | 0.001407 |
| consign_select.test | RUN | 0.516582 | 2.988093 | 2.400365 | 0.001234 | 0.001464 | 0.001336 |
| coroutine.test | LINK | 0.106846 | 0.281808 | 0.338004 | — | — | — |
| coroutine_select.test | LINK | 0.107938 | 0.278590 | 0.329345 | — | — | — |
| deadline_timer.test | RUN | 0.750111 | 3.847931 | 3.473180 | 0.002679 | 0.003054 | 0.003090 |
| deadline_timer_select.test | RUN | 0.747468 | 3.817786 | 3.466983 | 0.002222 | 0.002502 | 0.002695 |
| deferred.test | RUN | 0.112945 | 0.262759 | 0.314616 | 0.001165 | 0.001196 | 0.001416 |
| deferred_select.test | RUN | 0.114758 | 0.262925 | 0.319803 | 0.001195 | 0.001292 | 0.001385 |
| detached.test | LINK | 0.127295 | 0.289540 | 0.360535 | — | — | — |
| detached_select.test | LINK | 0.126861 | 0.286545 | 0.357195 | — | — | — |
| disposition.test | RUN | 0.128008 | 0.702261 | 0.667264 | 0.000929 | 0.001341 | 0.001369 |
| disposition_select.test | RUN | 0.124930 | 0.691205 | 0.665047 | 0.000983 | 0.001314 | 0.001467 |
| error.test | RUN | 0.113367 | 0.677815 | 0.622847 | 0.000947 | 0.001354 | 0.001361 |
| error_select.test | RUN | 0.113159 | 0.671541 | 0.603550 | 0.000920 | 0.001362 | 0.001348 |
| file_base.test | LINK | 0.141721 | 0.552647 | 0.643924 | — | — | — |
| file_base_select.test | LINK | 0.141872 | 0.549226 | 0.635046 | — | — | — |
| fwd_first.test | LINK | 0.326851 | 0.907180 | 1.157343 | — | — | — |
| fwd_last.test | LINK | 0.327351 | 0.841098 | 1.165142 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.121109 | 0.316123 | 0.412798 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.121534 | 0.310935 | 0.412539 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.553224 | 3.003864 | 2.453701 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.551329 | 3.091717 | 2.424402 | — | — | — |
| generic_raw_protocol.test | LINK | 0.555703 | 3.018128 | 2.436890 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.552009 | 3.114050 | 2.397940 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.478259 | 2.540934 | 2.082065 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.473953 | 2.568662 | 2.071431 | — | — | — |
| generic_stream_protocol.test | LINK | 0.509854 | 2.756892 | 2.227031 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.508093 | 2.808447 | 2.227126 | — | — | — |
| high_resolution_timer.test | LINK | 0.208843 | 0.473023 | 0.644174 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.212691 | 0.489872 | 0.658314 | — | — | — |
| immediate.test | LINK | 0.143002 | 0.366154 | 0.395830 | — | — | — |
| immediate_select.test | LINK | 0.141440 | 0.368918 | 0.390985 | — | — | — |
| inline_executor.test | RUN | 0.178292 | 0.578098 | 0.596942 | 0.000933 | 0.001003 | 0.000915 |
| inline_executor_select.test | RUN | 0.177960 | 0.576287 | 0.589860 | 0.001017 | 0.000948 | 0.000930 |
| inline_or_executor.test | RUN | 0.298174 | 1.756996 | 1.225405 | 0.000967 | 0.000986 | 0.000968 |
| inline_or_executor_select.test | RUN | 0.305186 | 1.804525 | 1.320876 | 0.000945 | 0.000960 | 0.000930 |
| io_context.test | RUN | 0.437978 | 2.690176 | 2.127460 | 0.001847 | 0.001811 | 0.002052 |
| io_context_select.test | RUN | 0.444833 | 2.645487 | 2.116973 | 0.001568 | 0.001868 | 0.001859 |
| io_context_strand.test | RUN | 0.419487 | 2.275132 | 1.843490 | 0.001741 | 0.001846 | 0.001704 |
| io_context_strand_select.test | RUN | 0.422161 | 2.248930 | 1.841925 | 0.001481 | 0.001613 | 0.001654 |
| ip_address.test | LINK | 0.147041 | 0.513076 | 0.511748 | — | — | — |
| ip_address_select.test | LINK | 0.146895 | 0.511681 | 0.535152 | — | — | — |
| ip_address_v4.test | LINK | 0.148931 | 0.542072 | 0.895926 | — | — | — |
| ip_address_v4_select.test | LINK | 0.146787 | 0.540514 | 0.914132 | — | — | — |
| ip_address_v6.test | LINK | 0.172713 | 0.712359 | 1.128577 | — | — | — |
| ip_address_v6_select.test | LINK | 0.172638 | 0.712131 | 1.129525 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.124636 | 0.338441 | 0.715545 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.124484 | 0.336048 | 0.715463 | — | — | — |
| ip_basic_resolver.test | LINK | 0.208705 | 0.490199 | 1.076091 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.214230 | 0.518853 | 1.104127 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069607 | 0.189054 | 0.303997 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.069095 | 0.232529 | 0.303618 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.128275 | 0.500690 | 0.695023 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.128029 | 0.492439 | 0.694892 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.123378 | 0.479343 | 0.667953 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.123525 | 0.477456 | 0.664965 | — | — | — |
| ip_host_name.test | RUN | 0.131505 | 0.645118 | 0.761820 | 0.000859 | 0.001345 | 0.001363 |
| ip_host_name_select.test | RUN | 0.131934 | 0.651629 | 0.759750 | 0.000894 | 0.001242 | 0.001192 |
| ip_icmp.test | RUN | 0.692337 | 6.326112 | 5.190676 | 0.001006 | 0.001292 | 0.001476 |
| ip_icmp_select.test | RUN | 0.690832 | 6.446985 | 5.053340 | 0.000985 | 0.001474 | 0.001180 |
| ip_multicast.test | RUN | 0.380950 | 3.163996 | 2.845353 | 0.001085 | 0.001587 | 0.001570 |
| ip_multicast_select.test | RUN | 0.389972 | 3.130390 | 2.826787 | 0.000995 | 0.001458 | 0.001383 |
| ip_resolver_query_base.test | LINK | 0.081286 | 0.263944 | 0.314530 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.080721 | 0.260425 | 0.316423 | — | — | — |
| ip_tcp.test | RUN | 1.023693 | 9.408221 | 7.933288 | 0.001317 | 0.001798 | 0.001972 |
| ip_tcp_select.test | RUN | 1.026253 | 9.797913 | 7.716033 | 0.001208 | 0.001946 | 0.001888 |
| ip_udp.test | RUN | 0.730687 | 6.717559 | 5.414098 | 0.001004 | 0.001387 | 0.001418 |
| ip_udp_select.test | RUN | 0.728414 | 6.789725 | 5.275649 | 0.001070 | 0.001444 | 0.001470 |
| ip_unicast.test | RUN | 0.350399 | 2.859294 | 2.489091 | 0.000952 | 0.001502 | 0.001227 |
| ip_unicast_select.test | RUN | 0.351820 | 2.876049 | 2.452432 | 0.000986 | 0.001545 | 0.001381 |
| ip_v6_only.test | RUN | 0.363067 | 2.963041 | 2.584588 | 0.001011 | 0.001502 | 0.001244 |
| ip_v6_only_select.test | RUN | 0.370851 | 3.021580 | 2.543212 | 0.001009 | 0.001460 | 0.001149 |
| is_read_buffered.test | RUN | 0.243997 | 0.860948 | 1.311772 | 0.000862 | 0.001241 | 0.001161 |
| is_read_buffered_select.test | RUN | 0.245466 | 0.883487 | 1.352958 | 0.000929 | 0.001214 | 0.001115 |
| is_write_buffered.test | RUN | 0.243882 | 0.864643 | 1.310094 | 0.000900 | 0.001329 | 0.001184 |
| is_write_buffered_select.test | RUN | 0.244481 | 0.883178 | 1.323606 | 0.000904 | 0.001160 | 0.001190 |
| local_basic_endpoint.test | LINK | 0.121062 | 0.481151 | 0.660658 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.120104 | 0.483428 | 0.655859 | — | — | — |
| local_connect_pair.test | LINK | 0.340989 | 2.875911 | 2.318613 | — | — | — |
| local_connect_pair_select.test | LINK | 0.340442 | 2.840821 | 2.292060 | — | — | — |
| local_datagram_protocol.test | LINK | 0.463173 | 3.825219 | 3.246727 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.469979 | 3.826923 | 3.191816 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.472821 | 3.727106 | 3.260643 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.477525 | 3.806554 | 3.245974 | — | — | — |
| local_stream_protocol.test | LINK | 0.439740 | 3.568066 | 3.066238 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.451134 | 3.565632 | 3.018785 | — | — | — |
| placeholders.test | LINK | 0.077127 | 0.258226 | 0.319085 | — | — | — |
| placeholders_select.test | LINK | 0.076963 | 0.259521 | 0.316241 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.213541 | 0.727855 | 0.972318 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.219547 | 0.761550 | 1.171433 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.215006 | 0.722798 | 0.966223 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.220788 | 0.772468 | 1.176208 | — | — | — |
| posix_descriptor_base.test | LINK | 0.083406 | 0.270440 | 0.311746 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.081516 | 0.267884 | 0.315285 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.461310 | 3.629544 | 3.078401 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.471644 | 3.661108 | 3.118489 | — | — | — |
| prepend.test | RUN | 0.349110 | 2.891683 | 2.423380 | 0.001312 | 0.001554 | 0.001263 |
| prepend_select.test | RUN | 0.368884 | 2.953862 | 2.399802 | 0.001273 | 0.001247 | 0.001265 |
| random_access_file.test | LINK | 0.290337 | 0.656498 | 0.787427 | — | — | — |
| random_access_file_select.test | LINK | 0.292823 | 0.708564 | 0.988976 | — | — | — |
| read.test | RUN | 1.666907 | 18.525748 | 14.192814 | 0.001816 | 0.001724 | 0.001862 |
| read_select.test | RUN | 1.686539 | 18.410739 | 14.322177 | 0.001668 | 0.001898 | 0.001911 |
| read_at.test | RUN | 1.661402 | 24.448865 | 19.064631 | 0.002024 | 0.002324 | 0.002274 |
| read_at_select.test | RUN | 1.665922 | 24.443391 | 19.224005 | 0.001926 | 0.002347 | 0.002160 |
| read_until.test | RUN | 0.865230 | 7.236101 | 5.262169 | 0.001451 | 0.001530 | 0.001306 |
| read_until_select.test | RUN | 0.876736 | 7.276989 | 5.402888 | 0.001376 | 0.001527 | 0.001427 |
| readable_pipe.test | LINK | 0.533873 | 2.954166 | 2.442661 | — | — | — |
| readable_pipe_select.test | LINK | 0.551739 | 3.105672 | 2.606306 | — | — | — |
| recycling_allocator.test | RUN | 0.155584 | 0.413054 | 0.479730 | 0.001196 | 0.001305 | 0.001128 |
| recycling_allocator_select.test | RUN | 0.159069 | 0.411612 | 0.481590 | 0.001163 | 0.001254 | 0.001276 |
| redirect_disposition.test | LINK | 0.692515 | 4.148849 | 3.658438 | — | — | — |
| redirect_disposition_select.test | LINK | 0.698154 | 4.159991 | 3.619296 | — | — | — |
| redirect_error.test | LINK | 0.612969 | 3.436839 | 3.185744 | — | — | — |
| redirect_error_select.test | LINK | 0.623462 | 3.418291 | 3.190250 | — | — | — |
| registered_buffer.test | LINK | 0.144682 | 0.331953 | 0.430954 | — | — | — |
| registered_buffer_select.test | LINK | 0.148208 | 0.331039 | 0.426627 | — | — | — |
| signal_set.test | RUN | 0.507116 | 2.921573 | 2.259653 | 0.001173 | 0.001437 | 0.001300 |
| signal_set_select.test | RUN | 0.531159 | 3.020371 | 2.466678 | 0.001179 | 0.001382 | 0.001254 |
| signal_set_base.test | LINK | 0.115392 | 0.266124 | 0.301788 | — | — | — |
| signal_set_base_select.test | LINK | 0.116159 | 0.267787 | 0.304223 | — | — | — |
| socket_base.test | RUN | 0.623444 | 4.249845 | 3.407877 | 0.001644 | 0.001264 | 0.001411 |
| socket_base_select.test | RUN | 0.628422 | 4.145332 | 3.377215 | 0.001158 | 0.001366 | 0.001412 |
| spawn.test | RUN | 1.104115 | 7.043308 | 5.988120 | 0.001425 | 0.001704 | 0.001674 |
| spawn_select.test | RUN | 1.117440 | 7.036296 | 5.986209 | 0.001439 | 0.001551 | 0.001526 |
| static_thread_pool.test | RUN | 0.273077 | 0.639786 | 0.772101 | 0.001142 | 0.001538 | 0.001191 |
| static_thread_pool_select.test | RUN | 0.279914 | 0.683267 | 0.997137 | 0.001082 | 0.001154 | 0.001312 |
| steady_timer.test | LINK | 0.304594 | 0.720035 | 1.097068 | — | — | — |
| steady_timer_select.test | LINK | 0.309371 | 0.743692 | 1.114173 | — | — | — |
| strand.test | RUN | 0.676021 | 3.957102 | 3.565036 | 0.001916 | 0.001656 | 0.001992 |
| strand_select.test | RUN | 0.682238 | 3.895595 | 3.457454 | 0.001519 | 0.001966 | 0.001688 |
| stream_file.test | LINK | 0.292152 | 0.672327 | 0.789599 | — | — | — |
| stream_file_select.test | LINK | 0.297108 | 0.622230 | 0.997938 | — | — | — |
| streambuf.test | RUN | 0.182448 | 0.368527 | 0.556513 | 0.001241 | 0.000932 | 0.001170 |
| streambuf_select.test | RUN | 0.178158 | 0.369236 | 0.546661 | 0.001281 | 0.000922 | 0.000820 |
| system_timer.test | LINK | 0.449381 | 2.528388 | 2.209029 | — | — | — |
| system_timer_select.test | LINK | 0.450826 | 2.494943 | 2.067501 | — | — | — |
| system_context.test | LINK | 0.186160 | 0.422747 | 0.475770 | — | — | — |
| system_context_select.test | LINK | 0.192461 | 0.454964 | 0.605275 | — | — | — |
| system_executor.test | LINK | 0.256276 | 1.437410 | 0.978047 | — | — | — |
| system_executor_select.test | LINK | 0.262783 | 1.396941 | 1.083085 | — | — | — |
| this_coro.test | LINK | 0.069959 | 0.161718 | 0.188193 | — | — | — |
| this_coro_select.test | LINK | 0.066519 | 0.160417 | 0.189882 | — | — | — |
| thread_pool.test | RUN | 0.311654 | 1.847924 | 1.264958 | 0.001668 | 0.001701 | 0.001702 |
| thread_pool_select.test | RUN | 0.317686 | 1.864707 | 1.358233 | 0.001596 | 0.001646 | 0.001659 |
| time_traits.test | LINK | 0.156933 | 0.335631 | 0.387145 | — | — | — |
| time_traits_select.test | LINK | 0.160206 | 0.382015 | 0.381998 | — | — | — |
| ts_buffer.test | LINK | 0.150549 | 0.559084 | 0.404541 | — | — | — |
| ts_buffer_select.test | LINK | 0.150133 | 0.564267 | 0.400953 | — | — | — |
| ts_executor.test | LINK | 0.218207 | 0.781651 | 0.643581 | — | — | — |
| ts_executor_select.test | LINK | 0.225418 | 0.839670 | 0.766765 | — | — | — |
| ts_internet.test | LINK | 0.235033 | 0.853009 | 1.128059 | — | — | — |
| ts_internet_select.test | LINK | 0.241555 | 0.877005 | 1.159023 | — | — | — |
| ts_io_context.test | LINK | 0.188634 | 0.652834 | 0.794608 | — | — | — |
| ts_io_context_select.test | LINK | 0.197044 | 0.690839 | 0.982757 | — | — | — |
| ts_net.test | LINK | 0.284355 | 1.017475 | 1.575930 | — | — | — |
| ts_net_select.test | LINK | 0.286376 | 1.036729 | 1.585074 | — | — | — |
| ts_netfwd.test | LINK | 0.285784 | 1.007510 | 1.568570 | — | — | — |
| ts_netfwd_select.test | LINK | 0.290313 | 1.055075 | 1.599528 | — | — | — |
| ts_socket.test | LINK | 0.233803 | 0.793612 | 1.198556 | — | — | — |
| ts_socket_select.test | LINK | 0.235783 | 0.825159 | 1.234293 | — | — | — |
| ts_timer.test | LINK | 0.208113 | 0.720460 | 1.041353 | — | — | — |
| ts_timer_select.test | LINK | 0.207954 | 0.740033 | 1.067324 | — | — | — |
| use_awaitable.test | LINK | 0.066754 | 0.237111 | 0.291995 | — | — | — |
| use_awaitable_select.test | LINK | 0.069899 | 0.238696 | 0.291957 | — | — | — |
| wait_traits.test | LINK | 0.066041 | 0.240066 | 0.291234 | — | — | — |
| wait_traits_select.test | LINK | 0.066364 | 0.238038 | 0.292615 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.068237 | 0.239129 | 0.293392 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.068984 | 0.237090 | 0.295583 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070196 | 0.233915 | 0.294441 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.068761 | 0.240530 | 0.293840 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.068877 | 0.238042 | 0.297630 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.066042 | 0.235342 | 0.295364 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.066136 | 0.241493 | 0.297280 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.067695 | 0.236380 | 0.293383 | — | — | — |
| windows_object_handle.test | LINK | 0.195698 | 0.659624 | 0.799739 | — | — | — |
| windows_object_handle_select.test | LINK | 0.202779 | 0.697517 | 1.000849 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.201880 | 0.690766 | 0.866521 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.209395 | 0.741828 | 1.087611 | — | — | — |
| windows_random_access_handle.test | LINK | 0.197234 | 0.655290 | 0.797224 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.202617 | 0.693098 | 0.999525 | — | — | — |
| windows_stream_handle.test | LINK | 0.196755 | 0.649924 | 0.788851 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.200548 | 0.706370 | 1.001023 | — | — | — |
| writable_pipe.test | LINK | 0.371492 | 3.015014 | 2.590074 | — | — | — |
| writable_pipe_select.test | LINK | 0.380413 | 3.132329 | 2.708830 | — | — | — |
| write.test | RUN | 1.523034 | 15.495184 | 14.203891 | 0.001757 | 0.001789 | 0.001800 |
| write_select.test | RUN | 1.611756 | 15.490683 | 14.165440 | 0.001748 | 0.001958 | 0.001733 |
| write_at.test | RUN | 1.713181 | 20.972055 | 17.959862 | 0.002103 | 0.001997 | 0.002067 |
| write_at_select.test | RUN | 1.705117 | 20.999967 | 17.941402 | 0.001962 | 0.002158 | 0.001914 |
| any_executor.test | RUN | 0.668812 | 6.814667 | 5.740936 | 0.001683 | 0.001644 | 0.001922 |
| blocking.test | RUN | 1.436804 | 9.188344 | 11.527355 | 0.003391 | 0.003280 | 0.003384 |
| blocking_adaptation.test | RUN | 0.728405 | 3.883777 | 5.119038 | 0.002074 | 0.002010 | 0.002104 |
| context_as.test | RUN | 0.422139 | 2.643858 | 1.793773 | 0.001417 | 0.001502 | 0.001343 |
| executor.test | RUN | 0.102410 | 0.250100 | 0.311670 | 0.001315 | 0.001127 | 0.001203 |
| inline_exception_handling.test | RUN | 1.425397 | 8.349478 | 11.560550 | 0.002328 | 0.002250 | 0.002417 |
| invocable_archetype.test | RUN | 0.101687 | 0.244823 | 0.313795 | 0.001163 | 0.001299 | 0.001296 |
| mapping.test | RUN | 1.460819 | 8.444909 | 11.179535 | 0.002410 | 0.002383 | 0.002516 |
| outstanding_work.test | RUN | 0.661824 | 3.697475 | 4.996326 | 0.002038 | 0.002135 | 0.002210 |
| prefer_only.test | RUN | 0.212473 | 1.458613 | 1.106651 | 0.001307 | 0.001281 | 0.001362 |
| relationship.test | RUN | 0.455064 | 3.184465 | 4.795633 | 0.001514 | 0.001542 | 0.002232 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.993×, 0.974× | 0.981× |
| clang | 0.991× | 0.994×, 0.989× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001254s | 0.001260s | 0.001261s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001211s | 0.001243s | 0.001162s | byte equality observed |
| any_completion_handler.test | 10 | 0.001022s | 0.001033s | 0.000998s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001031s | 0.001043s | 0.000961s | byte equality observed |
| any_io_executor.test | 4 | 0.001205s | 0.001251s | 0.001195s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001258s | 0.001237s | 0.001188s | byte equality observed |
| append.test | 10 | 0.000985s | 0.000991s | 0.000979s | byte equality observed |
| append_select.test | 10 | 0.000967s | 0.000965s | 0.000943s | byte equality observed |
| as_tuple.test | 10 | 0.001033s | 0.001034s | 0.001007s | byte equality observed |
| as_tuple_select.test | 10 | 0.000964s | 0.000987s | 0.000928s | byte equality observed |
| bind_allocator.test | 1 | 0.001466s | 0.001415s | 0.001459s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001140s | 0.001181s | 0.001143s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000903s | 0.000902s | 0.000903s | byte equality observed |
| bind_cancellation_slot_select.test | 9 | 0.000816s | 0.000814s | 0.000806s | byte equality observed |
| bind_executor.test | 1 | 0.001501s | 0.001436s | 0.001464s | byte equality observed |
| bind_executor_select.test | 1 | 0.001653s | 0.001563s | 0.001697s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000901s | 0.000930s | 0.000921s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000854s | 0.000866s | 0.000889s | byte equality observed |
| buffer.test | 10 | 0.000841s | 0.000831s | 0.000842s | byte equality observed |
| buffer_select.test | 10 | 0.000827s | 0.000811s | 0.000849s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001052s | 0.001047s | 0.001011s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001012s | 0.001002s | 0.001008s | byte equality observed |
| buffered_stream.test | 10 | 0.001010s | 0.001001s | 0.000989s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000993s | 0.001004s | 0.001002s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001009s | 0.001002s | 0.000995s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.000997s | 0.001004s | 0.000989s | byte equality observed |
| buffers_iterator.test | 10 | 0.000827s | 0.000797s | 0.000833s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000782s | 0.000780s | 0.000771s | byte equality observed |
| cancel_after.test | 1 | 0.003122s | 0.002598s | 0.003099s | byte equality observed |
| cancel_after_select.test | 1 | 0.002651s | 0.002266s | 0.002621s | byte equality observed |
| cancel_at.test | 1 | 0.003270s | 0.002812s | 0.003221s | byte equality observed |
| cancel_at_select.test | 1 | 0.003177s | 0.002683s | 0.003292s | byte equality observed |
| co_composed.test | 10 | 0.000841s | 0.000820s | 0.000845s | byte equality observed |
| co_composed_select.test | 10 | 0.000802s | 0.000783s | 0.000797s | byte equality observed |
| compose.test | 1 | 0.001452s | 0.001282s | 0.001537s | byte equality observed |
| compose_select.test | 1 | 0.001200s | 0.001113s | 0.001207s | byte equality observed |
| composed.test | 1 | 0.001765s | 0.001397s | 0.001761s | byte equality observed |
| composed_select.test | 1 | 0.001357s | 0.001153s | 0.001311s | byte equality observed |
| config.test | 10 | 0.000913s | 0.000845s | 0.000885s | byte equality observed |
| config_select.test | 10 | 0.000896s | 0.000884s | 0.000869s | byte equality observed |
| connect_pipe.test | 10 | 0.000915s | 0.000893s | 0.000883s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000879s | 0.000904s | 0.000879s | byte equality observed |
| consign.test | 10 | 0.000880s | 0.000887s | 0.000908s | byte equality observed |
| consign_select.test | 10 | 0.000847s | 0.000826s | 0.000839s | byte equality observed |
| deadline_timer.test | 1 | 0.002196s | 0.002050s | 0.002195s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001848s | 0.001808s | 0.001953s | byte equality observed |
| deferred.test | 10 | 0.000813s | 0.000776s | 0.000827s | byte equality observed |
| deferred_select.test | 10 | 0.000747s | 0.000743s | 0.000757s | byte equality observed |
| disposition.test | 10 | 0.000782s | 0.000791s | 0.000797s | byte equality observed |
| disposition_select.test | 10 | 0.000785s | 0.000793s | 0.000783s | byte equality observed |
| error.test | 10 | 0.000763s | 0.000775s | 0.000759s | byte equality observed |
| error_select.test | 10 | 0.000759s | 0.000777s | 0.000758s | byte equality observed |
| inline_executor.test | 10 | 0.000779s | 0.000779s | 0.000760s | byte equality observed |
| inline_executor_select.test | 10 | 0.000775s | 0.000775s | 0.000774s | byte equality observed |
| inline_or_executor.test | 10 | 0.000783s | 0.000788s | 0.000772s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000784s | 0.000788s | 0.000774s | byte equality observed |
| io_context.test | 1 | 0.001799s | 0.001665s | 0.001869s | byte equality observed |
| io_context_select.test | 1 | 0.002105s | 0.001723s | 0.002120s | byte equality observed |
| io_context_strand.test | 1 | 0.002053s | 0.001981s | 0.002041s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001769s | 0.001598s | 0.001775s | byte equality observed |
| ip_host_name.test | 10 | 0.000859s | 0.000852s | 0.000842s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000752s | 0.000776s | 0.000753s | byte equality observed |
| ip_icmp.test | 10 | 0.000777s | 0.000793s | 0.000773s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000770s | 0.000797s | 0.000767s | byte equality observed |
| ip_multicast.test | 10 | 0.000849s | 0.000852s | 0.000840s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000834s | 0.000832s | 0.000827s | byte equality observed |
| ip_tcp.test | 10 | 0.001053s | 0.001044s | 0.001042s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001013s | 0.001008s | 0.001015s | byte equality observed |
| ip_udp.test | 10 | 0.000865s | 0.000859s | 0.000855s | byte equality observed |
| ip_udp_select.test | 10 | 0.000859s | 0.000850s | 0.000841s | byte equality observed |
| ip_unicast.test | 10 | 0.000828s | 0.000822s | 0.000806s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000813s | 0.000815s | 0.000801s | byte equality observed |
| ip_v6_only.test | 10 | 0.000821s | 0.000823s | 0.000802s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000810s | 0.000806s | 0.000793s | byte equality observed |
| is_read_buffered.test | 10 | 0.000755s | 0.000753s | 0.000749s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000756s | 0.000750s | 0.000749s | byte equality observed |
| is_write_buffered.test | 10 | 0.000765s | 0.000750s | 0.000752s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000762s | 0.000754s | 0.000734s | byte equality observed |
| prepend.test | 10 | 0.000816s | 0.000813s | 0.000803s | byte equality observed |
| prepend_select.test | 10 | 0.000799s | 0.000792s | 0.000790s | byte equality observed |
| read.test | 10 | 0.001102s | 0.001140s | 0.001064s | byte equality observed |
| read_at.test | 10 | 0.001315s | 0.001429s | 0.001313s | byte equality observed |
| read_at_select.test | 10 | 0.001319s | 0.001446s | 0.001317s | byte equality observed |
| read_select.test | 10 | 0.001103s | 0.001171s | 0.001063s | byte equality observed |
| read_until.test | 10 | 0.000913s | 0.000954s | 0.000890s | byte equality observed |
| read_until_select.test | 10 | 0.000960s | 0.000962s | 0.000925s | byte equality observed |
| recycling_allocator.test | 10 | 0.000806s | 0.000810s | 0.000808s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000813s | 0.000836s | 0.000802s | byte equality observed |
| signal_set.test | 10 | 0.000838s | 0.000855s | 0.000855s | byte equality observed |
| signal_set_select.test | 10 | 0.000830s | 0.000860s | 0.000854s | byte equality observed |
| socket_base.test | 10 | 0.000917s | 0.000920s | 0.000913s | byte equality observed |
| socket_base_select.test | 10 | 0.000888s | 0.000911s | 0.000910s | byte equality observed |
| spawn.test | 10 | 0.000979s | 0.000989s | 0.000983s | byte equality observed |
| spawn_select.test | 10 | 0.000977s | 0.000976s | 0.000976s | byte equality observed |
| static_thread_pool.test | 10 | 0.000823s | 0.000806s | 0.000839s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000801s | 0.000758s | 0.000785s | byte equality observed |
| strand.test | 1 | 0.001704s | 0.001600s | 0.001702s | byte equality observed |
| strand_select.test | 1 | 0.001433s | 0.001421s | 0.001443s | byte equality observed |
| streambuf.test | 10 | 0.000880s | 0.000891s | 0.000898s | byte equality observed |
| streambuf_select.test | 10 | 0.000835s | 0.000848s | 0.000875s | byte equality observed |
| thread_pool.test | 10 | 0.001547s | 0.001571s | 0.001607s | byte equality observed |
| thread_pool_select.test | 10 | 0.001555s | 0.001554s | 0.001523s | byte equality observed |
| write.test | 10 | 0.001216s | 0.001190s | 0.001198s | byte equality observed |
| write_at.test | 10 | 0.001320s | 0.001310s | 0.001271s | byte equality observed |
| write_at_select.test | 10 | 0.001304s | 0.001311s | 0.001292s | byte equality observed |
| write_select.test | 10 | 0.001183s | 0.001176s | 0.001171s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
