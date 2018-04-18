#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/** syntax for defining a C++ data structure

struct type_name{

member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
.
.
.


 } object names;

 **/
struct phone{
	string model;
	string platform_version;
	int weight;  // weight in ounces
	double price; // price in CAD
};
phone iPhone;
phone Samsung;


 int main(){

iPhone.model = "X";
iPhone.platform_version = "11.3";
iPhone.weight = 5;
iPhone.price = 1200;

Samsung.model = "Note8";
Samsung.platform_version = "Android P";
Samsung.weight =  7;
Samsung.price = 1100;

string customer_choice;

cout<<"Please enter your choice of a smartphone with no spaces in between words." <<'\n';
cin>>customer_choice;

if (customer_choice == iPhone.model){
    cout << "We have that in stock, it'll be "<<iPhone.price<< " CAD for an iPhone X." <<'\n';
}
else if (customer_choice == Samsung.model){
    cout <<"We have that in stock, it'll be "<<Samsung.price<< " CAD for a Samsung Galaxy Note 8."<<'\n';
}
else{
	cout<<"We are sorry we don\'t have that in stock this week. Please do return next week."<<'\n';
}
return 0;
}

