#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
 
#define pb push_back
 
int main(){
    ll n;in n;
    ll arr[n][2];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
 
    ll sum1=0;
    ll sum2 =0;
     ll count =0;
    for(ll i=0;i<n;i++){
        sum1 =sum1 +arr[i][0];
        sum2 =sum2 +arr[i][1];
    }
    if(sum1==0 and sum2==0){
        cout<<0<<endl;
    }
    else if(sum1==sum2){
        if(sum1==n and sum2==n){
            cout<<0<<endl;
        }
        else if(sum1==0 and sum2==0){
            cout<<0<<endl;
        }
        else if(sum1==n){
            cout<<n<<endl;
        }
        else{
            cout<<2*(n-sum1)<<endl;
        }
    }
    else if(sum1+sum2==(2*n)-1 or sum1+sum2==1){
            cout<<1<<endl;
        }
    
 
 
   else{
        if(sum1<sum2){
            for(ll i=0;i<n;i++){
                if(arr[i][0]==1){
                    count++;
                }
                if(arr[i][1]==0){
                    count++;
                }
            }
        }
        else {
            for(ll i=0;i<n;i++){
                if(arr[i][0]==0){
                    count++;
                }
                if(arr[i][1]==1){
                    count++;
                }
            }
        }
        cout<<count<<endl;
   }
 
 
 
}