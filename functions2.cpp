/* function arguments passed by value and by reference */
#include <iostream>
using namespace std;


int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main()
/* passing arguments by value: any modification to the variables within the
    function does not affect the values of x and y outside it because x and y were
    themselves not passed to the function on the call, but only copies of their values at that moment */
{
    int c, x=5, y=3;
    c = addition (x,y);

    /* In certain cases, though, it may be useful to access an external variable from within a function.
    To do that, arguments can be passed by reference, instead of by value. For example, the function duplicate in this code duplicates the value of its three arguments,
    causing the variables used as arguments to actually be modified by the call.
    To gain access to its arguments, the function declares its parameters as references. In C++, references are indicated with an ampersand (&)
    following the parameter type, as in the parameters taken by duplicate in the example above */

  int x1=1, y1=3, z1=7;
  duplicate (x1, y1, z1);
  cout << "x1=" << x1<< ", y1=" << y1 << ", z1=" << z1;
  return 0;

  /*When a variable is passed by reference, what is passed is no longer a copy, but the variable itself, the variable identified by the function parameter, becomes somehow associated with the argument passed to the function, and
  any modification on their corresponding local variables
  within the function are reflected in the variables passed as arguments in the call.*/


}

