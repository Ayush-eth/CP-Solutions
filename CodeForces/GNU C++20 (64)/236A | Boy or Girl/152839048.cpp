#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
int main(){
    string str;
    in str;
 
    set<char>ans;
    for(ll i=0;i<str.length();i++){
        char a= str[i];
        ans.insert(a);
    }
    if (ans.size()%2==1) out "IGNORE HIM!"<<endl;
    else out "CHAT WITH HER!"<<endl;
}