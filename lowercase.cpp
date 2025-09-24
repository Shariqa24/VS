#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cout.flush(); 
    cin >> ch;

    if (ch >= 65 && ch <= 90) {
        cout << "Uppercase" << endl;
    } else {
        cout << "Lowercase" << endl;
    }

    return 0;
}