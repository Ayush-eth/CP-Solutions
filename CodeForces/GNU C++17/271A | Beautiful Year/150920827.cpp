#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
bool distinct(ll num) {
    set<int> n;
    ll dig = ceil(log10(num));
    while (num > 0) {
        ll d = num % 10;
        n.insert(d);
        num /= 10;
    }
    if (n.size() == dig) return true;
    return false;
}
 
int main() {
    ll year;
    cin >> year;
    year++;
    while (!distinct(year)) {
        year++;
    }
    cout << year << endl;
}