/*
 Faça um programa que leia a velocidade de um veículo em Km/H e 
 calcule e imprima a velocidade em m/s. 
 */
 #include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
	float KM_H, M_S;
	
	printf ("Insira a velocidade do seu veiculo em Km/h: ");
	scanf ("%f", &KM_H);
	
	M_S=KM_H/3.6;
	
	printf ("%.2f m/s",M_S);
	
	getch ();
	
}
