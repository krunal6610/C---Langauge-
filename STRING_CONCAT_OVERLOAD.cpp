/*

Write a program of to concatenate the two strings using Operator Overloading.

*/

#include<iostream>
using namespace std;

class A
{

public:

  string val;

  void get (string x)
  {

    val = x;

  }

  A operator + (A obj)
  {

    obj.val = val + obj.val;

    return obj;

  }

  void display ()
  {

    cout << val;

  }




};

int main ()
{

  A obj1, obj2, obj3;
  obj1.get ("hello");
  obj2.get ("world");

  obj3 = obj1 + obj2;
  obj3.display ();


  return 0;


}

