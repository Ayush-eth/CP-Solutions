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
int LCSubStr(string str1, string str2, int N, int M)
{
    int LCSuff[N + 1][M + 1];
    int mx = 0;    
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
              if (i == 0 || j == 0){
                LCSuff[i][j] = 0;
              }
 
            else if (str1[i - 1] == str2[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                mx = max(mx, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return mx;
}
 
void solve(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<(str1.length()-LCSubStr(str1,str2,str1.length(),str2.length())+(str2.length()-LCSubStr(str1,str2,str1.length(),str2.length())))<<endl;
    
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