#include <stdio.h>
#include <stdlib.h>

    typedef struct{
            char palavra1[30];
            char palavra2[30]; 
            char palavra3[30];
            
} ler;
 
    void ler_tres_palavras(ler a){
        printf("\n=%s\n=%s\n=%s\n", a.palavra1, a.palavra2, a.palavra3);
    }

    int main(){
    printf("\n\n -- Questao 07 - Ler tres palavras -- \n\n");   
        
       
        ler G(void){
        ler result;

        printf("Digite tres palavras:\n");
        scanf("%s %s %s",result.palavra1, result.palavra2, result.palavra3);
        return result;
        }

        ler a;
        a = G();
        ler_tres_palavras(a);
        return 0;
}    
   
