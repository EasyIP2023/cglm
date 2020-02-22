/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef tests_h
#define tests_h

#include "include/common.h"

/*
 * To register a test:
 *   1. use TEST_DECLARE() to forward declare test
 *   2. use TEST_ENTRY() to add test to list
 */

/* affine mat */
TEST_DECLARE(glm_mul)
TEST_DECLARE(glm_mul)
TEST_DECLARE(glm_inv_tr)

TEST_DECLARE(glmc_mul)
TEST_DECLARE(glmc_mul_rot)
TEST_DECLARE(glmc_inv_tr)

/* affine */
TEST_DECLARE(glm_translate)
TEST_DECLARE(glm_translate_to)
TEST_DECLARE(glm_translate_x)
TEST_DECLARE(glm_translate_y)
TEST_DECLARE(glm_translate_z)
TEST_DECLARE(glm_translate_make)
TEST_DECLARE(glm_scale_to)
TEST_DECLARE(glm_scale_make)
TEST_DECLARE(glm_scale)
TEST_DECLARE(glm_scale_uni)
TEST_DECLARE(glm_rotate_x)
TEST_DECLARE(glm_rotate_y)
TEST_DECLARE(glm_rotate_z)
TEST_DECLARE(glm_rotate_make)
TEST_DECLARE(glm_rotate)
TEST_DECLARE(glm_rotate_at)
TEST_DECLARE(glm_rotate_atm)
TEST_DECLARE(glm_decompose_scalev)
TEST_DECLARE(glm_uniscaled)
TEST_DECLARE(glm_decompose_rs)
TEST_DECLARE(glm_decompose)

TEST_DECLARE(glmc_translate)
TEST_DECLARE(glmc_translate_to)
TEST_DECLARE(glmc_translate_x)
TEST_DECLARE(glmc_translate_y)
TEST_DECLARE(glmc_translate_z)
TEST_DECLARE(glmc_translate_make)
TEST_DECLARE(glmc_scale_to)
TEST_DECLARE(glmc_scale_make)
TEST_DECLARE(glmc_scale)
TEST_DECLARE(glmc_scale_uni)
TEST_DECLARE(glmc_rotate_x)
TEST_DECLARE(glmc_rotate_y)
TEST_DECLARE(glmc_rotate_z)
TEST_DECLARE(glmc_rotate_make)
TEST_DECLARE(glmc_rotate)
TEST_DECLARE(glmc_rotate_at)
TEST_DECLARE(glmc_rotate_atm)
TEST_DECLARE(glmc_decompose_scalev)
TEST_DECLARE(glmc_uniscaled)
TEST_DECLARE(glmc_decompose_rs)
TEST_DECLARE(glmc_decompose)

/* mat4 */
TEST_DECLARE(glm_mat4_ucopy)
TEST_DECLARE(glm_mat4_copy)
TEST_DECLARE(glm_mat4_identity)
TEST_DECLARE(glm_mat4_identity_array)
TEST_DECLARE(glm_mat4_zero)
TEST_DECLARE(glm_mat4_pick3)
TEST_DECLARE(glm_mat4_pick3t)
TEST_DECLARE(glm_mat4_ins3)
TEST_DECLARE(glm_mat4_mul)
TEST_DECLARE(glm_mat4_mulN)
TEST_DECLARE(glm_mat4_mulv)
TEST_DECLARE(glm_mat4_mulv3)
TEST_DECLARE(glm_mat4_trace)
TEST_DECLARE(glm_mat4_trace3)
TEST_DECLARE(glm_mat4_quat)
TEST_DECLARE(glm_mat4_transpose_to)
TEST_DECLARE(glm_mat4_transpose)
TEST_DECLARE(glm_mat4_scale_p)
TEST_DECLARE(glm_mat4_scale)
TEST_DECLARE(glm_mat4_det)
TEST_DECLARE(glm_mat4_inv)
TEST_DECLARE(glm_mat4_inv_fast)
TEST_DECLARE(glm_mat4_inv_precise)
TEST_DECLARE(glm_mat4_swap_col)
TEST_DECLARE(glm_mat4_swap_row)
TEST_DECLARE(glm_mat4_rmc)

TEST_DECLARE(glmc_mat4_ucopy)
TEST_DECLARE(glmc_mat4_copy)
TEST_DECLARE(glmc_mat4_identity)
TEST_DECLARE(glmc_mat4_identity_array)
TEST_DECLARE(glmc_mat4_zero)
TEST_DECLARE(glmc_mat4_pick3)
TEST_DECLARE(glmc_mat4_pick3t)
TEST_DECLARE(glmc_mat4_ins3)
TEST_DECLARE(glmc_mat4_mul)
TEST_DECLARE(glmc_mat4_mulN)
TEST_DECLARE(glmc_mat4_mulv)
TEST_DECLARE(glmc_mat4_mulv3)
TEST_DECLARE(glmc_mat4_trace)
TEST_DECLARE(glmc_mat4_trace3)
TEST_DECLARE(glmc_mat4_quat)
TEST_DECLARE(glmc_mat4_transpose_to)
TEST_DECLARE(glmc_mat4_transpose)
TEST_DECLARE(glmc_mat4_scale_p)
TEST_DECLARE(glmc_mat4_scale)
TEST_DECLARE(glmc_mat4_det)
TEST_DECLARE(glmc_mat4_inv)
TEST_DECLARE(glmc_mat4_inv_fast)
TEST_DECLARE(glmc_mat4_swap_col)
TEST_DECLARE(glmc_mat4_swap_row)
TEST_DECLARE(glmc_mat4_rmc)

/* mat3 */
TEST_DECLARE(glm_mat3_copy)
TEST_DECLARE(glm_mat3_identity)
TEST_DECLARE(glm_mat3_identity_array)
TEST_DECLARE(glm_mat3_zero)
TEST_DECLARE(glm_mat3_mul)
TEST_DECLARE(glm_mat3_mulv)
TEST_DECLARE(glm_mat3_trace)
TEST_DECLARE(glm_mat3_quat)
TEST_DECLARE(glm_mat3_transpose_to)
TEST_DECLARE(glm_mat3_transpose)
TEST_DECLARE(glm_mat3_scale)
TEST_DECLARE(glm_mat3_det)
TEST_DECLARE(glm_mat3_inv)
TEST_DECLARE(glm_mat3_swap_col)
TEST_DECLARE(glm_mat3_swap_row)
TEST_DECLARE(glm_mat3_rmc)

TEST_DECLARE(glmc_mat3_copy)
TEST_DECLARE(glmc_mat3_identity)
TEST_DECLARE(glmc_mat3_identity_array)
TEST_DECLARE(glmc_mat3_zero)
TEST_DECLARE(glmc_mat3_mul)
TEST_DECLARE(glmc_mat3_mulv)
TEST_DECLARE(glmc_mat3_trace)
TEST_DECLARE(glmc_mat3_quat)
TEST_DECLARE(glmc_mat3_transpose_to)
TEST_DECLARE(glmc_mat3_transpose)
TEST_DECLARE(glmc_mat3_scale)
TEST_DECLARE(glmc_mat3_det)
TEST_DECLARE(glmc_mat3_inv)
TEST_DECLARE(glmc_mat3_swap_col)
TEST_DECLARE(glmc_mat3_swap_row)
TEST_DECLARE(glmc_mat3_rmc)

/* camera */
TEST_DECLARE(camera_lookat)
TEST_DECLARE(camera_decomp)

/* project */
TEST_DECLARE(glm_unprojecti)
TEST_DECLARE(glm_unproject)
TEST_DECLARE(glm_project)

