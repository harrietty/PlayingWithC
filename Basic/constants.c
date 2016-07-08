#include <stdio.h>
#define   VAT 0.20
#define   TIP 0.15

int main(void)
{
  float meal = 0, drinks, total;

  const float WINE = 4.5;
  const int BEER = 3;
  const float TEA = 1.8;
  const int COFFEE = 2;

  while (meal <= 0)
  {
    printf("Please enter the cost of the meal.\n");
    scanf("%f", &meal);
  }

  // Should be refactored into function
  printf("Number of teas:\n");
  scanf("%f", &drinks);
  meal += drinks * TEA;

  printf("Number of beers:\n");
  scanf("%f", &drinks);
  meal += drinks * BEER;

  printf("Number of wines:\n");
  scanf("%f", &drinks);
  meal += drinks * WINE;

  printf("Number of coffees:\n");
  scanf("%f", &drinks);
  meal += drinks * COFFEE;

  total = meal + (meal * VAT) + (meal * TIP);
  printf("The price before VAT and the tip is: %f\n", meal);
  printf("Total price is %f\n", total);

  return 0;
}
