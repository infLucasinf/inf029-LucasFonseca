#include <stdio.h>
#include <stdlib.h>

 int mdc(int valorA, int valorB);

 int main(){

 int resultado, valorA, valorB;

     printf("Digite dois valores para calcular o MDC:\n");

     scanf("%d %d", &valorA, &valorB);

     resultado = mdc(valorA, valorB);

     printf("MDC: %d \n", resultado);
     
     return 0;

 }

 int mdc (int valorA, int valorB) {

     if(valorA % valorB == 0) {

       return valorB;

     } else {

       return mdc(valorB,(valorA % valorB));
     }
 }

 

