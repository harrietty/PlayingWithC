#include <stdio.h>
#define MILESTOKM 1.6

int main(void)
{
  float km;
  int miles;

  printf("|-----------------------------|\n");
  printf("|     MILES     |      KM     |\n");
  printf("|-----------------------------|\n");

  for (miles = 1; miles <= 20; miles++)
  {
    km = miles * MILESTOKM;
    printf("|     %2i    |     %6.2f     |\n", miles, km);
  }

  return 0;
}
