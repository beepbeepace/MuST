/*
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_xc_1d_ehwlrg.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t4, t5;

#ifndef XC_DONT_COMPILE_VXC
  double t6, t8;

#ifndef XC_DONT_COMPILE_FXC
  double t13, t15, t16, t22, t23;

#ifndef XC_DONT_COMPILE_KXC
  double t25, t29, t30, t36, t37;

#ifndef XC_DONT_COMPILE_LXC
  double t44, t54;
#endif

#endif

#endif

#endif

#endif


  lda_xc_1d_ehwlrg_params *params;

  assert(p->params != NULL);
  params = (lda_xc_1d_ehwlrg_params * )(p->params);

  t1 = rho[0] * rho[0];
  t4 = params->a2 * rho[0] + params->a3 * t1 + params->a1;
  t5 = pow(rho[0], params->alpha);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t4 * t5;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t6 = rho[0] * params->a3;
  t8 = 0.2e1 * t6 + params->a2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = rho[0] * t8 * t5 + t4 * t5 * params->alpha + (t4 * t5);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t13 = t8 * t5;
  t15 = 0.1e1 / rho[0];
  t16 = params->alpha * t15;
  t22 = params->alpha * params->alpha;
  t23 = t22 * t15;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t13 * params->alpha + (t4 * t5) * t16 + (t4 * t5) * t23 + 0.2e1 * t6 * t5 + 0.2e1 * t13;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t25 = params->a3 * t5;
  t29 = 0.1e1 / t1;
  t30 = params->alpha * t29;
  t36 = t22 * params->alpha;
  t37 = t36 * t29;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t13 * t16 + 0.3e1 * t13 * t23 + 0.6e1 * t25 * params->alpha - (t4 * t5) * t30 + (t4 * t5) * t37 + 0.6e1 * t25;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t44 = 0.1e1 / t1 / rho[0];
  t54 = t22 * t22;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -(t4 * t5) * t22 * t44 - 0.2e1 * (t4 * t5) * t36 * t44 + (t4 * t5) * t54 * t44 + 0.2e1 * (t4 * t5) * params->alpha * t44 - 0.4e1 * t13 * t30 + 0.4e1 * t13 * t37 + 0.12e2 * t25 * t16 + 0.12e2 * t25 * t23;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t5, t6;

#ifndef XC_DONT_COMPILE_VXC
  double t7, t9;

#ifndef XC_DONT_COMPILE_FXC
  double t14, t16, t17, t23, t24;

#ifndef XC_DONT_COMPILE_KXC
  double t26, t30, t31, t37, t38;

#ifndef XC_DONT_COMPILE_LXC
  double t45, t55;
#endif

#endif

#endif

#endif

#endif


  lda_xc_1d_ehwlrg_params *params;

  assert(p->params != NULL);
  params = (lda_xc_1d_ehwlrg_params * )(p->params);

  t1 = rho[0] + rho[1];
  t3 = t1 * t1;
  t5 = params->a2 * t1 + params->a3 * t3 + params->a1;
  t6 = pow(t1, params->alpha);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t5 * t6;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t7 = params->a3 * t1;
  t9 = params->a2 + 0.2e1 * t7;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t1 * t9 * t6 + t5 * t6 * params->alpha + (t5 * t6);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t14 = t9 * t6;
  t16 = 0.1e1 / t1;
  t17 = params->alpha * t16;
  t23 = params->alpha * params->alpha;
  t24 = t23 * t16;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t14 * params->alpha + (t5 * t6) * t17 + (t5 * t6) * t24 + 0.2e1 * t7 * t6 + 0.2e1 * t14;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t26 = params->a3 * t6;
  t30 = 0.1e1 / t3;
  t31 = params->alpha * t30;
  t37 = t23 * params->alpha;
  t38 = t37 * t30;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t14 * t17 + 0.3e1 * t14 * t24 + 0.6e1 * t26 * params->alpha - (t5 * t6) * t31 + (t5 * t6) * t38 + 0.6e1 * t26;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t45 = 0.1e1 / t3 / t1;
  t55 = t23 * t23;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -(t5 * t6) * t23 * t45 - 0.2e1 * (t5 * t6) * t37 * t45 + (t5 * t6) * t55 * t45 + 0.2e1 * (t5 * t6) * params->alpha * t45 - 0.4e1 * t14 * t31 + 0.4e1 * t14 * t38 + 0.12e2 * t26 * t17 + 0.12e2 * t26 * t24;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = v4rho4[0];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = v4rho4[1];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = v4rho4[2];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = v4rho4[3];

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}
