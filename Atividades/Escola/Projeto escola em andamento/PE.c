#include <stdio.h>
#include <stdlib.h>
#define TAM 5


typedef struct{
         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         int  encontrar;
}cadastro_Alunos;


typedef struct{
         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
}cadastro_Professores;


typedef struct{
         char nome[400];
         char codigo[400];
         char semestre[400];
         char professor[400];
}cadastro_Disciplinas;

         void menu();
         void cadastrar();
         void atualizar();
         void lista();
         void cadastrar_professor();
         void atualizar_professores();
         void listar_professor();
         void cadastrar_Disciplinas(); 
         void atualizar_Disciplinas();
         void listar_Disciplinas();

    int main(){
        
        menu();
       
    }

    void menu(){
         int escolhaOpcao;
 
            do{
              printf("\n\n       CADASTRO ESCOLA\n\n"); 
              printf("  Digite uma das opções abaixo:\n\n");
              printf(" 1 - Cadastro de alunos\n");
              printf(" 2 - Atualizar Cadastro de alunos\n");
              printf(" 3 - Lista de alunos\n");
              printf(" 4 - Cadastrar professor\n");
              printf(" 5 - Atualizar Cadastro de professor\n");
              printf(" 6 - Listar professores\n");
              printf(" 7 - Cadastrar disciplinas\n");
              printf(" 8 - Atualizar disciplinas\n");
              printf(" 9 - Listar disciplinas\n");
              printf(" 0 - Sair\n");
              printf("\nOpção: ");
              scanf("%d", &escolhaOpcao);
              getchar();
                
                 switch (escolhaOpcao){
                   case 1:
                     cadastrar();
                     break;
                   case 2:
                     atualizar();
                     break;
                   case 3:
                     lista();
                     break;
                   case 4:
                   cadastrar_professor();
                     break;
                   case 5:
                   atualizar_professores();
                     break;
                   case 6:
                   listar_professor();   
                     break;
                   case 7:
                   cadastrar_Disciplinas();
                     break;
                   case 8:
                   atualizar_Disciplinas();
                     break;
                   case 9:
                   listar_Disciplinas();
                     break;
                }
           }while(escolhaOpcao != 0);
    }

  void cadastrar(){ 

      cadastro_Alunos aluno[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         int ativo, contador, escolhaOpcao;
         char sexoA;
         int digito;
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Aluno %d\n", 1 + contador);
         
             printf("\n Matricula: ");
             setbuf(stdin,NULL);
             fgets(aluno[contador].matricula, 400, stdin);
             
          
             printf(" Nome: ");   
             fgets(aluno[contador].nome, 400, stdin);
             setbuf(stdin,NULL); 

           
             printf(" Sexo [M = masculino] [F = feminino] [O = outros]: ");
             fgets(aluno[contador].sexo, 400, stdin);
             setbuf(stdin,NULL);
             
      
             printf(" |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%s", aluno[contador].dia);
             setbuf(stdin,NULL); 
             
             printf(" |Mês: ");
             scanf("%s", aluno[contador].mes);
             setbuf(stdin,NULL);
             
             printf(" |Ano: ");
             scanf("%s", aluno[contador].ano);
             setbuf(stdin,NULL); 
             
             printf(" Digite o CPF do aluno : ");   
             scanf("%s", aluno[contador].cpf);
             setbuf(stdin,NULL);

             printf("\n\n");
            }
             printf("[0] - MENU PRINCIPAL ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



 void atualizar(){ //Nessa função quando atualiza ele já exclui os dados antigos permanecendo com os novos dados inseridos.

      cadastro_Alunos aluno[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         int ativo, contador, escolhaOpcao;


   printf("                       ### A T E N Ç Â O! ###\n\n ");
   printf("Quando atualizar os dados, automaticamente será excluido os que já estavam cadastrados.\n\n");
   printf(" 1 - CONTINUAR\n\n 0 - CANCELAR\n\n OPÇÃO: ");
   scanf("%d", &escolhaOpcao);
   if(escolhaOpcao == 0){
    return;
   }
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n  Atualizar aluno %d\n", 1 + contador);
         
             printf("\n Matricula: ");
             setbuf(stdin,NULL);
             fgets(aluno[contador].matricula, 400, stdin);
             
          
             printf(" Nome: ");   
             fgets(aluno[contador].nome, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" Sexo [M = masculino] [F = feminino] [O = outros]: ");
             fgets(aluno[contador].sexo, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%s", aluno[contador].dia);
             setbuf(stdin,NULL); 
             
             printf(" |Mês: ");
             scanf("%s", aluno[contador].mes);
             setbuf(stdin,NULL);
             
             printf(" |Ano: ");
             scanf("%s", aluno[contador].ano);
             setbuf(stdin,NULL); 
             
             printf(" Digite o CPF do aluno : ");   
             scanf("%s", aluno[contador].cpf);
             setbuf(stdin,NULL);  
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - MENU PRINCIPAL ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void lista(){
    int contador, continuarOusair;
    cadastro_Alunos aluno[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         char sexoA;


                 printf("\n----------------Lista dos alunos----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Aluno %d--------|\n\n", contador + 1);
                
                     
                     printf("Matricula: %s", aluno[contador].matricula);
                      
                     printf("\nNome: %s", aluno[contador].nome);
                      
                     printf("\nSexo: %s", aluno[contador].sexo);
                      
                     printf("\nData de nascimento: %s/%s/%s ", aluno[contador].dia, aluno[contador].mes, aluno[contador].ano);
         
                     printf("\nCPF: %s\n", aluno[contador].cpf);
              
             }
        printf("\n [0] - MENU PRINCIPAL ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }

   void cadastrar_professor(){ 

      cadastro_Professores professor[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         int ativo, contador, escolhaOpcao;
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Professor %d\n", 1 + contador);
         
             printf("\n Matricula: ");
             setbuf(stdin,NULL);
             fgets(professor[contador].matricula, 400, stdin);
             
          
             printf(" Nome: ");   
             fgets(professor[contador].nome, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" Sexo [M = masculino] [F = feminino] [O = outros]: ");
             fgets(professor[contador].sexo, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%s", professor[contador].dia);
             setbuf(stdin,NULL); 
             
             printf(" |Mês: ");
             scanf("%s", professor[contador].mes);
             setbuf(stdin,NULL);
             
             printf(" |Ano: ");
             scanf("%s", professor[contador].ano);
             setbuf(stdin,NULL); 
             
             printf(" CPF : ");   
             scanf("%s", professor[contador].cpf);
             setbuf(stdin,NULL);  
             printf("\n\n");
            }
             printf("[0] - MENU PRINCIPAL: ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



 void atualizar_professores(){ //Nessa função quando atualiza ele já exclui os dados antigos permanecendo com os novos dados inseridos.

      cadastro_Professores professor[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];
         int ativo, contador, escolhaOpcao;


   printf("                       ### A T E N Ç Â O! ###\n\n ");
   printf("Quando atualizar os dados, automaticamente será excluido os que já estavam cadastrados.\n\n");
   printf(" 1 - CONTINUAR\n\n 0 - CANCELAR\n\n OPÇÃO: ");
   scanf("%d", &escolhaOpcao);
   if(escolhaOpcao == 0){
    return;
   }
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n  Atualizar professor %d\n", 1 + contador);
         
             printf("\n Matricula: ");
             setbuf(stdin,NULL);
             fgets(professor[contador].matricula, 400, stdin);
             
          
             printf(" Nome: ");   
             fgets(professor[contador].nome, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" Sexo [M = masculino] [F = feminino] [O = outros]: ");
             fgets(professor[contador].sexo, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%s", professor[contador].dia);
             setbuf(stdin,NULL); 
             
             printf(" |Mês: ");
             scanf("%s", professor[contador].mes);
             setbuf(stdin,NULL);
             
             printf(" |Ano: ");
             scanf("%s", professor[contador].ano);
             setbuf(stdin,NULL); 
             
             printf(" CPF : ");   
             scanf("%s", professor[contador].cpf);
             setbuf(stdin,NULL);  
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - MENU PRINCIPAL: ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void listar_professor(){
    int contador, continuarOusair;
    cadastro_Professores professor[TAM];

         char matricula[400]; 
         char nome[400];
         char sexo[400];
         char dia[400];
         char mes[400];
         char ano[400];
         char cpf[400];


                 printf("\n----------------Lista dos professores----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Professor %d--------|\n\n", contador + 1);
                
                     
                     printf("Matricula: %s", professor[contador].matricula);
                      
                     printf("\nNome: %s", professor[contador].nome);
                      
                     printf("\nSexo: %s", professor[contador].sexo);
                      
                     printf("\nData de nascimento: %s/%s/%s ", professor[contador].dia, professor[contador].mes, professor[contador].ano);
         
                     printf("\nCPF: %s\n", professor[contador].cpf);
              
             }
        printf("\n [0] - MENU PRINCIPAL: ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }            





       void cadastrar_Disciplinas(){ 

       cadastro_Disciplinas disciplina[TAM];

         char nome[400];
         char codigo[400];
         char semestre[400];
         char professor[400];
         int ativo, contador, escolhaOpcao;
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Professor %d\n", 1 + contador);
         
             printf("\n Nome: ");
             setbuf(stdin,NULL);
             fgets(disciplina[contador].codigo, 400, stdin);
             
          
             printf(" Codigo: ");   
             fgets(disciplina[contador].nome, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" Semestre: ");
             fgets(disciplina[contador].semestre, 400, stdin);
             setbuf(stdin,NULL); 
             
             printf(" Professor: ");   
             scanf("%s", disciplina[contador].professor);
             setbuf(stdin,NULL);  
             printf("\n\n");
            }
             printf(" [0] - MENU PRINCIPAL ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



 void atualizar_Disciplinas(){ //Nessa função quando atualiza ele já exclui os dados antigos permanecendo com os novos dados inseridos.

      cadastro_Disciplinas disciplina[TAM];

         char nome[400];
         char codigo[400];
         char semestre[400];
         char professor[400];
         int ativo, contador, escolhaOpcao;


   printf("                       ### A T E N Ç Â O! ###\n\n ");
   printf("Quando atualizar os dados, automaticamente será excluido os que já estavam cadastrados.\n\n");
   printf(" 1 - CONTINUAR\n\n 0 - CANCELAR\n\n OPÇÃO: ");
   scanf("%d", &escolhaOpcao);
   if(escolhaOpcao == 0){
    return;
   }
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n  Atualizar disciplina %d\n", 1 + contador);
         
             printf("\n Nome: ");
             setbuf(stdin,NULL);
             fgets(disciplina[contador].nome, 400, stdin);
             
          
             printf(" Código: ");   
             fgets(disciplina[contador].codigo, 400, stdin);
             setbuf(stdin,NULL); 

             printf(" Semestre ");
             fgets(disciplina[contador].semestre, 400, stdin);
             setbuf(stdin,NULL);
             
             printf(" Professor: ");   
             scanf("%s", disciplina[contador].professor);
             setbuf(stdin,NULL);  
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - MENU ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void listar_Disciplinas(){
    int contador, continuarOusair;
    cadastro_Disciplinas disciplina[TAM];

         char nome[400];
         char codigo[400];
         char semestre[400];
         char professor[400];

               printf("\n----------------Lista das disciplinas----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Disciplina %d--------|\n\n", contador + 1);
                
                     
                     printf("Nome: %s", disciplina[contador].codigo);
                      
                     printf("\nCódigo: %s", disciplina[contador].nome);
                      
                     printf("\nSemestre: %s", disciplina[contador].professor);
         
                     printf("\nProfessor: %s\n", disciplina[contador].semestre);
              
             }
        printf("\n [0] - MENU PRINCIPAL ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }

         
