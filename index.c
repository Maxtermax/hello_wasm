#include <stdio.h>

void print(char *t) {
   if (*t == '\0') return;
   printf("%c", *t);
   print(++t);
}

int sumar(int a, int b) {
  return a+b;
}



int main() {
  for(int i = 0; i < 10 ;i++) {
    printf("memory address of 'i' %pn \n ", &i);
  }
  return 0;
}