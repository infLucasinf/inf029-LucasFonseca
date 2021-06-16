#include <stdio.h>
#include <stdlib.h>

 int ordemDECrescente(int N);


 int main (){

    int N = 10;

    ordemDECrescente (N);
 }

 int ordemDECrescente(int N){
    
     if ( N > 0 ){

        ordemDECrescente( N - 1);
        printf("%d\n", N);

     } else {
     }
   return 0;
 }
