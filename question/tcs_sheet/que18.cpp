#include<bits/stdc++.h>

using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    int num;
    vector<int>arr;
    while(ss>>num){
        arr.push_back(num);
    }
    vector<int>ans;
   ans.push_back(arr[0]);
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=ans.back()){
            ans.push_back(arr[i]);
            k++;
        }
    }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
}