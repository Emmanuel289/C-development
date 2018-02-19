#include <iostream>
using namespace std;

/*Default values in parameters:
functions can also have optional parameters, for which no arguments are required in the call, in such a way that, for
example, a function with three parameters may be called with only two. For this, the function shall include a default value
for its last parameter, which is used by the function when called with fewer arguments. For example : */

int divide (int a, int b=2)
{
  int r;
  r=a/b;
  return (r);
}


/*Recursivity: the property that functions have to be called by themselves. It is useful for some tasks, such as sorting elements,
or calculating the factorial of numbers. For example, in order to obtain the factorial of a number (n!) the mathematical formula
would be:

n! = n * (n-1) * (n-2) * (n-3) ... * 1
More concretely, 5! (factorial of 5) would be:

5! = 5 * 4 * 3 * 2 * 1 = 120
And a recursive function to calculate this in C++ could be: */


long factorial (long a)
{
  if (a > 1)
   return (a * factorial (a-1));
  else
   return 1;
}

int main()
{
    cout <<divide(12)<<'\n'; // result is 6
    cout <<divide(20,4)<<'\n'; // result is 5
    //call to factorial
    long number = 12;
    cout << number << "! = " << factorial (number);
    return 0;


}



