#include <iostream>
using namespace std;

void harmonic_mean(int num_array[], int array_length){
	int i;
	double denominator = 0;

	for (i==0; i<array_length; i++)
  {
      denominator +=(double)1/num_array[i];
  }
    double ha_mean = array_length/denominator;
    cout << "The harmonic mean of the numbers is " <<ha_mean<< '\n';
}


int main(){

int length;
int k;
cout <<"Enter the length of the list of numbers: ";

cin>> length;
int list_num[length];


cout<<"Enter the numbers, one at a time: "<<'\n';

for (k==0; k<length; ++k)
{
  cin>>list_num[k];
}


harmonic_mean(list_num,length);


return 0;

}
