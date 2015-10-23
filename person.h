#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
string lname; // Person’s last name
string fname; // Person’s first name
public:
Person() {lname = " "; fname = " "; } // #1
Person(const string & fn, const string & ln)
	{
		lname = ln;
		fname = fn;
    };
void setname (string fn, string ln)
{
    lname = ln;
    fname = fn;
}
void Show ()
{
    cout << fname <<" " << lname;
}
void FormalShow()
{
     cout << lname << " " << fname;
}

};



#endif // PERSON_H_INCLUDED
