#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
int main(){
    ll arr[5][5]={{0,0,0,0,0},
                  {0,1,1,1,0},
                  {0,1,1,1,0},
                  {0,1,1,1,0},
                  {0,0,0,0,0}};
    ll swi[5][5];
    for (ll i=1;i<=3;i++){
        for(ll j=1;j<=3;j++){
            cin>>swi[i][j];
        }
    }
 
    for (ll i=1;i<=3;i++){
        for(ll j=1;j<=3;j++){
            if(swi[i][j]%2==1){
                //1
               if(arr[i][j]==1){
                   arr[i][j]=0;
               }
               else{
                   arr[i][j]=1;
               }
                //2
               if(arr[i][j-1]==1){
                   arr[i][j-1]=0;
               }
               else{
                   arr[i][j-1]=1;
               }
                //3
               if(arr[i][j+1]==1){
                   arr[i][j+1]=0;
               }
               else{
                   arr[i][j+1]=1;
               }
                //4
               if(arr[i-1][j]==1){
                   arr[i-1][j]=0;
               }
               else{
                   arr[i-1][j]=1;
               }
                //5
               if(arr[i+1][j]==1){
                   arr[i+1][j]=0;
               }
               else{
                   arr[i+1][j]=1;
               }
            }
            // if (swi[i][j]%2==1 && arr[i][j]==0){
            //     arr[i][j]=1;
            //     arr[i][j-1]=1;
            //     arr[i-1][j]=1;
            //     arr[i][j+1]=1;
            //     arr[i+1][j]=1;
            // }
            
        }
    }
 
    for (ll i=1;i<=3;i++){
        for(ll j=1;j<=3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
 
 
    
 
    
 