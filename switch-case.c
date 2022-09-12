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
/* the "break" statement is necessary, otherwise once it meets the condition then it will print everything below that */

int main(){
    int age = 35;
    switch(age)
    {
    case 31:
        printf("The age is 31");
        break;
    case 32:
        printf("The age is 32");
    default: 
        printf("The age is not specified"); // Here this line will be executed as conditions dont match.            
        break;
    }
}