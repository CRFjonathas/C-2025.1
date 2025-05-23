#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
  //condicao ? valor_se_verdadeiro : valor_se_falso;
  
  printf("Resultado: %s\n", resultado);

  return 0;
}