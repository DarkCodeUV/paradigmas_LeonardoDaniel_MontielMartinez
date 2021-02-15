#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	float fvalue = 123.456789;
	cout << "Sizeof float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fvalue << endl;

	double dvalue = 123.456789;
	cout << setprecision(20) << fixed << dvalue << endl;

	long double lvalue = 123.456789876543210;
	cout << setprecision(20) << fixed << lvalue << endl;
	cout << "Sizeof long double: " << sizeof(lvalue) << endl;

	return 0;

}
