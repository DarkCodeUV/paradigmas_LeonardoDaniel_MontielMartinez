#include <iostream>
using namespace std;

int main(){
	string animals[2][3] = {
		{"fox", "dog", "cat"},
		{"mouse", "squirrel", "parrot"}
	};

	cout << sizeof(string) << endl;

	int size = sizeof(animals)/sizeof(string);
	cout << "size: " << size << endl;

	cout << "renglon: " << sizeof(animals[0]) << endl;
	cout << "columna y renglon especifico: " << sizeof(animals[0][0]) <<endl;
	int rows = sizeof(animals)/sizeof(animals[0]);
	int cols = sizeof(animals[0])/sizeof(string);	

	cout << "rows: " << rows << endl;
	cout << "cols: " << cols << endl;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j< 3; j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	
	return 0;
}
