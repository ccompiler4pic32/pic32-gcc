/* { dg-do compile } */
/* { dg-options "-O2 -msse2" } */
/* { dg-require-effective-target sse2 } */

__float128 x, y;

__float128 test_1(void)
{
  return -x;
}

__float128 test_2(void)
{
  return __builtin_fabsq (x);
}

__float128 test_3(void)
{
  return __builtin_copysignq (x, y);
}

/* { dg-final { scan-assembler-not "call.*(neg|fabs|copysign)" } } */
