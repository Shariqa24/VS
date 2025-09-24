#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int start = 0;
    int end = vec.size() - 1;

    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

    
    cout << "Reversed vector is: ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