TEST_DECLARE(glmc_unprojecti)
TEST_DECLARE(glmc_unproject)
TEST_DECLARE(glmc_project)

/* plane */
TEST_DECLARE(glm_plane_normalize)
TEST_DECLARE(glmc_plane_normalize)

/* utils */
TEST_DECLARE(clamp)

/* euler */
TEST_DECLARE(euler)

/* quat */
TEST_DECLARE(MACRO_GLM_QUAT_IDENTITY_INIT)
TEST_DECLARE(MACRO_GLM_QUAT_IDENTITY)

TEST_DECLARE(glm_quat_identity)
TEST_DECLARE(glm_quat_identity_array)
TEST_DECLARE(glm_quat_init)
TEST_DECLARE(glm_quatv)
TEST_DECLARE(glm_quat)
TEST_DECLARE(glm_quat_copy)
TEST_DECLARE(glm_quat_norm)
TEST_DECLARE(glm_quat_normalize_to)
TEST_DECLARE(glm_quat_normalize)
TEST_DECLARE(glm_quat_dot)
TEST_DECLARE(glm_quat_conjugate)
TEST_DECLARE(glm_quat_inv)
TEST_DECLARE(glm_quat_add)
TEST_DECLARE(glm_quat_sub)
TEST_DECLARE(glm_quat_real)
TEST_DECLARE(glm_quat_imag)
TEST_DECLARE(glm_quat_imagn)
TEST_DECLARE(glm_quat_imaglen)
TEST_DECLARE(glm_quat_angle)
TEST_DECLARE(glm_quat_axis)
TEST_DECLARE(glm_quat_mul)
TEST_DECLARE(glm_quat_mat4)
TEST_DECLARE(glm_quat_mat4t)
TEST_DECLARE(glm_quat_mat3)
TEST_DECLARE(glm_quat_mat3t)
TEST_DECLARE(glm_quat_lerp)
TEST_DECLARE(glm_quat_lerpc)
TEST_DECLARE(glm_quat_slerp)
TEST_DECLARE(glm_quat_look)
TEST_DECLARE(glm_quat_for)
TEST_DECLARE(glm_quat_forp)
TEST_DECLARE(glm_quat_rotatev)
TEST_DECLARE(glm_quat_rotate)
TEST_DECLARE(glm_quat_rotate_at)
TEST_DECLARE(glm_quat_rotate_atm)

TEST_DECLARE(glmc_quat_identity)
TEST_DECLARE(glmc_quat_identity_array)
TEST_DECLARE(glmc_quat_init)
TEST_DECLARE(glmc_quatv)
TEST_DECLARE(glmc_quat)
TEST_DECLARE(glmc_quat_copy)
TEST_DECLARE(glmc_quat_norm)
TEST_DECLARE(glmc_quat_normalize_to)
TEST_DECLARE(glmc_quat_normalize)
TEST_DECLARE(glmc_quat_dot)
TEST_DECLARE(glmc_quat_conjugate)
TEST_DECLARE(glmc_quat_inv)
TEST_DECLARE(glmc_quat_add)
TEST_DECLARE(glmc_quat_sub)
TEST_DECLARE(glmc_quat_real)
TEST_DECLARE(glmc_quat_imag)
TEST_DECLARE(glmc_quat_imagn)
TEST_DECLARE(glmc_quat_imaglen)
TEST_DECLARE(glmc_quat_angle)
TEST_DECLARE(glmc_quat_axis)
TEST_DECLARE(glmc_quat_mul)
TEST_DECLARE(glmc_quat_mat4)
TEST_DECLARE(glmc_quat_mat4t)
TEST_DECLARE(glmc_quat_mat3)
TEST_DECLARE(glmc_quat_mat3t)
TEST_DECLARE(glmc_quat_lerp)
TEST_DECLARE(glmc_quat_lerpc)
TEST_DECLARE(glmc_quat_slerp)
TEST_DECLARE(glmc_quat_look)
TEST_DECLARE(glmc_quat_for)
TEST_DECLARE(glmc_quat_forp)
TEST_DECLARE(glmc_quat_rotatev)
TEST_DECLARE(glmc_quat_rotate)
TEST_DECLARE(glmc_quat_rotate_at)
TEST_DECLARE(glmc_quat_rotate_atm)

/* bezier */
TEST_DECLARE(bezier)

/* vec3 */
TEST_DECLARE(MACRO_GLM_VEC3_ONE_INIT)
TEST_DECLARE(MACRO_GLM_VEC3_ZERO_INIT)
TEST_DECLARE(MACRO_GLM_VEC3_ONE)
TEST_DECLARE(MACRO_GLM_VEC3_ZERO)
TEST_DECLARE(MACRO_GLM_YUP)
TEST_DECLARE(MACRO_GLM_ZUP)
TEST_DECLARE(MACRO_GLM_XUP)
TEST_DECLARE(MACRO_GLM_FORWARD_RH)
TEST_DECLARE(MACRO_GLM_SHUFFLE3)
TEST_DECLARE(MACRO_GLM_XXX)
TEST_DECLARE(MACRO_GLM_YYY)
TEST_DECLARE(MACRO_GLM_ZZZ)
TEST_DECLARE(MACRO_GLM_ZYX)

TEST_DECLARE(MACRO_glm_vec3_dup)
TEST_DECLARE(MACRO_glm_vec3_flipsign)
TEST_DECLARE(MACRO_glm_vec3_flipsign_to)
TEST_DECLARE(MACRO_glm_vec3_inv)
TEST_DECLARE(MACRO_glm_vec3_inv_to)
TEST_DECLARE(MACRO_glm_vec3_mulv)

TEST_DECLARE(glm_vec3)
TEST_DECLARE(glm_vec3_copy)
TEST_DECLARE(glm_vec3_zero)
TEST_DECLARE(glm_vec3_one)
TEST_DECLARE(glm_vec3_dot)
TEST_DECLARE(glm_dot)
TEST_DECLARE(glm_vec3_norm2)
TEST_DECLARE(glm_vec3_norm)
TEST_DECLARE(glm_vec3_norm_one)
TEST_DECLARE(glm_vec3_norm_inf)
TEST_DECLARE(glm_vec3_add)
TEST_DECLARE(glm_vec3_adds)
TEST_DECLARE(glm_vec3_sub)
TEST_DECLARE(glm_vec3_subs)
TEST_DECLARE(glm_vec3_mul)
TEST_DECLARE(glm_vec3_scale)
TEST_DECLARE(glm_vec3_scale_as)
TEST_DECLARE(glm_vec3_div)
TEST_DECLARE(glm_vec3_divs)
TEST_DECLARE(glm_vec3_addadd)
TEST_DECLARE(glm_vec3_subadd)
TEST_DECLARE(glm_vec3_muladd)
TEST_DECLARE(glm_vec3_muladds)
TEST_DECLARE(glm_vec3_maxadd)
TEST_DECLARE(glm_vec3_minadd)
TEST_DECLARE(glm_vec3_negate_to)
TEST_DECLARE(glm_vec3_negate)
TEST_DECLARE(glm_vec3_normalize)
TEST_DECLARE(glm_vec3_normalize_to)
TEST_DECLARE(glm_normalize)
TEST_DECLARE(glm_normalize_to)
TEST_DECLARE(glm_vec3_cross)
TEST_DECLARE(glm_vec3_crossn)
TEST_DECLARE(glm_cross)
TEST_DECLARE(glm_vec3_angle)
TEST_DECLARE(glm_vec3_rotate)
TEST_DECLARE(glm_vec3_rotate_m4)
TEST_DECLARE(glm_vec3_rotate_m3)
TEST_DECLARE(glm_vec3_proj)
TEST_DECLARE(glm_vec3_center)
TEST_DECLARE(glm_vec3_distance2)
TEST_DECLARE(glm_vec3_distance)
TEST_DECLARE(glm_vec3_maxv)
TEST_DECLARE(glm_vec3_minv)
TEST_DECLARE(glm_vec3_ortho)
TEST_DECLARE(glm_vec3_clamp)
TEST_DECLARE(glm_vec3_mix)
TEST_DECLARE(glm_vec3_mixc)
TEST_DECLARE(glm_vec3_step_uni)
TEST_DECLARE(glm_vec3_step)
TEST_DECLARE(glm_vec3_smoothstep_uni)
TEST_DECLARE(glm_vec3_smoothstep)
TEST_DECLARE(glm_vec3_smoothinterp)
TEST_DECLARE(glm_vec3_smoothinterpc)
TEST_DECLARE(glm_vec3_swizzle)
TEST_DECLARE(glm_vec3_broadcast)
TEST_DECLARE(glm_vec3_fill)
TEST_DECLARE(glm_vec3_eq)
TEST_DECLARE(glm_vec3_eq_eps)
TEST_DECLARE(glm_vec3_eq_all)
TEST_DECLARE(glm_vec3_eqv)
TEST_DECLARE(glm_vec3_eqv_eps)
TEST_DECLARE(glm_vec3_max)
TEST_DECLARE(glm_vec3_min)
TEST_DECLARE(glm_vec3_isnan)
TEST_DECLARE(glm_vec3_isinf)
TEST_DECLARE(glm_vec3_isvalid)
TEST_DECLARE(glm_vec3_sign)
TEST_DECLARE(glm_vec3_abs)
TEST_DECLARE(glm_vec3_fract)
TEST_DECLARE(glm_vec3_hadd)
TEST_DECLARE(glm_vec3_sqrt)

