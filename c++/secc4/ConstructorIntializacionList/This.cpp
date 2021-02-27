#include <iostream>
#include "Person.h"
#include "Person.cpp"
using namespace std;

int main() {

	Person person1;
	Person person2("Leonardo ", 20);
	Person person3("Danie ", 35);

	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;

	cout << endl;
	string convPerson2= person2.toString();
	cout << "Person 2: " << convPerson2 << endl;

	string convPerson3= person3.toString();
	cout << "Person 3: " << convPerson3 << endl;

	return 0;
}
