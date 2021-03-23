#include <stdio.h>
#include <stdlib.h>

    typedef struct{
            char letra1;
            char letra2; 
            char letra3;
            
} ler;
 
    void ler_tres_letras(ler a){
        printf("=%c\n=%c\n=%c\n", a.letra1, a.letra2, a.letra3);
    }

    int main(){
    printf("\n\nQuestao 06 - Ler tres letras\n\n");   
        
        ler G(void){
        ler result;

        printf("Digite tres letras: ");
        scanf("%c %c %c", &result.letra1, &result.letra2, &result.letra3);
        return result;
        }
 
        ler a;
        a = G();
        ler_tres_letras(a);
        return 0;
}    
   
