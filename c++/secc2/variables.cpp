#include<iostream>
using namespace std;

int main(){
	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;
	cout << "Cats: "<< numberCats << endl;
	cout << "Dogs: "<< numberDogs << endl ;
	cout << "Total number of animals: " << numberAnimals << endl;
	cout << "New Dog adquiered; " << endl;
	numberDogs++;
	cout << "New number of dogs: " << numberDogs << endl; 
	return 0;

}
