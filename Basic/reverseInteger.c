#include <stdio.h>

int main(void)
{
  int num, rev;
  printf("Please enter an integer with multiple digits.\n");
  scanf("%i", &num);

do  {
    rev = num % 10;
    num = num / 10;
    printf("%i", rev);
  } while (num > 0);

  printf("\n");

  return 0;
}
