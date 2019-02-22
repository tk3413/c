#include <stdio.h>

main() {
  int lower, upper, step;
  char fahrenheight, celsius;
  float fahr, cels;
  
  lower = 0;
  upper = 300; 
  step = 20; 
  fahrenheight = 'F';
  celsius = 'C';
  fahr = 0.0;

  printf("%3c %6c\n", fahrenheight, celsius);

  while (fahr <= upper) {
    cels = (5.0/9.0) * (fahr - 32.0); 
    printf("%3.0f %6.2f\n", fahr, cels);
    fahr += step; 
  }
 
  cels = 0.0; 
  fahr = 0.0;
  
  printf("%3c %6c\n", celsius, fahrenheight);
  while (cels <= upper) {
    fahr = ((cels*9.0)/5)+32.0;
    printf("%3.0f %6.2f\n", cels, fahr);
    cels += step; 
  }

}
