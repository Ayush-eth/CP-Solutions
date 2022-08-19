#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    ll n; in n;
    ll arr[n][2];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
 
    ll sum=0; ll tsum=0;
    for(ll i=0;i<n;i++){
       sum=sum +arr[i][1]-arr[i][0];
        if(sum>tsum){
            tsum=sum;
        }
        
    }
    cout<<tsum<<endl;
    
 
 
    return 0;
}