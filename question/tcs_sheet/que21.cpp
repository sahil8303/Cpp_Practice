#include <iostream>
#include <numeric>  // ✅ Required for std::gcd
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long g = gcd(a, b);   // use std:: explicitly
    long long lcm = (a / g) * b;

    cout << lcm;
    return 0;
}
