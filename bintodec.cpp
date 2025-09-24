#include<iostream>
using namespace std;
int binarytodec(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
        int rem= binNum%10;
        ans+=(binNum*pow);
         binNum=binNum/10;
         pow=pow*2;
        
    }return ans;

}int main(){
    int binNum=101;
    cout<<binarytodec(binNum)<<endl;
    return 0;
}