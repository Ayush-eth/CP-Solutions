#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
void primeseive(ll n,ll a,ll m){
    vector<ll>arr;
    ll prime[100]={0};
    for(ll i=2;i<=n;i++){
        if(prime[i]==0){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++){
        if(prime[i]==0){
            arr.push_back(i);
        }
    }
    bool d =false;
    for(ll i =0;i<=arr.size();i++){
        if (arr[i]==a and arr[i+1]==m){
            d = true;
            break;
        }
    }
    if(d){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
 
 
}
 
int main(){
    ll n=50,a,m;cin>>a>>m;
    primeseive(50,a,m);
}