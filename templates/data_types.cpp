// other data types
#include <iostream>
using namespace std;


int main()
{
//Type aliases syntax: typedef existing_type new_type;
//Examples
typedef char C;
typedef unsigned int WORD;
typedef char * pChar;
typedef char field [50];

C mychar, anotherchar, *ptc1;
WORD myword;
pChar ptc2;
field name;

// type aliases second syntax: using new_type_name = existing_type ;
//Examples
/* using C = char;
using WORD = unsigned int;
using pChar = char *;
using field = char [50];
*/


//Unions allow one portion of memory to be accessed as different data types

/* union type_name {
  member_type1 member_name1;
  member_type2 member_name2;
  member_type3 member_name3;



} object_names; */

union mytypes_t {
  char c;
  int i;
  float f;
} mytypes;


}
