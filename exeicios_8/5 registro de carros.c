#include<stdio.h>

main(){
	int i=0, menor=1000, maior=0, registro[31], dia_menor=1, dia_maior=1;

	for(i=1;i<=30;i++){
		printf("dia %d- quantidade de registro de carros: ",i);
		scanf("%d", &registro [i] );

		if (registro[i]<menor){
			menor=registro[i];
			dia_menor=i;
		}
		if (registro[i]>maior){
			maior=registro[i];
			dia_maior=i;
		}
	}
	printf("\nO maior volume ocorreu no dia %d e foi de %d carros.",dia_maior, maior);
	printf("\nO menor volume ocorreu no dia %d e foi de %d carros.",dia_menor, menor);
}
