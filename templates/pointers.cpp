//Pointers
#include <iostream>
using namespace std;

int main(){
int myvar = 25;
int* foo = &myvar; // the ampersand (&)called the address-of-operator is used for the physical address of a variable in memory while the  deference operator(*) points to the address of the memory
int bar = myvar;

cout <<"myvar is "<<myvar<< '\n';
cout<<"myvar is stored in "<<foo<< '\n';


int baz1 = *foo;  // Read as baz equal to value pointed to by foo
int* baz2 = foo; //Read as baz2 is equal to the value of foo
cout <<"The value stored in "<<foo<<" is "<<baz1<< '\n';
cout <<"The value of "<<foo<<" is "<<baz2<< '\n';

char x= *foo == myvar;  // returns true so long as the address pointed to by foo remains unchanged
return x;

}
