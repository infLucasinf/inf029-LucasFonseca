#include <stdio.h>
#include <stdlib.h>

    int fatorial(float numero); 


    int main(void){
     printf("\n\n***Questão 03 - fatorial ***\n\n");
     float numero;
     int resultado;
     printf("Digite um valor: ");
     scanf("%f", &numero);
     resultado = fatorial(numero);  
     printf("= %d\n", resultado); 
     return 0;
}

    int fatorial(float numero){ 
       float resultado; 
       int fat;
     
         if (numero == (int)numero && numero >= 0){
       }  else {
          printf ("Não é possível calcular o valor de fatorial, digite apenas um numero inteiro positivo."); 
          return 0;   
         } 
          for(fat = 1; numero > 1; --numero){
          fat *= numero;
         }
        
          resultado = fat;
          return resultado;
    
 }
