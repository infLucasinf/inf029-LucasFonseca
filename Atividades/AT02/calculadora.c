#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    float num1, num2, resultado;

    for(;;){     
    printf("\nDigite uma das opcoes:\n\n0 - Sair \n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir\n\nOpcao: ");
    scanf("%d", &a);

       switch(a){
       case 0:{
           printf(" Sistema encerrado");
           return 0;
        }
          case 1:{
              printf(" \nVamos somar, digite o primeiro e o segundo numero:\n\n");
              scanf("%f%f", &num1, &num2);
              resultado=num1+num2;
              printf("%.2f",resultado);
              break;
          }
          case 2:{
              printf(" \nVamos subtrair, digite o primeiro e o segundo numero:\n\n");
              scanf("%f%f",&num1,&num2);
              resultado=num1-num2;
              printf("%.2f",resultado);
              break;
           }
          case 3:{
              printf(" \nVamos multiplicar, digite o primeiro e o segundo numero:\n\n");
              scanf("%f%f",&num1,&num2);
              resultado=num1*num2;
              printf("%.2f",resultado);
              break;
            }
          case 4:{
              printf(" \nVamos dividir, digite o primeiro e o segundo numero:\n\n");
              scanf("%f%f",&num1,&num2);
              if (num2==0){
                    printf("\nNao e possivel efetuar divisoes por zero, escolha outro valor");
            }
              resultado=num1/num2;
              printf("%.2f",resultado);
              break;
             }
         default:
              printf("Numero invalido.");
              return 1;
              
       }
         printf("\n");
    }
}
