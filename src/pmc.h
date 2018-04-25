#ifndef FUSEE_PMC_H
#define FUSEE_PMC_H

#include "utils.h"

#define PMC_BASE 0x7000E400

#define APBDEV_PMC_DPD_ENABLE_0 MAKE_REG32(PMC_BASE + 0x24)

#define APBDEV_PMC_PWRGATE_TOGGLE_0 MAKE_REG32(PMC_BASE + 0x30)
#define APBDEV_PMC_PWRGATE_STATUS_0 MAKE_REG32(PMC_BASE + 0x38)

#define APBDEV_PMC_SCRATCH0_0 MAKE_REG32(PMC_BASE + 0x50)

#define APBDEV_PMC_CRYPTO_OP_0 MAKE_REG32(PMC_BASE + 0xF4)

#define APBDEV_PM_0 MAKE_REG32(PMC_BASE + 0x14)
#define APBDEV_PMC_WAKE2_STATUS_0 MAKE_REG32(PMC_BASE + 0x168)
#define APBDEV_PMC_CNTRL2_0 MAKE_REG32(PMC_BASE + 0x440)

#define APBDEV_PMC_SCRATCH43_0 MAKE_REG32(PMC_BASE + 0x22C)

#define APBDEV_PMC_SCRATCH200_0 MAKE_REG32(PMC_BASE + 0x840)



#endif
