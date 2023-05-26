#include <stdio.h>

int main() {
    int x = 2, y = 3, z = 3, k = 1;
    // Question: 3x/y-z+k
    int result = 3*x/y-z+k;
    printf("Result is %d", result);
    //output - Result is 0
    return 0;
}

/* Here the fist priority is the * which is multiplication.
We know (* and /) these operators have the highest precedence, so it first calculates 3*x. Here there are 2 operators that have same priority so then it will check the associativity and it will calculate left to right(as both operators have the same priority)
Then it calculates the + and - 
.
*/


