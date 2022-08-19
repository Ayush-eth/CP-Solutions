#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if (n%3==0){
            ll x=0;
            while(x<n){
                x=x+2;
                cout<<2;
                if(x<n){
                    x++;
                    cout<<1;
                }
            }
        }
        else if (n%3==1){
            ll x=0;
            while(x<n){
                x++;
                cout<<1;
                if(x<n){
                    x=x+2;
                    cout<<2;
                }
            }
        }
 
        else if (n%3==2){
            ll x=0;
            while(x<n){
                x=x+2;
                cout<<2;
                if(x<n){
                    x++;
                    cout<<1;
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}