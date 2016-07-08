#include <stdio.h>

/*
  This program prints text to the console
  From Programming in C by Stephen G. Kochan
*/

int main(void)
{
  int wholeNumber = 149;
  int negNumber = -999;
  float floatingVar = 5.33;
  float smallerFloat = 5.5f;
  double dblVar = 8.44e+11;
  _Bool boolVar = 0;
  char charVar = 'P';
  long int longNum = 2354553L;
  long long int extraLongNum = 8859438L;
  short int littleNum = 55;
  unsigned int posOnly = 985U;

  printf("In C, lowercase letters are significant.\n");
  printf("main is where program execution begins.\n");
  printf("Opening and closing braces enclose program statements in a routine.\n");
  printf("All program statements must be terminated by a semi-colon.\n");

  printf("The int type stores whole numbers such as %d and %d.\n", wholeNumber, negNumber);
  printf("The float %f is automatically a double.\n", floatingVar);
  printf("Unless specified as a smaller float with the f on the end, such as %f.\n", smallerFloat);
  printf("A double like %e can be twice as large as a normal number.\n", dblVar);
  printf("You can also have boolean variables which are only large enough to store a 1 or a 0, e.g. %i.\n", boolVar);
  printf("Single quotes must enclose a character variable such as %c.\n", charVar);
  printf("A long int such as %li is usually 32 bits wide.\n", longNum);
  printf("li prints a long int in decimal format: %li\n", longNum);
  printf("lo prints a long int in octal format: %lo\n", longNum);
  printf("lx prints a long int in hexadecimal format: %lx\n", longNum);
  printf("A long long int is 64 bits wide, e.g. %lli\n", extraLongNum);
  printf("A short int can contain as little as 16 bits, e.g. %hi\n", littleNum);
  printf("A short int in decimal, octal and hex: %hi, %ho, %hx\n", littleNum, littleNum, littleNum);
  printf("An unsigned int will only contain positive numbers, e.g. %u\n", posOnly);

  return 0;
}
