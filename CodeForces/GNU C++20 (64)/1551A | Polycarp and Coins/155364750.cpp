#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll r = n/3;
        if(n%3==1){
            cout<<r+1<<" "<<r<<endl;
        }
        else if(n%3==2){
            cout<<r<<" "<<r+1<<endl;
        }
        else{
            cout<<r<<" "<<r<<endl;
        }
        
        
    }
}