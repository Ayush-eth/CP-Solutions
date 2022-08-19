#include<bits/stdc++.h>
using namespace std;
 
int Mod = 998244353;
int fact[300005];
 
int mult(long long a, long long b) {
    a *= b;
    a %= Mod;
    return a;
}
 
int n, k;
 
vector<pair<int, int> > pts;
 
unsigned long long power(unsigned long long x, int y, int p) { 
 unsigned long long res = 1; 
 x = x % p; // Update x if it is more than or 
 while (y > 0) { 
  if (y & 1) 
   res = (res * x) % p; 
  y = y >> 1;
  x = (x * x) % p; 
 } 
 return res; 
} 
unsigned long long modInverse(unsigned long long n, int p) { 
 return power(n, p - 2, p); 
} 
unsigned long long ncr(unsigned long long n, int r, int p) { 
    if(r == 0)
        return 1;
 return (fact[n] * modInverse(fact[r], p) % p * modInverse(fact[n - r], p) % p) % p; 
} 
 
 
int solve() {
    int on = 0;
    long long ans = 0;
    for(int i =0; i<pts.size(); i++) {
        if(pts[i].second == 0) {
            if(on >= k-1) {
                ans += ncr(on, k-1, Mod);   
                ans %= Mod;             
            }
            on++;
        } else {
            on--;
        }
    }
    return ans;
}
 
int main() {
    cin>>n>>k;
    fact[0] = fact[1] = 1;
    for(int i = 1; i < 300001; i++) {
        fact[i] = mult(i, fact[i-1]);
    }
    for(int i =0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        pts.push_back({a, 0});
        pts.push_back({b, 1});
    }
 
    sort(pts.begin(), pts.end());
    cout<<solve()<<endl;
    return 0;
}