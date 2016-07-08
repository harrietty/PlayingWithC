#include <stdio.h>

/*
  This program finds the greatest common divisor of two numbers.
  From Programming in C by Stephen G. Kochan
*/

int main(void)
{
  int a, b, temp, lg, sm;
  printf("Please enter two non-negative integers.\n");
  scanf("%i%i", &a, &b);

  if (a == b)
  {
    printf("Greatest common divisor is %i\n", a);
  } else {
    if (a > b)
    {
      lg = a;
      sm = b;
    } else {
      lg = b;
      sm = a;
    }
    while (sm > 0)
    {
      temp = sm;
      sm = lg % sm;
      lg = sm;
    }

    printf("The largest common divisor is %i\n", temp);
  }

  return 0;
}
