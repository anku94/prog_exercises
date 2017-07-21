#include <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void){
    int n, x, y, z;
    scanf("%d %d %d", &n, &x, &y);

    int target = min(x, y);
    int dir = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < target; j++) {
            printf("*");
        }
        printf("\n");

        target += dir;
        if (target == max(x, y) || target == min(x, y)) {
            dir = dir * -1;
        }
    }
    return 0;
}

