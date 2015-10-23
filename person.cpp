#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main ()
{
    Person one; // use default constructor
	Person two("mohamed",""); // use #2 with one default argument
	Person three("mohamed", "ismail"); // use #2, no defaults
one.Show();  // first name  last name
cout << endl;
one.FormalShow();   // last name first name
cout << endl;
two.Show();
cout << endl;
two.FormalShow();
cout << endl;
three.Show();
cout << endl;
three.FormalShow();
    return 0;
}
