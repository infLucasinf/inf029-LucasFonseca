#include <stdio.h>
#include <stdlib.h>


    typedef struct{
           char nome[30]; 
           char dataNascimento[25]; 
           char cpf[15]; 
           char sexo[9];

}cadastrarCliente;

       char L (cadastrarCliente b){
           printf("\nNome: %s\n", b.nome);
           printf("\nData de nascimento: %s\n", b.dataNascimento);
           printf("\nCPF: %s\n", b.cpf);
           printf("\nSexo: %s\n", b.sexo);
}
      
      int main(void){

        printf("\n\n -- Questao 08 -- \n\n");
   
          cadastrarCliente P(void){     
          cadastrarCliente result;
  
          printf("Nome: ");
          scanf("%s", result.nome);
          printf("Data de nascimento: ");
          scanf("%s", result.dataNascimento);
          printf("CPF: ");
          scanf("%s", result.cpf);
          printf("sexo: ");
          scanf("%s", result.sexo);
          return result;
          }
          cadastrarCliente b;
          b = P();  
          L(b);
          return 0; 
 } 
