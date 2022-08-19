/**
 *    author:  _Adam
 *    created: [2022-08-17 13:52]       
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
using str   =          string;
 
// pairs
using pi    =          pair<int,int>;
using pl    =          pair<ll,ll>;
using pd    =          pair<db,db>;
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
 
//For debugging purposes
void ppp(int a)          { cerr<<a; }
void ppp(ll a)           { cerr<<a; }
void ppp(long double a)  { cerr<<a; }
void ppp(double a)       { cerr<<a; }
void ppp(char a)         { cerr<<a; }
void ppp(string a)       { cerr<<a; }
void ppp(bool a)         { cerr<<a; } 
template<class T , class V> void ppp(pair<T,V> p) {cerr<<"{"; ppp(p.ff); cerr<<','; ppp(p.ss); cerr<<"}";}
template<class T> void ppp(vector<T> v)  {cerr<<"[ ";for(T x:v) ppp(x), cerr<<" ";cerr<<']';}
template<class T> void ppp(set<T> v){cerr<<"[ ";for(T x:v) ppp(x) , cerr<<" ";cerr<<']';}
template<class T, class V> void ppp(map<T,V> m){cerr<<endl;for(auto x:m){ppp(x.ff);cerr<<" -> ";ppp(x.ss);cerr<<endl;}cerr<<endl;}
template<class T> void ppp(deque<T> v)  {cerr<<"[ ";for(T x:v) ppp(x), cerr<<" ";cerr<<']';}
template <typename T, typename... V> void ppp(T t, V... v){ppp(t);  if (sizeof...(v))   cerr << ", ";   ppp(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...)  cerr << #x << " -> ";  ppp(x); cerr<<endl 
#else
#define dbg(x...);
#endif
 
 
//binary search
 
ll binarysearch(vector<ll>arr,ll l, ll r,ll a){
    // l = min_value -1
    // r = max_value +1
    while(r-l>1){
        ll m = (r+l)/2;
        if(arr[m]==a){
            return m+1;
        }
        else if(arr[m]>a){
                r=m;
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
//on my way to become SPECIALIST before 25th oct 2022
//43rd Problem
void solve(){
    ll n,m;
    cin>>n>>m;
    vll arr;
 
    FOR(i,1,n+1){
        FOR(j,1,m+1){
            ll d = max(i-1,n-i) + max(j-1,m-j);
            arr.pb(d);
        }
    }
    sort(all(arr));
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
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
 
    read(x);
    while(t--) {
        solve();
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}