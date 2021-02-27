#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main() {

	Person person1;
	Person person2("Leonardo");
	Person person3("Daniel", 20);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
