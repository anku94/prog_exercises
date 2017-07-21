#include <stdio.h>

int main(void){
    int i, n, sum = 0;
    scanf("%d", &n);

    i = 1;
    while(i <= n) {
        sum += i * (i%2 ? 1 : -1);
        i++;
    }

    printf("%d\n", sum);
    return 0;
}

