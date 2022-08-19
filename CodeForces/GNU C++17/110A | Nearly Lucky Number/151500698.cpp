// #include "bits/stdc++.h"
// using namespace std;
// #define ll long long
 
// int main(){
//     ll ln;cin>>ln;
//     ostringstream str1;
//     str1<<ln;
//     ll count=0;
//     string lucky = str1.str();
//     if(ln==7 or ln==4){
//         cout<<"YES"<<endl;
//     }
    
//     else{
//         for (ll i=0;i<lucky.length();i++){
//             if (lucky[i]=='4' or lucky[i]=='7')count++;
//         } 
 
//         if(count==lucky.length())cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
 
// }
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
long long int n;
int lucky = 0;
 
cin >> n;
 
while(n)
{
if(n % 10 == 7 || n % 10 == 4)
lucky++;
 
n = n / 10;
}
 
if(lucky == 7 || lucky == 4)
cout << "YES";
else
cout << "NO";
 
return 0;
}