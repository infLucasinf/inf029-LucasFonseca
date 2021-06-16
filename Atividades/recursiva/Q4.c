#include <stdio.h>
#include <stdlib.h>
#define quantidade_elementos 4

  int soma (int vet[], int vet_tamanho){

      if(1 == vet_tamanho) {
        return vet [0];
      } else {
        return vet [vet_tamanho - 1] + soma (vet, vet_tamanho - 1);
      }
  }     

    int main(){ 
  
      int i, vet[quantidade_elementos] = {0}, resultado; 
        
          for(i = 0; i < quantidade_elementos; i++){
                printf ("\n Informe %d de %d numeros: ",(i+1),quantidade_elementos);
                scanf ("%d", &vet [i]);
          }
                resultado = soma (vet,quantidade_elementos);
      
                printf ("\nSoma dos %d números: %d \n",quantidade_elementos,resultado);    
                return 0;
    }

  
