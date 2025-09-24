#include <iostream>
using namespace std;
char ch='A';
int n=4;
int main() {
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<ch;
            
        }ch++;
        cout<<endl;
    }

    return 0;
}
