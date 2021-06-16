#include <stdio.h>
#include <stdlib.h>

     int soma(int valor);   
     

     int main(){
        
        int numero;
        
        printf("Digite numero: ");
        scanf("%d", &numero);
        soma(numero);

        printf("Valor somado: %d\n", soma(numero));
    }


    int soma(int valor){

      if(valor == 0){

           return 0;

      } else {

           return valor + soma(valor -1);
      }
    }

