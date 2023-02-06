/*

  program to find the multiplication values and the cubic values using inline function

*/

#include <iostream>

using namespace std;

class A
{


public:

  inline float mulFun (float x, float y)
  {


    return x * y;

  }

  inline float cubeFun (float x)
  {


    return x * x * x;

  }


};

int main ()
{
  A obj;

  float val1, val2, val3;

  cout << "------ Multiplication ------" << "\n\n";


  cout << ("enter the value [1]: ");
  cin >> val1;

  cout << ("enter the value [2]: ");
  cin >> val2;


  cout << "Multiplication is: " << obj.mulFun (val1, val2) << endl;

  cout << "\n\n" << "------ Cube ------" << "\n\n";

  cout << ("enter the value [3]: ");
  cin >> val3;
  cout << "Cube is: " << obj.cubeFun (val3) << endl;

  return 0;
}

