## SPDX-License-Identifier: GPL-2.0-only

romstage-y += romstage.c
romstage-y += spd_util.c

ramstage-y += gpio.c

SPD_SOURCES =  samsung_2GiB_dimm_K4E8E304EE-EGCF
SPD_SOURCES += samsung_2GiB_dimm_K4E8E324EB-EGCF
SPD_SOURCES += empty
SPD_SOURCES += hynix_2GiB_dimm_H9CCNNN8GTMLAR-NUD
SPD_SOURCES += micron_2GiB_dimm_MT52L256M32D1PF
SPD_SOURCES += hynix_dimm_H9CCNNN8GTALAR-NUD
SPD_SOURCES += nanya_dimm_NT6CL256T32CM-H1
