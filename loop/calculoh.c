/*
	@author Marllos Prado
	Let h= 1 + � + 1/3 + � + ... + 1/N, prepare an algorithm to calculate the number h, with the number�N provided by the user.
*/

#include<stdio.h>
int main (){
	double h=0;
	double n, auxiliar;
	printf ("Digite o valor de N.\n");
	scanf ("%lf", &n); 
	
	if(n>0){
	
		for (auxiliar=1; auxiliar<=n ; auxiliar++){
			h=h+(1/auxiliar);
		}
		printf ("O valor de h eh %lf.\n", h);
	}else{
		printf("Erro! N�o existe divis�o por zero!");
	}
	
	

	return 0;
}
