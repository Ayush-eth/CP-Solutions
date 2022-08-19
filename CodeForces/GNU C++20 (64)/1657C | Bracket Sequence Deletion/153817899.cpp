#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         ll n;
//         cin>>n>>s;
//         ll c=0,r=0,i;
//         ll f=0;
//         for (i=0;i<n;){
//             if(s[i]=='('){
//                 if(i==n-1){
//                     r++;
//                 }
//                 else{
//                     c++;i+=2;
//                 }
//             }
            
//             else{
                
//                 for(ll j=i+1;j<n;j++){
//                     if(s[j]==')'){
//                         c++;
//                         f++;
//                         i=j+1;
//                         break;
//                     }
//                     if(f==0){
//                         r=n-i;
//                         i=n;
//                     }
//                 }
 
//             }
           
//         }
//         cout<<c<<" "<<r<<endl;
        
            
    
        
//     }
 
//     return 0;
// }
 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
    
    ll t, n, i, j, c, r, f;
    string a;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        cin>>a;
        
        c=r=0;
        
        for(i=0; i<n;){
            if(a[i]=='('){
                if(i==n-1){
                    r++;
                    i++;
                }else{
                    c++;
                    i+=2;
                }
            }
            else{
                f=0;
                
                for(j=i+1; j<n; j++){
                    if(a[j]==')'){
                        f++;
                        c++;
                        i=j+1;
                        break;
                    }
                }
                if(f==0){
                    r=n-i;
                    i=n;
                }
            }
            
        }
        
        cout<<c<<" "<<r<<"\n";
    }
}