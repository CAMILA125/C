/* Crie um algoritmo que receba duas notas de um aluno, calcule e 
apresente a m?dia e o conceito  
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h> 

 main(){
	setlocale (LC_ALL, "");
	
	float n1,n2,media;
	
	printf ("Dijite a primeira nota: ");
	scanf ("%f",&n1);
	printf ("Dijite a segunda nota: ");
	scanf ("%f",&n2);
	
	media=(n1+n2)/2;
	
	if (media<4.9){
		printf ("%.2f : insuficiente",media);
	}
	else if (media>5 && media<6.4){
		printf (".2%f : regular",media);
	}
	else if (media>6.5 && media<8.4){
		printf ("%.2f : bom",media);
	}
	else {
		printf ("%.2f : ?timo",media);
	}
	
	getch();
}
