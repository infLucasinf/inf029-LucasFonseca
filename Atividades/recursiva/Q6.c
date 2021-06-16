#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int calculo_potencia(int base, int potencia);

    int main(){

       int base, potencia;

       printf("Digite um valor para base (k) e o valor da potencia(n):\n");
       scanf("%d %d", &base, &potencia);
       calculo_potencia(base,potencia);
       printf("%d", calculo_potencia(base,potencia));
    }


    int calculo_potencia(int base, int potencia){

        if(potencia == 0){

          return 1;

        } else {
 
          return (base * pow(base, potencia - 1));
          } 
    }
