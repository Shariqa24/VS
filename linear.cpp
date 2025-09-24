#include <iostream>
using namespace std;
int linearsearch(int nums[],int size,int target){
    for(int i=0;i<size;i++){
        if(nums[i]==target){
            return i; 
        }
    }  return -1;
}
int main() {
    int nums[]={1,2,3,4,5};
    int size=5;
    int target=2;
    int result=linearsearch(nums,size,target);
    cout<<result<<endl;
    return 0;
    } 
    

