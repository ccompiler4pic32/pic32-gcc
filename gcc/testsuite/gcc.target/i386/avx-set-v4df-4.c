/* { dg-do run } */
/* { dg-require-effective-target avx } */
/* { dg-options "-O2 -mavx" } */

#include "avx-check.h"

static __m256d
__attribute__((noinline))
foo (double x, int i)
{
  switch (i)
    {
    case 3:
      return _mm256_set_pd (x, 0, 0, 0);
    case 2:
      return _mm256_set_pd (0, x, 0, 0);
    case 1:
      return _mm256_set_pd (0, 0, x, 0);
    case 0:
      return _mm256_set_pd (0, 0, 0, x);
    default:
      abort ();
    }
}

static void
avx_test (void)
{
  double e = -3.234;
  double v[4];
  union256d u;
  int i, j;

  for (i = 0; i < ARRAY_SIZE (v); i++)
    {
      for (j = 0; j < ARRAY_SIZE (v); j++)
	v[j] = 0;
      v[i] = e;
      u.x = foo (e, i);
      if (check_union256d (u, v))
	abort ();
    }
}
