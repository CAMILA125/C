#include<stdio.h>

void procedimento(int *p_min, int *p_max, int valor[], int x){
	int	i=0, maior, menor;
	maior = valor[0];
	menor = valor[0];

*/	while (i < 10){
		if (valor[i] < menor){
			*p_min = valor[i];
			
		}
		if (valor[i] > maior){
			*p_max = valor[i];
			
		}
		i++;
	}

}

main(){
	int vet[10],i=0, x;
 
	int *p_min, min, *p_max, max;
	//int *p_max, max;
	for(i=0;i<10;i++){
		printf("\ndigite um numero: ");
		scanf("%d", &vet[i]);	
	}
	x = 5;
	p_min=&min;
	p_max=&max;
	
	procedimento(p_min, p_max, vet, x);	

	printf("\nMenor valor : %d \nMaior valor: %d",*p_max,*p_min);
	

}

