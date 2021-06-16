#include <stdio.h>
#include <stdlib.h>

    int inverte_valor(int numero_usuario);

     int main(){
     
          int numero;

          printf("\nDigite um valor: ");
          scanf("%d", &numero);
          inverte_valor(numero);
          
          return 0;
    }

   int inverte_valor(int numero_usuario){
   int numero_invertido;
       
       if(numero_usuario != 0){

           numero_invertido = numero_usuario % 10;
 
           printf(" %d", numero_invertido);
 
           numero_usuario /= 10;

           return inverte_valor(numero_usuario);

       } else {
         return 0;
       }
   }
