/* Copyright (c) 2018, The Linux Foundation. All rights reserved.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */



#ifndef __AUO_HBM___H
#define __AUO_HBM___H

#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>
#include <linux/delay.h>
#include <linux/io.h>
#include <linux/dma-mapping.h>
#include <linux/slab.h>
#include <linux/iopoll.h>
#include <linux/kthread.h>

struct mdss_dsi_ctrl_pdata;
struct mdss_panel_data;

ssize_t mdss_fb_set_boost_mode(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count);

ssize_t mdss_fb_get_boost_mode(struct device *dev,
		struct device_attribute *attr, char *buf);

extern int mdss_auo_dsi_parse_hbm_dt(struct device_node *np,
		struct mdss_dsi_ctrl_pdata *ctrl_pdata);

extern int mdss_auo_dsi_set_boost_mode(struct mdss_dsi_ctrl_pdata*, bool);

extern int mdss_auo_dsi_read_id_code(struct mdss_dsi_ctrl_pdata *ctrl);
#endif /*__AUO_HBM___H */

