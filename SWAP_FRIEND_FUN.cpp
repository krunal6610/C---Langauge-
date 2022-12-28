/*

Write a program to swap the two numbers using friend function

*/

#include <iostream>

using namespace std;

class A
{

private:

  int a = 5, b = 10, temp;

//public:


    friend void swapFun (A obj);


};

void swapFun (A obj)
{

  cout << "------ Before Swaping ------\n\n";

  cout << "a is: " << obj.a << endl;
  cout << "b is: " << obj.b << endl;
  cout << endl;

  cout << "------ After Swaping ------\n\n";

  obj.temp = obj.a;
  obj.a = obj.b;
  obj.b = obj.temp;


  cout << "a is: " << obj.a << " \nb is: " << obj.b;


}


int main ()
{


  A obj;

  swapFun (obj);

  return 0;
}
