#include <stdio.h>
#include <stdlib.h>
#define quantidade_elementos 4

 int inverte(int vetor[], int i);

 int main(){

    int i, vetor[quantidade_elementos] = {0};

    for(i=0; i<quantidade_elementos; i++){

        printf("Digite o %d numero: ",i + 1);
    
        scanf("%d",&vetor[i]);
    }
        inverte(vetor,quantidade_elementos);


 }

  int inverte (int vetor[], int i){

    if( quantidade_elementos > 100 ){
      return 0;
    } else {
   
        for( i = quantidade_elementos; i >= 0; i--){

         printf("%d\n",vetor[i]);
        }
      }
    return 0;
 }
