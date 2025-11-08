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

    int i=0,j=arr.size()-1;
    int mid=0;
    while(mid<=j){
        if(arr[mid]==3){
            swap(arr[i],arr[mid]);
            i++;
            mid++;
        }
        else if(arr[mid]==7){
            swap(arr[j],arr[mid]);
            j--;
           
        }
        else{
            mid++;
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}