#include <stdio.h>

int main(void){
    int x, y;
    int i;
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++) {
        printf("%d\n", i);
    }
    return 0;
}

