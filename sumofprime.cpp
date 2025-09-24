#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n = 10; 
    cout << "Sum of all prime numbers up to " << n << " is: " << sumOfPrimes(n);
    return 0;
}
