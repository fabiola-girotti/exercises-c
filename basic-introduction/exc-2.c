//Dadas as duas notas de prova de um aluno, informe a sua média.
#include <stdio.h> // entrada e saída padrão
#include <math.h>

int main(void) {

float nota1, nota2, media;

printf("Qual a nota 1 e a nota 2 ");
scanf("%f %f", &nota1, &nota2);

media = (nota1+nota2)/2;
printf("Media = %.1f\n", media);
return 0;
}


