/*

Define a class to represent lecture details. Include the following members and the program 
should handle at least details of 5 lecturer. 
Data members: Name of the lecturer Name of the subject Name of course Number of 
lecturers Data functions: To assign initial values to add a lecture detail to display name and 
lecture details.

*/

#include <iostream>
using namespace std;

class A
{

public:

  string lecturers_name[10], sub_name[10];
  int no_lecturers[10];

  void getData ()
  {

    cout << "------enter the following data: ------" << "\n\n";
    for (int i = 1; i <= 5; i++)
      {

	cout << "lecturer " << i << " :" << endl;
	cout << "enter the lecturer name: ";
	cin >> lecturers_name[i];


	cout << "enter the subject name: ";
	cin >> sub_name[i];

	cout << "enter the number of lectures: ";
	cin >> no_lecturers[i];

	cout << endl;


      }

  }

  void displayData ()
  {



    cout << "------following are the lectures details: ------" << "\n\n";
    for (int i = 1; i <= 5; i++)
      {

	cout << "lecturer " << i << " :" << endl;

	cout << "Lecture name is: " << lecturers_name[i];

	cout << endl;


	cout << "Subject name is: " << sub_name[i];

	cout << endl;

	cout << "Number of lectures: " << no_lecturers[i];

	cout << endl << endl;


      }


  }




};

int main ()
{

  A obj;
  obj.getData ();
  obj.displayData ();

  return 0;
}
