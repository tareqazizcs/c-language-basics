/* C operators are one of the features in C which has symbols that can be used to perform mathematical, relational, bitwise, conditional, or logical manipulations. 
The C programming language has a lot of built-in operators to perform various tasks as per the need of the program. */

Operator	        Name	                    Example	
==	                Equal to    	            x == y	
!=	                Not equal	                x != y	
>	                Greater than                x > y	
<	                Less than	                x < y	
>=	                Greater than or equal to	x >= y	
<=	                Less than or equal to	    x <= y

/* Logical operators are used to determine the logic between variables or values: */

Operator	      Name	                     Description	                                                Example
&& 	            Logical and	                 Returns true if both statements are true	                    x < 5 &&  x < 10	
|| 	            Logical or	                 Returns true if one of the statements is true	                x < 5 || x < 4	
!	            Logical not	                 Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)


//  ** Any non zero value is considered true. Eg-

if(a){
    printf("a is true"); 
} // Here a will be evaluated as true.