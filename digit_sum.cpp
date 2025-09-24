#include <iostream>
using namespace std;
int sum_of_digit(int num){
    int digit_sum=0;
    while(num>0){
        int last_Digit=num%10;
     num=num/10;
        digit_sum+=last_Digit;
    } return digit_sum;
}
int main() {
     cout<<"sum"<<sum_of_digit(2356)<<endl;
   
    return 0;
}
