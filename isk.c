#include<stdio.h>

int arr[1000000];

int main(){
    int n, x, find;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&x);
        arr[x] = 1;
    }
    scanf("%d",&find);
    if(arr[find]==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}