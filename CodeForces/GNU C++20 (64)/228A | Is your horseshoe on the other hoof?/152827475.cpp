#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    set<ll>arr;
    for(ll i =0;i<4;i++){
        ll temp; in temp;
        arr.insert(temp);
    }
    ll count=arr.size();
    
 
 
 
    cout<<4-count<<endl;
}