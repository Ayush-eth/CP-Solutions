#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,B,x,y;
        cin>>n>>B>>x>>y;
        ll a1=0,a0=0,sum=0;
 
        for(ll i=0;i<n;i++){
            if((a1+x)>B){
                a1 = a1-y;
                sum=sum+a1;
                
            }
            else if ((a1-y)<B){
                a1=a1+x;
                sum=sum+a1;
                
            }
        }
        cout<<sum<<endl;
 
 
    }
}