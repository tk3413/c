#include <stdio.h>
		
main() {
  double nc; 
  char c;
  
  while((c = getchar()) != EOF) {
    if(c == '\n' || 
       c == '\t' || 
       c == ' '){
       nc++;
    }
  }
 
  printf("%.0f\n", nc);
}
