#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string element;
    getline(cin,element);
    stringstream ss(element);
    int num;
    int sum=0;
    int len=0;
    while(ss>>num){
        sum+=num;
        len++;
    }
    int sum2=((n)*(n+1))/2;

    cout<<sum2-sum<<endl;
}