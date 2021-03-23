#include <stdio.h>
#include <stdlib.h>

    float ler_tres_numeros(float t, float num[]);
  
    int main(){
    printf("\n\nQuestão 04 - Ler três números\n\n");
      float num3[3];
      int i;

        for(i = 0; i < 3; i++){
            printf("\n Digite o %d° numero: ", i+1);
            scanf("%f", &num3[i]);
    } 
         ler_tres_numeros(3, num3);
         return 0;
 }   

    float ler_tres_numeros(float t, float num3[]){

    int i; 
        
        for(i = 0; i < 3; i++){ 
            printf("\n= %.2f\n", num3[i]);  
        }
            
}




