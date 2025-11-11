#include <bits/stdc++.h>
using namespace std;

using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int>arr(m,0);
        for(int j=0;j<m;j++){
              cin>>arr[j];
        }
        if(i%2!=0)reverse(arr.begin(),arr.end());
        for(auto it:arr)cout<<it<<" ";
    }
}