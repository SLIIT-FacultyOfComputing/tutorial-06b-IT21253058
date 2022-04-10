#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student::assignDetails(int m, char n[]){
  studentID = m;
  strcpy(name,n);
}

void Student::display(){
  cout << "Student ID : " << studentID <<endl;
  cout << "Name : " << name <<endl;
}
