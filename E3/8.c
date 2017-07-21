#include <stdio.h>

int main(void){
    int cur = 1, prev = 0;
    int j = 0;
    while(1) {
        int new_cur = cur + prev;
        prev = cur;
        cur = new_cur;
        printf("%d\n", prev*cur);
        if(j++ == 10) break;
    }
    return 0;
}

