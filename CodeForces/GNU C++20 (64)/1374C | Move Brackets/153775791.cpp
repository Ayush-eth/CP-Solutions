#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<
#define pb push_back
 
 
// without using stack
int main()
{
    
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        int ans = 0,step=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='('){
                step++;
            }
            else{
                step--;
            }
            if(step<0){
                ans++;
                step=0;
            }
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}
 
//using stack
// int main(){
//     ll t; in t;
//     while(t--){
//         ll n ;in n;
//         string str; in str;
//         stack<string> st;
//         for(ll i=0; i<str.length(); i++){
//             if(str[i] == '(')
//                 st.push("(");
//             else{
//                 if(!st.empty() && st.top()=="(")st.pop();
//                 else st.push(")");
//             }
 
//         }
//         cout<<st.size()/2<<endl;
 
//     }
 
// }