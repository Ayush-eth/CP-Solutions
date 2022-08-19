#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    int t;cin>>t;
    
    while(t--){
        
        string str; cin>>str;
        if(str.length()%2==0){
            int score=0;
            for(int i=0;i<str.length();i++){
                score+= int(str[i]);
            }
            cout<<"Alice"<<" "<<score-(str.length())*96<<endl;
        }
        else if(str.length()==1){
            cout<<"Bob"<<" "<<int(str[0])-96<<endl;
        }
        else{
            int alice=0,bob=0;
            // sort(str.begin(),str.end());
            
            if( int(str[0] > int(str[str.length()-1])) ){
                bob+=int(str[str.length()-1])-96;
                for(int i=0;i<str.length()-1;i++){
                    alice+=int(str[i])-96;
                    
                }
                if(bob>alice){
                    cout<<"Bob"<<" "<<bob-alice<<endl;
                }
                else{
                    cout<<"Alice"<<" "<<alice-bob<<endl;
                }
            }
            else{
                bob+=int(str[0])-96;
                for(int i=1;i<str.length();i++){
                    alice+=int(str[i])-96;
                    
                }
                if(bob>alice){
                    cout<<"Bob"<<" "<<bob-alice<<endl;
                }
                else{
                    cout<<"Alice"<<" "<<alice-bob<<endl;
                }
            }
        }
 
    }
}