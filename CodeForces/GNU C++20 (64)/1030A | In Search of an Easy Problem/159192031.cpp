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
 
 
const ll MOD = 1e9 + 7;
 
// Returns modulo exponentiation for two numbers
// represented as long long int. It is used by
// powerStrings(). Its complexity is log(n)
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}
 
// Returns modulo exponentiation for two numbers
// represented as strings. It is used by
// powerStrings()
ll powerStrings(string sa, string sb)
{
    // We convert strings to number
 
    ll a = 0, b = 0;
 
    // calculating  a % MOD
    for (int i = 0; i < sa.length(); i++)
        a = (a * 10 + (sa[i] - '0')) % MOD;
 
    // calculating  b % (MOD - 1)
    for (int i = 0; i < sb.length(); i++)
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1);
 
    // Now a and b are long long int. We
    // calculate a^b using modulo exponentiation
    return powerLL(a, b);
}
 
//Solution starts here
void solve() {
    
  ll n;cin>>n;
  vll arr;
  for(ll i=0;i<n;i++){
   ll temp;cin>>temp;
   arr.pb(temp);
  }
  
  ll sum = 0;
  if(accumulate(arr.begin(),arr.end(),sum)>0){
   cout<<"HARD"<<endl;
  }
  else cout<<"EASY"<<endl;
    
}
 
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