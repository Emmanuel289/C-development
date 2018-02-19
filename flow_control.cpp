/* Flow Control */
#include <iostream>
using namespace std;

// if + else structure
int main()
{
int x = 55;

if (x > 0)
    cout << "x is positive \n" ;
else if (x < 0)
    cout << "x is negative \n" ;

else
    cout << "x is 0";

    //Iteration statements (loops)

    // while loop
    int n = 10 ;

    while(n>0)
    {
        cout <<n<<",";
        --n;

    }
    cout << "liftoff!\n";

    //do-while loop

    string str;

    do {
            cout << "Enter text: ";
            getline (cin,str);
            cout << "You entered: " << str << '\n';

  } while (str != "goodbye");

  // countdown using a for loop
  for (int n=10; n>0; n--) {
        cout << n << ", ";
  }
        cout << "liftoff!\n";

   // range based for loop. Syntax: for ( declaration : range ) statement;

  /* string str = "Hello!";
  for (char c : str)
  {
    cout << "[" << c << "]";

  }
    cout << '\n';
*/

 // Jump statements

 // break loop example


 for (int n=10; n>0; n--)
  {
    cout << n << ", ";
    if (n==3)
    {
      cout << "countdown aborted!";
      break;
    }
  }

  // the continue statement

  for (int n=10; n>0; n--) {
    if (n==5)
        continue;  //skips the point  in the iteration where n is 5 and continues to the next statement
    cout << n << ", ";
  }
  cout << "liftoff!\n";

  // The goto statement
  //goto allows to make an absolute jump to another point in the program. This unconditional jump ignores nesting levels, and does not cause any automatic stack unwinding.
  //Therefore, it is a feature to use with care, and preferably within the same block of statements, especially in the presence of local variables.

  int n=10;
  mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";


  /* selection statement: switch
 The purpose of the switch statement is to check for a value among a number of possible constant expressions.
 It is something similar to concatenating if-else statements, but limited to constant expressions. Its most typical syntax is:
     switch (expression)
{
  case constant1:
     group-of-statements-1;
     break;
  case constant2:
     group-of-statements-2;
     break;
     default:
     default-group-of-statements
}

*/
 // switch example

switch (x) {
  case 1:
    cout << "x is 1";
    break;

  case 2:
    cout << "x is 2";
    break;
  default:
    cout << "value of x unknown";
  }


  //continuous execution  of switch statements without breaks

  switch (x) {
  case 1:
  case 2:
  case 3:
    cout << "x is 1, 2 or 3";
    break;
  default:
    cout << "x is not 1, 2 nor 3";
  }



}


