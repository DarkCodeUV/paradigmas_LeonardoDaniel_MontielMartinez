#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed, wasted !!!!" << endl;
}

void Cat::speak() {
	if(happy) {
		cout << "Meouww!" << endl;
	}
	else {
		cout << "Ssssss!" << endl;
	}
}

