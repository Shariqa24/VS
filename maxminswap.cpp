#include <iostream>
using namespace std;

void maxminswap(int arr[], int size) {
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    maxminswap(arr, size);
    return 0;
}