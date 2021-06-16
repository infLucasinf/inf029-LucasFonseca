#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

   int fibonacci(float n_termos);

   int main(){

     
     float n_termos, resultado;

     printf("\nDigite o N-ésimo termo de Fibonacci que deseja saber: ");
     scanf("%f", &n_termos);
     resultado = fibonacci(n_termos);
     printf("\nN-ésimo termo: %.f \n", resultado);
          
   }

   int fibonacci(float n_termos){ // Formula: pi ^ n_termos / 2.236067977. Notei que para os números impares o resultado era o valor correto - 1, então decidi somar + 1 para obter o correto resultado.
  

      float pi, potencia_de_pi_a_n, resultado;
     
           if ((int)n_termos % 2 == 0) {
           
               pi = 1.618034; //Valor aproximado
                         
               potencia_de_pi_a_n = pow(pi,n_termos);
              
               return potencia_de_pi_a_n / 2.236067977;
               
               
           } else {
               
              pi = 1.618034; //Valor aproximado
                         
              potencia_de_pi_a_n = pow(pi,n_termos);
              
              return (potencia_de_pi_a_n / 2.236067977) + 1;
               
               
           }
   } 