TEST_DECLARE(glmc_vec3)
TEST_DECLARE(glmc_vec3_copy)
TEST_DECLARE(glmc_vec3_zero)
TEST_DECLARE(glmc_vec3_one)
TEST_DECLARE(glmc_vec3_dot)
TEST_DECLARE(glmc_vec3_norm2)
TEST_DECLARE(glmc_vec3_norm)
TEST_DECLARE(glmc_vec3_norm_one)
TEST_DECLARE(glmc_vec3_norm_inf)
TEST_DECLARE(glmc_vec3_add)
TEST_DECLARE(glmc_vec3_adds)
TEST_DECLARE(glmc_vec3_sub)
TEST_DECLARE(glmc_vec3_subs)
TEST_DECLARE(glmc_vec3_mul)
TEST_DECLARE(glmc_vec3_scale)
TEST_DECLARE(glmc_vec3_scale_as)
TEST_DECLARE(glmc_vec3_div)
TEST_DECLARE(glmc_vec3_divs)
TEST_DECLARE(glmc_vec3_addadd)
TEST_DECLARE(glmc_vec3_subadd)
TEST_DECLARE(glmc_vec3_muladd)
TEST_DECLARE(glmc_vec3_muladds)
TEST_DECLARE(glmc_vec3_maxadd)
TEST_DECLARE(glmc_vec3_minadd)
TEST_DECLARE(glmc_vec3_negate_to)
TEST_DECLARE(glmc_vec3_negate)
TEST_DECLARE(glmc_vec3_normalize)
TEST_DECLARE(glmc_vec3_normalize_to)
TEST_DECLARE(glmc_vec3_cross)
TEST_DECLARE(glmc_vec3_crossn)
TEST_DECLARE(glmc_vec3_angle)
TEST_DECLARE(glmc_vec3_rotate)
TEST_DECLARE(glmc_vec3_rotate_m4)
TEST_DECLARE(glmc_vec3_rotate_m3)
TEST_DECLARE(glmc_vec3_proj)
TEST_DECLARE(glmc_vec3_center)
TEST_DECLARE(glmc_vec3_distance2)
TEST_DECLARE(glmc_vec3_distance)
TEST_DECLARE(glmc_vec3_maxv)
TEST_DECLARE(glmc_vec3_minv)
TEST_DECLARE(glmc_vec3_ortho)
TEST_DECLARE(glmc_vec3_clamp)
TEST_DECLARE(glmc_vec3_mix)
TEST_DECLARE(glmc_vec3_mixc)
TEST_DECLARE(glmc_vec3_step_uni)
TEST_DECLARE(glmc_vec3_step)
TEST_DECLARE(glmc_vec3_smoothstep_uni)
TEST_DECLARE(glmc_vec3_smoothstep)
TEST_DECLARE(glmc_vec3_smoothinterp)
TEST_DECLARE(glmc_vec3_smoothinterpc)
TEST_DECLARE(glmc_vec3_swizzle)
TEST_DECLARE(glmc_vec3_broadcast)
TEST_DECLARE(glmc_vec3_fill)
TEST_DECLARE(glmc_vec3_eq)
TEST_DECLARE(glmc_vec3_eq_eps)
TEST_DECLARE(glmc_vec3_eq_all)
TEST_DECLARE(glmc_vec3_eqv)
TEST_DECLARE(glmc_vec3_eqv_eps)
TEST_DECLARE(glmc_vec3_max)
TEST_DECLARE(glmc_vec3_min)
TEST_DECLARE(glmc_vec3_isnan)
TEST_DECLARE(glmc_vec3_isinf)
TEST_DECLARE(glmc_vec3_isvalid)
TEST_DECLARE(glmc_vec3_sign)
TEST_DECLARE(glmc_vec3_abs)
TEST_DECLARE(glmc_vec3_fract)
TEST_DECLARE(glmc_vec3_hadd)
TEST_DECLARE(glmc_vec3_sqrt)

/* vec4 */

TEST_DECLARE(MACRO_GLM_VEC4_ONE_INIT)
TEST_DECLARE(MACRO_GLM_VEC4_ZERO_INIT)
TEST_DECLARE(MACRO_GLM_VEC4_ONE)
TEST_DECLARE(MACRO_GLM_VEC4_ZERO)
TEST_DECLARE(MACRO_GLM_XXXX)
TEST_DECLARE(MACRO_GLM_YYYY)
TEST_DECLARE(MACRO_GLM_ZZZZ)
TEST_DECLARE(MACRO_GLM_WZYX)
TEST_DECLARE(MACRO_glm_vec4_dup)
TEST_DECLARE(MACRO_glm_vec4_flipsign)
TEST_DECLARE(MACRO_glm_vec4_flipsign_to)
TEST_DECLARE(MACRO_glm_vec4_inv)
TEST_DECLARE(MACRO_glm_vec4_inv_to)
TEST_DECLARE(MACRO_glm_vec4_mulv)

