#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        if (a==0 and b==0){
            cout<<1<<endl;
        }
        else if(a==0){
            cout<<1<<endl;
        }
        else{
            ll c = a+(b*2)+1;
            cout<<c<<endl;
        }
    }
}