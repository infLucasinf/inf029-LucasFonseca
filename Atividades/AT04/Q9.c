    #include <stdio.h>
    #include <stdlib.h>


        typedef struct{
               char nome[1000];
               int  dia;
               int  mes; 
               int  ano;  
               char cpf[13]; 
               char sexo[400];

    }cadastrarCliente;


      int  valida_cpf();
      char valida_sexo();
      int  valida_data_nascimento_dia();
      int  valida_data_nascimento_mes();
      int  valida_data_nascimento_ano();
      char valida_nome();

          char L (cadastrarCliente b){
                cadastrarCliente result;

               printf("\nNome: %s\n", b.nome);
               printf("\nData de Nascimento: %d/%d /%d \n", b.dia, b.mes, b.ano);
               printf("\nCPF: %s\n", b.cpf);
               printf("\nSexo: %s\n", b.sexo);
    }

          int main(void){
              cadastrarCliente P(void){     
              cadastrarCliente result;
      
              printf("\n Nome: ");
              fgets(result.nome, 1000, stdin);
              valida_nome();

              printf("\n Dia: ");
              scanf("%d", &result.dia);
              valida_data_nascimento_dia();

              printf("\n Mes: ");
              scanf("%d", &result.mes);
              valida_data_nascimento_mes();

              printf("\n Ano: ");
              scanf("%d", &result.ano);
              valida_data_nascimento_ano();

              printf("\n Digite CPF (apenas números): ");
              scanf("%s", result.cpf);
              valida_cpf();

              printf("\n Para sexo digite [Masculino], [Feminino], ou [Outros: especifique]: ");
              scanf("%s", result.sexo);
              valida_sexo();
              return result;
              }
              cadastrarCliente b;
              b = P();  
              L(b);
              return 0; 
          
    } 
          
         int valida_cpf(){

           cadastrarCliente result;

           char cpf[13];
           float resto1, resto2;
           int soma1, soma2, contador;

           printf("  Confirme o cpf: ");
           scanf("%s", result.cpf);
           setbuf(stdin,NULL);

           result.cpf[0] -= '0';
           result.cpf[1] -= '0';
           result.cpf[2] -= '0';
           result.cpf[3] -= '0';
           result.cpf[4] -= '0';
           result.cpf[5] -= '0';
           result.cpf[6] -= '0';
           result.cpf[7] -= '0';
           result.cpf[8] -= '0';
           result.cpf[9] -= '0';
           result.cpf[10] -= '0';
           
        
       if((result.cpf[0] == 
            result.cpf[1]) && (result.cpf[1] == 
            result.cpf[2]) && (result.cpf[2] == 
            result.cpf[3]) && (result.cpf[3] == 
            result.cpf[4]) && (result.cpf[4] == 
            result.cpf[5]) && (result.cpf[5] == 
            result.cpf[6]) && (result.cpf[6] == 
            result.cpf[7]) && (result.cpf[7] ==
            result.cpf[8]) && (result.cpf[8] ==
            result.cpf[9]) && (result.cpf[9] == 
            result.cpf[10])){
        
      }else{
        soma1 = ((int)result.cpf[0] * 10)+  
                ((int)result.cpf[1] * 9)+
                ((int)result.cpf[2] * 8)+  
                ((int)result.cpf[3] * 7)+  
                ((int)result.cpf[4] * 6)+  
                ((int)result.cpf[5] * 5)+  
                ((int)result.cpf[6] * 4)+  
                ((int)result.cpf[7] * 3)+  
                ((int)result.cpf[8] * 2);
       
        resto1 = (soma1 * 10) % 11;
      }
       if(resto1 == 10){
          resto1 = 0;
         }
          
       soma2 = ((int)result.cpf[0] * 11) + 
               ((int)result.cpf[1] * 10) + 
               ((int)result.cpf[2] * 9) + 
               ((int)result.cpf[3] * 8) + 
               ((int)result.cpf[4] * 7) + 
               ((int)result.cpf[5] * 6) +
               ((int)result.cpf[6] * 5) + 
               ((int)result.cpf[7] * 4) + 
               ((int)result.cpf[8] * 3) + 
               ((int)result.cpf[9] * 2);

       resto2 = (soma2 * 10) % 11;
       
        if(resto2 == 10){
         resto2 = 0;
        }
       
         if((resto1 == result.cpf[9]) && (resto2 == result.cpf[10])){

          }else{
           printf("\n             ATENCAO \n  CPF invalido, refaca a operacao. \n\n");
            return main();
         }
     }


         int valida_data_nascimento_dia(){
        
           int escolha_opcao, dia;

     
              printf("  Confirme o dia: "); 
               scanf("%d", &dia);

                if((dia > 0) && (dia < 32)){
                  }else{

                   printf("\n\nDados incorretos, refaça a operação.\n\n");
                   printf("\n 0 - Refazer a operação \n 1 - Sair\n ");
                   scanf("%d", &escolha_opcao);
                  
                    }while(escolha_opcao == 0){
                     return main();
                  
                    }while(escolha_opcao == 1){
                     return 0;
                   }  
         }


          int valida_data_nascimento_mes(){
          int escolha_opcao, mes;
              
            printf("  Confirme o mês: "); 
              scanf("%d", &mes);    


                  if((mes > 0) && (mes < 13)){
                   
                   }else{
                     printf("\n\nDados incorretos, refaça a operação.\n\n");
                     printf("\n 0 - Refazer a operação \n 1 - Sair\n ");
                     scanf("%d", &escolha_opcao);
                      
                      }while(escolha_opcao == 0){
                       return main();
                      
                      }while(escolha_opcao == 1){
                       return 0;
                       }
               }
       
             int valida_data_nascimento_ano(){
             int escolha_opcao, ano;

              printf("  Confirme o ano: "); 
              scanf("%d", &ano);  
 
                  if((ano > 1900) && (ano < 2019)){
                    }else{

                     printf("\n\nDados incorretos, refaça a operação.\n\n");
                     printf("\n 0 - Refazer a operação \n 1 - Sair\n ");
                     scanf("%d", &escolha_opcao);
                      
                      }while(escolha_opcao == 0){
                       return main();
                      
                      }while(escolha_opcao == 1){
                       return 0;
                       }        
        }


           char valida_sexo(){
         
            char sexo[400];
          
                while(sexo != 0){   
                  printf(" Confirme o sexo: "); 
                  scanf("%s", sexo);
                  setbuf(stdin,NULL);
             
                  
                    if((sexo[0] == 'M') || (sexo[0] == 'm')){
                      break;
                      }  
                      
                    if((sexo[0] == 'F') || (sexo[0] == 'f')){
                      break;
                      }
                      
                    if((sexo[0] == 'O') || (sexo[0] == 'o')){
                       printf("\n  Especifique o sexo: \n   ");
                       scanf("%s", sexo);
                       break;
                      
                    }else{
                     printf("\nDados incorretos, refaça a operação.\n");
                     return main();
                    }
               }
            }


      char valida_nome(){

        int contador;
        char nome[1000];

             printf("  Confirme o nome: "); 
             fgets(nome, 1000, stdin);
  
                 if((nome[contador] >= 'a' && nome[contador] <= 'z') || (nome[contador] >= 'A' && nome[contador] <= 'Z')){  
                 
                 }else{

                    printf("\n    Erro! Digito inválido, digite apenas letras.\n\n\n");
                    return main();
                 }                     
               
     } 

