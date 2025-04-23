#include <stdio.h>

int main()
{
    int max = 0;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (max <= val)
        {
            max = val;
        }
    }
    
    printf("%d", max);

    return 0;
}