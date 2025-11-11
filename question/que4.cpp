#include<bits/stdc++.h>
using namespace std;
int sumdig(int num){

    int sum=0;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    return sum;
}
bool isPrime(int num){
    int count=0;
    if(num==1 || num==0)return false;
    for(int i=2;i*i<=num;i++){
          if(num%i==0){
              count++;
          }
    }
    if(count<=1)return true;
    return false;
}
int main(){
        
    int n,m;
    cin>>n>>m;

    for (int i = n; i <=m; i++)
    {
        if(isPrime(i)){
            
            int sumdigit=sumdig(i);

            if(isPrime(sumdigit)){
                cout<< i<<" ";
            }
        }
    }
    

}