// qstrs specific to this port
Q(citrus)
Q(hello)

// shared
Q(self)
Q(init)
Q(exit)
Q(last_result)

// citrus.gfx
Q(gfx)
Q(init_default)
Q(set_3d)
Q(is_3d)
Q(set_screen_format)
Q(get_screen_format)
Q(set_double_buffering)
Q(flush_buffers)
Q(config_screen)
Q(swap_buffers)
Q(swap_buffers_gpu)
Q(SCREEN_TOP)
Q(SCREEN_BOTTOM)
Q(SIDE_LEFT)
Q(SIDE_RIGHT)

// citrus.gsp
Q(gsp)
Q(set_event_callback)
Q(init_event_handler)
Q(exit_event_handler)
Q(wait_for_event)
Q(wait_for_any_event)
Q(wait_for_psc0)
Q(wait_for_psc1)
Q(wait_for_vblank)
Q(wait_for_vblank0)
Q(wait_for_vblank1)
Q(wait_for_ppf)
Q(wait_for_p3d)
Q(wait_for_dma)
Q(submit_gx_command)
Q(gpu_acquire_right)
Q(gpu_release_right)
Q(gpu_import_display_capture_info)
Q(gpu_save_vram_sys_area)
Q(gpu_restore_vram_sys_area)
Q(gpu_set_lcd_force_black)
Q(gpu_set_buffer_swap)
Q(gpu_flush_data_cache)
Q(gpu_invalidate_data_cache)
Q(gpu_write_hw_regs)
Q(gpu_write_hw_regs_with_mask)
Q(gpu_read_hw_regs)
Q(gpu_register_interrupt_relay_queue)
Q(gpu_unregister_interrupt_relay_queue)
Q(gpu_trigger_cmd_req_queue)
Q(GSP_FB_FORMAT_RGBA8)
Q(GSP_FB_FORMAT_BGR8)
Q(GSP_FB_FORMAT_RGB565)
Q(GSP_FB_FORMAT_RGB5_A1)
Q(GSP_FB_FORMAT_RGBA4)
Q(GSP_EVENT_PSC0)
Q(GSP_EVENT_PSC1)
Q(GSP_EVENT_VBLANK0)
Q(GSP_EVENT_VBLANK1)
Q(GSP_EVENT_PPF)
Q(GSP_EVENT_P3D)
Q(GSP_EVENT_DMA)
Q(GSP_EVENT_MAX)

// citrus.gpu
Q(gpu)
Q(TEXUNIT_0)
Q(TEXUNIT_1)
Q(TEXUNIT_2)

// citrus.console
Q(console)
Q(get_default)
Q(debug_init)
Q(clear)
Q(FLAG_COLOR_BOLD)
Q(FLAG_COLOR_FAINT)
Q(FLAG_ITALIC)
Q(FLAG_UNDERLINE)
Q(FLAG_BLINK_SLOW)
Q(FLAG_BLINK_FAST)
Q(FLAG_COLOR_REVERSE)
Q(FLAG_CONCEAL)
Q(FLAG_CROSSED_OUT)
Q(DEBUG_NULL)
Q(DEBUG_3DMOO)
Q(DEBUG_CONSOLE)
Q(COLOR_BLACK)
Q(COLOR_RED)
Q(COLOR_GREEN)
Q(COLOR_YELLOW)
Q(COLOR_BLUE)
Q(COLOR_MAGENTA)
Q(COLOR_CYAN)
Q(COLOR_WHITE)
Q(COLOR_BRIGHT_BLACK)
Q(COLOR_BRIGHT_RED)
Q(COLOR_BRIGHT_GREEN)
Q(COLOR_BRIGHT_YELLOW)
Q(COLOR_BRIGHT_BLUE)
Q(COLOR_BRIGHT_MAGENTA)
Q(COLOR_BRIGHT_CYAN)
Q(COLOR_BRIGHT_WHITE)
Q(COLOR_FAINT_BLACK)
Q(COLOR_FAINT_RED)
Q(COLOR_FAINT_GREEN)
Q(COLOR_FAINT_YELLOW)
Q(COLOR_FAINT_BLUE)
Q(COLOR_FAINT_MAGENTA)
Q(COLOR_FAINT_CYAN)
Q(COLOR_FAINT_WHITE)

