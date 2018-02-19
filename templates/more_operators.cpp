// relational, comparison, logical and conditional ternary operators
#include <iostream>
using namespace std;

int main()
{


//relational and comparison operators (==,!=, <, >, <=, >=)
int a, b, c;
a = 2;
b = 3;
c = 6;

(a == 5) ;    // evaluates to false, since a is not equal to 5
(a*b >= c) ;  // evaluates to true, since (2*3 >= 6) is true
(b+4 > a*c);  // evaluates to false, since (3+4 > 2*6) is false
((b=2) == a) ;// evaluates to true


//logical operators (!, ||, &&)

!(5 == 5) ;  // evaluates to false because the expression at its right (5 == 5) is true
!(6 <= 4) ;  // evaluates to true because (6 <= 4) would be false
!true    ;   // evaluates to false
!false;  // evaluates to true


((5 == 5) && (3 > 6) ) ; // evaluates to false ( true && false )
( (5 == 5) || (3 > 6) );  // evaluates to true ( true || false )

//conditional ternary operator syntax: condition ? result1 : result2


7==5 ? 4 : 3 ;    // evaluates to 3, since 7 is not equal to 5.
7==5+2 ? 4 : 3;  // evaluates to 4, since 7 is equal to 5+2.
5>3 ? a : b   ;  // evaluates to the value of a, since 5 is greater than 3.
a>b ? a : b   ;  // evaluates to whichever is greater, a or b.


//comma operator ,
a = (b=3, b+2);  // 3 is first assigned to b and 5 (b + 2 ) is assigned to a



// Explicit type casting operator

int i;
float f = 3.14;
i = (int) f;   // i is assigned the value of 3, the integer part of f
i = (int)f;  // using the functional notation of the operator is equally valid
cout <<"the value of i is: "<<i<<'\n';

//sizeOf operator: This operator accepts one parameter, which can be either a type or a variable, and returns the size in bytes of that type or object
 int x = sizeof(a);

 cout<<"x is "<<x<<" bytes"<< '\n';




}
