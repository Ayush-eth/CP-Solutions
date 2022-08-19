#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
 
int main(){
    string str; in str;
    string ans="hello";
    ll j=0; 
    ll c=0;
    for(ll i=0;i<str.length();i++){
        if (str[i]==ans[j]){
            j++;
            c++;
        }
    }
    if (c==5) out "YES"<<endl;
    else out "NO"<<endl;
    
}