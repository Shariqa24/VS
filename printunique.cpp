#include <iostream>
using namespace std;

void uniqueelement(int arr[], int size) {
    for(int i=0; i<size; i++) {
        bool isunique = true;
        for(int j=0; j<size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isunique = false; 
                break;
            }
        }
        if(isunique) {
            cout << arr[i] << " " << endl;
        }
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 4, 5}; 
    int size = 6;
    uniqueelement(array, size);
    return 0;
}
