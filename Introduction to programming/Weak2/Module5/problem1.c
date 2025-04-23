#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for(int i =1 ; i <= num;  i++){
       if(num%2 == 0){
        printf("%d", num);
       };
    }
    return 0;
    
}