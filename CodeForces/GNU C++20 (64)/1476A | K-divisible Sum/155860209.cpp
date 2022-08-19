#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        if (n==1){
            cout<<k<<endl;
        }
        else if(k==1){
            cout<<1<<endl;
        }
        else if(k>n){
            ll a = k/n;
            ll b = k%n;
            if(b!=0){
                a++;
            }
            cout<<a<<endl;
        }
        else if(n>k){
            ll c = n/k;
            ll d = n%k;
            if(d!=0){
                c++;
                k*=c;
            }
            ll a = k/n;
            ll b = k%n;
            if(b!=0){
                a++;
            }
            cout<<a<<endl;
        }
        else if(k==n) {
            cout<<1<<endl;
        }
    }
}