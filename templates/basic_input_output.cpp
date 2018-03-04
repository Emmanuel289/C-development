// Basic Input/Output
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
//Standard output format (cout)
int x = 6;
cout << "Output sentence \n"; // prints Output sentence on screen
cout << 120<<'\n';               // prints number 120 on screen
cout << x<<'\n';                 // prints the value of x on screen

string Hello = "hello world";
cout << "Hello \n";  // prints Hello
cout << Hello<<'\n';    // prints the content of variable Hello and defaults to a new line

// Standard input format (cin)

double some_form_of_pi, radius, circle_area, a, b;

cout <<"Please enter a value for some_form_of_pi " ;  // prompt the user to enter the value of pi;

cin >> some_form_of_pi;  // user enters the value at the command prompt or some form of input/output screen

cout<< "the value of pi entered is: "<< some_form_of_pi<<endl;  // the entered value is displayed.


cout << "Please enter the radius of your circle: ";

cin >> radius;

circle_area = some_form_of_pi * pow(radius,2);

cout <<"The area of your circle is: "<<circle_area<< '\n';





}
