#include <stdio.h>

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  printf(" C\tF \n-------------\n");
  celsius = upper;
  while(celsius >= lower) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius - step;
  }
}
