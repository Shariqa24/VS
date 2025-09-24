#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {1, -15, 22, 23, 9, 5};
    int size = 6;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++) {
        //if (nums[i] < smallest) {
            //smallest = nums[i];
            smallest=min(nums[i],smallest);
        }
    
    cout << "Smallest: " << smallest << endl;
    return 0;
}
