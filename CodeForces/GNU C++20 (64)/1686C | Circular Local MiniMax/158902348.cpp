#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
#define fi first
#define se second
#define checkmate return 0
#define bye cout << endl
#define en cin >> arr[i]
#define fr for (ll i = 0; i < n; i++)
#define Y cout << "YES"<<endl
#define N cout << "NO"<<endl
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        int arr[n];
        fr { en; }//elements input
        sort(arr,arr+n);
        if (n % 2 != 0)//if number of elements are odd then go to the next array
        {
            N;
            continue;
        }
        //else make hills and valleys 
        else
        {
 
            for (int i = 0, j = n / 2; i < n / 2; i++, j++)
            {
                v.push_back(arr[i]);
                v.push_back(arr[j]);
            }
        }
        int a=0;
        //for similar elements present check if there is the proper order of hills and valleys
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                continue;
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
                continue;
            else
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
            N;
        else
        {
            Y;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}