#include<stdio.h>

main()
{
	float altura=0;
	float peso_ideal=0;
	float peso_atual=0;	
	
	
	//Intera��o para obter altura do usu�rio
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso atual");
	scanf("%f", &peso_atual);
	
	peso_ideal=(72.7*altura)-58.0;
	
	if(peso_atual <= peso_ideal){
	
		if(peso_atual >= 30){
			printf("Parabens voce esta no peso ideal!");
		}else{
			printf("Cuidado, peso muito baixo!");
		}	
		
	}else{
		printf("Cuidado, sobrepeso!");
	}
	
		
	printf("O seu peso ideal eh: %0.2f \n",peso_ideal);
	

	system("PAUSE");
}
