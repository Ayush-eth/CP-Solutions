#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    ll n;in n;
    vector<ll>arr;
    for(ll i=0;i<n;i++){
        ll temp;in temp;
        arr.pb(temp);
    }
    ll max=arr[0];ll min=arr[0];ll count=0;
    for(ll i=0;i<n;i++){
        if ( max<arr[i] ){
            max=arr[i];
            count++;
        }
        
    }
 
    for(ll i=0;i<n;i++){
        if ( min>arr[i] ){
            min=arr[i];
            count++;
        }
        
    }
    cout<<count<<endl;
}