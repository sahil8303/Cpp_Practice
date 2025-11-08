#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    int num;
    unordered_map<int,int>freq;
    int count=0;
    while(ss>>num){
        freq[num]++;
        count++;
        
    }
    bool found=false;
    for(auto it:freq){
        if(it.second> count/3){
            cout<<it.first;
            found=true;
        }
    }
    if(!found){
        cout<<"No Majority Element";
    }
}