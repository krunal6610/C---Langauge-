/*

8. Assume a class cricketer is declared. 

Declare a derived class batsman from cricketer. 

Data member of batsman. Total runs, Average runs and best performance. 

Member functions input data, calculate average runs, Display data. 

(Single Inheritance) 

*/

#include <iostream>

using namespace std;

class cricketer
{

protected:

  int n, runs[100], tRuns = 0, avgRun, highestRun;
  string name;

};

class batsman:public cricketer
{


public:



  void inputData ()
  {



    cout << "enter Criceter name: ";
    cin >> name;
    cout << endl;
    cout << "enter total innings: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
      {

	cout << "enter innings " << i + 1 << " Run: ";
	cin >> runs[i];
	tRuns = runs[i] + tRuns;

      }

    // 10,15,2,35,45
    int max = runs[0];
    for (int i = 0; i < n; i++)
      {

	if (runs[i] > max)
	  {

	    max = runs[i];

	  }

      }

    avgRun = tRuns / n;
    highestRun = max;


  }

  void displayData ()
  {

    cout << endl;

    cout << "Name Of Batsman is: " << name << endl;
    cout << "Total Runs: " << tRuns << endl;
    cout << "Average Runs: " << avgRun << endl;
    cout << "Best performance is: " << highestRun << endl;

  }


};




int main ()
{

  batsman obj;

  obj.inputData ();
  obj.displayData ();

  return 0;
}

