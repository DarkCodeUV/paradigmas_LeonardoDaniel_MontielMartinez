#include <iostream>

using namespace std;

void showMenu(){
    cout << "1. Search " << endl;
    cout << "2. View Record " << endl;
    cout << "3.-Quit " << endl;
}

void processSelection(){
    
    cout << "Enter selection: " << endl;

    int input;
    cin >> input;

    switch (input){

        case 1:
            cout << "Searching ..." << endl;
        break;

        case 2:
            cout << "viewing ..." << endl;
        break;

        case 3:
            cout << "Quitting..." << endl;
        break;

        default:
            cout << "please select on item from the menu" << endl;
    }
}

int main(){

    showMenu();
    processSelection();
    
    return 0;
}