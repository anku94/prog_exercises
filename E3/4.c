#include <stdio.h>

int main(void){
    int i = 0, n;
    scanf("%d", &n);

    while(i < n) {
        if(!(i%2)) {
            printf("*****\n");
        } else {
            printf("***\n");
        }
        i++;
    }
    return 0;
}

