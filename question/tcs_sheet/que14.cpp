#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1)return false;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int nthPrime(int n){
    int count=0;
    int i=0;
    while(true){
          
        if(isprime(i)){
            count++;
            if(count==n){
                return count;
            }
           
        }
         i++;
    }
    return -1;
}
int main(){
    int m;
    int n;
    cin>>m>>n;

}