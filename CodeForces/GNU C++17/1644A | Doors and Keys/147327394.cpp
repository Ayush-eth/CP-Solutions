#include "bits/stdc++.h" 
#include <string>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while (t--) {
        string o;
        cin>>o;
 
        string a1="r";
        string a2="R";
        string a3="g";
        string a4="G";
        string a5="b";
        string a6="B";
 
        int arr[6];
        arr[0]= o.find(a1);
        arr[1]= o.find(a2);
        arr[2]= o.find(a3);
        arr[3]= o.find(a4);
        arr[4]= o.find(a5);
        arr[5]= o.find(a6);
 
        bool res = false;
        for (int i=0;i<6;i=i+2) {
            if ( (arr[i]<arr[i+1]) ) {
                res = true;
            }
            else {
                res = false;
                break;
            }
        }
 
        if (res) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
              
        
    }
}