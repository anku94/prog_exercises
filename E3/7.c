#include <stdio.h>
#include <stdlib.h>

int main(void){
    time_t t;
    srand((unsigned) time(&t));
    while(1) {
        int x = rand();
        printf("%d\n", x%10);
        if(x%10 == 7) {
            break;
        }
    }
    return 0;
}

