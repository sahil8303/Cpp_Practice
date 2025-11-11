#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int pro=1;
    for(int i=1;i<=n;i++){
       pro=pro*i;
    }
    return pro;
}
int main(){
    string str;
    cin>>str;
    unordered_map<char,int>freq;
    for(auto it:str){
        freq[it]++;
    }
    int pro=1;
    for(auto it:freq){
        pro=pro*fact(freq[it.first]);
    }
    cout<<(fact(str.size())/pro);

}