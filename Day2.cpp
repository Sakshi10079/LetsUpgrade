#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int number;
    
    cout << "Please entered number = ";
    cin >> number;
    
    if (number % 2 == 0) {
    cout << "Your number = " << number << endl;
    cout << "The number you entered is even.";
    } else {
    cout << "Your number = " << number << endl;
    cout << "The number you entered is odd.";
    }
    
	return 0;
}
