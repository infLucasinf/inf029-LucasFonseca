#include <stdio.h>
#include <stdlib.h>

 int fatorial_duplo(int valor);

 int main(){

    int valor, resultado;
    valor = 5;
    resultado = fatorial_duplo(valor);
    printf("Resultado: %d \n", resultado);
    return 0;
 }

 int fatorial_duplo(int valor){

    if (valor == 1){
      return 1;
     }
    if (valor % 2 != 0)
        return valor * fatorial_duplo(valor -1);
      return fatorial_duplo(valor -1);
 }
