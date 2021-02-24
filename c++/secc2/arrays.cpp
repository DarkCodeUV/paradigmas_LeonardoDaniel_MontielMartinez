#include <iostream>

using namespace std;

int main() {


	cout << "Array of intergers" << endl;
	cout << "==================" << endl;
	
	int values[3];
	values[0] = 88;
	values[1] = 100;
	values[2] = 1;


	cout << values[0] << endl;
	cout << values [1] << endl;
	cout << values[2] << endl;

	cout << "Array of double" << endl;
	cout << "===============" << endl;
	
	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	for(int i = 0; i < 4; i++){

		cout << "Element of index " << i << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "=========================" << endl;
	
	int numberArray[8] = { };
	for(int i = 0; i < 8; i++){
	
		cout << "Element of index " << i << numbers[i] << endl;
	
	}


	string textArrays[] = {"fox","dog","cat" };

	for(int k = 0; k < 8; k++){

		cout << "Element of index " << textArrays[k] << endl;
	}

	

	
	return 0;
}
