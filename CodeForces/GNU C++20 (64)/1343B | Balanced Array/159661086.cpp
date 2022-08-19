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
#define endl '\n'
 
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
 
 
 
 
//Solution starts here
void solve() {
    
    ll n;cin>>n;
    ll k = n/2;
    if(k%2==1){
     cout<<"NO"<<endl;
    }
    else{
     cout<<"YES"<<endl;
     vll arr;
     for(ll i=1;i<=n;i++){
      if(i%2==0){
       arr.pb(i);
      }
     }
     for(ll i=1;i<=n;i++){
      if(i%2==1){
       arr.pb(i);
      }
     }
     
     for(ll i=0;i<n-1;i++){
      cout<<arr[i]<<" ";
     }
     cout<<arr[n-1]+n/2<<endl;
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