/**
 *    author:  _Adam
 *    created: 04.04.2022 1:07:15       
**/
 
 
#undef _GLIBCXX_DEBUG
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define pb push_back
#define vii vector<int64_t>
#define vc vector<char>
#define si set<int>
#define mii map<int, int>
#define pqMax priority_queue<int>
#define pqMin priority_queue<int, vector<int>, greater<int>>
#define read(x) ll t;cin>>t
#define sz(V) ll(V.size())
 
template<typename T>
ll bs(T arr[], T l, T r, T x){
    if (r >= l) {
        ll mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return 1;
        if (arr[mid] > x)
            return bs(arr, l, mid - 1, x);
        return bs(arr, mid + 1, r, x);
    }
    return 0;
}
 
 
//Solution start here
void solve() {
    ll n;cin>>n;
    vector<ll>song;
    for(ll i=0;i<n;i++){
     ll temp;cin>>temp;
     song.pb(temp);
    }
    string vote;cin>>vote;
    
    vector<ll>hr;
    vector<ll>lr;
    for(ll i=0;i<n;i++){
     if(vote[i]=='1'){
      hr.pb(song[i]);
     }
     else{
      lr.pb(song[i]);
     }
    }
    sort(hr.begin(), hr.end());
    sort(lr.begin(),lr.end());
    ll slr=lr.size();
    ll shr=0;
    ll k =0;
    ll l = 0;
    if(hr.size()==n or lr.size()==0){
     for(ll i=0;i<n;i++){
      cout<<song[i]<<" ";
     }
     cout<<endl;
    }
    else{
     map<ll,ll>ans;
     map<ll,ll>ans2;
     ll k=0;
     ll m =0;
     for(ll i=0;i<n;i++){
      if(vote[i]=='1'){
       ans[hr[k++]]=++slr;
      }
      else ans2[lr[m++]]=++shr;
     }
     ll key1=0;
     ll key2 =0;
     for(ll i=0;i<n;i++){
      if(vote[i]=='1'){
       cout<< ans[song[i]] <<" ";
      }
      else cout<< ans2[song[i]] <<" ";
     }
     cout<<endl;
  }
    
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
 
    read(x);
    while(t--) {
        solve();
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}