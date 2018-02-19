/* functions and function calls examples */

#include <iostream>
using namespace std;

int addition(int a, int b)
{

    int r;
    r = a + b;

return r;

}

int subtraction(int c, int d)
{
    int s;
    s = c - d;

    return s;

}

//void function

void printmessage()
{
    cout <<"I'm a function!";
}

int main(){

int c;

c = addition(5,3);  // call to addition

cout <<" the result of adding 3 and 5 is "<<c;



int x=5, y=3, z;
//multiple calls to subtraction
  z = subtraction (7,2);
  cout << "The first result is " << z << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z= 4 + subtraction (x,y);
  cout << "The fourth result is " << z << '\n';

  printmessage(); // call to void function declared earlier

}
