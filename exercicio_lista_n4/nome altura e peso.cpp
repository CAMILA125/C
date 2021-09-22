/*Faça um programa que leia o nome, a altura e o peso de duas 
pessoas e apresente o nome da pessoa mais pesada e da
pessoa mais alta. 
*/
#include<stdio.h>
 #include<locale.h>
 #include<conio.h>
 
 main( ){
 	setlocale(LC_ALL,"");
 	
 	char nome1[51], nome2[51];
	float  peso1, peso2, altura1, altura2;
	
	
	printf ("Insira seu nome: ");
	scanf ("%s",nome1);
	printf ("Insira o nome do seu colega: ");
	scanf ("%s",nome2);
	
	printf ("Insira sua altura: ");
	scanf ("%f",&altura1);
	printf ("Insira a altura do seu colega: ");
	scanf ("%f",&altura2);

	
	printf ("Insira seu peso: ");
	scanf ("%f",&peso1);
	printf ("Insira o peso do seu colega: ");
	scanf ("%f",&peso2);

	if (altura1>altura2){
		printf ("%s é mais alto(a)\n",nome1);
	}
	else {
		printf ("%s é mais alto(a)\n",nome2);
	}
	if (peso1>peso2){
		printf ("%s possui mais massa",nome1);
	}
	else {
		printf ("%s possui mais massa",nome2);
	}
	
	
	getch();
	
}
