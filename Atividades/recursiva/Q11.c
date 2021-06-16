#include <stdio.h>
#include <stdlib.h>

 int ordemCrescente(int N);


 int main (){

    int N = 10;

    ordemCrescente (N);
 }

 int ordemCrescente(int N){
    
     if ( N < 0 ){

        return 0;

     } else {

        ordemCrescente( N - 1 );
        printf("%d\n", N);
     } 
   return 0;
 }
