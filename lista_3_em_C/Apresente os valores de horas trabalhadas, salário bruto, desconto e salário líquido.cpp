/*
Apresente os valores de horas trabalhadas, sal�rio bruto,
 desconto e sal�rio l�quido
 */
 
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main (){
	float HT,VH,PD; // HT (horas trabalhadas no m�s),VH (valor da hora trabalhada), PD (percentual de desconto). 
	float SB, TD, SL;
	
	setlocale(LC_ALL,"");
	
	printf ("Insira as horas trabalhadas no m�s: ");
	scanf ("%f", &HT);
	printf ("Insira o valor da hora trabalhada: ");
	scanf ("%f", &VH);
	printf ("Insira o percentual de desconto: ");
	scanf ("%f", &PD);
	
	SB=HT*VH; //Calcule o sal�rio bruto 
	TD=(PD/100)*SB; //Calcule o total de desconto  
	SL=SB-TD; //Calcule o sal�rio l�quido
	
	printf ("Valor das horas trabalhadas: %f \nValor do sal�rio bruto: %f \nValor do desconto: %f % \nValor do sal�rio l�quido: %f", VH,SB,TD,SL);
	
	
	getch();
	
}
