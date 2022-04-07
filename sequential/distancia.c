/* @author Marllos Prado
Build a program that, taking as input any two points on the plane P(x1,y1) and Q(x2,y2), prints the distance between them.
*/
#include<stdio.h>
#include<math.h>

int main(){
	double x1;
	double y1;
	double x2,y2;
	double distancia;
	
	printf("Informe as coordenadas de x1 e y1 \n");
	scanf("%lf %lf", &x1, &y1);
	
	printf("Informe as coordenadas de x2 e y2 \n");
	scanf("%lf %lf", &x2, &y2);

	distancia=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	
	printf("A distancia entre os dois pontos e: %0.2lf \n", distancia);
	


	return 0;
}


