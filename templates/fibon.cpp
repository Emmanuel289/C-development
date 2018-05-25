#include <iostream>
using namespace std;



void fib_sequence_prod(int  array_length){


    int i;
    int fib_array[array_length];
    double prod =1;


    for (i=0; i <array_length; i++){

        if (i==0 ||i==1){
            fib_array[i] = 1;
			prod = prod*fib_array[i];
        }


            else {
                fib_array[i] = fib_array[i-1] + fib_array[i-2];
                prod = prod*fib_array[i];
                

            }




    }

cout<<"The length of the array is: "<<array_length<<'\n';
cout<<'\n'<<"The product of the first "<<array_length <<" elements of the fibonacci sequence above is: "<<prod<<endl;

}



int main()
{

int length;
cout <<"Enter the length of the array of numbers"<<'\t'; 
cin>>length;

    fib_sequence_prod(length);




}