TEST_DECLARE(glm_vec4)
TEST_DECLARE(glm_vec4_copy3)
TEST_DECLARE(glm_vec4_copy)
TEST_DECLARE(glm_vec4_ucopy)
TEST_DECLARE(glm_vec4_zero)
TEST_DECLARE(glm_vec4_one)
TEST_DECLARE(glm_vec4_dot)
TEST_DECLARE(glm_vec4_norm2)
TEST_DECLARE(glm_vec4_norm)
TEST_DECLARE(glm_vec4_norm_one)
TEST_DECLARE(glm_vec4_norm_inf)
TEST_DECLARE(glm_vec4_add)
TEST_DECLARE(glm_vec4_adds)
TEST_DECLARE(glm_vec4_sub)
TEST_DECLARE(glm_vec4_subs)
TEST_DECLARE(glm_vec4_mul)
TEST_DECLARE(glm_vec4_scale)
TEST_DECLARE(glm_vec4_scale_as)
TEST_DECLARE(glm_vec4_div)
TEST_DECLARE(glm_vec4_divs)
TEST_DECLARE(glm_vec4_addadd)
TEST_DECLARE(glm_vec4_subadd)
TEST_DECLARE(glm_vec4_muladd)
TEST_DECLARE(glm_vec4_muladds)
TEST_DECLARE(glm_vec4_maxadd)
TEST_DECLARE(glm_vec4_minadd)
TEST_DECLARE(glm_vec4_negate_to)
TEST_DECLARE(glm_vec4_negate)
TEST_DECLARE(glm_vec4_normalize)
TEST_DECLARE(glm_vec4_normalize_to)
TEST_DECLARE(glm_vec4_distance2)
TEST_DECLARE(glm_vec4_distance)
TEST_DECLARE(glm_vec4_maxv)
TEST_DECLARE(glm_vec4_minv)
TEST_DECLARE(glm_vec4_clamp)
TEST_DECLARE(glm_vec4_lerp)
TEST_DECLARE(glm_vec4_lerpc)
TEST_DECLARE(glm_vec4_mix)
TEST_DECLARE(glm_vec4_mixc)
TEST_DECLARE(glm_vec4_step_uni)
TEST_DECLARE(glm_vec4_step)
TEST_DECLARE(glm_vec4_smoothstep_uni)
TEST_DECLARE(glm_vec4_smoothstep)
TEST_DECLARE(glm_vec4_smoothinterp)
TEST_DECLARE(glm_vec4_smoothinterpc)
TEST_DECLARE(glm_vec4_cubic)
TEST_DECLARE(glm_vec4_swizzle)
TEST_DECLARE(glm_vec4_broadcast)
TEST_DECLARE(glm_vec4_fill)
TEST_DECLARE(glm_vec4_eq)
TEST_DECLARE(glm_vec4_eq_eps)
TEST_DECLARE(glm_vec4_eq_all)
TEST_DECLARE(glm_vec4_eqv)
TEST_DECLARE(glm_vec4_eqv_eps)
TEST_DECLARE(glm_vec4_max)
TEST_DECLARE(glm_vec4_min)
TEST_DECLARE(glm_vec4_isnan)
TEST_DECLARE(glm_vec4_isinf)
TEST_DECLARE(glm_vec4_isvalid)
TEST_DECLARE(glm_vec4_sign)
TEST_DECLARE(glm_vec4_abs)
TEST_DECLARE(glm_vec4_fract)
TEST_DECLARE(glm_vec4_hadd)
TEST_DECLARE(glm_vec4_sqrt)

TEST_DECLARE(glmc_vec4)
TEST_DECLARE(glmc_vec4_copy3)
TEST_DECLARE(glmc_vec4_copy)
TEST_DECLARE(glmc_vec4_ucopy)
TEST_DECLARE(glmc_vec4_zero)
TEST_DECLARE(glmc_vec4_one)
TEST_DECLARE(glmc_vec4_dot)
TEST_DECLARE(glmc_vec4_norm2)
TEST_DECLARE(glmc_vec4_norm)
TEST_DECLARE(glmc_vec4_norm_one)
TEST_DECLARE(glmc_vec4_norm_inf)
TEST_DECLARE(glmc_vec4_add)
TEST_DECLARE(glmc_vec4_adds)
TEST_DECLARE(glmc_vec4_sub)
TEST_DECLARE(glmc_vec4_subs)
TEST_DECLARE(glmc_vec4_mul)
TEST_DECLARE(glmc_vec4_scale)
TEST_DECLARE(glmc_vec4_scale_as)
TEST_DECLARE(glmc_vec4_div)
TEST_DECLARE(glmc_vec4_divs)
TEST_DECLARE(glmc_vec4_addadd)
TEST_DECLARE(glmc_vec4_subadd)
TEST_DECLARE(glmc_vec4_muladd)
TEST_DECLARE(glmc_vec4_muladds)
TEST_DECLARE(glmc_vec4_maxadd)
TEST_DECLARE(glmc_vec4_minadd)
TEST_DECLARE(glmc_vec4_negate_to)
TEST_DECLARE(glmc_vec4_negate)
TEST_DECLARE(glmc_vec4_normalize)
TEST_DECLARE(glmc_vec4_normalize_to)
TEST_DECLARE(glmc_vec4_distance2)
TEST_DECLARE(glmc_vec4_distance)
TEST_DECLARE(glmc_vec4_maxv)
TEST_DECLARE(glmc_vec4_minv)
TEST_DECLARE(glmc_vec4_clamp)
TEST_DECLARE(glmc_vec4_lerp)
TEST_DECLARE(glmc_vec4_lerpc)
TEST_DECLARE(glmc_vec4_mix)
TEST_DECLARE(glmc_vec4_mixc)
TEST_DECLARE(glmc_vec4_step_uni)
TEST_DECLARE(glmc_vec4_step)
TEST_DECLARE(glmc_vec4_smoothstep_uni)
TEST_DECLARE(glmc_vec4_smoothstep)
TEST_DECLARE(glmc_vec4_smoothinterp)
TEST_DECLARE(glmc_vec4_smoothinterpc)
TEST_DECLARE(glmc_vec4_cubic)
TEST_DECLARE(glmc_vec4_swizzle)
TEST_DECLARE(glmc_vec4_broadcast)
TEST_DECLARE(glmc_vec4_fill)
TEST_DECLARE(glmc_vec4_eq)
TEST_DECLARE(glmc_vec4_eq_eps)
TEST_DECLARE(glmc_vec4_eq_all)
TEST_DECLARE(glmc_vec4_eqv)
TEST_DECLARE(glmc_vec4_eqv_eps)
TEST_DECLARE(glmc_vec4_max)
TEST_DECLARE(glmc_vec4_min)
TEST_DECLARE(glmc_vec4_isnan)
TEST_DECLARE(glmc_vec4_isinf)
TEST_DECLARE(glmc_vec4_isvalid)
TEST_DECLARE(glmc_vec4_sign)
TEST_DECLARE(glmc_vec4_abs)
TEST_DECLARE(glmc_vec4_fract)
TEST_DECLARE(glmc_vec4_hadd)
TEST_DECLARE(glmc_vec4_sqrt)

/* structs */

TEST_DECLARE(mat3s_identity_init)
TEST_DECLARE(mat3s_zero_init)
TEST_DECLARE(mat4s_identity_init)
TEST_DECLARE(mat4s_zero_init)
TEST_DECLARE(quats_zero_init)
TEST_DECLARE(vec3s_one_init)
TEST_DECLARE(vec3s_zero_init)
TEST_DECLARE(vec4s_black_init)
TEST_DECLARE(vec4s_one_init)
TEST_DECLARE(vec4s_zero_init)

/*****************************************************************************/

