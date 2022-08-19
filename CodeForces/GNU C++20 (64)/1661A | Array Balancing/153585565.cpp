#include <bits/stdc++.h>
using namespace std;
int a[30],b[30];
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  long long ans=0;
  cin>>n;
  for(int i=1;i<=n;i++){
   cin>>a[i];
  }
  for(int i=1;i<=n;i++){
   cin>>b[i];
  }
  for(int i=1;i<=n;i++){
   if(a[i]>b[i]) swap(a[i],b[i]);
  }
  for(int i=2;i<=n;i++){
   ans+=abs(a[i]-a[i-1]);
  }
  for(int i=2;i<=n;i++){
   ans+=abs(b[i]-b[i-1]);
  }
  cout<<ans<<endl;
 }
}