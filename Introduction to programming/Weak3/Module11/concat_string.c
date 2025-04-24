#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int alength = strlen(a);
    int blength = strlen(b);

    for (int i = 0; i <= blength; i++)
    {
       a[i+alength] = b[i];
    }

    printf("%s", a);
    
    return 0;
    
}