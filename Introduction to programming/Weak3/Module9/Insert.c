#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);

    for (int i = n; i >= idx+1; i--)
    {
       arr[i] = arr[i-1];
    }
    arr[idx] = val;
    for (int i = 0; i <= n; i++)
    {
       printf("%d", arr[i]);
    }
    
    
    return 0;
    
}