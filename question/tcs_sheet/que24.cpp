#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector<int>arr(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i == j) continue; 
            string str=to_string(arr[i])+to_string(arr[j]);
            if(stoi(str)>=x && stoi(str)<=y){
                count++;
            }
        }
    }
    if(count==0)cout<<"No valid pair";
    cout<<"Total number of Vliad pairs are "<<count;
}