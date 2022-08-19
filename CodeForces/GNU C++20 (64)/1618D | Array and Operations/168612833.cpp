 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, k, i, j, ans, c;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>k;
        
        ans=0;
        
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        for(i=n-2*k-1; i>=0; i--){
            ans=ans+a[i];
        }
        
        for(i=n-2*k; i<n;)
        {
            j=i;
            c=0;
            
            while(a[i]==a[j] && i<n){
                c++;
                i++;
            }
            
            if(c>k){
                ans=ans+c-k;
            }
            
        }
        
        cout<<ans<<"\n";
    }
}