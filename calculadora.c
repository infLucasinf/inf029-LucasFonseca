#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    float b, c, d, e, f, g;

     printf("\nDigite uma das opcoes: 0 - Sair, 1 - Somar, 2 - Subtrair, 3 - Multiplicar, 4 - Dividir.\n");
     scanf("%d", &a);

      switch(a){
       case 0:
        printf(" Sistema encerrado");
        return 0;
          case 1:{
              printf(" \nVamos somar.\n");
              scanf(" %f%f",&b,&c);
              d=b+c;
              printf(" %.2f",d);
              break;
          }
          case 2:
              printf(" \nVamos subtrair.\n");
              scanf(" %f%f",&b,&c);
              d=b-c;
              printf(" %.2f",d);
              break;
          case 3:
              printf(" \nVamos multiplicar.\n");
              scanf(" %f%f",&b,&c);
              d=b*c;
              printf(" %.2f",d);
              break;
          case 4:
              printf(" \nVamos dividir.\n");
              scanf(" %f%f",&b,&c);
                 if(c==0){
                    printf("Nao e possivel efetuar divisoes por zero, escolha outro valor");
            }
              d=b/c;
              printf(" %f",d);
              break;
         default:
              printf(" Invalido");
              return 0;
     }
}
