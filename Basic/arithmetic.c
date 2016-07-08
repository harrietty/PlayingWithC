#include <stdio.h>

/*
  This program demonstrates some arithmetic opetations and type conversions in C.
  From Programming in C by Stephen G. Kochan.
*/

int main(void)
{
  float f1, f2 = 4.333, f4 = 5.7;
  int i1 = 450, i2, i4;
  char c = 'C';

  f1 = i1;    // int to float conversions
  printf("%i to float conversion: %f\n", i1, f1);

  i2 = f2;    // float to int conversion
  i4 = f4;
  printf("%f to int conversion: %i\n", f2, i2);
  printf("%f to int conversion: %i\n", f4, i4);

  float f3 = i1 / 100;
  printf("Integer %i / 100 and saved as float = %f\n", i1, f3);

  int i3 = i1 / 100;
  printf("Integer %i / 100 and saved as int = %i\n", i1, i3);

  float f5 = (float) i1 / 100;
  printf("Integer %i converted to float before / 100 = %f\n", i1, f5);

  int i5 = i1 % 13;
  printf("Use of Modulo: %i %% 13 = %i\n", i1, i5);

  // The increment and decrement operator
  int k = 4;
  ++k;
  ++k;
  --k;
  k++;
  k--;
  k++;
  printf("%d\n", k);

  // (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)

  float ans = (3.31 * 10e-8 * 2.01 * 10e-7) / (7.16 * 10e-6 + 2.01 * 10e-8);
  printf("Answer to (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8) is %g\n", ans);

  // Find next even common multiple
  int const a = 365;
  int const b = 7;
  int mul = a * b;
  while (mul % 2 != 0)
  {
    mul += mul;
  }
  printf("Next even multiple of %d and %d is %d\n", a, b, mul);

  int const e = 12565;
  int const d = 23;
  int mul2 = e * d;
  while (mul2 % 2 != 0)
  {
    mul2 += mul2;
  }
  printf("Next even multiple of %d and %d is %d.\n", e, d, mul2);

  int const f = 996;
  int const g = 4;
  int mul3 = f * g;
  while (mul3 % 2 != 0)
  {
    mul3 += mul3;
  }
  printf("Next even multiple of %d and %d is %d\n", f, g, mul3);
  return 0;
}
