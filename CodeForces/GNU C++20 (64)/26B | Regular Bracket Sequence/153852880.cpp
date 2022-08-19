#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
 
 
 
 
int main(){
    
        
        string str; in str;
        stack<string> st;
        for(ll i=0; i<str.length(); i++){
            if(str[i] == '(')
                st.push("(");
            else{
                if(!st.empty() && st.top()=="(")st.pop();
                else st.push(")");
            }
 
        }
        cout<<str.length()-st.size()<<endl;
 
    
 
}