// citrus.console.PrintConsole
Q(PrintConsole)
Q(set_color)
Q(set_position)
Q(set_window)
Q(select)
Q(screen)
Q(cursor_x)
Q(cursor_y)
Q(width)
Q(height)
Q(window_x)
Q(window_y)
Q(window_width)
Q(window_height)
Q(flags)
Q(tab_size)
Q(fg)
Q(bg)
Q(x)
Q(y)

// citrus.apt
Q(apt)
Q(open_session)
Q(close_session)
Q(set_status)
Q(get_status)
Q(get_status_power)
Q(set_status_power)
Q(return_to_menu)
Q(wait_status_event)
Q(signal_ready_for_sleep)
Q(get_menu_app_id)
Q(main_loop)
Q(APPID_HOMEMENU)
Q(APPID_CAMERA)
Q(APPID_FRIENDS_LIST)
Q(APPID_GAME_NOTES)
Q(APPID_WEB)
Q(APPID_INSTRUCTION_MANUAL)
Q(APPID_NOTIFICATIONS)
Q(APPID_MIIVERSE)
Q(APPID_MIIVERSE_POSTING)
Q(APPID_AMIIBO_SETTINGS)
Q(APPID_APPLICATION)
Q(APPID_ESHOP)
Q(APPID_SOFTWARE_KEYBOARD)
Q(APPID_APPLETED)
Q(APPID_PNOTE_AP)
Q(APPID_SNOTE_AP)
Q(APPID_ERROR)
Q(APPID_MINT)
Q(APPID_EXTRAPAD)
Q(APPID_MEMOLIB)
Q(STATUS_NOTINITIALIZED)
Q(STATUS_RUNNING)
Q(STATUS_SUSPENDED)
Q(STATUS_EXITING)
Q(STATUS_SUSPENDING)
Q(STATUS_SLEEPMODE)
Q(STATUS_PREPARE_SLEEPMODE)
Q(STATUS_APPLETSTARTED)
Q(STATUS_APPLETCLOSED)
Q(SIGNAL_HOMEBUTTON)
Q(SIGNAL_PREPARESLEEP)
Q(SIGNAL_ENTERSLEEP)
Q(SIGNAL_WAKEUP)
Q(SIGNAL_ENABLE)
Q(SIGNAL_POWERBUTTON)
Q(SIGNAL_UTILITY)
Q(SIGNAL_SLEEPSYSTEM)
Q(SIGNAL_ERROR)
Q(HOOK_ONSUSPEND)
Q(HOOK_ONRESTORE)
Q(HOOK_ONSLEEP)
Q(HOOK_ONWAKEUP)
Q(HOOK_ONEXIT)
Q(HOOK_COUNT)

// citrus.apt.Hook
Q(Hook)
Q(callback)

// citrus.hid
Q(hid)
Q(scan_input)
Q(keys_held)
Q(keys_down)
Q(keys_up)
Q(touch_read)
Q(circle_read)
Q(accel_read)
Q(gyro_read)
Q(wait_for_event)
Q(user_get_handles)
Q(user_enable_accelerometer)
Q(user_disable_accelerometer)
Q(user_enable_gyroscope)
Q(user_disable_gyroscope)
Q(user_get_gyroscope_raw_to_dps_coefficient)
Q(user_get_sound_volume)
Q(KEY_A)
Q(KEY_B)
Q(KEY_START)
Q(KEY_SELECT)
Q(KEY_DPAD_RIGHT)
Q(KEY_DPAD_LEFT)
Q(KEY_DPAD_UP)
Q(KEY_DPAD_DOWN)
Q(KEY_R)
Q(KEY_L)
Q(KEY_X)
Q(KEY_Y)
Q(KEY_ZL)
Q(KEY_ZR)
Q(KEY_TOUCH)
Q(KEY_CSTICK_RIGHT)
Q(KEY_CSTICK_LEFT)
Q(KEY_CSTICK_UP)
Q(KEY_CSTICK_DOWN)
Q(KEY_CPAD_RIGHT)
Q(KEY_CPAD_LEFT)
Q(KEY_CPAD_UP)
Q(KEY_CPAD_DOWN)
Q(KEY_UP)
Q(KEY_DOWN)
Q(KEY_LEFT)
Q(KEY_RIGHT)
Q(EVENT_PAD0)
Q(EVENT_PAD1)
Q(EVENT_ACCEL)
Q(EVENT_GYRO)
Q(EVENT_DEBUG_PAD)
Q(EVENT_MAX)

