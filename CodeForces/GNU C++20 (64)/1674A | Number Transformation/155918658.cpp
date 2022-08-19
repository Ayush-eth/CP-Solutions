#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
 
bool chk(ll x,ll y){
    ll q = y/x;
    if(q*x==y){
        return true;
    }
    return false;
}
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll x,y;cin>>x>>y;
        if(chk(x,y)){
            cout<<1<<" "<<y/x<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }
}