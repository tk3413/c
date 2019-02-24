#include <stdio.h>

main() {
  char c; 
  long num_spaces; 

  num_spaces = 0; 

  while((c = getchar()) != EOF){
    if(c == ' '){
      num_spaces++;
      if(num_spaces == 1){
        putchar(c);
      }
    } else {
      putchar(c);
      num_spaces = 0;
    }
  }
}
