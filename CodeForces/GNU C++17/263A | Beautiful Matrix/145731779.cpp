#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
//driver code
int main(){
    int arr[5][5];
    for(int i =0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
 
    int a,b, flag = 0;
 
    for(int i =0;i<5;i++){
        for (int j=0;j<5;j++){
            if (arr[i][j] ==1){
                a=i;
                b=j;
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }
 
    int step=0;
    int row=abs(2-a);
    int col=abs(2-b);
    int result = row +col;
    cout<<result<<endl;
}
 
 