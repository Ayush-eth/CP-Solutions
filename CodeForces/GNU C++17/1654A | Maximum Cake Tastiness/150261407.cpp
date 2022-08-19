#include <bits/stdc++.h> 
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for (ll i=0;i<n;i++){
            cin>>arr[i];
        }
 
        sort(arr, arr+n, greater<int>());
        
        ll sum =0;
        for (ll i =0 ;i<2;i++){
            sum = sum + arr[i];
        }
        cout<<sum<<endl;
    }
}