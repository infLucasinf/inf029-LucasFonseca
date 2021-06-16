#include <stdio.h>
#include <stdlib.h>

 int fatorial(float numero);
 int numero_inteiro(float numero);

 int main(){
	   
        float numero, resultado;
     
	    printf("\n Digite um valor: ");
 
	    scanf("%f", &numero);

        numero_inteiro(numero);

        resultado = fatorial(numero);

        printf("\n Fatorial: %.f\n", resultado);

        return 0;
 }
 
 int fatorial(float numero_usuario){

        int resultado;
        
        if(numero_usuario == 0) {
           resultado = 1;
        } else {
           resultado = numero_usuario * fatorial(numero_usuario - 1);
          }
       return resultado;
 } 
 
 int numero_inteiro(float verifica){
      
       if (verifica >= 1  && verifica == ((int)verifica)){
       } else {
           printf ("\n Digite apenas numero inteiros positivos.\n\n");    
         }
    return 0; 
 }

   
