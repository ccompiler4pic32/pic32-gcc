/* Test the `vbslQp8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vbslQp8 (void)
{
  poly8x16_t out_poly8x16_t;
  uint8x16_t arg0_uint8x16_t;
  poly8x16_t arg1_poly8x16_t;
  poly8x16_t arg2_poly8x16_t;

  out_poly8x16_t = vbslq_p8 (arg0_uint8x16_t, arg1_poly8x16_t, arg2_poly8x16_t);
}

/* { dg-final { scan-assembler "((vbsl)|(vbit)|(vbif))\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
