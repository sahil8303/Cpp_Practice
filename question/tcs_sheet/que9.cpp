#include<bits/stdc++.h>
using namespace std;



int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int>arr;
    int num;
    while(ss>>num){
        arr.push_back(num);

    }
    int sum=0;
    for(auto it:arr){
        sum+=it;
    }
    double avg=(double)sum/arr.size();
    double sd=0;
    for (auto it : arr){
        sd += (it - avg) * (it - avg);
    }
    

    sd = sqrt(sd / arr.size());

    cout<<"The standard deviation is "<<fixed<<setprecision(2)<<sd;

}