#include <stdio.h>
#include <stdlib.h>


    typedef struct{
           char nome[21];
           char dataNascimento[20]; 
           char cpf[11]; 
           char sexo[9];

}cadastrarCliente;
    
     validar_nome();

     char validar (cadastrarCliente i){
           printf("\nNome: %s\n", i.nome);
}
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
          validar_nome();
          return 0; 
      
} 

     void validar_nome(char nome){
     int = 0;
     while(nome [i] != '\0'){
         validar_nome(nome[i]);
         ++i;
     }
     if((nome >= 'a' && nome <= 'z') || (nome >= 'A' && <= 'Z')) {
     } else {
          printf("Erro! Digito inválido, digite apenas letras");
          return 0;
       }
     
}

    void valida_dataNascimento(char dataNascimento){

}
      
    void valida_cpf(char cpf){

}
    void valida_sexo(char sexo){
        

}
