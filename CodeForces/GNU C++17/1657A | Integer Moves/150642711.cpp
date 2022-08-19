#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
 
    ll t;cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        int z = sqrt(x*x +y*y);
 
        if (x==0 and y==0)
        {
            cout<<0<<endl;
        }
        
        else if ( (x*x +y*y) ==z*z){
            cout<<1<<endl;
        }
 
        else cout<<2<<endl;
    }
    
}