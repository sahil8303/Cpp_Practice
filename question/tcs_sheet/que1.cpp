#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 ||n%(i+2)==0){
            return false;
        }

    }
    return true;
}

int val(int num){
    int count=0;
    int i=1;
    while(true){
        if(isPrime(i)){
            count++;
            if(count==num){
                return i;
            }
            
        }
        i++;
    }
    return -1;
    

}
int main(){
    int num1,num2;
    cin>>num1>>num2;

    int a=val(num1);
    int b=val(num2);
    cout<<(a+b)-1;

}