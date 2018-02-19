/* Overloads and Templates
 two different functions can have the same name if their parameters are different;
 either because they have a different number of parameters, or because any of their parameters are of a different type */
#include <iostream>
using namespace std;

int operate (int a, int b)
{
  return (a*b);
}
double operate (double a, double b)
{
  return (a/b);
}


//function templates: overloaded functions may have the same definition/body and differ only in the
//parameter types. for example

int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.0;
  cout << operate (x,y) << '\n';
  cout << operate (n,m) << '\n';
  return 0;
}
