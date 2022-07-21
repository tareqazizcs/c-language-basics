/* 
An arithmetic operation between
    * Int and Int will return Int
    * Int and Float will return Float
    * Float and Float will return Float

    When writing the program the format specifier should be written accordingly.
*/
int main(){
    int a = 3.5; // Here a will become 3, it will be demoted to 3,because int a is not able to store a floating point number.
    return 0;
}
/*----------------------------------------------------------------*/
int main() {
    int number1 = 5;
    int number2 = 2;
    printf("The division of number1 and number2 is %f", number1/number2); // Format specifier has to be %f, not %d. Because the result will be float.
    return 0;
}

/* wrong way */
int main() {
    int k = 3.0/9; // * here k will be demoted to 0, because k cannot store a float.
    printf("K is %d", k); // Output- K is 0.
    return 0;
}
/* correct way */
int main() {
    float k = 3.0/9;
    printf("K is %f", k); // Output- K is 0.333333.
    return 0;
}