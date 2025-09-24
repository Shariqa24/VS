#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 4;
    bool found = false;

    for(int val : vec) {
        if(val == target) {
            found = true;   
            break;          
        }
    }

    if(found) {
        cout << "element found" << endl;
    } else {
        cout << "element not found" << endl;
    }

    return 0;
}
