#include <stdio.h>

main(){
  #define  LOWER  0	/* lower limit of table */
  #define  UPPER  300   /* upper limit of table */
  #define  STEP   20    /* step size */ 

  for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP){
    printf("%3d %6.2f\n", fahr, (5.0/9.0)*(fahr-32));
  }

}
