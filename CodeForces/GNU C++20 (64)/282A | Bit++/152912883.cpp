#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
int main(){
    ll n; in n;
    ll count=0;
    ll count_=0;
    for(ll i=0;i<n;i++){
        string str; in str;
        if(str=="++X" or str=="X++") count++;
        else if (str=="--X" or str=="X--") count_++;
    }
    cout<<count-count_<<endl;
 
}