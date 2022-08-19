#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    ll t;cin>>t;
    
    while(t--){
        ll n;cin>>n;
        vector<ll>arr;
        for(ll i=0;i<n;i++){
            ll temp;cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        ll count_0=0;
        bool flag=false;
        for(ll i=0;i<arr.size();i++){
            if(arr[i]==0){
                count_0++;
            }
        }
        for(ll i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                flag=true;
                break;
            }
        }
        if(count_0>0){
            cout<<n-count_0<<endl;
        }
        else if(flag){
            cout<<n<<endl;
        }
        else cout<<n+1<<endl;
    }
}