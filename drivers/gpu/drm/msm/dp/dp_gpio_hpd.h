/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 *
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

#ifndef _DP_GPIO_HPD_H_
#define _DP_GPIO_HPD_H_

#include "dp_hpd.h"

/**
 * dp_gpio_hpd_get() - configure and get the DisplayPlot HPD module data
 *
 * @dev: device instance of the caller
 * return: pointer to allocated gpio hpd module data
 *
 * This function sets up the gpio hpd module
 */
struct dp_hpd *dp_gpio_hpd_get(struct device *dev, struct dp_parser *parser,
	struct dp_hpd_cb *cb);

/**
 * dp_gpio_hpd_put()
 *
 * Cleans up dp_hpd instance
 *
 * @hpd: instance of gpio_hpd
 */
void dp_gpio_hpd_put(struct dp_hpd *hpd);

#endif /* _DP_GPIO_HPD_H_ */
