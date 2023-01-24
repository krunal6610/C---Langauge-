/*

Write a Program of Two 1D Matrix Addition using Operator Overloading

*/

#include <iostream>

using namespace std;

class A
{

public:



  int a[1][2], sum[1][2];

  void getData ()
  {


    for (int i = 0; i < 1; i++)
      {

	for (int j = 0; j < 2; j++)
	  {

	    cout << "enter elements: ";
	    cin >> a[i][j];


	  }
	  
    }

    cout << endl;

  }




  A operator+ (A x)
  {

    for (int i = 0; i < 1; i++)
      {

	for (int j = 0; j < 2; j++)
	  {

	    sum[i][j] = x.a[i][j] + a[i][j];
	    cout << sum[i][j] << " ";


	    }

	cout << endl;
      }



    return x;
  }


};


int main ()
{

  A obj1, obj2, sum;


  obj1.getData ();
  obj2.getData ();

  sum = obj1 + obj2;

  return 0;
}

