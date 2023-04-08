#include <bits/stdc++.h>
using namespace std;

int arr[100000009];
int main(){
    int n, a, find;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        arr[a] = i;
    }
    cin >> find;
    if (arr[find])
        cout << "Found at index " << arr[find] << endl;
    else
        cout << "Not found" << endl;
    return 0;
}