#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    int modulas  = N % 3;
    if(modulas == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
