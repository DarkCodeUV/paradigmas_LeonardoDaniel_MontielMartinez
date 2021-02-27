#include <iostream>
#include "Cat.h"
#include "Cat.cpp"
using namespace std;

int main() {
	cout << "Starting program, welcom ! ..." << endl;

	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending program ..." << endl;
	return 0;
}

