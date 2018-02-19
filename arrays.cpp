// Arrays
#include <iostream>
using namespace std;

#define WIDTH 1
#define HEIGHT 2

int num_array [] = {16, 2, 77, 40, 12071};
int n, result = 0;

int main()
{

    int foo[5];  //syntax for declaring an array. foo contains 5 integer elements
    int foo1 [5] = { 16, 2, 77, 40, 12071 };  // initializing the array
    int foo2 [] = { 16, 2, 77, 40, 12071 }; // can be initialized without specifying the number of elements in the array
    //int foo3[] { 16, 2, 77, 40, 12071 };  // another way of declaring and initializing without the need for the equal sign


    //Accessing the values of an array
    int foo3[] ={};
    foo3[2] = 75; //store the value 75 in the third element of foo
    int x = foo3[2]; // copy the third element of foo to the variable x

    cout <<x<<'\n';
    //array example using for loop

    for ( n=0 ; n<5 ; ++n )
  {
    result += num_array[n];
  }
  cout << result;


  //Multidimensional arrays
  int jimmy [3][5]; //bi-dimensional array of 3 per 5 elements of type int
  //int jimmy[15];  // equivalent to jimmy
  jimmy[1][3];  //reference the 2nd element vertically and the fourth element horizontally
  char century [100][365][24][60][60];  //higher dimensional arrays


  int emmirald [HEIGHT][WIDTH];
  int h,w;



    return 0;
}