TEST_LIST {
  /* affine mat */
  TEST_ENTRY(glm_mul)
  TEST_ENTRY(glm_mul)
  TEST_ENTRY(glm_inv_tr)

  TEST_ENTRY(glmc_mul)
  TEST_ENTRY(glmc_mul_rot)
  TEST_ENTRY(glmc_inv_tr)

  /* affine */
  TEST_ENTRY(glm_translate)
  TEST_ENTRY(glm_translate_to)
  TEST_ENTRY(glm_translate_x)
  TEST_ENTRY(glm_translate_y)
  TEST_ENTRY(glm_translate_z)
  TEST_ENTRY(glm_translate_make)
  TEST_ENTRY(glm_scale_to)
  TEST_ENTRY(glm_scale_make)
  TEST_ENTRY(glm_scale)
  TEST_ENTRY(glm_scale_uni)
  TEST_ENTRY(glm_rotate_x)
  TEST_ENTRY(glm_rotate_y)
  TEST_ENTRY(glm_rotate_z)
  TEST_ENTRY(glm_rotate_make)
  TEST_ENTRY(glm_rotate)
  TEST_ENTRY(glm_rotate_at)
  TEST_ENTRY(glm_rotate_atm)
  TEST_ENTRY(glm_decompose_scalev)
  TEST_ENTRY(glm_uniscaled)
  TEST_ENTRY(glm_decompose_rs)
  TEST_ENTRY(glm_decompose)

  TEST_ENTRY(glmc_translate)
  TEST_ENTRY(glmc_translate_to)
  TEST_ENTRY(glmc_translate_x)
  TEST_ENTRY(glmc_translate_y)
  TEST_ENTRY(glmc_translate_z)
  TEST_ENTRY(glmc_translate_make)
  TEST_ENTRY(glmc_scale_to)
  TEST_ENTRY(glmc_scale_make)
  TEST_ENTRY(glmc_scale)
  TEST_ENTRY(glmc_scale_uni)
  TEST_ENTRY(glmc_rotate_x)
  TEST_ENTRY(glmc_rotate_y)
  TEST_ENTRY(glmc_rotate_z)
  TEST_ENTRY(glmc_rotate_make)
  TEST_ENTRY(glmc_rotate)
  TEST_ENTRY(glmc_rotate_at)
  TEST_ENTRY(glmc_rotate_atm)
  TEST_ENTRY(glmc_decompose_scalev)
  TEST_ENTRY(glmc_uniscaled)
  TEST_ENTRY(glmc_decompose_rs)
  TEST_ENTRY(glmc_decompose)

  /* mat4 */
  TEST_ENTRY(glm_mat4_ucopy)
  TEST_ENTRY(glm_mat4_copy)
  TEST_ENTRY(glm_mat4_identity)
  TEST_ENTRY(glm_mat4_identity_array)
  TEST_ENTRY(glm_mat4_zero)
  TEST_ENTRY(glm_mat4_pick3)
  TEST_ENTRY(glm_mat4_pick3t)
  TEST_ENTRY(glm_mat4_ins3)
  TEST_ENTRY(glm_mat4_mul)
  TEST_ENTRY(glm_mat4_mulN)
  TEST_ENTRY(glm_mat4_mulv)
  TEST_ENTRY(glm_mat4_mulv3)
  TEST_ENTRY(glm_mat4_trace)
  TEST_ENTRY(glm_mat4_trace3)
  TEST_ENTRY(glm_mat4_quat)
  TEST_ENTRY(glm_mat4_transpose_to)
  TEST_ENTRY(glm_mat4_transpose)
  TEST_ENTRY(glm_mat4_scale_p)
  TEST_ENTRY(glm_mat4_scale)
  TEST_ENTRY(glm_mat4_det)
  TEST_ENTRY(glm_mat4_inv)
  TEST_ENTRY(glm_mat4_inv_fast)
  TEST_ENTRY(glm_mat4_inv_precise)
  TEST_ENTRY(glm_mat4_swap_col)
  TEST_ENTRY(glm_mat4_swap_row)
  TEST_ENTRY(glm_mat4_rmc)
  
  TEST_ENTRY(glmc_mat4_ucopy)
  TEST_ENTRY(glmc_mat4_copy)
  TEST_ENTRY(glmc_mat4_identity)
  TEST_ENTRY(glmc_mat4_identity_array)
  TEST_ENTRY(glmc_mat4_zero)
  TEST_ENTRY(glmc_mat4_pick3)
  TEST_ENTRY(glmc_mat4_pick3t)
  TEST_ENTRY(glmc_mat4_ins3)
  TEST_ENTRY(glmc_mat4_mul)
  TEST_ENTRY(glmc_mat4_mulN)
  TEST_ENTRY(glmc_mat4_mulv)
  TEST_ENTRY(glmc_mat4_mulv3)
  TEST_ENTRY(glmc_mat4_trace)
  TEST_ENTRY(glmc_mat4_trace3)
  TEST_ENTRY(glmc_mat4_quat)
  TEST_ENTRY(glmc_mat4_transpose_to)
  TEST_ENTRY(glmc_mat4_transpose)
  TEST_ENTRY(glmc_mat4_scale_p)
  TEST_ENTRY(glmc_mat4_scale)
  TEST_ENTRY(glmc_mat4_det)
  TEST_ENTRY(glmc_mat4_inv)
  TEST_ENTRY(glmc_mat4_inv_fast)
  TEST_ENTRY(glmc_mat4_swap_col)
  TEST_ENTRY(glmc_mat4_swap_row)
  TEST_ENTRY(glmc_mat4_rmc)
  
  
  /* mat3 */
  TEST_ENTRY(glm_mat3_copy)
  TEST_ENTRY(glm_mat3_identity)
  TEST_ENTRY(glm_mat3_identity_array)
  TEST_ENTRY(glm_mat3_zero)
  TEST_ENTRY(glm_mat3_mul)
  TEST_ENTRY(glm_mat3_mulv)
  TEST_ENTRY(glm_mat3_trace)
  TEST_ENTRY(glm_mat3_quat)
  TEST_ENTRY(glm_mat3_transpose_to)
  TEST_ENTRY(glm_mat3_transpose)
  TEST_ENTRY(glm_mat3_scale)
  TEST_ENTRY(glm_mat3_det)
  TEST_ENTRY(glm_mat3_inv)
  TEST_ENTRY(glm_mat3_swap_col)
  TEST_ENTRY(glm_mat3_swap_row)
  TEST_ENTRY(glm_mat3_rmc)

  TEST_ENTRY(glmc_mat3_copy)
  TEST_ENTRY(glmc_mat3_identity)
  TEST_ENTRY(glmc_mat3_identity_array)
  TEST_ENTRY(glmc_mat3_zero)
  TEST_ENTRY(glmc_mat3_mul)
  TEST_ENTRY(glmc_mat3_mulv)
  TEST_ENTRY(glmc_mat3_trace)
  TEST_ENTRY(glmc_mat3_quat)
  TEST_ENTRY(glmc_mat3_transpose_to)
  TEST_ENTRY(glmc_mat3_transpose)
  TEST_ENTRY(glmc_mat3_scale)
  TEST_ENTRY(glmc_mat3_det)
  TEST_ENTRY(glmc_mat3_inv)
  TEST_ENTRY(glmc_mat3_swap_col)
  TEST_ENTRY(glmc_mat3_swap_row)
  TEST_ENTRY(glmc_mat3_rmc)
  
  /* camera */
  TEST_ENTRY(camera_lookat)
  TEST_ENTRY(camera_decomp)
  
  /* project */
  TEST_ENTRY(glm_unprojecti)
  TEST_ENTRY(glm_unproject)
  TEST_ENTRY(glm_project)
  
  TEST_ENTRY(glmc_unprojecti)
  TEST_ENTRY(glmc_unproject)
  TEST_ENTRY(glmc_project)
  
  /* plane */
  TEST_ENTRY(glm_plane_normalize)
  TEST_ENTRY(glmc_plane_normalize)
  
  /* utils */
  TEST_ENTRY(clamp)
  
  /* euler */
  TEST_ENTRY(euler)
  
  /* quat */
  TEST_ENTRY(MACRO_GLM_QUAT_IDENTITY_INIT)
  TEST_ENTRY(MACRO_GLM_QUAT_IDENTITY)

  TEST_ENTRY(glm_quat_identity)
  TEST_ENTRY(glm_quat_identity_array)
  TEST_ENTRY(glm_quat_init)
  TEST_ENTRY(glm_quatv)
  TEST_ENTRY(glm_quat)
  TEST_ENTRY(glm_quat_copy)
  TEST_ENTRY(glm_quat_norm)
  TEST_ENTRY(glm_quat_normalize_to)
  TEST_ENTRY(glm_quat_normalize)
  TEST_ENTRY(glm_quat_dot)
  TEST_ENTRY(glm_quat_conjugate)
  TEST_ENTRY(glm_quat_inv)
  TEST_ENTRY(glm_quat_add)
  TEST_ENTRY(glm_quat_sub)
  TEST_ENTRY(glm_quat_real)
  TEST_ENTRY(glm_quat_imag)
  TEST_ENTRY(glm_quat_imagn)
  TEST_ENTRY(glm_quat_imaglen)
  TEST_ENTRY(glm_quat_angle)
  TEST_ENTRY(glm_quat_axis)
  TEST_ENTRY(glm_quat_mul)
  TEST_ENTRY(glm_quat_mat4)
  TEST_ENTRY(glm_quat_mat4t)
  TEST_ENTRY(glm_quat_mat3)
  TEST_ENTRY(glm_quat_mat3t)
  TEST_ENTRY(glm_quat_lerp)
  TEST_ENTRY(glm_quat_lerpc)
  TEST_ENTRY(glm_quat_slerp)
  TEST_ENTRY(glm_quat_look)
  TEST_ENTRY(glm_quat_for)
  TEST_ENTRY(glm_quat_forp)
  TEST_ENTRY(glm_quat_rotatev)
  TEST_ENTRY(glm_quat_rotate)
  TEST_ENTRY(glm_quat_rotate_at)
  TEST_ENTRY(glm_quat_rotate_atm)

  TEST_ENTRY(glmc_quat_identity)
  TEST_ENTRY(glmc_quat_identity_array)
  TEST_ENTRY(glmc_quat_init)
  TEST_ENTRY(glmc_quatv)
  TEST_ENTRY(glmc_quat)
  TEST_ENTRY(glmc_quat_copy)
  TEST_ENTRY(glmc_quat_norm)
  TEST_ENTRY(glmc_quat_normalize_to)
  TEST_ENTRY(glmc_quat_normalize)
  TEST_ENTRY(glmc_quat_dot)
  TEST_ENTRY(glmc_quat_conjugate)
  TEST_ENTRY(glmc_quat_inv)
  TEST_ENTRY(glmc_quat_add)
  TEST_ENTRY(glmc_quat_sub)
  TEST_ENTRY(glmc_quat_real)
  TEST_ENTRY(glmc_quat_imag)
  TEST_ENTRY(glmc_quat_imagn)
  TEST_ENTRY(glmc_quat_imaglen)
  TEST_ENTRY(glmc_quat_angle)
  TEST_ENTRY(glmc_quat_axis)
  TEST_ENTRY(glmc_quat_mul)
  TEST_ENTRY(glmc_quat_mat4)
  TEST_ENTRY(glmc_quat_mat4t)
  TEST_ENTRY(glmc_quat_mat3)
  TEST_ENTRY(glmc_quat_mat3t)
  TEST_ENTRY(glmc_quat_lerp)
  TEST_ENTRY(glmc_quat_lerpc)
  TEST_ENTRY(glmc_quat_slerp)
  TEST_ENTRY(glmc_quat_look)
  TEST_ENTRY(glmc_quat_for)
  TEST_ENTRY(glmc_quat_forp)
  TEST_ENTRY(glmc_quat_rotatev)
  TEST_ENTRY(glmc_quat_rotate)
  TEST_ENTRY(glmc_quat_rotate_at)
  TEST_ENTRY(glmc_quat_rotate_atm)

  /* bezier */
  TEST_ENTRY(bezier)

  /* vec3 */

  /* Macros */

  TEST_ENTRY(MACRO_GLM_VEC3_ONE_INIT)
  TEST_ENTRY(MACRO_GLM_VEC3_ZERO_INIT)
  TEST_ENTRY(MACRO_GLM_VEC3_ONE)
  TEST_ENTRY(MACRO_GLM_VEC3_ZERO)
  TEST_ENTRY(MACRO_GLM_YUP)
  TEST_ENTRY(MACRO_GLM_ZUP)
  TEST_ENTRY(MACRO_GLM_XUP)
  TEST_ENTRY(MACRO_GLM_FORWARD_RH)
  TEST_ENTRY(MACRO_GLM_SHUFFLE3)
  TEST_ENTRY(MACRO_GLM_XXX)
  TEST_ENTRY(MACRO_GLM_YYY)
  TEST_ENTRY(MACRO_GLM_ZZZ)
  TEST_ENTRY(MACRO_GLM_ZYX)
  TEST_ENTRY(MACRO_glm_vec3_dup)
  TEST_ENTRY(MACRO_glm_vec3_flipsign)
  TEST_ENTRY(MACRO_glm_vec3_flipsign_to)
  TEST_ENTRY(MACRO_glm_vec3_inv)
  TEST_ENTRY(MACRO_glm_vec3_inv_to)
  TEST_ENTRY(MACRO_glm_vec3_mulv)

  TEST_ENTRY(glm_vec3)
  TEST_ENTRY(glm_vec3_copy)
  TEST_ENTRY(glm_vec3_zero)
  TEST_ENTRY(glm_vec3_one)
  TEST_ENTRY(glm_vec3_dot)
  TEST_ENTRY(glm_dot)
  TEST_ENTRY(glm_vec3_norm2)
  TEST_ENTRY(glm_vec3_norm)
  TEST_ENTRY(glm_vec3_norm_one)
  TEST_ENTRY(glm_vec3_norm_inf)
  TEST_ENTRY(glm_vec3_add)
  TEST_ENTRY(glm_vec3_adds)
  TEST_ENTRY(glm_vec3_sub)
  TEST_ENTRY(glm_vec3_subs)
  TEST_ENTRY(glm_vec3_mul)
  TEST_ENTRY(glm_vec3_scale)
  TEST_ENTRY(glm_vec3_scale_as)
  TEST_ENTRY(glm_vec3_div)
  TEST_ENTRY(glm_vec3_divs)
  TEST_ENTRY(glm_vec3_addadd)
  TEST_ENTRY(glm_vec3_subadd)
  TEST_ENTRY(glm_vec3_muladd)
  TEST_ENTRY(glm_vec3_muladds)
  TEST_ENTRY(glm_vec3_maxadd)
  TEST_ENTRY(glm_vec3_minadd)
  TEST_ENTRY(glm_vec3_negate_to)
  TEST_ENTRY(glm_vec3_negate)
  TEST_ENTRY(glm_vec3_normalize)
  TEST_ENTRY(glm_vec3_normalize_to)
  TEST_ENTRY(glm_normalize)
  TEST_ENTRY(glm_normalize_to)
  TEST_ENTRY(glm_vec3_cross)
  TEST_ENTRY(glm_vec3_crossn)
  TEST_ENTRY(glm_cross)
  TEST_ENTRY(glm_vec3_angle)
  TEST_ENTRY(glm_vec3_rotate)
  TEST_ENTRY(glm_vec3_rotate_m4)
  TEST_ENTRY(glm_vec3_rotate_m3)
  TEST_ENTRY(glm_vec3_proj)
  TEST_ENTRY(glm_vec3_center)
  TEST_ENTRY(glmc_vec3_distance2)
  TEST_ENTRY(glmc_vec3_distance)
  TEST_ENTRY(glm_vec3_maxv)
  TEST_ENTRY(glm_vec3_minv)
  TEST_ENTRY(glm_vec3_ortho)
  TEST_ENTRY(glm_vec3_clamp)
  TEST_ENTRY(glm_vec3_mix)
  TEST_ENTRY(glm_vec3_mixc)
  TEST_ENTRY(glm_vec3_step_uni)
  TEST_ENTRY(glm_vec3_step)
  TEST_ENTRY(glm_vec3_smoothstep_uni)
  TEST_ENTRY(glm_vec3_smoothstep)
  TEST_ENTRY(glm_vec3_smoothinterp)
  TEST_ENTRY(glm_vec3_smoothinterpc)
  TEST_ENTRY(glm_vec3_swizzle)
  TEST_ENTRY(glm_vec3_broadcast)
  TEST_ENTRY(glm_vec3_fill)
  TEST_ENTRY(glm_vec3_eq)
  TEST_ENTRY(glm_vec3_eq_eps)
  TEST_ENTRY(glm_vec3_eq_all)
  TEST_ENTRY(glm_vec3_eqv)
  TEST_ENTRY(glm_vec3_eqv_eps)
  TEST_ENTRY(glm_vec3_max)
  TEST_ENTRY(glm_vec3_min)
  TEST_ENTRY(glm_vec3_isnan)
  TEST_ENTRY(glm_vec3_isinf)
  TEST_ENTRY(glm_vec3_isvalid)
  TEST_ENTRY(glm_vec3_sign)
  TEST_ENTRY(glm_vec3_abs)
  TEST_ENTRY(glm_vec3_fract)
  TEST_ENTRY(glm_vec3_hadd)
  TEST_ENTRY(glm_vec3_sqrt)

  TEST_ENTRY(glmc_vec3)
  TEST_ENTRY(glmc_vec3_copy)
  TEST_ENTRY(glmc_vec3_zero)
  TEST_ENTRY(glmc_vec3_one)
  TEST_ENTRY(glmc_vec3_dot)
  TEST_ENTRY(glmc_vec3_norm2)
  TEST_ENTRY(glmc_vec3_norm)
  TEST_ENTRY(glmc_vec3_norm_one)
  TEST_ENTRY(glmc_vec3_norm_inf)
  TEST_ENTRY(glmc_vec3_add)
  TEST_ENTRY(glmc_vec3_adds)
  TEST_ENTRY(glmc_vec3_sub)
  TEST_ENTRY(glmc_vec3_subs)
  TEST_ENTRY(glmc_vec3_mul)
  TEST_ENTRY(glmc_vec3_scale)
  TEST_ENTRY(glmc_vec3_scale_as)
  TEST_ENTRY(glmc_vec3_div)
  TEST_ENTRY(glmc_vec3_divs)
  TEST_ENTRY(glmc_vec3_addadd)
  TEST_ENTRY(glmc_vec3_subadd)
  TEST_ENTRY(glmc_vec3_muladd)
  TEST_ENTRY(glmc_vec3_muladds)
  TEST_ENTRY(glmc_vec3_maxadd)
  TEST_ENTRY(glmc_vec3_minadd)
  TEST_ENTRY(glmc_vec3_negate_to)
  TEST_ENTRY(glmc_vec3_negate)
  TEST_ENTRY(glmc_vec3_normalize)
  TEST_ENTRY(glmc_vec3_normalize_to)
  TEST_ENTRY(glmc_vec3_cross)
  TEST_ENTRY(glmc_vec3_crossn)
  TEST_ENTRY(glmc_vec3_angle)
  TEST_ENTRY(glmc_vec3_rotate)
  TEST_ENTRY(glmc_vec3_rotate_m4)
  TEST_ENTRY(glmc_vec3_rotate_m3)
  TEST_ENTRY(glmc_vec3_proj)
  TEST_ENTRY(glmc_vec3_center)
  TEST_ENTRY(glmc_vec3_distance2)
  TEST_ENTRY(glmc_vec3_distance)
  TEST_ENTRY(glmc_vec3_maxv)
  TEST_ENTRY(glmc_vec3_minv)
  TEST_ENTRY(glmc_vec3_ortho)
  TEST_ENTRY(glmc_vec3_clamp)
  TEST_ENTRY(glmc_vec3_mix)
  TEST_ENTRY(glmc_vec3_mixc)
  TEST_ENTRY(glmc_vec3_step_uni)
  TEST_ENTRY(glmc_vec3_step)
  TEST_ENTRY(glmc_vec3_smoothstep_uni)
  TEST_ENTRY(glmc_vec3_smoothstep)
  TEST_ENTRY(glmc_vec3_smoothinterp)
  TEST_ENTRY(glmc_vec3_smoothinterpc)
  TEST_ENTRY(glmc_vec3_swizzle)
  TEST_ENTRY(glmc_vec3_broadcast)
  TEST_ENTRY(glmc_vec3_fill)
  TEST_ENTRY(glmc_vec3_eq)
  TEST_ENTRY(glmc_vec3_eq_eps)
  TEST_ENTRY(glmc_vec3_eq_all)
  TEST_ENTRY(glmc_vec3_eqv)
  TEST_ENTRY(glmc_vec3_eqv_eps)
  TEST_ENTRY(glmc_vec3_max)
  TEST_ENTRY(glmc_vec3_min)
  TEST_ENTRY(glmc_vec3_isnan)
  TEST_ENTRY(glmc_vec3_isinf)
  TEST_ENTRY(glmc_vec3_isvalid)
  TEST_ENTRY(glmc_vec3_sign)
  TEST_ENTRY(glmc_vec3_abs)
  TEST_ENTRY(glmc_vec3_fract)
  TEST_ENTRY(glmc_vec3_hadd)
  TEST_ENTRY(glmc_vec3_sqrt)

  /* vec4 */
  
  TEST_ENTRY(MACRO_GLM_VEC4_ONE_INIT)
  TEST_ENTRY(MACRO_GLM_VEC4_ZERO_INIT)
  TEST_ENTRY(MACRO_GLM_VEC4_ONE)
  TEST_ENTRY(MACRO_GLM_VEC4_ZERO)
  TEST_ENTRY(MACRO_GLM_XXXX)
  TEST_ENTRY(MACRO_GLM_YYYY)
  TEST_ENTRY(MACRO_GLM_ZZZZ)
  TEST_ENTRY(MACRO_GLM_WZYX)
  TEST_ENTRY(MACRO_glm_vec4_dup)
  TEST_ENTRY(MACRO_glm_vec4_flipsign)
  TEST_ENTRY(MACRO_glm_vec4_flipsign_to)
  TEST_ENTRY(MACRO_glm_vec4_inv)
  TEST_ENTRY(MACRO_glm_vec4_inv_to)
  TEST_ENTRY(MACRO_glm_vec4_mulv)
  
  TEST_ENTRY(glm_vec4)
  TEST_ENTRY(glm_vec4_copy3)
  TEST_ENTRY(glm_vec4_copy)
  TEST_ENTRY(glm_vec4_ucopy)
  TEST_ENTRY(glm_vec4_zero)
  TEST_ENTRY(glm_vec4_one)
  TEST_ENTRY(glm_vec4_dot)
  TEST_ENTRY(glm_vec4_norm2)
  TEST_ENTRY(glm_vec4_norm)
  TEST_ENTRY(glm_vec4_norm_one)
  TEST_ENTRY(glm_vec4_norm_inf)
  TEST_ENTRY(glm_vec4_add)
  TEST_ENTRY(glm_vec4_adds)
  TEST_ENTRY(glm_vec4_sub)
  TEST_ENTRY(glm_vec4_subs)
  TEST_ENTRY(glm_vec4_mul)
  TEST_ENTRY(glm_vec4_scale)
  TEST_ENTRY(glm_vec4_scale_as)
  TEST_ENTRY(glm_vec4_div)
  TEST_ENTRY(glm_vec4_divs)
  TEST_ENTRY(glm_vec4_addadd)
  TEST_ENTRY(glm_vec4_subadd)
  TEST_ENTRY(glm_vec4_muladd)
  TEST_ENTRY(glm_vec4_muladds)
  TEST_ENTRY(glm_vec4_maxadd)
  TEST_ENTRY(glm_vec4_minadd)
  TEST_ENTRY(glm_vec4_negate_to)
  TEST_ENTRY(glm_vec4_negate)
  TEST_ENTRY(glm_vec4_normalize)
  TEST_ENTRY(glm_vec4_normalize_to)
  TEST_ENTRY(glm_vec4_distance2)
  TEST_ENTRY(glm_vec4_distance)
  TEST_ENTRY(glm_vec4_maxv)
  TEST_ENTRY(glm_vec4_minv)
  TEST_ENTRY(glm_vec4_clamp)
  TEST_ENTRY(glm_vec4_lerp)
  TEST_ENTRY(glm_vec4_lerpc)
  TEST_ENTRY(glm_vec4_mix)
  TEST_ENTRY(glm_vec4_mixc)
  TEST_ENTRY(glm_vec4_step_uni)
  TEST_ENTRY(glm_vec4_step)
  TEST_ENTRY(glm_vec4_smoothstep_uni)
  TEST_ENTRY(glm_vec4_smoothstep)
  TEST_ENTRY(glm_vec4_smoothinterp)
  TEST_ENTRY(glm_vec4_smoothinterpc)
  TEST_ENTRY(glm_vec4_cubic)
  TEST_ENTRY(glm_vec4_swizzle)
  TEST_ENTRY(glm_vec4_broadcast)
  TEST_ENTRY(glm_vec4_fill)
  TEST_ENTRY(glm_vec4_eq)
  TEST_ENTRY(glm_vec4_eq_eps)
  TEST_ENTRY(glm_vec4_eq_all)
  TEST_ENTRY(glm_vec4_eqv)
  TEST_ENTRY(glm_vec4_eqv_eps)
  TEST_ENTRY(glm_vec4_max)
  TEST_ENTRY(glm_vec4_min)
  TEST_ENTRY(glm_vec4_isnan)
  TEST_ENTRY(glm_vec4_isinf)
  TEST_ENTRY(glm_vec4_isvalid)
  TEST_ENTRY(glm_vec4_sign)
  TEST_ENTRY(glm_vec4_abs)
  TEST_ENTRY(glm_vec4_fract)
  TEST_ENTRY(glm_vec4_hadd)
  TEST_ENTRY(glm_vec4_sqrt)

  TEST_ENTRY(glmc_vec4)
  TEST_ENTRY(glmc_vec4_copy3)
  TEST_ENTRY(glmc_vec4_copy)
  TEST_ENTRY(glmc_vec4_ucopy)
  TEST_ENTRY(glmc_vec4_zero)
  TEST_ENTRY(glmc_vec4_one)
  TEST_ENTRY(glmc_vec4_dot)
  TEST_ENTRY(glmc_vec4_norm2)
  TEST_ENTRY(glmc_vec4_norm)
  TEST_ENTRY(glmc_vec4_norm_one)
  TEST_ENTRY(glmc_vec4_norm_inf)
  TEST_ENTRY(glmc_vec4_add)
  TEST_ENTRY(glmc_vec4_adds)
  TEST_ENTRY(glmc_vec4_sub)
  TEST_ENTRY(glmc_vec4_subs)
  TEST_ENTRY(glmc_vec4_mul)
  TEST_ENTRY(glmc_vec4_scale)
  TEST_ENTRY(glmc_vec4_scale_as)
  TEST_ENTRY(glmc_vec4_div)
  TEST_ENTRY(glmc_vec4_divs)
  TEST_ENTRY(glmc_vec4_addadd)
  TEST_ENTRY(glmc_vec4_subadd)
  TEST_ENTRY(glmc_vec4_muladd)
  TEST_ENTRY(glmc_vec4_muladds)
  TEST_ENTRY(glmc_vec4_maxadd)
  TEST_ENTRY(glmc_vec4_minadd)
  TEST_ENTRY(glmc_vec4_negate_to)
  TEST_ENTRY(glmc_vec4_negate)
  TEST_ENTRY(glmc_vec4_normalize)
  TEST_ENTRY(glmc_vec4_normalize_to)
  TEST_ENTRY(glmc_vec4_distance2)
  TEST_ENTRY(glmc_vec4_distance)
  TEST_ENTRY(glmc_vec4_maxv)
  TEST_ENTRY(glmc_vec4_minv)
  TEST_ENTRY(glmc_vec4_clamp)
  TEST_ENTRY(glmc_vec4_lerp)
  TEST_ENTRY(glmc_vec4_lerpc)
  TEST_ENTRY(glmc_vec4_mix)
  TEST_ENTRY(glmc_vec4_mixc)
  TEST_ENTRY(glmc_vec4_step_uni)
  TEST_ENTRY(glmc_vec4_step)
  TEST_ENTRY(glmc_vec4_smoothstep_uni)
  TEST_ENTRY(glmc_vec4_smoothstep)
  TEST_ENTRY(glmc_vec4_smoothinterp)
  TEST_ENTRY(glmc_vec4_smoothinterpc)
  TEST_ENTRY(glmc_vec4_cubic)
  TEST_ENTRY(glmc_vec4_swizzle)
  TEST_ENTRY(glmc_vec4_broadcast)
  TEST_ENTRY(glmc_vec4_fill)
  TEST_ENTRY(glmc_vec4_eq)
  TEST_ENTRY(glmc_vec4_eq_eps)
  TEST_ENTRY(glmc_vec4_eq_all)
  TEST_ENTRY(glmc_vec4_eqv)
  TEST_ENTRY(glmc_vec4_eqv_eps)
  TEST_ENTRY(glmc_vec4_max)
  TEST_ENTRY(glmc_vec4_min)
  TEST_ENTRY(glmc_vec4_isnan)
  TEST_ENTRY(glmc_vec4_isinf)
  TEST_ENTRY(glmc_vec4_isvalid)
  TEST_ENTRY(glmc_vec4_sign)
  TEST_ENTRY(glmc_vec4_abs)
  TEST_ENTRY(glmc_vec4_fract)
  TEST_ENTRY(glmc_vec4_hadd)
  TEST_ENTRY(glmc_vec4_sqrt)

  /* structs */
  TEST_ENTRY(mat3s_identity_init)
  TEST_ENTRY(mat3s_zero_init)
  TEST_ENTRY(mat4s_identity_init)
  TEST_ENTRY(mat4s_zero_init)
  TEST_ENTRY(quats_zero_init)
  TEST_ENTRY(vec3s_one_init)
  TEST_ENTRY(vec3s_zero_init)
  TEST_ENTRY(vec4s_black_init)
  TEST_ENTRY(vec4s_one_init)
  TEST_ENTRY(vec4s_zero_init)
};

#endif /* tests_h */
