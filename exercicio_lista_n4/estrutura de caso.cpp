/* Uma lanchonete em FW deseja informatizar o seu sistema de pedidos. 
Escreva um programa que leia o código do item pedido, calcule o valor a 
ser pago e apresente o valor total do lanche. Considere que apenas um 
tipo de lanche pode ser pedido por vez. Use uma estrutura de caso para 
apresentar o menu.  
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"");
	
	int opcao,compra=1;
	float soma;
	
	printf ("Código Lanche Preço \n10 Xis Completo R$ 12,00 \n11 Xis Bacon R$ 16,50 \n12 Xis de Coração de boi R$ 14,00 \n13 Xis de Charque R$ 14,50 \n14 Xis de Ovelha R$ 20,90 \n15 Xis de linguiça campeira R$ 18,00 \n");

	
	while (compra!=0){
		printf ("\nDigite o código do seu lanche\n");
			scanf ("%d",&opcao);
		
		switch(opcao)
		{
			case 10:
			printf ("R$12,00\n");
			soma=12+soma;
			break;
		
			case 11:
			printf ("R$16,50\n");
			soma=16.5+soma;
			break;
		
			case 12:
			printf ("R$14,00\n");
			soma=14+soma;
			break;
		
			case 13:
			printf ("R$14,50\n");
			soma=14.5+soma;
			break;
			
			case 14:
			printf ("R$20,90\n");
			soma=20.9+soma;
			break;
		
			case 15:
			printf ("R$18,00\n");
			soma=18+soma;
			break;
		}
		printf("%f : total \nPara sair digite 0 ou",soma);
	}
}
