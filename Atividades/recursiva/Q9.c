#include <stdio.h>
#include <stdlib.h>

 int qtd_ocorrencias(int N, int k);

 int main(){
  
     int k, N, resultado;

     k = 1; 
     N = 762021192; 

     resultado = qtd_ocorrencias(N,k);

     printf("Quantidade de ocorrencias: %d \n", resultado);
 }

 int qtd_ocorrencias(int N, int k){
 
     if( N == 0) {

       return 0;
      
     } else {

       return qtd_ocorrencias(N/10, k) + (N % 10 == k);
    }
 }
