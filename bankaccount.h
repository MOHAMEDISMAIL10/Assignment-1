#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED


#include <iostream>
using namespace std;

class bankaccount
{

    private:
         string number;
         string name;
         double balance  ;
    public:

bankaccount(string na ,string no ,double ba )
 {
     name = na ; number=no ; balance =ba ;
 }
  double get_balance()
  {
      return balance;
  }
 string get_name()
  {
  return name ;
  }
 void set_balance(double b)
  {
      balance=b ;
  }
  void set_name(string a)
   {
       name=a;
   }
void deposit(double  b)
{
balance=balance+b ;
}
 void withdraw(double  b)
 {
     balance=balance-b;
 }



};


#endif // BANKACCOUNT_H_INCLUDED
