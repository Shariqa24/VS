#include <iostream>
#include <climits>
using namespace std;

int main() {
   int arr[]={1,2,3,4,5};
   int size=5;
  int maxSum = INT_MIN;
for(int start=0;start<size;start++){
    int currsum=0;
    for(int end=start;end<size;end++){
        currsum+=arr[end];
        maxSum = max(maxSum,currsum);
   }}
   cout<<"maximum saburray sum is "<< maxSum<<endl;
    

return 0;
}
