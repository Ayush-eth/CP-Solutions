#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll n;cin>>n;
    ll arr[n];
    if(n==1) cout<<-1<<endl;
    else if(n%2==1)cout<<-1<<endl;
    else{
        for (ll i=0;i<n;i++){
            arr[i]=i+1;    
        }
 
        for (ll i=0;i<n;i=i+2){
            ll b=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=b;
        }
        for (ll i=0;i<n;i++){
            cout<<arr[i]<<" ";    
        }
    }
}