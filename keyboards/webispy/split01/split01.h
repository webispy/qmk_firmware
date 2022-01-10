// Copyright 2021 Inho Oh <webispy@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define ___ KC_NO

 /**
  *   B9   B8   B7   B6   B5   B4   B3   A13  A12  A11  A10  A9   A8   B15  B14
  *   L0   L1   L2   L3   L4   L5   L6   R0   R1   R2   R3   R4   R5   R6   R7
  */
#define LAYOUT( \
      k00, k01, k02, k03, k04, k05, k06,      k07, k08, k09, k0a, k0b, k0c, k0d, \
      k10, k11, k12, k13, k14, k15,      k16, k17, k18, k19, k1a, k1b, k1c, k1d, \
      k20, k21, k22, k23, k24, k25,           k26, k27, k28, k29, k2a, k2b, k2c, \
      k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
      k40, k41, k42, k43, k44, k45,           k46, k47, k48, k49, k5a, k5b, k5c \
) { \
    { k00, k01, k02, k03, k04, k05, k06, ___, k07, k08, k09, k0a, k0b, k0c, k0d }, \
    { k10, k11, k12, k13, k14, k15, ___, k16, k17, k18, k19, k1a, k1b, k1c, k1d }, \
    { k20, k21, k22, k23, k24, k25, ___, ___, k26, k27, k28, k29, k2a, k2b, k2c }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e }, \
    { k40, k41, k42, k43, k44, k45, ___, ___, k46, k47, k48, k49, k5a, k5b, k5c } \
}
