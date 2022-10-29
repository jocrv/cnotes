/* main.c */

#include <stdio.h>

#include “biblioteca.h”

int main() {

                int num;

                printf (“Digite um numero:”);

                scanf(“%d”, &num);

                printf(“\nO fatorial de %d eh igual a %d”, num, fatorial(num));

                return 0;

}

/* Biblioteca.c */

#include “biblioteca.h”

int fatorial (int n){

                int i, resultado;

                resultado = 1;

                for(i=1; i <= n; i++)

                               resultado *= i;

                return resultado;            

}

int retornaCubo (int n){

return (n * n * n);

}

/* Biblioteca.h */

/* Funções oferecidas pela Biblioteca biblioteca.h */

#ifndef Biblioteca_H

#define Biblioteca_H

/* Função fatorial, que retorna o valor fatorial do número passado como parâmetro */

int fatorial(int);

/* Função retornaCubo, que retorna o valor ao cubo do número passado como parâmetro */

int retornarCubo (int n);

#endif
