#include <stdio.h>
#define ll long long
int main()
{
    ll n, i;
    printf("Enter the number of terms: ");
    scanf("%lld", &n);
    ll arr[n];
    arr[0] = 0, arr[1] = 1;
    for (i = 2; i < n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
        printf("%lld ", arr[i]);

    printf("\n");
    return 0;
}