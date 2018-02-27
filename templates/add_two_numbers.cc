#include <iostream>
using namespace std;
int main(){
int a, b, sum, diff; //declare four int variables in memory
cout << "Please enter the first number: ";
cin >>  a;  //enter the value of each variable
cout << "Please enter the second number: ";
cin >>  b;
sum = a + b;  //compute the sum of the two inputed variables and save in the third
diff = a - b; //compute the difference between the two inputed variables and save in the fourth.

cout << "The sum and difference of both numbers is respectively "<<sum << " and " <<diff << '\n';

return 0;
}
