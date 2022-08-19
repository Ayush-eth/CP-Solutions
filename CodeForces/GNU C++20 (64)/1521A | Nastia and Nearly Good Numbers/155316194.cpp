#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
        }
    }
}