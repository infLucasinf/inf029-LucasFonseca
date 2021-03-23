#include <stdio.h>
#include <stdlib.h>

  float soma(float v1, float v2); 


  int main(){
    float valor1, valor2, resultado;
     printf("\n\n***Questão 01 - soma***\n\n");
     printf("Digite dois valores:\n");
     scanf("%f%f", &valor1, &valor2);
     resultado = soma(valor1, valor2);  
     printf("= %.2f\n", resultado); 
     return 0;
}

   float soma(float v1, float v2){
   return (v1 + v2);
   
}
