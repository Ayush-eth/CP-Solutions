#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        vector<ll>arr;
        for (ll i=0;i<n;i++){
            ll temp;cin>>temp;
            arr.push_back(temp);
        }
 
        sort(arr.begin(), arr.end(), greater<ll>());
        if(n==1){
            if(arr[0]>1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else if((arr[0]-arr[1])>1){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}