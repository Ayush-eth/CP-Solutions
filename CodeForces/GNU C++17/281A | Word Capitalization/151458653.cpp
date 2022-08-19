#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    string str;
    cin>>str;
    if (islower(str[0]))
            str[0] = str[0] - 32;
    cout<<str<<endl;
}