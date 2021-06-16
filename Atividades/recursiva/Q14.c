#include <stdio.h>
#include <stdlib.h>

 int ordemDEcrescente_par(int N);

     int main() {
    
          int N = 10;
          
          ordemDEcrescente_par(N);
 }

 int ordemDEcrescente_par(int N){
  
      if (N < 0)
 
        return 0;

      else if (N % 2 == 0){
        printf("%d\n", N);  
      }

      return ordemDEcrescente_par(N - 1);
}
