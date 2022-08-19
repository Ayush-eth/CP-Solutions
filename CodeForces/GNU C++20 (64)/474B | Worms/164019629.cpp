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
 
 
 
 
#include "bits/stdc++.h"
using namespace std;
 
 
 
using ll    =          long long;
using db    =          long double; // or double, if TL is tight
using str   =          string; // yay python! 
 
 
// pairs
using pi           =   pair<int,int>;
using pl           =   pair<ll,ll>;
using pd           =   pair<db,db>;
#define mp             make_pair
#define f              first
#define s              second
 
 
#define tcT            template<class T
tcT> using V =         vector<T>; 
 
using vi    =          V<int>;
using vb    =          V<bool>;
using vll   =          V<ll>;
using vd    =          V<db>;
using vs    =          V<str>;
using vpi   =          V<pi>;
using vpl   =           V<pl>;
using vpd   =          V<pd>;
 
// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x)          int((x).size())
#define bg(x)          begin(x)
#define all(x)         bg(x), end(x)
#define rall(x)        x.rbegin(), x.rend() 
#define sor(x)         sort(all(x)) 
#define rsz            resize
#define ins            insert 
#define pb             push_back
#define eb             emplace_back
#define ft             front()
#define bk             back()
 
#define lb             lower_bound
#define ub             upper_bound
 
// loops
#define FOR(i,a,b)     for (ll i = (a); i < (b); ++i)
#define F0R(i,a)       FOR(i,0,a)
#define ROF(i,a,b)     for (ll i = (b)-1; i >= (a); --i)
#define R0F(i,a)       ROF(i,0,a)
#define rep(a)         F0R(_,a)
#define each(a,x)      for (auto& a: x)
 
const int MOD     =    1e9+7; // 998244353;
const int MX      =    2e5+5;
const ll BIG      =    1e18; // not too close to LLONG_MAX
 
#define mii            map<int, int>
#define pqMax          priority_queue<int>
#define pqMin          priority_queue<int, vector<int>, greater<int>>
#define read(x)        ll t;cin>>t
#define endl           '\n'
 
 
//binary search
 
ll binarysearch(vector<ll>arr,ll l, ll r,ll a){
    // l = min_value -1
    // r = max_value +1
    while(r-l>1){
        ll m = (r+l)/2;
        if(arr[m]==a){
            return m+1;
        }
        else if(arr[m]>a and arr[m-1]<a){
                return m+1;
        }
        else if(arr[m]>a){
               r=m;
        }
        else if(arr[m]<a and arr[m+1]>a){
            return m+2;
        }
        else if(arr[m]<a){
         l=m;
        }
    }
    return l+1;
}
 
// nth fibonacci number
ll fibo(ll n){return int((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));}
 
 
//seive prime number upto n
 
void primesieve(ll n){
 ll prime[2*n]={0};
 FOR(i,2,n){
  if(prime[i]==0){
   for(ll j=i*i;j<=n;j++){
    prime[j]=1;
   }
  }
 }
 FOR(i,2,n){
  if(prime[i]==0){
   cout<<i<<" ";
  }
 }cout<<endl;
}
 
/*----------------------------------------------------------------------------GOD SAYS---------------------------------------------------------------------------------*/
 
 
void solve(){
    ll n;cin>>n;
    vll arr(n);
    FOR(i,0,n){
     cin>>arr[i];
    }
    vll dp;
    dp.pb(arr[0]);
    ll sum=arr[0];
    for(ll i=1;i<n;i++){
     sum+=arr[i];
     dp.pb(sum);
    }
    ll t;cin>>t;
    while(t--){
     ll k;cin>>k;
     auto l = upper_bound(dp.begin(), dp.end(),k)-dp.begin();
     if(binary_search(dp.begin(),dp.end(),k)){
      cout<<l<<endl;
     }
     else cout<<l+1<<endl;
    }
}
 
    
 
 
/*-------------------------------------------------------------------IT WAS GOD'S DECISION---------------------------------------------------------------------------------*/
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
 
    // read(x);
    // while(t--) {
        solve();
    // }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}