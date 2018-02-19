//declaring constants by either giving a name to a constant value or by using pre-processor definitions (#define)

#include <iostream>
using namespace std;


#define pi 3.14519
#define newline '\n'  //option 1: using the preprocessor directive
/* const double pi = 3.14159;
   const char newline = '\n'; */  //option 2:  giving names to constant values

int main ()
{
  double r=5.0;               // radius
  double circle;

  circle = 2 * pi * r;
  cout << circle;
  cout << newline;
}
