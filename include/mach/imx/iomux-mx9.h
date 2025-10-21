/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __MACH_IOMUX_IMX9_H__
#define __MACH_IOMUX_IMX9_H__

#include <mach/imx/iomux-v3.h>

static inline void imx9_setup_pad(void __iomem *iomux, iomux_v3_cfg_t pad)
{
	unsigned int flags = 0;
	uint32_t mode = IOMUX_MODE(pad);

	iomux_v3_setup_pad(iomux, flags,
			   IOMUX_CTRL_OFS(pad),
			   IOMUX_PAD_CTRL_OFS(pad),
			   IOMUX_SEL_INPUT_OFS(pad),
			   mode,
			   IOMUX_PAD_CTRL(pad),
			   IOMUX_SEL_INPUT(pad));
}

#endif /* __MACH_IOMUX_IMX9_H__ */