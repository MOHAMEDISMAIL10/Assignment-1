#include <iostream>
#include "bankaccount.h"
using namespace std;

int main()
{
    bankaccount mohamed ("mohamed","AA09021993",5000); // creating object and initialize it
   string test_name=mohamed.get_name() ; // getting object name
   double test_balance=mohamed.get_balance() ; // getting object balance
   cout<<test_name<<endl<<test_balance<<endl;
   mohamed.deposit(1000.0);     // depositing
   cout<<mohamed.get_balance()<<endl;
   mohamed.withdraw(2000.0); // withdrawing
   cout<<mohamed.get_balance()<<endl;
   mohamed.set_balance(2000);          // set balance
   cout<<mohamed.get_balance()<<endl;
   mohamed.set_name("mohamed ismail");    // set name
   cout<<mohamed.get_name()<<endl;

    return 0 ;
}
