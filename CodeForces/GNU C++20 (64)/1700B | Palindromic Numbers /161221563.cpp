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
#define mod 1000000007
 
template<typename T>
ll bs(T arr[], T l, T r, T x){if (r >= l) {ll mid = l + (r - l) / 2;if (arr[mid] == x)return 1;if (arr[mid] > x)return bs(arr, l, mid - 1, x);return bs(arr, mid + 1, r, x);}return 0;}
ll fibo(ll n){return int((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));}
 
/*----------------------------------------------------------------------------GOD SAYS---------------------------------------------------------------------------------*/
 
 
void solve(){
    ll n, m, k=1;
    string str;
    cin>>n>>str;
    ll dp[n+1];
    if(str[0]!='9') 
    {
        for(ll i=0;i<str.length();i++) 
        {
            str[i]='9' - str[i];
            str[i]+='0';
        }
        cout<<str<<endl;
        return;
    }
    for(ll i=0;i<=n;i++) 
    {
        dp[i]=1;
    }
     reverse(str.begin(),str.end());
    str=str+"0";
    ll s=0,e=10;
    for(size_t i=0;i<n || s;++i) 
    {
        dp[i]-=s+(i<n?str[i] - '0':0);
        s=dp[i]<0;
        if(s) 
        {
            dp[i]+=e;
        }
    }
    for(ll i=n-1;i>=0;i--)
    {
        cout<<dp[i];
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