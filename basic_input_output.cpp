// Basic Input/Output
#include <iostream>
using namespace std;

int main()
{
//Standard output (cout)
int x =6;
cout << "Output sentence \n"; // prints Output sentence on screen
cout << 120<<'\n';               // prints number 120 on screen
cout << x<<'\n';                 // prints the value of x on screen

string Hello = "hello world";
cout << "Hello \n";  // prints Hello
cout << Hello<<'\n';    // prints the content of variable Hello

// Standard input (cin)

double some_form_of_pi, a, b;

cout<<"Please enter a value for some_form_of_pi" ;  // prompt the user to enter the value of pi;

cin >> some_form_of_pi;  // user enters the value at the command prompt or some form of input/output screen

cout<< "the value of pi entered is: "<<some_form_of_pi;  // the entered value is displayed.


cin >> a >> b;  //Extractions on cin can also be chained to request more than one datum in a single statement:


}
