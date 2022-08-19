#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
int main(){
    ll m,n,a;
    cin>>m>>n>>a;
    ll ans = ((m+a-1)/a)*((n+a-1)/a);
    cout<<ans<<endl;
}