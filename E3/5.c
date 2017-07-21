#include <stdio.h>

int main(void){
    int i = 0, n, a, b;
    int j, target;
    scanf("%d %d %d", &n, &a, &b);

    while(i < n) {
        target = i%2?b:a;
        j = 0;
        while(j < target) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

