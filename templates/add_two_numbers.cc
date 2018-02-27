#include <iostream>
using namespace std;
int main(){
int a, b, sum, diff; //declare four int variables in memory
printf("Enter the first number please: ");
cin >>  a;  //enter the value of each variable
printf("Enter the second number please: ");
cin >>  b;
sum = a + b;  // compute the sum of the two inputed variables and save in the third
diff = a - b;  //compute the difference between the two inputed variables and save in the fourth.

printf("The sum and difference of both numbers are respectively: ");
cout << sum << ',';
cout << diff << '\n';

return 0;
}
