#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(x>a and b>=y){
            if(abs(x-a)<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(x<=a and b<y){
            if(abs(y-b)<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a>=x and b>=y){
            cout<<"YES"<<endl;
        }
        else if(a<x and b<y){
            ll dog = abs(x-a);
            ll cat = abs(y-b);
            if(dog +cat<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
 
    }
}