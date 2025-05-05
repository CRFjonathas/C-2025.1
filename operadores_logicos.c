#include <stdio.h>

int main (){

    int a = 5;
    int b = 10;

    if(a > 0 && b > 0){
        printf("Ambos são positvos.\n");
    }

    if(a > 0 || b > 0){
        printf("Pelo menos um é positivo.\n");
    }
    
    if(!a){
        printf("a é zero. \n");
    }

}