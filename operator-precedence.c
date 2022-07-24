/* In C language simple mathematical rules are not applicable. */
// Qns. 3*x - 8*y, is it (3x)-(8y) or 3(x-8y)?

/* The answer to the above question is provided by operator precedence & associativity */

/*
 Priority                   operators
    1st                       (*), (/), (%)
    2nd                        (+), (-)
    3rd                         (=)
 */
 /* Operators of higher priority are evaluated first in absence of parenthesis.
    Parenthesis will be always evaluated first. */
 int main() {
    int a = 9+3*5-5;
    printf("Value of a is %d", a)
    return 0;}  // Output - Value of a is 19.

//If the qns is -
int main() {
    int a = 9/3*27-5;
    printf("Value of a is %d", a)
    return 0;} // Output - Value of a is 76
/* 

x*y / z => (x * y) / z
z/y * z => (x / y) *z
When the operators of equal priority are present in an expression, the tie is taken care of by associativity.
multiply and division follows left to right associativity. Left to right asspciation means it will evaluate the left expression first.
*/