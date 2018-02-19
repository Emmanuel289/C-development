// assignment operator
#include <iostream>
using namespace std;

int main ()
{
  int a, b,x,y,z;         // a:?,  b:?
  a = 10;           // a:10, b:?
  b = 4;            // a:10, b:4
  a = b;            // a:4,  b:4
  b = 7;            // a:4,  b:7
  x = y = z = 5;    //x:5,y:5,z:5

  cout << "a:";
  cout << a << endl;
  cout << "b:";
  cout << b<< endl;
  cout << " x:"    << x << endl;
  cout  << " y:"    << y << endl;
  cout  << " z:"    << z << endl;

  // compound assignment operators
  int c, d=3;
  c = d;
  c+=2;             // equivalent to c=a+2
  cout << "the values of c and d are : " <<c<<" and " <<d<<" respectively"<< endl;

  //Increment and decrement operators (used as prefixes and suffixes)
int x1,y1,y2,z1,z2;
    x1 = 3;
    y1 = ++x1; //increment used as prefix:   x1 contains 4, y1 contains 4
    x1 = 3;
    y2 = x1++;  // increment used as suffix: x1 contains 4, y2 contains 3
    x1 = 3;
    z1 = --x1;  //decrement used as prefix:  x1 contains 2, z1 contains 2
    x1 = 3;
    z2 = x1-- ; // decrement used as suffix: x1 contains  2, z1 contains 3

    cout <<" x1: " <<x1<< " y1: "<<y1<<" y2: "<<y2<<" z1: ";
    cout<<z1<<" z2: "<<z2<<endl;

}
