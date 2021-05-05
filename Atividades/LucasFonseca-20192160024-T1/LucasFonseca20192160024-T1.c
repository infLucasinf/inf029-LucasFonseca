// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Lucas da Silva Fonseca
//  email: bllucasfonseca@gmail.com
//  Matrícula: 20192160024
//  Semestre: Segundo

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LucasFonseca20192160024-T1.h"

/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
//int somar(int x, int y)
//{
//    int soma = 0;
//    soma = x + y;
//    return soma;
//}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
//int fatorial(int x)
//{ //função utilizada para testes
 //   int fat = 1;
  //  return fat;
//}

/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */

   

int q1(char *data)
{
    int datavalida = 1;
   
   
    //quebrar a string data em strings sDia, sMes, sAno

    //converter sDia, sMes e sAno em inteiros (ex: atoi)
    
    //criar as variáveis iDia, iMes, iAno
 
   //scanf("%s", data);


    char sDia[3]; 
    char sMes[3];  
    char sAno[5];
    int i = 0, j = 0, k = 0, iDia, iMes, iAno;
   
        //Isola dia
		while(data[i] != '/'){
			sDia[i] = data[i];
			i++;
			j++;
		}

		
		
		    j = i + 1;
		    i = 0;
            //Isola Mês
		    while(data[j] != '/'){
			    sMes[i] = data[j];
			    i++;
			    j++;
		    }
		    
		            
		        j++;
		        i = 0;
               //Isola ano 
		        while(data[j] != '\0'){
			        sAno[i] = data[j];
			        i++;
			        j++;
		        }

   //Conversão    
   iDia = atoi(sDia);
   iMes = atoi(sMes); 
   iAno = atoi(sAno);


          // Identifica se o dia e o mes tá com espaço preenchido, em branco ou com mais de três digitos e se o ano tem três digitos.
          if (data[0] == '/' || data[3] == '/' || data[6] == '/' || data[7] == '/' || (data[1] == '/' &&  data[2] == '/')){
             return 0;
          }else{  
             return 1;
          }

  
          //Valida data  
          if (iAno > 1900 && iAno < 3000 ){
             return 1;
              //Caso o ano tenha dois digitos ele soma com 2000
              if (iAno > 9 && iAno < 100 ){
                  iAno += 2000;
             return 1;

              
               if ((iMes >= 1 && iMes <= 12 )){
                    return 1;
                    
                    if ((iDia >= 1 && iDia <= 31) && (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes == 8 || iMes == 10 || iMes == 12))
                        return 1;

                    if ((iDia >= 1 && iDia <= 30) && (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11)){
                        return 1;
                    }else{
                        return 0;
                    }

                    if ((iDia >= 1 && iDia <= 28) && (iMes == 2)){
                        return 1;
                    }else{
                        return 0;
                    }
                       //Ano  
                    if ((iDia == 29 && iMes == 2) && (iAno % 400 == 0 || iAno % 4 == 0)){
                        return 1;
                   }else{
                        return 0;
                   }
        
                
                }else{
                
                   return 0;
                }
            
              }else{
            
                 return 0;
              }

          }else{
            
              return 0;
           }


          

          if (datavalida == 1)
             return 1;
          else
             return 0;

        } 




 /*Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{   //calcule os dados e armazene nas três variáveis a seguir.
   



   int nDias, nMeses, nAnos;

    int Dia_start, Mes_start, Ano_start;
    int Dia_end, Mes_end, Ano_end;
    int Data_start, Data_end;

    if (q1(datainicial) == 0){
        return 2;
    }else{

    	if (q1(datafinal) == 0){
		   	return 3;

		}else{

			sscanf(datainicial,"%d/%d/%d",&Dia_start,&Mes_start,&Ano_start);

			if ((Ano_start / 1000) == 0 && (Ano_start / 100) == 0){
			   	Ano_start = Ano_start + 2000;
			}

			Data_start = ((((Ano_start * 100 ) + Mes_start) * 100 ) + Dia_start );

			   	sscanf(datafinal,"%d / %d / %d",&Dia_end,&Mes_end,&Ano_end);

			    if ((Ano_end/1000)==0&&(Ano_end/100)==0){
				    	Ano_end = Ano_end + 2000;
				    }

				    Data_end = ((((Ano_end*100)+Mes_end)*100)+Dia_end);

			if(Data_start>Data_end){
				return 4;
			
           }else{

				nDias  =  Dia_start - Dia_end;
			    nMeses =  Mes_start - Mes_end;
			    nAnos  =  Ano_start - Ano_end;

			    *qtdDias  = nDias;
			    *qtdAnos  = nAnos;
			    *qtdMeses = nMeses;

			    return 1;
			 }
		   }
         }
       }

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = 0, size = 0;

    size = strlen(texto);

    if (isCaseSensitive == 1){

    	for (int i = 0; i < size; i++){

	    	if (texto[i] == c){

	    		qtdOcorrencias++;
	    	}
	      }

       }else{

    	  for (int i = 0; i < size; ++i){

	    	if (texto[i] == c || texto[i] == c -32){
	    		qtdOcorrencias++;
	    	}
	      }
        }

	    return qtdOcorrencias;
}
/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    int Qtd_de_ocorrencias = 0, Texto = 0, Buscar = 0, contador = 0;
    int T = 0, i = 0, Texto_start = 0, Texto_end = 0;

    Buscar = strlen(strBusca);
    Texto = strlen(strTexto);

    char cont[Buscar];

    for (i = 0; i < Buscar; i++){
    	cont[i] = 0;
    }

    	for (i = 0; i < Texto; i++){
    		contador = i;

    		for (int j = 0; j < Buscar; j++){

    			cont[j] = strTexto[contador];
    			contador++;
    		}
	    		if (strcmp(cont,strBusca)){
	    			Qtd_de_ocorrencias = Qtd_de_ocorrencias;

	    		}else{

	    			Texto_start = contador - Buscar + 1;
	    			Texto_end = contador;
	    			posicoes[T] = Texto_start;
	    			posicoes[T + 1] = Texto_end;
	    			Qtd_de_ocorrencias++;
	    			T += 2;
	    		}
    	}

    return Qtd_de_ocorrencias;
}


/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
	int num_invertido = 0; 
    int Qt_de_digitos = 0; 
    int indice = 0, cont = 0;

	cont = num;

	do
	{
		cont = (cont/10);
		Qt_de_digitos++;

	} while (cont!=0);

		int v[Qt_de_digitos];
		cont = num;

		for (int indice = 0; indice < Qt_de_digitos; indice++)
		{
			v[indice] = (cont%10);
			cont = (cont/10);
		}
		
			for (int indice = 0; indice < Qt_de_digitos; indice++)
			{
				num_invertido = ((num_invertido + v[indice]) * 10);
			}

			num = (num_invertido / 10);

    return num;
}

/*
 Q5 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
    int Qt_de_Ocorrencias = 0, cont = 0, Qt_de_digitos = 0;

    cont = numerobase;

    do
	{
		cont = (cont / 10);
		Qt_de_digitos++;

	} while (cont != 0);

		int v[Qt_de_digitos];
		cont = numerobase;

		for (int i = 0; i < Qt_de_digitos; ++i)
		{
			v[i] = (cont % 10);
			cont = (cont / 10);
		}

			for (int j = 0; j < Qt_de_digitos; ++j)
			{
				cont = 0;
				for (int k = j; k < Qt_de_digitos; ++k)
				{
					cont = (cont + v[k]) * 10;
					if (numerobusca == (cont / 10))
					{
						Qt_de_Ocorrencias++;
					}
					else
					{
						Qt_de_Ocorrencias = Qt_de_Ocorrencias;
					}
				  }
			   }

	return Qt_de_Ocorrencias;
}
