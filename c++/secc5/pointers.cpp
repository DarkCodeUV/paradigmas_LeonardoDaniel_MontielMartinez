#include <iostream>

using namespace std;

void manipulate(double *value){
	
	cout << "2.-value of double in manipulate: " << value << endl;
	*value = 10;
	cout << "3.-value of double in manipulate: " << value << endl;
}

int main(){

	int nValue = 8 ;
	int* pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "pointer to int address: " << pnValue << endl;
	cout << "int value via pointer: " << *pnValue << endl;
	
	cout << "=============" << endl;
	
	double dValue = 123.4;
	cout << "1.dvalue: " << dValue << endl;
	manipulate(&dValue);
	cout << "2. dValue: " << dValue << endl;
	
}
