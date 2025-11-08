#include<bits/stdc++.h>
using namespace std ;
int main()
{ 
//     int t;
//     cin>>t;
//     cin.ignore();
//     while(t--){
//         string s;
//         getline(cin,s);
//         cout<<s<<endl;
//     }
//    vector<int>arr(10);

//     sort(arr.begin(),arr.end(),greater<int>()); //descending order sort
    string str="abcdef";
    next_permutation(str.begin(), str.end());
    cout << str;

    // string str="34";
    // int num=10;

    // cout<<stoi(str)+num<<endl;

    // cout<<str+to_string(num)<<endl;
}