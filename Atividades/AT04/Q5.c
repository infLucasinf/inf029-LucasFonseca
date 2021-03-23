#include <stdio.h>
#include <stdlib.h>

    typedef struct{
            int numeroA;
            int numeroB; 
            int numeroC;
            int numeroD;
} ler;
 
     void L (ler a){
         printf("=%d\n=%d\n=%d\n=%d\n", a.numeroA, a.numeroB, a.numeroC, a.numeroD);
         
    }

    int main(){
    printf("\n\nQuestão 05 - Ler quatro números\n\n");   
        
        ler G(void){
        ler result;

        printf("Digite um numero: ");
        scanf("%d", &result.numeroA);
        printf("Digite um numero: ");
        scanf("%d", &result.numeroB);
        printf("Digite um numero: ");
        scanf("%d", &result.numeroC);
        printf("Digite um numero: ");
        scanf("%d", &result.numeroD);
        return result;
        }
        ler a;
        a = G();
        L(a);
        return 0;

}    
        
