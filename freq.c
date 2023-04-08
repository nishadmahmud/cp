#include <stdio.h>

int main()
{
    int n, count, visit = -1;
    scanf("%d", &n);
    int arr[n], freq[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = visit;
            }
        }
        if (freq[i] != visit)
            freq[i] = count;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] != visit)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }

    return 0;
}