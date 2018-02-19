//More on arrays
#include <iostream>
using namespace std;

//Arrays as parameters
void printarray (int arg[], int length)
{
  for (int n=0; n<length; ++n)
    cout << arg[n] << '';
  cout << '\n';
}

void procedure (int myarray[][3][4]); //syntax for function with multidimensional array as argument- the first  brackets are usually
//left empty while the following ones specify sizes for their respective dimensions. This is necessary in order for the compiler to be able to
//determine the depth of each additional dimension

int main()
{
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray(firstarray,3);
    printarray(secondarray,5);

}
