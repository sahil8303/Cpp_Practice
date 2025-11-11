#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    cin>>n;
    vector<vector<int>>arr(m,vector<int>(n));
    int ans=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            ans=min(ans,arr[i][j]);
        }
    }
    cout<<ans;
    
}