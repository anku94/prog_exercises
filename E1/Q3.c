#include <stdio.h>

float add(float x, float y) {
    return x + y;
}

float divide(float x, float y) {
    return x / y;
}

int main(void){
    float x, y;
    scanf("%f %f", &x, &y);

    printf("%f\n", add(x, y));

    printf("%f\n", divide(x, y));

    return 0;
}

