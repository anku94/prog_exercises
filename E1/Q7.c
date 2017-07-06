#include <stdio.h>

int main(void){
    int x, y;
    int i;
    int sum = 0;
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

