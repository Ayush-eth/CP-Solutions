#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
  ll t; cin>>t;
  while(t--){
    ll n;cin>>n;
    ll arr[n][n];
    if(n==1){
      cout<<1<<endl;
    }
    else if(n==2){
      cout<<-1<<endl;
    }
    else{
      ll temp=1;
      for(ll i=0;i<n;i++){
        for(ll j=1;j<=n;j++){
 
          cout<<temp<<" ";
          temp+=2;
          if(temp>n*n){
            temp=2;
          }
        }
        cout<<endl;
      }
    }
  }
 
 
}