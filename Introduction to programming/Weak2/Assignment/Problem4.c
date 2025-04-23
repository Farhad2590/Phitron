#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumPos = 0;
    int sumNeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            sumPos = arr[i] + sumPos;
        }        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sumNeg = arr[i] + sumNeg;
        }        
    }
    printf("%d %d",sumPos, sumNeg);
    return 0;
    
}