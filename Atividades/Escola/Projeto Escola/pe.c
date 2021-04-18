#include <stdio.h>
#include <stdlib.h>
#define TAM 5


typedef struct{
         
         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
         int  encontrar;
}cadastro_Alunos;


typedef struct{
         
         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
}cadastro_Professores;


typedef struct{
         char nome[1000];
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
         int  valida_cpf();
         char valida_sexo();
         int valida_data_nascimento_dia();
         int valida_data_nascimento_mes();
         int valida_data_nascimento_ano();
         char valida_nome();

    int main(){
        
        menu();
       
    }

    void menu(){
     int escolhaOpcao;
 
            do{
              printf("\n\n            CADASTRO ESCOLA\n\n"); 
              printf("      | Digite uma das opções abaixo:\n\n");
              printf("      |1 - Cadastrar alunos\n");
              printf("      |2 - Atualizar Cadastro dos alunos\n");
              printf("      |3 - Lista dos alunos\n");
              printf("      ----------------------------------------\n");
              printf("      |4 - Cadastrar professores\n");
              printf("      |5 - Atualizar Cadastro dos professores\n");
              printf("      |6 - Listar professores\n");
              printf("      ----------------------------------------\n");
              printf("      |7 - Cadastrar disciplinas\n");
              printf("      |8 - Atualizar disciplinas\n");
              printf("      |9 - Listar disciplinas\n");
              printf("      ----------------------------------------\n");
              printf("      |0 - Sair\n");
              printf("\n    Opção: ");
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

         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
         int ativo, contador, escolhaOpcao;        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Aluno %d\n", 1 + contador);
         
             printf("\n Matricula: 2021%d\n", 1 + contador); 
          
             printf(" Nome: ");   
             fgets(aluno[contador].nome, 1000, stdin);
             valida_nome();
             setbuf(stdin,NULL); 

           
             printf("\n Sexo: [Masculino] [Feminino] [Outros]: ");
             fgets(aluno[contador].sexo, 100, stdin);
             valida_sexo();
             setbuf(stdin,NULL);
             
      
             printf("\n |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%d", &aluno[contador].dia);
             valida_data_nascimento_dia();
             setbuf(stdin,NULL); 
             
             printf("\n |Mês: ");
             scanf("%d", &aluno[contador].mes);
             valida_data_nascimento_mes();
             setbuf(stdin,NULL);
             
             printf("\n |Ano: ");
             scanf("%d", &aluno[contador].ano);
             valida_data_nascimento_ano();
             setbuf(stdin,NULL); 
             
             printf("\n Digite o CPF do aluno: ");   
             scanf("%s", aluno[contador].cpf);
             valida_cpf();
             setbuf(stdin,NULL);

             printf("\n\n");
            }
             printf("[0] - MENU PRINCIPAL ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



 void atualizar(){ 

 cadastro_Alunos aluno[TAM];
 
         char nome[2000];
         char sexo[100];
         int  dia;
         int  mes;
         int  ano;
         char cpf[13];
         int contador, escolhaOpcao;


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
         
             printf("\n Matricula: 2021%d\n", 1 + contador);
                       
          
             printf(" Nome: ");   
             fgets(aluno[contador].nome, 1000, stdin);
             valida_nome();
             setbuf(stdin,NULL); 

           
             printf("\n Sexo: [Masculino] [Feminino] [Outros]: ");
             fgets(aluno[contador].sexo, 100, stdin);
             valida_sexo();
             setbuf(stdin,NULL);
             
      
             printf("\n\n |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%d", &aluno[contador].dia);
             valida_data_nascimento_dia();
             setbuf(stdin,NULL); 
             
             printf("\n |Mês: ");
             scanf("%d", &aluno[contador].mes);
             valida_data_nascimento_mes();
             setbuf(stdin,NULL);
             
             printf("\n |Ano: ");
             scanf("%d", &aluno[contador].ano);
             valida_data_nascimento_ano();
             setbuf(stdin,NULL); 
             
             printf("\n\n Digite o CPF do aluno: ");   
             scanf("%s", aluno[contador].cpf);
             valida_cpf();
             setbuf(stdin,NULL); 
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - Salvar ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void lista(){
    int contador, continuarOusair;
    cadastro_Alunos aluno[TAM];

         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
         


                 printf("\n----------------Lista dos alunos----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Aluno %d--------|\n\n", 1 + contador);
                
                     
                     printf("\n Matricula:2021%d\n", 1 + contador);
                      
                     printf("\nNome: %s", aluno[contador].nome);
                      
                     printf("\nSexo: %s", aluno[contador].sexo);
                      
                     printf("\nData de nascimento: %d/", aluno[contador].dia);
                     printf("%d/", aluno[contador].mes);
                     printf("%d", aluno[contador].ano);
         
                     printf("\n\nCPF: %s\n", aluno[contador].cpf);
              
             }
        printf("\n [0] - MENU PRINCIPAL ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }

   void cadastrar_professor(){ 

   cadastro_Professores professor[TAM];

         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
         int ativo, contador, escolhaOpcao;
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Professor %d\n", 1 + contador);
         
             printf("\n Matricula:2021%d\n", 11 + contador); 
             
          
             printf("\n Nome: ");   
             fgets(professor[contador].nome, 1000, stdin);
             valida_nome();
             setbuf(stdin,NULL); 

             printf("\n Sexo [Masculino] [Feminino] [Outros]: ");
             fgets(professor[contador].sexo, 100, stdin);
             valida_sexo();
             setbuf(stdin,NULL); 

             printf("\n\n |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%d", &professor[contador].dia);
             valida_data_nascimento_dia();
             setbuf(stdin,NULL); 
             
             printf("\n\n |Mês: ");
             scanf("%d", &professor[contador].mes);
             valida_data_nascimento_mes();
             setbuf(stdin,NULL);
             
             printf("\n\n |Ano: ");
             scanf("%d", &professor[contador].ano);
             valida_data_nascimento_ano();
             setbuf(stdin,NULL); 
             
             printf("\n CPF: ");   
             scanf("%s", professor[contador].cpf);
             valida_cpf();
             setbuf(stdin,NULL);  
             printf("\n\n");
            }
             printf("[0] - MENU PRINCIPAL: ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



    void atualizar_professores(){ 

    cadastro_Professores professor[TAM];

         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];
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
         
             printf("\n Matricula:2021%d\n", 11 + contador);
             
          
             printf("\n Nome: ");   
             fgets(professor[contador].nome, 1000, stdin);
             valida_nome();
             setbuf(stdin,NULL); 

             printf("\n Sexo [M = masculino] [F = feminino] [O = outros]: ");
             fgets(professor[contador].sexo, 100, stdin);
             valida_sexo();
             setbuf(stdin,NULL); 

             printf("\n |Data de nascimento |\n");     
             printf(" |Dia: ");
             scanf("%d", &professor[contador].dia);
             valida_data_nascimento_dia();
             setbuf(stdin,NULL); 
             
             printf("\n |Mês: ");
             scanf("%d", &professor[contador].mes);
             valida_data_nascimento_mes();
             setbuf(stdin,NULL);
             
             printf("\n |Ano: ");
             scanf("%d", &professor[contador].ano);
             valida_data_nascimento_ano();
             setbuf(stdin,NULL); 
             
             printf("\n CPF: ");   
             scanf("%s", professor[contador].cpf);
             valida_cpf();
             setbuf(stdin,NULL);  
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - Salvar ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void listar_professor(){
    int contador, continuarOusair;
    cadastro_Professores professor[TAM];

         char nome[1000];
         char sexo[100];
         int dia;
         int mes;
         int ano;
         char cpf[13];


                 printf("\n----------------Lista dos professores----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Professor %d--------|\n\n", contador + 1);
                
                     
                     printf("\n Matricula:2021%d", 11 + contador);
                      
                     printf("\nNome: %s", professor[contador].nome);
                      
                     printf("\nSexo: %s", professor[contador].sexo);
                      
                     printf("\nData de nascimento: %d/", professor[contador].dia);
                     printf("%d/", professor[contador].mes);
                     printf("%d", professor[contador].ano);
         
                     printf("\n\nCPF: %s\n", professor[contador].cpf);
              
             }
        printf("\n [0] - MENU PRINCIPAL: ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }            





       void cadastrar_Disciplinas(){ 

       cadastro_Disciplinas disciplina[TAM];

         char nome[1000];
         char semestre[400];
         char professor[400];
         int ativo, contador, escolhaOpcao;
        
       
      do{
        for(contador = 0; contador < TAM; ++contador){
           
             printf("\n   Disciplina %d\n", 1 + contador);
         
             printf("\n Disciplina: ");
             fgets(disciplina[contador].nome, 1000, stdin);
             valida_nome();
             setbuf(stdin,NULL);
          
             printf("\n Código: 2021%d\n", 33 + contador); // Pro códido não ficar igual ao do aluno e professor somo + 33

             printf("\n Semestre: ");
             fgets(disciplina[contador].semestre, 400, stdin);
             setbuf(stdin,NULL); 
             
             printf("\n Professor: ");
             fgets(disciplina[contador].professor, 400, stdin);
             valida_nome();
             setbuf(stdin,NULL);
             printf("\n\n");
            }
             printf(" [0] - MENU PRINCIPAL ");
             scanf("%d", &escolhaOpcao); 
      
         }while(escolhaOpcao != 0); 
}



      void atualizar_Disciplinas(){ 

      cadastro_Disciplinas disciplina[TAM];

         char nome[1000];
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
             fgets(disciplina[contador].nome, 1000, stdin);
             setbuf(stdin,NULL);
                       
             printf("\n Código: 2021%d\n", 33 + contador);

             printf("\n Semestre ");
             fgets(disciplina[contador].semestre, 400, stdin);
             setbuf(stdin,NULL);
             
             printf("\n Professor: ");   
             fgets(disciplina[contador].professor, 400, stdin);
             setbuf(stdin,NULL);   
             printf("\n\n");
        } 
             printf("1 - Atualizar/corrigir informações\n");
             printf("0 - Salvar ");
             scanf("%d", &escolhaOpcao);
             
            
      
         }while(escolhaOpcao != 0); 
}


             
    void listar_Disciplinas(){
    int contador, continuarOusair;
    cadastro_Disciplinas disciplina[TAM];

         char nome[1000];
         char semestre[400];
         char professor[400];

               printf("\n ----------------Lista das disciplinas----------------\n");
                
               do{  
               for(contador = 0; contador < TAM; ++contador){

                  printf("\n\n|--------Disciplina %d--------|\n\n", contador + 1);
                
                     
                     printf("Nome: %s", disciplina[contador].nome);
                      
                     printf("\nCódigo: 2021%d", 33 + contador);
                      
                     printf("\n\nSemestre: %s", disciplina[contador].semestre);
         
                     printf("\nProfessor: %s", disciplina[contador].professor);
              
             }
        printf("\n [0] - MENU PRINCIPAL ");
        scanf("%d", &continuarOusair);
     }while(continuarOusair != 0);              
   }
       int valida_cpf(){

       char cpf[13];
       float resto1, resto2;
       int soma1, soma2, contador;

       printf(" PRECISAMOS QUE CONFIRME O CPF: "); 
       scanf("%s", cpf);
       setbuf(stdin,NULL);

       cpf[0] -= '0';
       cpf[1] -= '0';
       cpf[2] -= '0';
       cpf[3] -= '0';
       cpf[4] -= '0';
       cpf[5] -= '0';
       cpf[6] -= '0';
       cpf[7] -= '0';
       cpf[8] -= '0';
       cpf[9] -= '0';
       cpf[10] -= '0';
       
    
   if((cpf[0] == cpf[1]) && 
     (cpf[1] == cpf[2]) && 
     (cpf[2] == cpf[3]) && 
     (cpf[3] == cpf[4]) &&
     (cpf[4] == cpf[5]) && 
     (cpf[5] == cpf[6]) && 
     (cpf[6] == cpf[7]) &&    
     (cpf[7] == cpf[8]) && 
     (cpf[8] == cpf[9]) && 
     (cpf[9] == cpf[10])){
    
  }else{
    soma1 = ((int)cpf[0] * 10)+  
            ((int)cpf[1] * 9)+
            ((int)cpf[2] * 8)+  
            ((int)cpf[3] * 7)+  
            ((int)cpf[4] * 6)+  
            ((int)cpf[5] * 5)+  
            ((int)cpf[6] * 4)+  
            ((int)cpf[7] * 3)+  
            ((int)cpf[8] * 2);
   
    resto1 = (soma1 * 10) % 11;
  }
   if(resto1 == 10){
      resto1 = 0;
     }
      
   soma2 = ((int)cpf[0] * 11) + 
           ((int)cpf[1] * 10) + 
           ((int)cpf[2] * 9) + 
           ((int)cpf[3] * 8) + 
           ((int)cpf[4] * 7) + 
           ((int)cpf[5] * 6) +
           ((int)cpf[6] * 5) + 
           ((int)cpf[7] * 4) + 
           ((int)cpf[8] * 3) + 
           ((int)cpf[9] * 2);

   resto2 = (soma2 * 10) % 11;
   
    if(resto2 == 10){
     resto2 = 0;
    }
   
  if((resto1 == cpf[9]) && (resto2 == cpf[10])){

  }else{
     printf("\n\n\n");             
     printf("            |ATENCAO!| \n\n  CPF invalido, voltarei pro munu. \n\n");
     return main();
     }
 }

    char valida_sexo(){
     
    char sexo[400];
      
      while(sexo != 0){   
          printf(" PRECISAMOS QUE CONFIRME O SEXO: "); 
          scanf("%s", sexo);
          setbuf(stdin,NULL);
         
      
        if((sexo[0] == 'M') || (sexo[0] == 'm')){
          break;
          }  
          
        if((sexo[0] == 'F') || (sexo[0] == 'f')){
          break;
          }
          
        if((sexo[0] == 'O') || (sexo[0] == 'o')){
          break;
          
        }else{
         printf("\n   Dados incorretos, refaça a operação.\n");
         return main();
         
         
         
        }  
      }
   } 
  

    int valida_data_nascimento_dia(){
    int escolha_opcao, dia;

 
          printf(" PRECISAMOS QUE CONFIRME O DIA: "); 
           scanf("%d", &dia);

          if((dia > 0) && (dia < 32)){
            }else{
 
              printf("\n\nDados incorretos, refaça a operação.\n\n");
              printf("\n [0] - REFAZER OPERAÇÃO ");
              scanf("%d", &escolha_opcao);
              
              }while(escolha_opcao == 0){
               return main();
              } 
              
     }


      int valida_data_nascimento_mes(){
      int escolha_opcao, mes;
          
        printf(" PRECISAMOS QUE CONFIRME O MÊS: "); 
          scanf("%d", &mes);    


          if((mes > 0) && (mes < 13)){
           }else{

             printf("\n\nDados incorretos, refaça a operação.\n\n");
             printf("\n [0] - REFAZER OPERAÇÃO ");
             scanf("%d", &escolha_opcao);
              
              }while(escolha_opcao == 0){
               return main();
               break;
             } 
        }
   
         int valida_data_nascimento_ano(){
         int escolha_opcao, ano;

          printf(" PRECISAMOS QUE CONFIRME O ANO: "); 
          scanf("%d", &ano);   
          if((ano > 1899) && (ano < 2019)){
            }else{

             printf("\n\nDados incorretos, refaça a operação.\n\n");
             printf("\n [0] - REFAZER OPERAÇÃO ");
             scanf("%d", &escolha_opcao);
              
              }while(escolha_opcao == 0){
               return main();
               break;
              
          }
  }
          

    char valida_nome(){
    int contador;
    char nome[1000]= "\0";
     
     printf(" PRECISAMOS QUE CONFIRME O NOME: "); 
     fgets(nome, 1000, stdin);  
     if((nome[contador] >= 'a' && nome[contador] <= 'z') || (nome[contador] >= 'A' && nome[contador] <= 'Z')){  
     
     }else{
        printf("\n    Erro! Digito inválido, digite apenas letras.\n");
        return main();
     }                     
   
} 


