#include <stdio.h>
#include <stdlib.h>

 int ordemCrescente_PAR(int N);


 int main (){

    int N = 10;

    ordemCrescente_PAR (N);
 }

 int ordemCrescente_PAR(int N){
    
     if ( N < 0 ){

        return 0;

     } else {

        ordemCrescente_PAR( N - 1 );
        printf("%d\n", N);
     } 
   return 0;
 }
