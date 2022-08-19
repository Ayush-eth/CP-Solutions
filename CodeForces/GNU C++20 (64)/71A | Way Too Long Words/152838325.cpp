#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    ll n; in n;
    vector<string>arr;
    for(ll i=0;i<n;i++){
        string str;in str;
        arr.pb(str);
    }
 
    for(ll i=0;i<n;i++){
        ll n=arr[i].length();
        if(n>10){
            cout<<arr[i][0]<<n-2<<arr[i][n-1]<<endl;
        }
        else{
            cout<<arr[i]<<endl;
        }
    }
}