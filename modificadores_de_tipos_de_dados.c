#include <stdio.h>

int main(){

    /* MODIFICADOR "unsigned" É usado para declarar variáveis que podem armazenar apenas valores positivos (incluindo zero).
     Ele pode ser aplicado aos tipos de dados int e char,
    dobrando a faixa positiva de valores que podem ser armazenados.*/ 

    int signed_numero = 3000000000; // esse valor excede o limite de um int normal
    unsigned int numero2 = 3000000000;

    printf("numero com sinal: %d\n", signed_numero);
    printf("numero sem sinal: %u\n", numero2);




    /*MODIFICADOR "long" É usado para aumentar a capacidade de armazenamento dos tipos de dados primitivos.
     Ele pode ser aplicado a int e double, permitindo armazenar valores maiores e com maior precisão.*/

    int numero_regular = 2147483647; // valor maximo do int
    long int numero_grande = 2147483647;

    printf("numero regular (int): %d\n", numero_regular);
    printf("numero regular (long int): %ld\n", numero_grande);

    numero_grande = 2147483648; //valor maior que o maximo de int

    printf("numero grande atualizado (long int): %ld\n", numero_grande);


    double numero_preciso = 3.141592653589793;
    long double numero_muito_preciso = 3.14159265358979323846;

    printf("numero preciso (double): %.15f\n", numero_preciso);
    printf("numero muito preciso (long double): %.21Lf\n", numero_muito_preciso);






    /*A variável largePositiveNumber é declarada como unsigned long int,
    permitindo armazenar um número positivo extremamente grande.
    O especificador de formato %lu é usado no printf para exibir valores unsigned long int.*/

    unsigned long int numero_positivo_grande = 4000000000;

    printf("numero positivo grande: %lu\n", numero_positivo_grande);
    
    return 0;

}