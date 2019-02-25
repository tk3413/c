#include <stdio.h>

void printHorizontalHistogram(int narray[]) {
  for(int i = 0; i < 10; i++) {
    printf("%d\t", i);
    for(int j = narray[i]; j > 0; j--) {
      printf("%c", '*');
    }
    printf("%c",'\n');
  }
}

void printVerticalHistogram(int narray[]) {
  int done = 0; 
  for(int i = 0; i < 10; i++) {
    printf("%d\t", i);
  }
  
  while(done != 1) {
      printf("%c", '\n');
      done = 1; 
    for(int i = 0; i < 10; i++) {
      if(narray[i] != 0) {
        printf("%c\t", '*');
        narray[i]--;
        done = 0;
      } else {
        printf("%c\t", ' ');
      }
    }
  }
  
  printf("%c", '\n');
}

main() {
  int nc, i;
  char c; 
  int narray[10];

  for(int i = 0; i < 10; i++) {
    narray[i] = 0;
  }

  while((c = getchar()) != EOF) {
    if((c == '\n') || (c == ' ') || (c == '\t') || (c == EOF)) {
      narray[nc]++;
      nc = 0; 
    } else {
      nc++; 
    }
  }

  narray[nc]++;

  printHorizontalHistogram(narray);
  printf("%c", '\n');
  printVerticalHistogram(narray);
}
