#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll n,a,b;cin>>n>>a>>b;
        string str;cin>>str;
        ll m = unique(str.begin(), str.end()) - str.begin();
        cout << n * a + max(n * b, (m / 2 + 1) * b) << endl;
 
    }
}