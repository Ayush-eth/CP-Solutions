#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define endl '\n'
 
int main(){
    ll n;cin>>n;
    string str; cin>>str;
    ll a=0;
    ll d =0;
    for(ll i=0;i<n;i++){
        if(str[i]=='A'){
            a++;
        }
        else d++;
    }
    if(a>d) cout<<"Anton"<<endl;
    else if(a<d) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    
}