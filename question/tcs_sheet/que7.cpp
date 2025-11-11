#include<bits/stdc++.h>
using namespace std;
//Map me se max kese nikalte he

int main(){
    int n;
    cin>>n;
    unordered_map<int,int>inmap;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        if(arr[i]<0){
            cout<<"Invalid"<<endl;
            return 0;
        }
        int diff=abs(arr[i-1]-arr[i]);
        inmap[diff]++;
    }
    int maxcount=0;
    int ans=-1;
    for(auto it:inmap){////
      if(maxcount<it.first){
          maxcount=it.first;
          ans=it.second;
      }
    }
    if(maxcount==1)cout<<"Non"<<endl;
    else{
        cout<<maxcount<<endl;
    }
    return 0;

}