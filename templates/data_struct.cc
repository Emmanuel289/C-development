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
	string model; // smartphone model
	string platform_version; // operating system platform and version tag
	int weight;  // weight in ounces
	double price; // price in CAD
};
phone iPhone;
phone Samsung;
phone Blackberry;


 int main(){
//objects of the previously declared struct and their associated members/properties
iPhone.model = "iPhoneX";
iPhone.platform_version = "11.3";
iPhone.weight = 5;
iPhone.price = 1200;

Samsung.model = "Note8";
Samsung.platform_version = "Android P";
Samsung.weight =  7;
Samsung.price = 1100;

Blackberry.model = "BlackberryZ10";
Blackberry.platform_version = " Android N";
Blackberry.weight = 6;
Blackberry.price = 600;

string customer_choice;
double customer_max_price;

cout<< "Please enter your maximum price."<<'\n';
cin>>customer_max_price;



	if ((customer_max_price < Samsung.price) && (customer_max_price <iPhone.price) && (customer_max_price < Blackberry.price)){

		cout<<"we are sorry, we do not have phones whose prices are less than "<<customer_max_price<<" CAD. Our minimum price is 600 CAD before tax "<<'\n';

	}

	else
	{

		cout<<"Please enter your model choice from any of the provided options with no spaces in between characters: (Note8, iPhoneX or BlackberryZ10)" <<'\n';
		cin>>customer_choice;

		if (customer_choice == iPhone.model){
    		cout << "We have that in stock, it'll be "<<iPhone.price<< " CAD for an iPhone X." <<'\n';
		}
		else if (customer_choice == Samsung.model){
    		cout <<"We have that in stock, it'll be "<<Samsung.price<< " CAD for a Samsung Galaxy Note 8."<<'\n';
		}
		else if(customer_choice == Blackberry.model){
			cout<<"We have that in stock, it'll be "<<Blackberry.price<<" CAD for a Blackberry Z10."<<'\n';

		}
		else{
			cout<<"We are sorry we don\'t have that in stock this week. Please do return next week."<<'\n';
		}
	}
	

return 0;
}




