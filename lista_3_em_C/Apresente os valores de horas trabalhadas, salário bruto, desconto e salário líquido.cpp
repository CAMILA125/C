/*
Apresente os valores de horas trabalhadas, salário bruto,
 desconto e salário líquido
 */
 
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main (){
	float HT,VH,PD; // HT (horas trabalhadas no mês),VH (valor da hora trabalhada), PD (percentual de desconto). 
	float SB, TD, SL;
	
	setlocale(LC_ALL,"");
	
	printf ("Insira as horas trabalhadas no mês: ");
	scanf ("%f", &HT);
	printf ("Insira o valor da hora trabalhada: ");
	scanf ("%f", &VH);
	printf ("Insira o percentual de desconto: ");
	scanf ("%f", &PD);
	
	SB=HT*VH; //Calcule o salário bruto 
	TD=(PD/100)*SB; //Calcule o total de desconto  
	SL=SB-TD; //Calcule o salário líquido
	
	printf ("Valor das horas trabalhadas: %f \nValor do salário bruto: %f \nValor do desconto: %f % \nValor do salário líquido: %f", VH,SB,TD,SL);
	
	
	getch();
	
}
