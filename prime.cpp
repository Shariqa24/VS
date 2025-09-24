#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=n;i++){
        if(n%2==0){
            return false;
        }
        return true;
    }

}
int main(){
    int num=34;
    if(isPrime(num)){
        cout<<num<<"is a prime number";
    }
    else{
        cout<<num<<"the number is not prime";
    }return 0;
    }
