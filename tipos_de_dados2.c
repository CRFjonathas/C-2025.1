#include <stdio.h>

int main(){

    int a = 10;
    int b = 3;
    float quociente = (float) a / b;

    printf("quociente: %2.f\n", quociente); // 'a' é explicitamente convertido para float

    return 0;

}