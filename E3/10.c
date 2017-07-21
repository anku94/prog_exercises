#include <stdio.h>

int main(void){
    int i, j, n;

    scanf("%d", &n);
    i = 1;
    while(i <= n) {
        j = 1;
        while(j <= i) {
            printf("%d", (j*j*j)%10);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

