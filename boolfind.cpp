#include <bits/stdc++.h>
using namespace std;
const long long m = 1e18;
bool arr[m];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (arr[x])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}