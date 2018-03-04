#include <iostream>
using namespace std;

int main()
{
    int prime_num []=  {1,2,3,5,7,11,13,17,19,23,29};
    int i;
    int result =1;

    for (i = 0; i<5; ++i)
    {
        result = result * prime_num[i];
    }

    cout<<"The product of the first six prime numbers is: "<<result<<'\n';
}
