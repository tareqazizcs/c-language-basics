/* To take an input from the user we use "scanf" function and 
it takes the format specifier(%d) and "&" + varialeName which is called "address of" */ 

#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a); // &a means address of a.
  return 0;
}