// citrus.soc
Q(soc)
Q(get_host_id)

// citrus.romfs
Q(romfs)

// citrus.os
Q(os)
Q(get_firm_version)
Q(get_kernel_version)
Q(get_time)
Q(get_wifi_strength)
Q(get_3d_slider_state)
Q(set_speedup_enable)
Q(get_system_version_data)
Q(get_system_version_data_string)

// citrus.httpc
Q(httpc)
Q(METHOD_GET)
Q(METHOD_POST)
Q(METHOD_HEAD)
Q(METHOD_PUT)
Q(METHOD_DELETE)
Q(STATUS_IN_PROGRESS)
Q(STATUS_DOWNLOAD_READY)

// citrus.httpc.Request
Q(Request)
Q(url)
Q(method)
Q(use_proxy)
Q(close)
Q(add_header)
Q(add_post_string)
Q(add_post_bytes)
Q(begin_request)
Q(receive_data)
Q(get_request_state)
Q(get_download_size_state)
Q(get_response_status_code)
Q(get_response_header)
Q(download_data)
Q(request_state)
Q(response_status_code)
Q(bytes_downloaded)
Q(download_size)

// citrus.socket
Q(accept)
Q(bind)
Q(connect)
Q(fileno)
Q(makefile)
Q(readall)
Q(readinto)
Q(readline)
Q(listen)
Q(recv)
Q(recvfrom)
Q(sendto)
Q(setblocking)
Q(setsockopt)
Q(sharedmem_size)
Q(socket)
Q(usocket)
Q(getaddrinfo)
Q(gethostbyname)
Q(htons)
Q(inet_ntop)
Q(inet_pton)
Q(sockaddr)
Q(AF_INET)
Q(AF_INET6)
Q(AF_UNIX)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(SOCK_STREAM)
Q(MSG_DONTROUTE)
Q(MSG_DONTWAIT)
Q(SO_BROADCAST)
Q(SO_ERROR)
Q(SO_KEEPALIVE)
Q(SO_LINGER)
Q(SO_REUSEADDR)
Q(SOL_DONTWAIT)
Q(SOL_SOCKET)

// citrus.news
Q(news)
Q(add_notification)

// citrus.fs
Q(fs)
Q(MEDIATYPE_NAND)
Q(MEDIATYPE_SD)
Q(MEDIATYPE_GAME_CARD)

// citrus.ns
Q(ns)
Q(launch_title)
Q(reboot_to_title)
Q(terminate_process_tid)

// sf2d
Q(sf2d)
Q(init_advanced)
Q(fini)
Q(set_3d)
Q(start_frame)
Q(end_frame)
Q(swapbuffers)
Q(set_vblank_wait)
Q(get_fps)
Q(set_clear_color)
Q(draw_line)
Q(draw_rectangle)
Q(draw_rectangle_rotate)
Q(draw_fill_circle)
Q(rgba8)
Q(rgba8_get_r)
Q(rgba8_get_g)
Q(rgba8_get_b)
Q(rgba8_get_a)
Q(PLACE_RAM)
Q(PLACE_VRAM)
Q(PLACE_TEMP)
Q(TEXFMT_RGBA8)
Q(TEXFMT_RGB8)
Q(TEXFMT_RGB5A1)
Q(TEXFMT_RGB565)
Q(TEXFMT_RGBA4)
Q(TEXFMT_IA8)
Q(TEXFMT_I8)
Q(TEXFMT_A8)
Q(TEXFMT_IA4)
Q(TEXFMT_I4)
Q(TEXFMT_A4)
Q(TEXFMT_ETC1)
Q(TEXFMT_ETC1A4)

// sf2d.Texture
Q(Texture)
Q(place)
Q(bind)
Q(bind_color)
Q(bind_parameters)
Q(set_params)
Q(get_params)
Q(draw)