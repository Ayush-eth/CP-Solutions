 
 #include<bits/stdc++.h>
  using namespace std;
  int main(){
      char s1[105],s2[105];
      cin>>s1>>s2;
      for(int i=0;s1[i]!='\0';++i){
          if(s1[i]>='A'&&s1[i]<='Z')s1[i]+=32;
          if(s2[i]>='A'&&s2[i]<='Z')s2[i]+=32;
      }
     if(strcmp(s1,s2)>0)cout<<"1"<<endl;
     else if(strcmp(s1,s2)<0)cout<<"-1"<<endl;
     else cout<<"0"<<endl;
     return 0;
 }