#include <stdio.h> // entrada e saída padrão
#include <math.h> // funções matemáticas
int main(void) {

double peso, altura, imc;
printf("Qual o peso e a altura? ");
scanf("%lf %lf", &peso, &altura);
imc = peso/pow(altura,2);
printf("IMC = %.1f\n",imc);
if( imc<=30 ) printf("Nao esta obesa!\n");
else printf("Esta obesa!\n");
return 0;
}
