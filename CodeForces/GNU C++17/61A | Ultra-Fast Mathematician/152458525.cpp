#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
 
int main(){
    // ll l1,l2;cin>>l1>>l2;
    // ostringstream str1,str2;
    // str1<<l1;
    // str2<<l2;
    // ll count=0;
    // string f = str1.str();
    // string g = str2.str();
    // string ans = "";
    // for (ll i=0; i<f.length();i++){
    //     if(f[i]==g[i]){
    //         ans = ans +'0';
    //     }
    //     else ans = ans+'1';
    // }
    // cout<<ans<<endl;
    string n1,n2;cin>>n1>>n2;
    string ans = "";
    for (ll i=0; i<n1.length();i++){
        if(n1[i]==n2[i]){
            ans = ans +'0';
        }
        else ans = ans+'1';
    }
    cout<<ans<<endl;
    
}