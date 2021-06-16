#include <stdio.h>
#include <stdlib.h>

 int multiplica(int n1, int n2);

 int main(){
  
  int n1, n2, resultado;

  printf( "Digite dois valores: \n" );
  scanf("%d %d", &n1, &n2);
  multiplica(n1,n2);
  resultado =   multiplica(n1,n2);
  printf("Resultado: %d \n", resultado); 

}

 int multiplica(int n1, int n2){

     if(n1 == 0 || n2 == 0){
      return 0;
     } else {
      return n1 * n2;
     }
}

