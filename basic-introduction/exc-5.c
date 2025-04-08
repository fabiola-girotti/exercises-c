#include <stdio.h> 
#include <math.h> 


int main(void) {

double xp, yp,xq,yq, dist  ;

printf("Qual as coordenadas de p? ");
scanf("%lf,%lf", &xp, &yp);
printf("Qual as coordenadas de q? ");
scanf("%lf,%lf", &xq, &yq);

dist = pow(pow(xq-xp,2)+ pow(yq-yp,2), 1.0/2.0);
printf("Distancia = %.1f,\n", dist);
return 0;
}
