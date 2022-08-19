#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    ll n; in n;
    ll arr[n][3];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    ll sum=0;
    ll count=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            sum = sum +arr[i][j];
            
        }
        if(sum>=2){
            count++;
            sum=0;
        }
        else sum=0;
        
    }
    cout<<count<<endl;
}