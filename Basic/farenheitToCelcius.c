#include <stdio.h>

int main(void)
{
  int const plus = 32;
  float const multiplyBy = 1.8;
  float far;

  printf("|   Celcius   |   Farenheit   |\n");
  for (int cel = -10; cel < 40; cel++)
  {
    far = ((float) cel * multiplyBy) + plus;
    printf("|     %3i     |     %6.2f     |\n", cel, far);

    // %3i ensures the number takes up 3 columns (right justified)
    // %6.2f ensures 6 cols and 2 decimal points are displayed
  }

  return 0;
}
