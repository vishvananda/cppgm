# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.540337 | 3.482901 | 3.011042 | 0.001351 | 0.001943 | 0.001669 |
| any_completion_executor_select.test | RUN | 0.547041 | 3.491718 | 3.172676 | 0.001922 | 0.001383 | 0.001618 |
| any_completion_handler.test | RUN | 0.588944 | 3.180302 | 2.737585 | 0.001598 | 0.001369 | 0.001614 |
| any_completion_handler_select.test | RUN | 0.617085 | 3.265136 | 2.926288 | 0.001186 | 0.001445 | 0.001474 |
| any_io_executor.test | RUN | 0.550667 | 3.715929 | 3.265203 | 0.002172 | 0.001874 | 0.001784 |
| any_io_executor_select.test | RUN | 0.573874 | 3.660964 | 3.373841 | 0.001507 | 0.002015 | 0.001774 |
| append.test | RUN | 0.517116 | 2.974706 | 2.439702 | 0.001222 | 0.001582 | 0.001296 |
| append_select.test | RUN | 0.521523 | 3.046390 | 2.490106 | 0.001315 | 0.001448 | 0.001437 |
| as_tuple.test | RUN | 0.677983 | 3.582482 | 3.489314 | 0.001626 | 0.001497 | 0.001443 |
| as_tuple_select.test | RUN | 0.687212 | 3.558200 | 3.446181 | 0.001373 | 0.001390 | 0.001507 |
| associated_allocator.test | LINK | 0.130605 | 0.293189 | 0.361644 | — | — | — |
| associated_allocator_select.test | LINK | 0.129085 | 0.290171 | 0.366456 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.145815 | 0.312761 | 0.390149 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.148358 | 0.320325 | 0.417011 | — | — | — |
| associated_executor.test | LINK | 0.210097 | 0.548047 | 0.641567 | — | — | — |
| associated_executor_select.test | LINK | 0.214330 | 0.547063 | 0.667427 | — | — | — |
| associated_immediate_executor.test | LINK | 0.192481 | 0.505082 | 0.617486 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.187375 | 0.510122 | 0.584424 | — | — | — |
| associator.test | LINK | 0.108198 | 0.235672 | 0.300093 | — | — | — |
| associator_select.test | LINK | 0.103784 | 0.242683 | 0.299967 | — | — | — |
| awaitable.test | LINK | 0.107880 | 0.237123 | 0.293170 | — | — | — |
| awaitable_select.test | LINK | 0.107265 | 0.244213 | 0.293645 | — | — | — |
| basic_datagram_socket.test | LINK | 0.325018 | 0.756081 | 1.122534 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.333600 | 0.782077 | 1.144326 | — | — | — |
| basic_deadline_timer.test | LINK | 0.387656 | 0.889049 | 1.283780 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.399053 | 0.920614 | 1.310402 | — | — | — |
| basic_file.test | LINK | 0.104433 | 0.241554 | 0.295947 | — | — | — |
| basic_file_select.test | LINK | 0.103514 | 0.234076 | 0.295294 | — | — | — |
| basic_random_access_file.test | LINK | 0.103127 | 0.239297 | 0.296670 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.106457 | 0.236016 | 0.303869 | — | — | — |
| basic_raw_socket.test | LINK | 0.329277 | 0.766381 | 1.129609 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.334407 | 0.782770 | 1.142098 | — | — | — |
| basic_readable_pipe.test | LINK | 0.316689 | 0.725695 | 0.975345 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.331706 | 0.778448 | 1.180743 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.325333 | 0.762149 | 1.127735 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.334544 | 0.775596 | 1.144757 | — | — | — |
| basic_signal_set.test | LINK | 0.299889 | 0.698106 | 0.886141 | — | — | — |
| basic_signal_set_select.test | LINK | 0.318051 | 0.753127 | 1.097162 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.327648 | 0.767590 | 1.119431 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.345847 | 0.784391 | 1.132517 | — | — | — |
| basic_stream_file.test | LINK | 0.108207 | 0.241623 | 0.299788 | — | — | — |
| basic_stream_file_select.test | LINK | 0.108239 | 0.245407 | 0.288697 | — | — | — |
| basic_stream_socket.test | LINK | 0.339406 | 0.769623 | 1.109121 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.343186 | 0.787994 | 1.138605 | — | — | — |
| basic_streambuf.test | LINK | 0.159926 | 0.351552 | 0.428939 | — | — | — |
| basic_streambuf_select.test | LINK | 0.163057 | 0.352476 | 0.425130 | — | — | — |
| basic_waitable_timer.test | LINK | 0.319272 | 0.724495 | 1.044717 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.320013 | 0.732508 | 1.063452 | — | — | — |
| basic_writable_pipe.test | LINK | 0.322638 | 0.734271 | 0.972951 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.333984 | 0.787841 | 1.176680 | — | — | — |
| bind_allocator.test | RUN | 0.560223 | 2.960951 | 2.672748 | 0.001766 | 0.001873 | 0.001866 |
| bind_allocator_select.test | RUN | 0.573010 | 3.041372 | 2.615603 | 0.001832 | 0.001818 | 0.001556 |
| bind_cancellation_slot.test | RUN | 0.575744 | 3.034406 | 2.658098 | 0.001056 | 0.001110 | 0.000916 |
| bind_cancellation_slot_select.test | RUN | 0.585039 | 3.015978 | 2.577825 | 0.000992 | 0.000988 | 0.000975 |
| bind_executor.test | RUN | 0.393131 | 2.082859 | 1.674159 | 0.001813 | 0.001758 | 0.001681 |
| bind_executor_select.test | RUN | 0.402281 | 2.116979 | 1.672607 | 0.001612 | 0.001695 | 0.001533 |
| bind_immediate_executor.test | RUN | 0.298331 | 1.721552 | 1.065111 | 0.001043 | 0.000989 | 0.000944 |
| bind_immediate_executor_select.test | RUN | 0.304847 | 1.680392 | 1.167147 | 0.001035 | 0.001006 | 0.000989 |
| buffer.test | RUN | 0.175413 | 0.705979 | 0.629349 | 0.001003 | 0.000994 | 0.000967 |
| buffer_select.test | RUN | 0.175160 | 0.698974 | 0.638224 | 0.001061 | 0.000912 | 0.000922 |
| buffer_registration.test | LINK | 0.137433 | 0.347863 | 0.363546 | — | — | — |
| buffer_registration_select.test | LINK | 0.135615 | 0.348133 | 0.363468 | — | — | — |
| buffered_read_stream.test | RUN | 0.676631 | 4.678459 | 3.845249 | 0.001309 | 0.001812 | 0.001782 |
| buffered_read_stream_select.test | RUN | 0.689272 | 4.656953 | 3.798618 | 0.001342 | 0.001543 | 0.001590 |
| buffered_stream.test | RUN | 0.949992 | 7.483846 | 6.452549 | 0.001744 | 0.001782 | 0.001632 |
| buffered_stream_select.test | RUN | 1.003483 | 7.440531 | 6.471657 | 0.001755 | 0.001813 | 0.001529 |
| buffered_write_stream.test | RUN | 1.124547 | 6.424543 | 5.742854 | 0.001879 | 0.001860 | 0.001755 |
| buffered_write_stream_select.test | RUN | 1.123003 | 6.532825 | 5.473706 | 0.001529 | 0.001906 | 0.001602 |
| buffers_iterator.test | RUN | 0.324518 | 0.562846 | 0.900525 | 0.001284 | 0.001439 | 0.001321 |
| buffers_iterator_select.test | RUN | 0.319185 | 0.562642 | 0.908887 | 0.001256 | 0.001358 | 0.001182 |
| cancel_after.test | RUN | 0.915218 | 5.063513 | 4.212067 | 0.003949 | 0.003872 | 0.003487 |
| cancel_after_select.test | RUN | 0.913134 | 4.983462 | 4.105643 | 0.003650 | 0.003906 | 0.003190 |
| cancel_at.test | RUN | 0.868911 | 4.529888 | 4.088983 | 0.003232 | 0.003424 | 0.003321 |
| cancel_at_select.test | RUN | 0.850827 | 4.474698 | 4.021650 | 0.003221 | 0.003097 | 0.002895 |
| cancellation_signal.test | LINK | 0.095365 | 0.205966 | 0.234649 | — | — | — |
| cancellation_signal_select.test | LINK | 0.095697 | 0.203941 | 0.249720 | — | — | — |
| cancellation_state.test | LINK | 0.095966 | 0.207014 | 0.313746 | — | — | — |
| cancellation_state_select.test | LINK | 0.134074 | 0.204133 | 0.374697 | — | — | — |
| cancellation_type.test | LINK | 0.107604 | 0.163311 | 0.301547 | — | — | — |
| cancellation_type_select.test | LINK | 0.107521 | 0.163411 | 0.290161 | — | — | — |
| co_composed.test | RUN | 0.111847 | 0.164541 | 0.288465 | 0.001427 | 0.001015 | 0.001267 |
| co_composed_select.test | RUN | 0.109672 | 0.168333 | 0.290503 | 0.001524 | 0.001689 | 0.001164 |
| co_spawn.test | LINK | 0.110649 | 0.243727 | 0.291560 | — | — | — |
| co_spawn_select.test | LINK | 0.107538 | 0.244146 | 0.291019 | — | — | — |
| completion_condition.test | LINK | 0.140562 | 0.383856 | 0.395969 | — | — | — |
| completion_condition_select.test | LINK | 0.138544 | 0.377903 | 0.393652 | — | — | — |
| compose.test | RUN | 0.696108 | 3.819648 | 3.360713 | 0.001970 | 0.001438 | 0.001687 |
| compose_select.test | RUN | 0.704396 | 3.743714 | 3.326596 | 0.001859 | 0.001934 | 0.001826 |
| composed.test | RUN | 0.690509 | 3.832543 | 3.330661 | 0.001686 | 0.001712 | 0.001394 |
| composed_select.test | RUN | 0.654134 | 3.735915 | 3.227887 | 0.001575 | 0.001560 | 0.001409 |
| config.test | RUN | 0.334787 | 2.474898 | 1.486310 | 0.001373 | 0.001409 | 0.001272 |
| config_select.test | RUN | 0.361259 | 2.527722 | 1.647646 | 0.001445 | 0.001519 | 0.001300 |
| connect.test | LINK | 1.123253 | 8.177763 | 7.043738 | — | — | — |
| connect_select.test | LINK | 1.131461 | 8.117508 | 7.023862 | — | — | — |
| connect_pipe.test | RUN | 0.588412 | 3.075542 | 2.605290 | 0.001174 | 0.001707 | 0.001455 |
| connect_pipe_select.test | RUN | 0.607951 | 3.190861 | 2.732797 | 0.001516 | 0.001586 | 0.001275 |
| consign.test | RUN | 0.514207 | 3.003827 | 2.424861 | 0.001376 | 0.001670 | 0.001428 |
| consign_select.test | RUN | 0.523795 | 3.066580 | 2.371269 | 0.001394 | 0.001668 | 0.001245 |
| coroutine.test | LINK | 0.109077 | 0.290151 | 0.328714 | — | — | — |
| coroutine_select.test | LINK | 0.112436 | 0.285673 | 0.328824 | — | — | — |
| deadline_timer.test | RUN | 0.767080 | 3.868913 | 3.356259 | 0.002429 | 0.003296 | 0.002973 |
| deadline_timer_select.test | RUN | 0.768285 | 3.832744 | 3.368748 | 0.002547 | 0.002346 | 0.002861 |
| deferred.test | RUN | 0.117831 | 0.260923 | 0.313357 | 0.001170 | 0.001429 | 0.001284 |
| deferred_select.test | RUN | 0.115182 | 0.263643 | 0.317520 | 0.001109 | 0.001429 | 0.001198 |
| detached.test | LINK | 0.131571 | 0.288046 | 0.351421 | — | — | — |
| detached_select.test | LINK | 0.137590 | 0.285898 | 0.350942 | — | — | — |
| disposition.test | RUN | 0.139160 | 0.707349 | 0.661828 | 0.001102 | 0.001549 | 0.001284 |
| disposition_select.test | RUN | 0.133288 | 0.712422 | 0.660196 | 0.001106 | 0.001524 | 0.001235 |
| error.test | RUN | 0.119896 | 0.688842 | 0.586610 | 0.001031 | 0.001506 | 0.001375 |
| error_select.test | RUN | 0.121736 | 0.689557 | 0.583412 | 0.000967 | 0.001559 | 0.001243 |
| file_base.test | LINK | 0.147637 | 0.563207 | 0.647207 | — | — | — |
| file_base_select.test | LINK | 0.146172 | 0.560768 | 0.592545 | — | — | — |
| fwd_first.test | LINK | 0.343442 | 0.916333 | 1.157729 | — | — | — |
| fwd_last.test | LINK | 0.339817 | 0.845179 | 1.158694 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.129143 | 0.328056 | 0.413469 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.128194 | 0.324481 | 0.414546 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.585508 | 3.058898 | 2.440922 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.581613 | 3.174989 | 2.426029 | — | — | — |
| generic_raw_protocol.test | LINK | 0.570821 | 3.077810 | 2.422736 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.565627 | 3.178154 | 2.424996 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.492048 | 2.607943 | 2.050561 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.492537 | 2.643928 | 2.043588 | — | — | — |
| generic_stream_protocol.test | LINK | 0.522146 | 2.810186 | 2.223764 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.522650 | 2.877715 | 2.219648 | — | — | — |
| high_resolution_timer.test | LINK | 0.217331 | 0.490870 | 0.642417 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.219594 | 0.505016 | 0.660472 | — | — | — |
| immediate.test | LINK | 0.149051 | 0.375679 | 0.400750 | — | — | — |
| immediate_select.test | LINK | 0.147450 | 0.378556 | 0.403524 | — | — | — |
| inline_executor.test | RUN | 0.185184 | 0.593509 | 0.608843 | 0.001062 | 0.001044 | 0.000904 |
| inline_executor_select.test | RUN | 0.185824 | 0.593434 | 0.609947 | 0.001025 | 0.001003 | 0.000936 |
| inline_or_executor.test | RUN | 0.305083 | 1.797551 | 1.215894 | 0.001056 | 0.001010 | 0.000969 |
| inline_or_executor_select.test | RUN | 0.313120 | 1.858540 | 1.313038 | 0.001067 | 0.001094 | 0.000920 |
| io_context.test | RUN | 0.455290 | 2.767250 | 2.115333 | 0.001905 | 0.002056 | 0.001887 |
| io_context_select.test | RUN | 0.457174 | 2.718257 | 2.095152 | 0.001916 | 0.001889 | 0.001978 |
| io_context_strand.test | RUN | 0.424751 | 2.331255 | 1.879739 | 0.001977 | 0.001852 | 0.001782 |
| io_context_strand_select.test | RUN | 0.428441 | 2.304863 | 1.875355 | 0.001740 | 0.001688 | 0.001575 |
| ip_address.test | LINK | 0.151528 | 0.524722 | 0.511945 | — | — | — |
| ip_address_select.test | LINK | 0.153894 | 0.523215 | 0.514272 | — | — | — |
| ip_address_v4.test | LINK | 0.153096 | 0.549646 | 0.851657 | — | — | — |
| ip_address_v4_select.test | LINK | 0.153397 | 0.549347 | 0.868218 | — | — | — |
| ip_address_v6.test | LINK | 0.177551 | 0.727058 | 1.093420 | — | — | — |
| ip_address_v6_select.test | LINK | 0.175776 | 0.722015 | 1.114023 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.130568 | 0.346770 | 0.711609 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.131284 | 0.342374 | 0.697658 | — | — | — |
| ip_basic_resolver.test | LINK | 0.214062 | 0.502038 | 1.043281 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.218884 | 0.512517 | 1.086034 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.073118 | 0.161740 | 0.300100 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.072623 | 0.161375 | 0.293090 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.129208 | 0.342123 | 0.679940 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.129472 | 0.476792 | 0.694065 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.124622 | 0.471139 | 0.659651 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.122552 | 0.474511 | 0.657681 | — | — | — |
| ip_host_name.test | RUN | 0.136020 | 0.657705 | 0.745494 | 0.000896 | 0.001464 | 0.001198 |
| ip_host_name_select.test | RUN | 0.134066 | 0.663003 | 0.746625 | 0.000938 | 0.001334 | 0.001150 |
| ip_icmp.test | RUN | 0.715292 | 6.480286 | 5.004145 | 0.000970 | 0.001354 | 0.001138 |
| ip_icmp_select.test | RUN | 0.713011 | 6.573842 | 4.871998 | 0.001016 | 0.001476 | 0.001132 |
| ip_multicast.test | RUN | 0.390110 | 3.202685 | 2.764934 | 0.001128 | 0.001716 | 0.001394 |
| ip_multicast_select.test | RUN | 0.398693 | 3.195486 | 2.727360 | 0.001058 | 0.001559 | 0.001314 |
| ip_resolver_query_base.test | LINK | 0.084533 | 0.265435 | 0.309677 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.083343 | 0.268856 | 0.307577 | — | — | — |
| ip_tcp.test | RUN | 1.054499 | 9.483593 | 7.654065 | 0.001357 | 0.002020 | 0.001794 |
| ip_tcp_select.test | RUN | 1.063775 | 9.812770 | 7.451436 | 0.001283 | 0.002114 | 0.001804 |
| ip_udp.test | RUN | 0.757925 | 6.757273 | 5.328652 | 0.001174 | 0.001766 | 0.001334 |
| ip_udp_select.test | RUN | 0.752625 | 6.991027 | 5.184744 | 0.001085 | 0.001788 | 0.001553 |
| ip_unicast.test | RUN | 0.361723 | 2.952645 | 2.477085 | 0.001048 | 0.001620 | 0.001462 |
| ip_unicast_select.test | RUN | 0.363230 | 2.917422 | 2.451874 | 0.001014 | 0.001467 | 0.001444 |
| ip_v6_only.test | RUN | 0.371970 | 3.024670 | 2.508903 | 0.001025 | 0.001589 | 0.001263 |
| ip_v6_only_select.test | RUN | 0.380307 | 3.105822 | 2.487898 | 0.001007 | 0.001725 | 0.001283 |
| is_read_buffered.test | RUN | 0.249663 | 0.882820 | 1.275850 | 0.000951 | 0.001340 | 0.001099 |
| is_read_buffered_select.test | RUN | 0.261172 | 0.909242 | 1.299499 | 0.000965 | 0.001419 | 0.001076 |
| is_write_buffered.test | RUN | 0.251335 | 0.886093 | 1.283708 | 0.001014 | 0.001455 | 0.001308 |
| is_write_buffered_select.test | RUN | 0.257335 | 0.907460 | 1.308966 | 0.001003 | 0.001303 | 0.001298 |
| local_basic_endpoint.test | LINK | 0.126203 | 0.497449 | 0.668350 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.125713 | 0.482569 | 0.665403 | — | — | — |
| local_connect_pair.test | LINK | 0.353458 | 2.949881 | 2.322056 | — | — | — |
| local_connect_pair_select.test | LINK | 0.353930 | 2.923910 | 2.305223 | — | — | — |
| local_datagram_protocol.test | LINK | 0.478681 | 3.929010 | 3.292803 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.491665 | 3.920615 | 3.229428 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.485916 | 3.851057 | 3.227804 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.484259 | 3.845054 | 3.208285 | — | — | — |
| local_stream_protocol.test | LINK | 0.452778 | 3.637278 | 3.054931 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.463468 | 3.668510 | 3.010676 | — | — | — |
| placeholders.test | LINK | 0.079818 | 0.265033 | 0.320138 | — | — | — |
| placeholders_select.test | LINK | 0.080425 | 0.263570 | 0.316296 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.218754 | 0.748745 | 0.976583 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.226839 | 0.788349 | 1.174135 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.218443 | 0.754242 | 0.964439 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.226214 | 0.792256 | 1.168815 | — | — | — |
| posix_descriptor_base.test | LINK | 0.087836 | 0.273100 | 0.314104 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.087667 | 0.275581 | 0.315715 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.498825 | 3.702002 | 3.100906 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.558992 | 3.740279 | 3.179111 | — | — | — |
| prepend.test | RUN | 0.512514 | 2.987916 | 2.410138 | 0.001405 | 0.001479 | 0.001445 |
| prepend_select.test | RUN | 0.520962 | 3.020457 | 2.391735 | 0.001306 | 0.001401 | 0.001387 |
| random_access_file.test | LINK | 0.290674 | 0.675799 | 0.792303 | — | — | — |
| random_access_file_select.test | LINK | 0.309430 | 0.725056 | 0.998769 | — | — | — |
| read.test | RUN | 1.692617 | 18.811364 | 14.264317 | 0.001901 | 0.001890 | 0.001950 |
| read_select.test | RUN | 1.700792 | 18.805415 | 14.258806 | 0.001808 | 0.001778 | 0.001911 |
| read_at.test | RUN | 1.682757 | 24.717158 | 18.992868 | 0.002306 | 0.002134 | 0.002088 |
| read_at_select.test | RUN | 1.692756 | 24.557034 | 19.327142 | 0.002056 | 0.002180 | 0.002022 |
| read_until.test | RUN | 0.883373 | 7.239714 | 5.245692 | 0.001541 | 0.001649 | 0.001433 |
| read_until_select.test | RUN | 0.883157 | 7.309016 | 5.380361 | 0.001388 | 0.001418 | 0.001454 |
| readable_pipe.test | LINK | 0.540189 | 3.007600 | 2.394955 | — | — | — |
| readable_pipe_select.test | LINK | 0.563002 | 3.119454 | 2.522470 | — | — | — |
| recycling_allocator.test | RUN | 0.159064 | 0.412580 | 0.474481 | 0.001146 | 0.001316 | 0.001142 |
| recycling_allocator_select.test | RUN | 0.159385 | 0.412533 | 0.474019 | 0.001203 | 0.001222 | 0.001231 |
| redirect_disposition.test | LINK | 0.709173 | 4.161153 | 3.665765 | — | — | — |
| redirect_disposition_select.test | LINK | 0.716240 | 4.122524 | 3.667853 | — | — | — |
| redirect_error.test | LINK | 0.626370 | 3.467690 | 3.256249 | — | — | — |
| redirect_error_select.test | LINK | 0.638052 | 3.392164 | 3.191724 | — | — | — |
| registered_buffer.test | LINK | 0.154233 | 0.335792 | 0.427292 | — | — | — |
| registered_buffer_select.test | LINK | 0.155405 | 0.336896 | 0.429401 | — | — | — |
| signal_set.test | RUN | 0.528995 | 2.876298 | 2.278341 | 0.001295 | 0.001329 | 0.001238 |
| signal_set_select.test | RUN | 0.546195 | 3.007395 | 2.503061 | 0.001343 | 0.001366 | 0.001328 |
| signal_set_base.test | LINK | 0.125119 | 0.259079 | 0.312751 | — | — | — |
| signal_set_base_select.test | LINK | 0.118939 | 0.263760 | 0.310085 | — | — | — |
| socket_base.test | RUN | 0.641803 | 4.177405 | 3.492560 | 0.001304 | 0.001676 | 0.001379 |
| socket_base_select.test | RUN | 0.646947 | 4.120797 | 3.430483 | 0.001669 | 0.001360 | 0.001363 |
| spawn.test | RUN | 1.119334 | 7.093632 | 6.020897 | 0.001574 | 0.001695 | 0.001591 |
| spawn_select.test | RUN | 1.133436 | 7.049406 | 6.022233 | 0.001746 | 0.001690 | 0.001725 |
| static_thread_pool.test | RUN | 0.276764 | 0.645141 | 0.763978 | 0.001242 | 0.001201 | 0.001187 |
| static_thread_pool_select.test | RUN | 0.291217 | 0.697888 | 0.973633 | 0.001173 | 0.001195 | 0.001334 |
| steady_timer.test | LINK | 0.317732 | 0.725328 | 1.097808 | — | — | — |
| steady_timer_select.test | LINK | 0.317725 | 0.758908 | 1.129861 | — | — | — |
| strand.test | RUN | 0.693755 | 3.965770 | 3.592248 | 0.002220 | 0.002019 | 0.001974 |
| strand_select.test | RUN | 0.702853 | 3.927715 | 3.639330 | 0.001716 | 0.001902 | 0.002157 |
| stream_file.test | LINK | 0.291151 | 0.662758 | 0.831598 | — | — | — |
| stream_file_select.test | LINK | 0.300563 | 0.573741 | 1.045447 | — | — | — |
| streambuf.test | RUN | 0.173200 | 0.370166 | 0.567083 | 0.000916 | 0.000957 | 0.001068 |
| streambuf_select.test | RUN | 0.149037 | 0.371837 | 0.515401 | 0.000877 | 0.000998 | 0.000982 |
| system_timer.test | LINK | 0.453471 | 2.556849 | 2.115243 | — | — | — |
| system_timer_select.test | LINK | 0.454825 | 2.519843 | 2.065117 | — | — | — |
| system_context.test | LINK | 0.192906 | 0.430562 | 0.474471 | — | — | — |
| system_context_select.test | LINK | 0.199938 | 0.459781 | 0.600493 | — | — | — |
| system_executor.test | LINK | 0.264908 | 1.441742 | 0.967053 | — | — | — |
| system_executor_select.test | LINK | 0.271221 | 1.411484 | 1.080495 | — | — | — |
| this_coro.test | LINK | 0.072143 | 0.158657 | 0.183610 | — | — | — |
| this_coro_select.test | LINK | 0.071098 | 0.159632 | 0.187978 | — | — | — |
| thread_pool.test | RUN | 0.319360 | 1.852417 | 1.258825 | 0.001636 | 0.001702 | 0.001590 |
| thread_pool_select.test | RUN | 0.327386 | 1.866876 | 1.360617 | 0.001606 | 0.001546 | 0.001733 |
| time_traits.test | LINK | 0.163071 | 0.373429 | 0.386079 | — | — | — |
| time_traits_select.test | LINK | 0.165364 | 0.496752 | 0.381235 | — | — | — |
| ts_buffer.test | LINK | 0.155533 | 0.555302 | 0.405472 | — | — | — |
| ts_buffer_select.test | LINK | 0.154463 | 0.565596 | 0.404473 | — | — | — |
| ts_executor.test | LINK | 0.224678 | 0.793034 | 0.638661 | — | — | — |
| ts_executor_select.test | LINK | 0.231977 | 0.833792 | 0.766850 | — | — | — |
| ts_internet.test | LINK | 0.247412 | 0.854619 | 0.994880 | — | — | — |
| ts_internet_select.test | LINK | 0.253903 | 0.880815 | 1.256571 | — | — | — |
| ts_io_context.test | LINK | 0.196040 | 0.662405 | 0.770156 | — | — | — |
| ts_io_context_select.test | LINK | 0.205778 | 0.692309 | 0.979837 | — | — | — |
| ts_net.test | LINK | 0.292549 | 1.016629 | 1.563781 | — | — | — |
| ts_net_select.test | LINK | 0.296633 | 1.053521 | 1.583991 | — | — | — |
| ts_netfwd.test | LINK | 0.291178 | 1.038479 | 1.565028 | — | — | — |
| ts_netfwd_select.test | LINK | 0.296180 | 1.058003 | 1.589355 | — | — | — |
| ts_socket.test | LINK | 0.239311 | 0.810628 | 1.199795 | — | — | — |
| ts_socket_select.test | LINK | 0.242658 | 0.818426 | 1.218873 | — | — | — |
| ts_timer.test | LINK | 0.212457 | 0.723563 | 1.046169 | — | — | — |
| ts_timer_select.test | LINK | 0.214856 | 0.742128 | 1.066002 | — | — | — |
| use_awaitable.test | LINK | 0.071997 | 0.244803 | 0.291121 | — | — | — |
| use_awaitable_select.test | LINK | 0.072267 | 0.240120 | 0.294889 | — | — | — |
| wait_traits.test | LINK | 0.072633 | 0.240159 | 0.290638 | — | — | — |
| wait_traits_select.test | LINK | 0.072245 | 0.239001 | 0.296063 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.072286 | 0.235845 | 0.292250 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071500 | 0.239896 | 0.288940 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.072957 | 0.236801 | 0.290421 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071477 | 0.244103 | 0.291733 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.073300 | 0.239279 | 0.293644 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.073261 | 0.243243 | 0.290209 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.073067 | 0.241948 | 0.298688 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.073790 | 0.243414 | 0.291559 | — | — | — |
| windows_object_handle.test | LINK | 0.201640 | 0.668465 | 0.783823 | — | — | — |
| windows_object_handle_select.test | LINK | 0.207921 | 0.700651 | 0.988718 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.209381 | 0.705834 | 0.867567 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.217806 | 0.744000 | 1.074823 | — | — | — |
| windows_random_access_handle.test | LINK | 0.202166 | 0.663637 | 0.795141 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.209179 | 0.709308 | 1.003916 | — | — | — |
| windows_stream_handle.test | LINK | 0.201824 | 0.667276 | 0.792375 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.211035 | 0.707547 | 0.999707 | — | — | — |
| writable_pipe.test | LINK | 0.408370 | 2.970919 | 2.536846 | — | — | — |
| writable_pipe_select.test | LINK | 0.436593 | 3.121733 | 2.667255 | — | — | — |
| write.test | RUN | 1.703062 | 15.481353 | 13.940613 | 0.001924 | 0.001905 | 0.001854 |
| write_select.test | RUN | 1.698957 | 15.666394 | 14.185572 | 0.001870 | 0.001884 | 0.001751 |
| write_at.test | RUN | 1.745644 | 20.737366 | 17.758200 | 0.002124 | 0.002034 | 0.001898 |
| write_at_select.test | RUN | 1.763387 | 20.645436 | 18.162442 | 0.002321 | 0.002041 | 0.002196 |
| any_executor.test | RUN | 0.687687 | 6.822058 | 5.733800 | 0.002063 | 0.001778 | 0.001618 |
| blocking.test | RUN | 1.497775 | 9.069838 | 11.645089 | 0.003368 | 0.003357 | 0.003343 |
| blocking_adaptation.test | RUN | 0.750289 | 3.769429 | 5.209759 | 0.002194 | 0.001940 | 0.002086 |
| context_as.test | RUN | 0.438332 | 2.626608 | 1.776043 | 0.001599 | 0.001350 | 0.001423 |
| executor.test | RUN | 0.113298 | 0.245853 | 0.327441 | 0.001294 | 0.001343 | 0.001332 |
| inline_exception_handling.test | RUN | 1.495700 | 8.121037 | 11.709563 | 0.003482 | 0.002340 | 0.002394 |
| invocable_archetype.test | RUN | 0.105152 | 0.249196 | 0.293356 | 0.001304 | 0.001341 | 0.001296 |
| mapping.test | RUN | 1.429529 | 8.400950 | 11.077534 | 0.002542 | 0.002392 | 0.002464 |
| outstanding_work.test | RUN | 0.678327 | 3.679718 | 4.901163 | 0.002594 | 0.002244 | 0.002096 |
| prefer_only.test | RUN | 0.221698 | 1.452036 | 1.105995 | 0.001396 | 0.001327 | 0.001222 |
| relationship.test | RUN | 0.570000 | 3.577229 | 5.064320 | 0.001590 | 0.002109 | 0.002048 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.993×, 0.999× | 1.004× |
| clang | 0.986× | 0.990×, 0.981× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001250s | 0.001272s | 0.001310s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001249s | 0.001210s | 0.001224s | byte equality observed |
| any_completion_handler.test | 8 | 0.001055s | 0.001048s | 0.001041s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001049s | 0.001037s | 0.001028s | byte equality observed |
| any_io_executor.test | 9 | 0.001250s | 0.001251s | 0.001246s | byte equality observed |
| any_io_executor_select.test | 8 | 0.001240s | 0.001260s | 0.001213s | byte equality observed |
| append.test | 10 | 0.000998s | 0.000985s | 0.000975s | byte equality observed |
| append_select.test | 10 | 0.000978s | 0.000965s | 0.000957s | byte equality observed |
| as_tuple.test | 10 | 0.001073s | 0.001035s | 0.001043s | byte equality observed |
| as_tuple_select.test | 10 | 0.000994s | 0.000994s | 0.000981s | byte equality observed |
| bind_allocator.test | 1 | 0.001530s | 0.001535s | 0.001511s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001220s | 0.001226s | 0.001185s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000922s | 0.000944s | 0.000906s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000817s | 0.000820s | 0.000820s | byte equality observed |
| bind_executor.test | 1 | 0.001563s | 0.001537s | 0.001482s | byte equality observed |
| bind_executor_select.test | 1 | 0.001795s | 0.001854s | 0.001743s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000910s | 0.000922s | 0.000886s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000894s | 0.000867s | 0.000859s | byte equality observed |
| buffer.test | 10 | 0.000865s | 0.000874s | 0.000811s | byte equality observed |
| buffer_select.test | 10 | 0.000860s | 0.000841s | 0.000842s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001047s | 0.001020s | 0.001020s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001027s | 0.001012s | 0.001002s | byte equality observed |
| buffered_stream.test | 10 | 0.001044s | 0.001036s | 0.000997s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001014s | 0.001018s | 0.001005s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001016s | 0.001009s | 0.001024s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001003s | 0.000995s | 0.001007s | byte equality observed |
| buffers_iterator.test | 10 | 0.000826s | 0.000824s | 0.000844s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000804s | 0.000805s | 0.000751s | byte equality observed |
| cancel_after.test | 1 | 0.003603s | 0.003680s | 0.003389s | byte equality observed |
| cancel_after_select.test | 1 | 0.003090s | 0.003155s | 0.002839s | byte equality observed |
| cancel_at.test | 1 | 0.003491s | 0.003957s | 0.003478s | byte equality observed |
| cancel_at_select.test | 1 | 0.003505s | 0.003914s | 0.003320s | byte equality observed |
| co_composed.test | 10 | 0.000857s | 0.000877s | 0.000847s | byte equality observed |
| co_composed_select.test | 10 | 0.000805s | 0.000841s | 0.000769s | byte equality observed |
| compose.test | 1 | 0.001594s | 0.001644s | 0.001591s | byte equality observed |
| compose_select.test | 1 | 0.001295s | 0.001285s | 0.001236s | byte equality observed |
| composed.test | 1 | 0.001902s | 0.001922s | 0.001796s | byte equality observed |
| composed_select.test | 1 | 0.001484s | 0.001446s | 0.001390s | byte equality observed |
| config.test | 10 | 0.000929s | 0.000948s | 0.000891s | byte equality observed |
| config_select.test | 10 | 0.000908s | 0.000914s | 0.000850s | byte equality observed |
| connect_pipe.test | 10 | 0.000908s | 0.000917s | 0.000913s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000892s | 0.000885s | 0.000878s | byte equality observed |
| consign.test | 10 | 0.000885s | 0.000885s | 0.000865s | byte equality observed |
| consign_select.test | 10 | 0.000844s | 0.000875s | 0.000804s | byte equality observed |
| deadline_timer.test | 1 | 0.002354s | 0.002446s | 0.002303s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002130s | 0.002049s | 0.001968s | byte equality observed |
| deferred.test | 10 | 0.000852s | 0.000833s | 0.000832s | byte equality observed |
| deferred_select.test | 10 | 0.000772s | 0.000755s | 0.000763s | byte equality observed |
| disposition.test | 10 | 0.000802s | 0.000793s | 0.000781s | byte equality observed |
| disposition_select.test | 10 | 0.000796s | 0.000796s | 0.000803s | byte equality observed |
| error.test | 10 | 0.000782s | 0.000784s | 0.000770s | byte equality observed |
| error_select.test | 10 | 0.000774s | 0.000769s | 0.000776s | byte equality observed |
| inline_executor.test | 10 | 0.000775s | 0.000782s | 0.000781s | byte equality observed |
| inline_executor_select.test | 10 | 0.000786s | 0.000782s | 0.000772s | byte equality observed |
| inline_or_executor.test | 10 | 0.000797s | 0.000800s | 0.000768s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000796s | 0.000795s | 0.000772s | byte equality observed |
| io_context.test | 1 | 0.001912s | 0.001935s | 0.001808s | byte equality observed |
| io_context_select.test | 1 | 0.002222s | 0.002186s | 0.002162s | byte equality observed |
| io_context_strand.test | 1 | 0.002192s | 0.002205s | 0.002180s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001858s | 0.001871s | 0.001833s | byte equality observed |
| ip_host_name.test | 10 | 0.000867s | 0.000859s | 0.000852s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000782s | 0.000782s | 0.000748s | byte equality observed |
| ip_icmp.test | 10 | 0.000798s | 0.000798s | 0.000748s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000796s | 0.000793s | 0.000774s | byte equality observed |
| ip_multicast.test | 10 | 0.000864s | 0.000860s | 0.000847s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000843s | 0.000846s | 0.000830s | byte equality observed |
| ip_tcp.test | 10 | 0.001063s | 0.001044s | 0.001039s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001035s | 0.001022s | 0.001001s | byte equality observed |
| ip_udp.test | 10 | 0.000881s | 0.000869s | 0.000851s | byte equality observed |
| ip_udp_select.test | 10 | 0.000871s | 0.000870s | 0.000839s | byte equality observed |
| ip_unicast.test | 10 | 0.000832s | 0.000828s | 0.000809s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000824s | 0.000811s | 0.000796s | byte equality observed |
| ip_v6_only.test | 10 | 0.000829s | 0.000824s | 0.000804s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000823s | 0.000811s | 0.000796s | byte equality observed |
| is_read_buffered.test | 10 | 0.000774s | 0.000750s | 0.000747s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000771s | 0.000739s | 0.000749s | byte equality observed |
| is_write_buffered.test | 10 | 0.000770s | 0.000765s | 0.000745s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000776s | 0.000758s | 0.000749s | byte equality observed |
| prepend.test | 10 | 0.000826s | 0.000840s | 0.000812s | byte equality observed |
| prepend_select.test | 10 | 0.000811s | 0.000841s | 0.000790s | byte equality observed |
| read.test | 10 | 0.001126s | 0.001166s | 0.001071s | byte equality observed |
| read_at.test | 10 | 0.001329s | 0.001461s | 0.001322s | byte equality observed |
| read_at_select.test | 10 | 0.001339s | 0.001520s | 0.001308s | byte equality observed |
| read_select.test | 10 | 0.001119s | 0.001164s | 0.001070s | byte equality observed |
| read_until.test | 10 | 0.000961s | 0.000978s | 0.000896s | byte equality observed |
| read_until_select.test | 10 | 0.001003s | 0.000994s | 0.000884s | byte equality observed |
| recycling_allocator.test | 10 | 0.000827s | 0.000830s | 0.000752s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000833s | 0.000824s | 0.000779s | byte equality observed |
| signal_set.test | 10 | 0.000853s | 0.000843s | 0.000813s | byte equality observed |
| signal_set_select.test | 10 | 0.000843s | 0.000850s | 0.000808s | byte equality observed |
| socket_base.test | 10 | 0.000907s | 0.000916s | 0.000922s | byte equality observed |
| socket_base_select.test | 10 | 0.000895s | 0.000946s | 0.000889s | byte equality observed |
| spawn.test | 10 | 0.001013s | 0.001015s | 0.000988s | byte equality observed |
| spawn_select.test | 10 | 0.001001s | 0.001011s | 0.000992s | byte equality observed |
| static_thread_pool.test | 10 | 0.000865s | 0.000807s | 0.000837s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000803s | 0.000812s | 0.000783s | byte equality observed |
| strand.test | 1 | 0.001809s | 0.001845s | 0.001816s | byte equality observed |
| strand_select.test | 1 | 0.001495s | 0.001574s | 0.001502s | byte equality observed |
| streambuf.test | 10 | 0.000911s | 0.000875s | 0.000891s | byte equality observed |
| streambuf_select.test | 10 | 0.000846s | 0.000870s | 0.000848s | byte equality observed |
| thread_pool.test | 10 | 0.001584s | 0.001567s | 0.001559s | byte equality observed |
| thread_pool_select.test | 10 | 0.001576s | 0.001601s | 0.001557s | byte equality observed |
| write.test | 10 | 0.001242s | 0.001200s | 0.001200s | byte equality observed |
| write_at.test | 10 | 0.001330s | 0.001363s | 0.001285s | byte equality observed |
| write_at_select.test | 10 | 0.001317s | 0.001354s | 0.001300s | byte equality observed |
| write_select.test | 10 | 0.001208s | 0.001180s | 0.001158s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
