/* To execute code based on condition we use if-else condition */

#include <stdio.h>

int main() {
  int a = 3;
  if(a < 4){
    printf("a is less than 4"); 
  } else{
    printf("a is not less than 4"); // else block is not necessary
  }
  return 0;
} // Outpur - a is less than 4.

/*-------------------------------*/

int main() {
  int a = 5;
  if(a = 4){
    printf("a is equal to 4"); 
  } else{
    printf("a is not equal to 4, a is equal to 5"); // else block is not necessary
  }
  return 0;
} // Outpur - a is not equal to 4.