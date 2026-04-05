#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xd272d446, "schedule" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x9d212913, "iwe_stream_add_point" },
	{ 0xf952c322, "napi_disable" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xc3f320b4, "usb_free_coherent" },
	{ 0x2f2f45a5, "register_netdev" },
	{ 0xa53f4e29, "memmove" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x18d43ede, "skb_put" },
	{ 0x304d573a, "napi_schedule_prep" },
	{ 0xa503e586, "cfg80211_del_sta_sinfo" },
	{ 0x6530c929, "dev_get_by_name" },
	{ 0xbd03ed67, "USER_PTR_MAX" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x7a400934, "proc_get_parent_data" },
	{ 0xb2fa43dd, "kernel_sigaction" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0xc13edbcb, "find_vpid" },
	{ 0x296b9459, "strchr" },
	{ 0xa5d4e4fb, "dev_addr_mod" },
	{ 0x7d240728, "init_net" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xcdec1689, "tasklet_init" },
	{ 0x2435d559, "strncmp" },
	{ 0xf83a5f37, "device_wakeup_enable" },
	{ 0x65026e43, "wait_for_completion" },
	{ 0x0f4c28ea, "netif_carrier_off" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x34d5450c, "seq_release" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x0c8e9a2d, "usb_kill_urb" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x30f08ac4, "ieee80211_radiotap_iterator_init" },
	{ 0x5452ea08, "proc_create_data" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x7a70e1b6, "skb_copy_bits" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x0040afbe, "param_ops_int" },
	{ 0x37b96a73, "napi_complete_done" },
	{ 0x058c185a, "jiffies" },
	{ 0x55912ab2, "cfg80211_ibss_joined" },
	{ 0x0fc95a62, "__cfg80211_get_bss" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0xd272d446, "yield" },
	{ 0x60c9c0b3, "__init_swait_queue_head" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x20fe0e51, "csum_partial" },
	{ 0x447bfa1f, "proc_mkdir_data" },
	{ 0x5128c20d, "strpbrk" },
	{ 0xfd285498, "unregister_inetaddr_notifier" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x67628f51, "msleep" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x7851be11, "rtnl_is_locked" },
	{ 0x0e125918, "cfg80211_ch_switch_notify" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x27fa2c76, "flush_signals" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0x7db71bea, "free_netdev" },
	{ 0x253f0c1d, "seq_lseek" },
	{ 0xfd285498, "register_netdevice_notifier" },
	{ 0xa7c6c8f7, "device_set_wakeup_capable" },
	{ 0x2da7dc62, "ieee80211_get_channel_khz" },
	{ 0x4b5cc7c5, "kernel_read" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x1cae9a42, "filp_open" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xe931a49e, "single_open" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0xa96d32ba, "__udelay" },
	{ 0xb61837ba, "seq_printf" },
	{ 0x0571dc46, "kthread_stop" },
	{ 0x2f2f45a5, "register_netdevice" },
	{ 0x2f8a88bc, "cfg80211_ready_on_channel" },
	{ 0x2795c1e6, "cfg80211_inform_bss_frame_data" },
	{ 0x649ce331, "iwe_stream_add_event" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xa5c7582d, "strsep" },
	{ 0xe7a8948c, "wiphy_apply_custom_regulatory" },
	{ 0x9c0551c6, "__tasklet_hi_schedule" },
	{ 0x27683a56, "memset" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x0e0926b0, "kthread_complete_and_exit" },
	{ 0xadb55ac9, "usb_register_driver" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xfd285498, "unregister_inet6addr_notifier" },
	{ 0x1f6beaf4, "cfg80211_scan_done" },
	{ 0xa503e586, "cfg80211_new_sta" },
	{ 0xc01aafd2, "get_random_u32" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x4073d0de, "up" },
	{ 0x58b11380, "wiphy_new_nm" },
	{ 0xf76bbc40, "usb_autopm_get_interface" },
	{ 0x91d7f315, "netif_napi_add_weight_locked" },
	{ 0x94c9fb62, "csum_ipv6_magic" },
	{ 0x9d52f437, "filp_close" },
	{ 0xf703a2fb, "kill_pid" },
	{ 0xd1dbf68d, "cfg80211_roamed" },
	{ 0x357aaab3, "mutex_lock_interruptible" },
	{ 0xa97ffed0, "netif_rx" },
	{ 0x7db71bea, "netif_tx_stop_all_queues" },
	{ 0xbd243a00, "cfg80211_mgmt_tx_status_ext" },
	{ 0xa97ffed0, "netif_receive_skb" },
	{ 0x8c18c8e2, "usb_submit_urb" },
	{ 0x5629a063, "strncasecmp" },
	{ 0xa8f96c6e, "usb_deregister" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xf48e39a9, "wiphy_unregister" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xe59bea4d, "eth_type_trans" },
	{ 0x66913979, "usb_reset_device" },
	{ 0x19268c9c, "cfg80211_remain_on_channel_expired" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0xe199f25f, "jiffies_to_msecs" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x630dad60, "wake_up_process" },
	{ 0x65026e43, "complete" },
	{ 0x6c00f410, "usb_control_msg" },
	{ 0x36353f73, "ieee80211_radiotap_iterator_next" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x18d43ede, "skb_pull" },
	{ 0xd272d446, "__fentry__" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x7f79e79a, "kthread_create_on_node" },
	{ 0x34d5450c, "single_release" },
	{ 0xe35f576f, "unregister_netdevice_queue" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x546c19d9, "validate_usercopy_range" },
	{ 0xb2550687, "netif_tx_wake_queue" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xe59c54dc, "cfg80211_put_bss" },
	{ 0xfd285498, "unregister_netdevice_notifier" },
	{ 0xe2bcbfef, "cfg80211_rx_mgmt_ext" },
	{ 0x0040afbe, "param_array_ops" },
	{ 0xf952c322, "__napi_schedule" },
	{ 0xe59c54dc, "cfg80211_unlink_bss" },
	{ 0xc064623f, "__kmalloc_cache_noprof" },
	{ 0xfbc77297, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0x1164329a, "seq_open" },
	{ 0x40a621c5, "snprintf" },
	{ 0x0c8e9a2d, "usb_free_urb" },
	{ 0x3fdc3369, "usb_alloc_urb" },
	{ 0xd272d446, "synchronize_net" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2719b9fa, "const_current_task" },
	{ 0x5a8347fe, "__tracepoint_sched_set_state_tp" },
	{ 0x0040afbe, "param_ops_charp" },
	{ 0xb6c69524, "cfg80211_disconnected" },
	{ 0xf952c322, "napi_enable" },
	{ 0xfaabfe5e, "kmalloc_caches" },
	{ 0xc0f19660, "remove_proc_entry" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0xf1de9e85, "vfree" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x296c97a2, "cfg80211_cqm_rssi_notify" },
	{ 0x236cf4b7, "skb_queue_tail" },
	{ 0xaf579236, "alloc_etherdev_mqs" },
	{ 0xe9d64c0b, "cfg80211_michael_mic_failure" },
	{ 0xc609ff70, "strncpy" },
	{ 0x402db74e, "memcmp" },
	{ 0xfd285498, "register_inet6addr_notifier" },
	{ 0x6ab80e94, "skb_copy" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0x234a47ba, "cfg80211_external_auth_request" },
	{ 0x8db9b6ac, "__usecs_to_jiffies" },
	{ 0x4e24cbd9, "cfg80211_connect_done" },
	{ 0x12694399, "down_interruptible" },
	{ 0x9b1de7cb, "_dev_info" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0x94708fba, "__netdev_alloc_skb" },
	{ 0x934bd4a1, "dev_kfree_skb_any_reason" },
	{ 0x5a844b26, "__x86_indirect_thunk_rbx" },
	{ 0xc65779cf, "__netif_napi_del_locked" },
	{ 0xfb3bad2b, "skb_clone" },
	{ 0x0a589842, "simple_strtoul" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0x37688b23, "usb_alloc_coherent" },
	{ 0xaa9a3b35, "seq_read" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x0f4c28ea, "netif_carrier_on" },
	{ 0x0040afbe, "param_ops_uint" },
	{ 0x37602407, "usb_get_dev" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xdbb4ec87, "kernel_write" },
	{ 0xe8213e80, "_printk" },
	{ 0xb9064440, "wiphy_register" },
	{ 0xf48e39a9, "wiphy_free" },
	{ 0x57860fb4, "wait_for_completion_timeout" },
	{ 0xfd285498, "register_inetaddr_notifier" },
	{ 0x173ec8da, "sscanf" },
	{ 0x43a349ca, "strlen" },
	{ 0xa31fd687, "usb_put_dev" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0xb0e3a978, "ieee80211_channel_to_freq_khz" },
	{ 0xba1bf595, "gro_receive_skb" },
	{ 0x5c0e69f5, "skb_trim" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x4124c2d0, "__pskb_pull_tail" },
	{ 0x18d43ede, "skb_push" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0x7e0fe880, "__pskb_copy_fclone" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x74f8d140, "skb_dequeue" },
	{ 0x73344baf, "cfg80211_ch_switch_started_notify" },
	{ 0x7db71bea, "unregister_netdev" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x888b8f57, "strcmp" },
	{ 0xa666ac19, "dev_alloc_name" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf46d5bf3,
	0xd272d446,
	0xe1e1f979,
	0x9d212913,
	0xf952c322,
	0x5a844b26,
	0xc3f320b4,
	0x2f2f45a5,
	0xa53f4e29,
	0xb2e62cba,
	0x18d43ede,
	0x304d573a,
	0xa503e586,
	0x6530c929,
	0xbd03ed67,
	0x5a844b26,
	0x7a400934,
	0xb2fa43dd,
	0x7295b8c3,
	0xc13edbcb,
	0x296b9459,
	0xa5d4e4fb,
	0x7d240728,
	0x2d88a3ab,
	0xcdec1689,
	0x2435d559,
	0xf83a5f37,
	0x65026e43,
	0x0f4c28ea,
	0x82fd7238,
	0x34d5450c,
	0x7ec472ba,
	0x9479a1e8,
	0x0c8e9a2d,
	0x2352b148,
	0xc1e6c71e,
	0x30f08ac4,
	0x5452ea08,
	0xf46d5bf3,
	0x7a70e1b6,
	0xd710adbf,
	0x0040afbe,
	0x37b96a73,
	0x058c185a,
	0x55912ab2,
	0x0fc95a62,
	0xd272d446,
	0x5a844b26,
	0xd272d446,
	0x60c9c0b3,
	0xde338d9a,
	0x20fe0e51,
	0x447bfa1f,
	0x5128c20d,
	0xfd285498,
	0x5a844b26,
	0x67628f51,
	0xa53f4e29,
	0x7851be11,
	0x0e125918,
	0x02f9bbf0,
	0x27fa2c76,
	0x5a844b26,
	0x092a35a2,
	0x5a844b26,
	0x7db71bea,
	0x253f0c1d,
	0xfd285498,
	0xa7c6c8f7,
	0x2da7dc62,
	0x4b5cc7c5,
	0x12ca6142,
	0x1cae9a42,
	0xd272d446,
	0xe931a49e,
	0xd272d446,
	0xa96d32ba,
	0xb61837ba,
	0x0571dc46,
	0x2f2f45a5,
	0x2f8a88bc,
	0x2795c1e6,
	0x649ce331,
	0xe54e0a6b,
	0xa5c7582d,
	0xe7a8948c,
	0x9c0551c6,
	0x27683a56,
	0xa61fd7aa,
	0x0e0926b0,
	0xadb55ac9,
	0xcb8b6ec6,
	0xfd285498,
	0x1f6beaf4,
	0xa503e586,
	0xc01aafd2,
	0x5a844b26,
	0x4073d0de,
	0x58b11380,
	0xf76bbc40,
	0x91d7f315,
	0x94c9fb62,
	0x9d52f437,
	0xf703a2fb,
	0xd1dbf68d,
	0x357aaab3,
	0xa97ffed0,
	0x7db71bea,
	0xbd243a00,
	0xa97ffed0,
	0x8c18c8e2,
	0x5629a063,
	0xa8f96c6e,
	0x092a35a2,
	0xf48e39a9,
	0xbd03ed67,
	0xe59bea4d,
	0x66913979,
	0x19268c9c,
	0x5a844b26,
	0xe199f25f,
	0x49733ad6,
	0x630dad60,
	0x65026e43,
	0x6c00f410,
	0x36353f73,
	0xde338d9a,
	0x18d43ede,
	0xd272d446,
	0x534ed5f3,
	0x7f79e79a,
	0x34d5450c,
	0xe35f576f,
	0xe4de56b4,
	0xd7a59a65,
	0x90a48d82,
	0x546c19d9,
	0xb2550687,
	0x81a1a811,
	0xe59c54dc,
	0xfd285498,
	0xe2bcbfef,
	0x0040afbe,
	0xf952c322,
	0xe59c54dc,
	0xc064623f,
	0xfbc77297,
	0x1164329a,
	0x40a621c5,
	0x0c8e9a2d,
	0x3fdc3369,
	0xd272d446,
	0xd272d446,
	0x2719b9fa,
	0x5a8347fe,
	0x0040afbe,
	0xb6c69524,
	0xf952c322,
	0xfaabfe5e,
	0xc0f19660,
	0x5a844b26,
	0xf1de9e85,
	0x5e505530,
	0x296c97a2,
	0x236cf4b7,
	0xaf579236,
	0xe9d64c0b,
	0xc609ff70,
	0x402db74e,
	0xfd285498,
	0x6ab80e94,
	0x5a844b26,
	0x234a47ba,
	0x8db9b6ac,
	0x4e24cbd9,
	0x12694399,
	0x9b1de7cb,
	0x9c0551c6,
	0x94708fba,
	0x934bd4a1,
	0x5a844b26,
	0xc65779cf,
	0xfb3bad2b,
	0x0a589842,
	0x9c0551c6,
	0x37688b23,
	0xaa9a3b35,
	0xde338d9a,
	0x0f4c28ea,
	0x0040afbe,
	0x37602407,
	0xdd6830c7,
	0xdbb4ec87,
	0xe8213e80,
	0xb9064440,
	0xf48e39a9,
	0x57860fb4,
	0xfd285498,
	0x173ec8da,
	0x43a349ca,
	0xa31fd687,
	0xde338d9a,
	0xb0e3a978,
	0xba1bf595,
	0x5c0e69f5,
	0xcbae5412,
	0x4124c2d0,
	0x18d43ede,
	0x6ac784f4,
	0x7e0fe880,
	0xbd03ed67,
	0x0feb1e94,
	0x74f8d140,
	0x73344baf,
	0x7db71bea,
	0xaef1f20d,
	0x32feeafc,
	0x888b8f57,
	0xa666ac19,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"schedule\0"
	"_raw_spin_lock_irqsave\0"
	"iwe_stream_add_point\0"
	"napi_disable\0"
	"__x86_indirect_thunk_r8\0"
	"usb_free_coherent\0"
	"register_netdev\0"
	"memmove\0"
	"__trace_set_current_state\0"
	"skb_put\0"
	"napi_schedule_prep\0"
	"cfg80211_del_sta_sinfo\0"
	"dev_get_by_name\0"
	"USER_PTR_MAX\0"
	"__x86_indirect_thunk_rdx\0"
	"proc_get_parent_data\0"
	"kernel_sigaction\0"
	"ieee80211_freq_khz_to_channel\0"
	"find_vpid\0"
	"strchr\0"
	"dev_addr_mod\0"
	"init_net\0"
	"cancel_work_sync\0"
	"tasklet_init\0"
	"strncmp\0"
	"device_wakeup_enable\0"
	"wait_for_completion\0"
	"netif_carrier_off\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"seq_release\0"
	"__preempt_count\0"
	"strnlen\0"
	"usb_kill_urb\0"
	"timer_delete_sync\0"
	"__mutex_init\0"
	"ieee80211_radiotap_iterator_init\0"
	"proc_create_data\0"
	"mutex_unlock\0"
	"skb_copy_bits\0"
	"__kmalloc_noprof\0"
	"param_ops_int\0"
	"napi_complete_done\0"
	"jiffies\0"
	"cfg80211_ibss_joined\0"
	"__cfg80211_get_bss\0"
	"__rcu_read_lock\0"
	"__x86_indirect_thunk_r14\0"
	"yield\0"
	"__init_swait_queue_head\0"
	"_raw_spin_unlock\0"
	"csum_partial\0"
	"proc_mkdir_data\0"
	"strpbrk\0"
	"unregister_inetaddr_notifier\0"
	"__x86_indirect_thunk_rax\0"
	"msleep\0"
	"memcpy\0"
	"rtnl_is_locked\0"
	"cfg80211_ch_switch_notify\0"
	"timer_init_key\0"
	"flush_signals\0"
	"__x86_indirect_thunk_r12\0"
	"_copy_to_user\0"
	"__x86_indirect_thunk_r10\0"
	"free_netdev\0"
	"seq_lseek\0"
	"register_netdevice_notifier\0"
	"device_set_wakeup_capable\0"
	"ieee80211_get_channel_khz\0"
	"kernel_read\0"
	"ktime_get_with_offset\0"
	"filp_open\0"
	"__stack_chk_fail\0"
	"single_open\0"
	"__rcu_read_unlock\0"
	"__udelay\0"
	"seq_printf\0"
	"kthread_stop\0"
	"register_netdevice\0"
	"cfg80211_ready_on_channel\0"
	"cfg80211_inform_bss_frame_data\0"
	"iwe_stream_add_event\0"
	"__fortify_panic\0"
	"strsep\0"
	"wiphy_apply_custom_regulatory\0"
	"__tasklet_hi_schedule\0"
	"memset\0"
	"__check_object_size\0"
	"kthread_complete_and_exit\0"
	"usb_register_driver\0"
	"kfree\0"
	"unregister_inet6addr_notifier\0"
	"cfg80211_scan_done\0"
	"cfg80211_new_sta\0"
	"get_random_u32\0"
	"__x86_indirect_thunk_rcx\0"
	"up\0"
	"wiphy_new_nm\0"
	"usb_autopm_get_interface\0"
	"netif_napi_add_weight_locked\0"
	"csum_ipv6_magic\0"
	"filp_close\0"
	"kill_pid\0"
	"cfg80211_roamed\0"
	"mutex_lock_interruptible\0"
	"netif_rx\0"
	"netif_tx_stop_all_queues\0"
	"cfg80211_mgmt_tx_status_ext\0"
	"netif_receive_skb\0"
	"usb_submit_urb\0"
	"strncasecmp\0"
	"usb_deregister\0"
	"_copy_from_user\0"
	"wiphy_unregister\0"
	"__ref_stack_chk_guard\0"
	"eth_type_trans\0"
	"usb_reset_device\0"
	"cfg80211_remain_on_channel_expired\0"
	"__x86_indirect_thunk_r9\0"
	"jiffies_to_msecs\0"
	"queue_work_on\0"
	"wake_up_process\0"
	"complete\0"
	"usb_control_msg\0"
	"ieee80211_radiotap_iterator_next\0"
	"_raw_spin_lock_bh\0"
	"skb_pull\0"
	"__fentry__\0"
	"__msecs_to_jiffies\0"
	"kthread_create_on_node\0"
	"single_release\0"
	"unregister_netdevice_queue\0"
	"__ubsan_handle_load_invalid_value\0"
	"vmalloc_noprof\0"
	"__ubsan_handle_out_of_bounds\0"
	"validate_usercopy_range\0"
	"netif_tx_wake_queue\0"
	"_raw_spin_unlock_irqrestore\0"
	"cfg80211_put_bss\0"
	"unregister_netdevice_notifier\0"
	"cfg80211_rx_mgmt_ext\0"
	"param_array_ops\0"
	"__napi_schedule\0"
	"cfg80211_unlink_bss\0"
	"__kmalloc_cache_noprof\0"
	"cfg80211_sinfo_alloc_tid_stats\0"
	"seq_open\0"
	"snprintf\0"
	"usb_free_urb\0"
	"usb_alloc_urb\0"
	"synchronize_net\0"
	"__x86_return_thunk\0"
	"const_current_task\0"
	"__tracepoint_sched_set_state_tp\0"
	"param_ops_charp\0"
	"cfg80211_disconnected\0"
	"napi_enable\0"
	"kmalloc_caches\0"
	"remove_proc_entry\0"
	"__x86_indirect_thunk_r15\0"
	"vfree\0"
	"kthread_should_stop\0"
	"cfg80211_cqm_rssi_notify\0"
	"skb_queue_tail\0"
	"alloc_etherdev_mqs\0"
	"cfg80211_michael_mic_failure\0"
	"strncpy\0"
	"memcmp\0"
	"register_inet6addr_notifier\0"
	"skb_copy\0"
	"__x86_indirect_thunk_r13\0"
	"cfg80211_external_auth_request\0"
	"__usecs_to_jiffies\0"
	"cfg80211_connect_done\0"
	"down_interruptible\0"
	"_dev_info\0"
	"tasklet_kill\0"
	"__netdev_alloc_skb\0"
	"dev_kfree_skb_any_reason\0"
	"__x86_indirect_thunk_rbx\0"
	"__netif_napi_del_locked\0"
	"skb_clone\0"
	"simple_strtoul\0"
	"__tasklet_schedule\0"
	"usb_alloc_coherent\0"
	"seq_read\0"
	"_raw_spin_lock\0"
	"netif_carrier_on\0"
	"param_ops_uint\0"
	"usb_get_dev\0"
	"sprintf\0"
	"kernel_write\0"
	"_printk\0"
	"wiphy_register\0"
	"wiphy_free\0"
	"wait_for_completion_timeout\0"
	"register_inetaddr_notifier\0"
	"sscanf\0"
	"strlen\0"
	"usb_put_dev\0"
	"_raw_spin_unlock_bh\0"
	"ieee80211_channel_to_freq_khz\0"
	"gro_receive_skb\0"
	"skb_trim\0"
	"__const_udelay\0"
	"__pskb_pull_tail\0"
	"skb_push\0"
	"schedule_timeout\0"
	"__pskb_copy_fclone\0"
	"random_kmalloc_seed\0"
	"usleep_range_state\0"
	"skb_dequeue\0"
	"cfg80211_ch_switch_started_notify\0"
	"unregister_netdev\0"
	"system_wq\0"
	"mod_timer\0"
	"strcmp\0"
	"dev_alloc_name\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0823d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p029Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p011Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p011Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p6249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9054d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA833d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "65CFA831FC9A542CBA8DDB1");
