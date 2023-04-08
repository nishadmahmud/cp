#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
bool arr[m];
int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a] = true;
    }
    int x;
    cin >> x;
    if (arr[x])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}