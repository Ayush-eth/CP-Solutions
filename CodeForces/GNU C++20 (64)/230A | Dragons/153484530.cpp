#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    ll s,n;
    
    in s>>n;
    ll a =s;
 
    vector <pair<int,int > >arr;
    ll sd=0;ll b=0;
    for(ll i=0;i<n;i++){
        ll temp1; in temp1;
        ll temp2; in temp2;
        arr.pb(make_pair(temp1,temp2));
    }
    sort(arr.begin(), arr.end());
    for (ll i=0;i<n;i++){
        if(s<=arr[i].first){
            out "NO"<<endl; 
            return 0; 
        }
        else s= s+arr[i].second;;
    }
    
    out "YES"<<endl;
    
 
}
 