#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;
    ll sx = 0,sy=0,sz=0;
    ll arr[n][3];
    for (ll i = 0;i<n;i++){
        for (ll j =0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for (ll i =0;i<n;i++){
        sx=sx+arr[i][0];
    }
    for (ll i =0;i<n;i++){
        sy=sy+arr[i][1];
    }
 
    for (ll i =0;i<n;i++){
        sz=sz+arr[i][2];
    }
    
    if (sx==0 && sy==0 && sz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
}