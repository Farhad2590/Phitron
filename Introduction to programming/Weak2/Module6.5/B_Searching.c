#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long x;
    scanf("%lld ", &x);

    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found =i;
            break;
        }
    }
    printf("%d", found);

    return 0;
}