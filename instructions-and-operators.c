/* A "C Program" is a set of instructions */

/* 
Types of instructions-

1. Type declaration instructions
2. Arithmetic instructions
3. Control instructions

*/

// 1) Type declaration instructions
/* 
Defining the type of a variable, like int a = 2 means a has an integer value of 2 and
float b = 2.5 means variable b has a floating value of 2.5 
*/


// 2) Arithmetic instructions
/* 
Arithmetic operators are "+", "-", "/", "%" and "*". Operands can be integet or float.
*/
int main(){
    int a = 1, b = 2;
    int z = a + b; // It's legal to write this way
    int z; a + b = z;    // It's NOT legal to write this way
    return 0;           //because right side will be evaluated first and program will find that z doesn't have a value.

}

/* 
" % " is called modulus that returns the remainder, it cannot be floating point numbers and
in the answer the sign will be the same as the numerator like  -5%2 will return -1.
*/

// * Exponentials
/* There is no operator to perform the exponentiation in C however, we can use "pow" instead. 
pow(x,y) means x is the base and y is the power. To write 2^3 we need to write pow(2,3) [2 cube]
It is from the library <math.h>, so before using pow we need to import the library.
*/
#include <math.h>  // import the math library
int main(){
    int a = pow(2,3);
    return 0;
}

// *Control Instructions
/* 
Determines the flow of control in C program.
There are 4 types of control instructions in C program: 
1. Sequence control instruction
2. Decision control instruction (if/else decisions)
3. Loop  control instruction (related to loops)
4. Case control instruction (related to switch/case)
*/

/* 