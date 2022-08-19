// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
bool isSquare(ll x){
  int y=sqrt(x);
  return y*y==x;
}
int main()
{
    ll t;cin>>t;
    while(t--){
 
        ll n;cin>>n;
        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(n%2==0 && isSquare(n/2)){
            cout<<"YES"<<endl;
        }
        else if(n%4==0 && isSquare(n/4)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
        
 
        
    }
}