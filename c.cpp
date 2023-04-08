// socipath_221b
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const long long M = 1e9 + 7;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solution(){
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll max1 = INT_MIN, max2 = INT_MIN;
    for (ll i = 0; i < n; i++){
        if (a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }
    cout << max2 << nl;
}

int main(){
    fastio;
    ll t = 1;
    // cin >> t;
    while (t--){
        solution();
    }
    return 0;
}
