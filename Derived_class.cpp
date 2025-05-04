/*Create a base class Person with attributes name and age.
Derive a class Student from Person and add an additional attribute studentID.
Implement a method displayStudentInfo()in the Student class to display all details.*/

#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name="Tejas";
		int age=20;
};

class Student:public Person{
	public:
		string id="23UAM009";
		
		void displayStudentInfo(){
			cout<<"Name:"<<this->name<<endl;
			cout<<"Age:"<<this->age<<endl;
			cout<<"Student ID :"<<this->id<<endl;
		}
};

int main(){
	Student student;
	student.displayStudentInfo();
	return 0;
}
