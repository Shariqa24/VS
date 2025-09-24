#include <iostream>
using namespace std;

int main() {
int x=10;
if( x>0 && (x & (x-1) )== 0){
    cout<<x <<"is a power of two"<<endl;
}else{

cout<<x<<" is not a power of two"<<endl;

}
    return 0;
}
