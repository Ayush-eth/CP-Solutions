#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>arr;
        for(ll i=0;i<n;i++){
            ll temp;cin>>temp;
            arr.pb(temp);
        }
        ll sum =0;
        for(ll i=0;i<n;i++){
            sum=sum+arr[i]-1;
        }
        if((sum)%2==0)cout<<"maomao90"<<endl;
        else cout<<"errorgorn"<<endl;
    }
}