#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
int main(){
    string str; in str;
    string str2; in str2;
    string str3; in str3;
    string ans = str+str2;
    sort(ans.begin(),ans.end());
    sort(str3.begin(),str3.end());
    if(ans==str3) out "YES"<<endl;
    else out "NO"<<endl;
 
 
    
    
}