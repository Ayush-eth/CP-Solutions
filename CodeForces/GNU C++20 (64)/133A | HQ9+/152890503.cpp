#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
int main(){
    string str; in str;
    bool a = false;
    for (ll i=0;i<str.length();i++){
        if (str[i]=='H' or str[i]=='Q' or str[i]=='9'){
            a=true;
            break;
        }
        
    }
    if(a) out "YES"<<endl;
    else out "NO"<<endl;
 
}