/*
 Copyright (C) 2021 Susi Lehtola

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_MGGA_X_REGTM          626 /* Regularized Tao-Mo exchange */

#include "decl_mgga.h"
#include "maple2c/mgga_exc/mgga_x_regtm.c"
#include "work_mgga.c"

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_mgga_x_regtm = {
  XC_MGGA_X_REGTM,
  XC_EXCHANGE,
  "Regularized Tao and Mo exchange",
  XC_FAMILY_MGGA,
  {&xc_ref_Patra2020_184112, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | MAPLE2C_FLAGS,
  1e-15,
  {0, NULL, NULL, NULL, NULL},
  NULL, NULL,
  NULL, NULL, work_mgga
};