/* To print a floatting number we need to use format specifier '%f' */
#include <stdio.h>

int main(){
    float a = 1.12;
    printf("The value of a is %f", a);

    return 0;
}

/* To print a character we need to use format specifier '%c' */

/* a char variable can only store 1 character */

#include <stdio.h>
int main(){
    char firstChar = 't';
    printf("The first character is %c", firstChar);

    return 0;
}

// Wthout format specifier these will not be printed.