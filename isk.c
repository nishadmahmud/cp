#include <stdio.h>

int arr[1000000007];
int main(){
    int n, x, find;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        arr[x] = i;
    }
    scanf("%d", &find);
    if (arr[find])
        printf("Found at index %d\n", arr[find]);
    else
        printf("Not found\n");
    return 0;
}