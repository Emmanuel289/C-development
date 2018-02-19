//container library arrays
#include <iostream>
#include <array>  //array header has to be included for the library array
using namespace std;

//container library array

int main()
{
  array<int,3> myarray {10,20,30};  // the main difference between a container library array and the  language built-in array is the declaration
// int myarray[3] = {10,20,30}; // language built-in array
  for (int i=0; i<myarray.size(); ++i)
    ++myarray[i];  // syntax for accessing the elements of the container library array is the same with that of the built-in array

  for (int elem : myarray)
    cout << elem << '\n';
}

