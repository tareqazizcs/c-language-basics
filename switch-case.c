/* Switch Case statements are used when program has to make a choice between the alternatives for a given variable */
#include <stdio.h>

int main(){
    int age = 35;
    switch(age)
    {
    case 25:
        printf("The age is 25");
        break;
    case 30:
        printf("The age is 30");
        break;
    case 35:
        printf("The age is 35");
    default:               // if the variable age does not satisfy any condition (case) then it will be executed.
        break;
    }
}