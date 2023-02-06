/*

Create a class person having members name and age. Derive a class student having 
member percentage. Derive another class teacher having member salary. Write necessary 
member function to initialize, read and write data. Write also Main function (Multiple
Inheritance)

*/

#include <iostream>

using namespace std;

class Person
{

public:


  string name;
  int age;


};

class Student
{

public:

  float percentage;


};

class Teacher:public Person, public Student
{

public:

  int salary;

  void getData ()
  {

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Age: ";
    cin >> age;

    cout << "Enter Student Percentage: ";
    cin >> percentage;

    cout << "Enter Teacher Salary: ";
    cin >> salary;

  }


  void display ()
  {

    cout << endl << "------Display Data------" << endl << endl;

    cout << "Student name is: " << name << endl;
    cout << "Student age is: " << age << endl;
    cout << "Student percentage is: " << percentage << endl;
    cout << "Teacher salary is: " << salary << endl;

  }


};


int main ()
{
  Teacher obj;

  obj.getData ();
  obj.display ();

  return 0;
}


