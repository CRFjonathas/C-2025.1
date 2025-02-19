#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

/*A saída do programa será:

    a > b: 0
    a < b: 1
    a == b: 0
    a != b: 1
    
    
Os resultados da execução do programa têm o seguinte significado:

    a > b: 0 indica que a não é maior que b.
    a < b: 1 indica que a é menor que b.
    a == b: 0 indica que a não é igual a b.
    a != b: 1 indica que a é diferente de b.*/

    int x = 5;
    float y= 5.0;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

/*A saída do programa será

    x == y: 1
    x != y: 0
    
    A saída x == y: 1 indica que x é igual a y após a conversão implícita de tipos.
    Já em x != y: 0 indica que x não é diferente de y.*/

    int numero = 10;
    float resultado = 10.0;

    int comparacao = (float)numero == resultado;

    printf("num == result: %d\n", comparacao);

/*A saída do programa será:

    num == result: 1
    
    A comparação entre num e result retorna 1,
    indicando que são iguais após a conversão explícita de num para float.*/

    return 0;

}