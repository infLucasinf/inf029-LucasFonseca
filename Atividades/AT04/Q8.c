#include <stdio.h>
#include <stdlib.h>


    typedef struct{
           char nome[30]; 
           char dataNascimento[20]; 
           char cpf[11]; 
           char sexo[9];

}cadastrarCliente;

     char L (cadastrarCliente b){
           printf("\nNome: %s\n", b.nome);
           printf("\nData de nascimento: %s\n", b.dataNascimento);
           printf("\nCPF: %s\n", b.cpf);
           printf("\nSexo: %s\n", b.sexo);
}
      
      int main(void){
          cadastrarCliente P(void){     
          cadastrarCliente result;
  
          printf("Nome: ");
          scanf("%s", &result.nome);
          printf("Data de nascimento: ");
          scanf("%s", &result.dataNascimento);
          printf("cpf: ");
          scanf("%s", &result.cpf);
          printf("sexo: ");
          scanf("%s", &result.sexo);
          return result;
          }
          cadastrarCliente b;
          b = P();  
          L(b);
          return 0; 
      
} 
