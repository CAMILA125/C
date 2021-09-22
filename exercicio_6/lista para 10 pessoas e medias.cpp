#include<stdio.h>

main(){
	int numero_pessoa,sexo,i;
	float altura, media_alturas, maior=0, menor=0, media_mulheres;
	
	for(numero_pessoa=1; numero_pessoa<=10;numero_pessoa++){
		printf("\npessoa n %d qual sua altura: ",numero_pessoa);
		scanf ("%f",&altura);
		printf("\nqual seu sexo(1) para homem e (0) para mulher:");
		scanf ("%d",&sexo);
		
		
		if(altura>maior) maior=altura;
		if(altura<menor) menor=altura;
	
		if (!sexo){
			altura=altura+altura;
			i++;
		}
		
	}
		media_mulheres=altura/i;
		media_alturas=altura/10;
		printf("a maior altura e: %f\nmenor altura e: %f\na media da altura das mulheres:%f\na media das alturas:%f",maior,menor,media_mulheres,media_alturas);
		
}
