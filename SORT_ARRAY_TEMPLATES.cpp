/*

program of to sort the array using templates.

*/

#include <iostream>
#define N 5

using namespace std;


template < typename T > class A
{

public:

  T temp;

  T display (T arr[], int size)
  {

    for (int i = 0; i < size; i++)
      {

	cout << arr[i] << endl;


      }


    cout << endl << endl;	// 4 3 7 5 9
    for (int i = 0; i < 5; i++)
      {

	for (int j = i + 1; j < size; j++)
	  {

	    if (arr[i] > arr[j])
	      {

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	      }
	  }

	cout << arr[i] << endl;


      }

    cout << endl << endl;

    return 0;

  }


};

int main ()
{

  int arr[N] = { 4, 2, 7, 1, 9 };
  float arr2[N] = { 4.94, 2.42, 7.9, 1.3, 9.8 };
  char arr3[N] = { 'z', 'x', 'y', 'b', 'a' };

  A < int >obj;
  A < float >obj2;
  A < char >obj3;

  obj.display (arr, N);
  obj2.display (arr2, N);
  obj3.display (arr3, N);

  return 0;
}
