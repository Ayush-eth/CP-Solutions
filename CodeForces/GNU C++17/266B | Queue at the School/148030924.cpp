#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
 
    string str;
    int s,t;
    
    cin>>s>>t;
    cin>>str;
    while(t--){
        for (ll i=0;i<str.length();i++){
            if (str[i]=='B' &str[i+1]=='G'){
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    cout<<str<<endl;
 
}