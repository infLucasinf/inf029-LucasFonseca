#include <stdio.h>
#include <stdlib.h>

  float subtrai(float v1, float v2, float v3); 


  int main(){
    float valor1, valor2, valor3, resultado;
     printf("\n\n***Questão 02 - subtrair***\n\n");
     printf("Digite o primeiro valor: ");
     scanf("%f", &valor1);
     printf("Digite o segundo valor: ");
     scanf("%f", &valor2);
     printf("Digite o terceiro valor: ");
     scanf("%f", &valor3);
     resultado = subtrai(valor1, valor2, valor3);  
     printf("= %.2f\n", resultado); 
     return 0;
}

  float subtrai(float v1, float v2, float v3){
  return (v1 - v2) - v3;
}
