// SPDX-License-Identifier: GPL-2.0

#include <common.h>
#include <deep-probe.h>
#include <mach/imx/bbu.h>

static int frdm_imx93_probe(struct device *dev)
{
	imx9_bbu_internal_mmcboot_register_handler("eMMC", "/dev/mmc0", BBU_HANDLER_FLAG_DEFAULT);
	return 0;
}

static const struct of_device_id frdm_imx93_of_match[] = {
        {
                .compatible = "fsl,imx93-11x11-frdm",
        },
        { /* sentinel */ },
};

static struct driver frdm_imx93_board_driver = {
	.name = "board-frdm-imx93",
	.probe = frdm_imx93_probe,
	.of_compatible = frdm_imx93_of_match,
};
coredevice_platform_driver(frdm_imx93_board_driver);

BAREBOX_DEEP_PROBE_ENABLE(frdm_imx93_of_match);
