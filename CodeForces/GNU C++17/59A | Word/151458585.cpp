#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    string str;cin>>str;
    ll countu=0;
    ll countl=0;
 
    for (ll i=0;i<str.length();i++){
        
        if(isupper(str[i])){
            countu++;
        }
        else countl++;
    }
 
    if(countl>countu){
        for (int i=0; i < str.length(); i++)
        {
            if (isupper(str[i]))
            str[i] = str[i] + 32;
        }
        cout << str<<endl;
    }
    else if(countl==countu){
        for (int i=0; i < str.length(); i++)
        {
            if (isupper(str[i]))
            str[i] = str[i] + 32;
        }
        cout << str<<endl;
    }
    else {
        for (int i=0; i < str.length(); i++)
        {
            if (islower(str[i]))
            str[i] = str[i] - 32;
        }
        cout <<str<<endl;
    }
 
    return 0;
}