#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {1, -15, 22, 23, 9, 5};
    int size = 6;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
       largest=max(nums[i],largest);
        }
    
cout << "largest: " << largest << endl;
return 0;
}
