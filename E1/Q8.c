#include <stdio.h>

int main(void){
    int x, y;
    int i;
    int sum = 0;
    scanf("%d %d", &x, &y);

    i = x;
    while(i <= y) {
        sum += i;
        i++;
    }

    printf("%d\n", sum);
    return 0;
}

