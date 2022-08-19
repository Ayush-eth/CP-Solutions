#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll t;cin>>t;
    string a="aa";
        map<string,ll>dict;
        ll i=1;
        for(a[0]='a';a[0]<='z';a[0]++){
            for(a[1]='a';a[1]<='z';a[1]++){
                if(a[0]!=a[1]){
                    dict[a]=i++;
                }
            }
        }
    while(t--){
        
        string str;cin>>str;
        cout<<dict[str]<<endl;
 
    }
}