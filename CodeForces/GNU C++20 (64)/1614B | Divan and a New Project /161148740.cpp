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
#define ff first 
#define ss second
#define mp make_pair
 
template<typename T>
ll bs(T arr[], T l, T r, T x){if (r >= l) {ll mid = l + (r - l) / 2;if (arr[mid] == x)return 1;if (arr[mid] > x)return bs(arr, l, mid - 1, x);return bs(arr, mid + 1, r, x);}return 0;}
ll fibo(ll n){return int((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));}
 
/*----------------------------------------------------------------------------GOD SAYS---------------------------------------------------------------------------------*/
 
 
void solve(){
     int n;
        cin>>n;
 
        pair<ll,ll> arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].ff;
            arr[i].ss=i;
        }
 
        sort(arr,arr+n);
 
        ll time=0;
        int ans[n];
        int idx=1;
        for(int i=n-1;i>=0;i-=2)
        {   
            ll temp = 2*idx;
            time= time + (arr[i].ff)*temp;
            ans[arr[i].ss]=idx;
 
            idx++;
        }
 
        idx=-1;
        for(int i=n-2;i>=0;i-=2)
        {
            int temp = 2*abs(idx);
            time = time  +  (arr[i].ff)*temp;
            ans[arr[i].ss]=idx;
 
            idx--;
        }
 
        cout<<time<<endl;
        cout<<0<<' ';
        for(int i=0;i<n;i++)
            cout<<ans[i]<<' ';
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