#include <iostream>
using namespace std;



void fib_sequence_prod(int  array_length){


    int i;
    int fib_array[array_length];
    float prod =1;


    for (i=0; i <array_length; i++){

        if (i==0 ||i==1){
            fib_array[i] = 1;
            cout<<fib_array[i]<<" ";
            prod = prod*fib_array[i];
        }


            else {
                fib_array[i] = fib_array[i-1] + fib_array[i-2];
                prod = prod*fib_array[i];
                cout<<fib_array[i]<<" ";

            }




    }


cout<<'\n'<<"The product of the first twenty elements of the fibonacci sequence above is: "<<prod<<endl;

}



int main()
{


    fib_sequence_prod(20);




}
