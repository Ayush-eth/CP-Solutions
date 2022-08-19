#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    ll n;cin>>n;
    ll arr[n][n];
    ll t=1;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j+=2){
            
            arr[i-1][j-1]=t;
            arr[i-1][j+1-1]=n*n-t+1;
            t++;
        }
    }
 
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 
 
}