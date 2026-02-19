# SPDX-License-Identifier: GPL-2.0

# just to build a built-in.o. Otherwise compilation fails when no devicetree is
# created.
obj- += dummy.o

pbl-$(CONFIG_BOARD_ERIZO_GENERIC) += erizo-generic.dtb.o
pbl-$(CONFIG_BOARD_HIFIVE) += hifive-unmatched-a00.dtb.o \
                              hifive-unleashed-a00.dtb.o
pbl-$(CONFIG_BOARD_BEAGLEV) += jh7100-beaglev-starlight.dtb.o
pbl-$(CONFIG_BOARD_LITEX_LINUX) += litex-linux.dtb.o
pbl-$(CONFIG_BOARD_VISIONFIVE2) += jh7110-starfive-visionfive-2-v1.2a.dtb.o \
                                   jh7110-starfive-visionfive-2-v1.3b.dtb.o

clean-files := *.dtb *.dtb.S .*.dtc .*.pre .*.dts *.dtb.z
clean-files += *.dtbo *.dtbo.S .*.dtso
