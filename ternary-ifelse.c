/* 
A short hand 'if else' can be written using the ternary operator. 
Syntax - 
condition ? expression-if-true : expression if-false
( ? and : are called ternary operators)
*/


#include <stdio.h>

int main(){
    int c = 6;
    int b = 8;
    int a = (c==b)? 5 : 7; // (if c==b then a will be 5 otherwise a will be 7)
    printf("Value of a is %d", a); // output - Value of a is 7.
    return 0;
}

// When condition is true-

#include <stdio.h>

int main(){
    int c = 6;
    int b = 6;
    int a = (c==b)? 5 : 7;
    printf("Value of a is %d", a);  // output - Value of a is 5.
    return 0;
}
