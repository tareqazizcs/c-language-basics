/* Variables stores data values */

/* In C, there are different types of variables such as int, float, char */

/* int - stores integers (whole numbers), without decimals, Ex. 123 or -123
float - stores floating point numbers, with decimals, Ex. 19.99 or -19.99
char - stores single characters, Ex. 'a' or 'B'. (Char values are surrounded by single quotes) */

int myNum = 15;     //myNum variable has a value of 15

float myDecimalNumber = 9.99;   //myDecimalNumber variable has a value of 9.99

char myChar = 'a';      //myChar variable has a value of 'a'

/* Output */
int myNum = 15;
printf(myNum);  // Nothing happens

/* 
To see the output of this variables we have to use "format specifiers" 
to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function
*/

int myNum = 15;
printf("%d", myNum);  // Outputs 15