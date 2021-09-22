#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

//Andrei & Camila

void main(void){
	
	int op, top;   //Opera��o
	int p,q, r;
	setlocale(LC_ALL,"");
		
	inicio:
		printf("Qual opera��o voc� deseja?\n");
		printf("1. Conjun��o (AND)\n2. Disjun��o (OR)\n3. Disjun��o Exclusiva (XOR)\n4. Nega��o (NOT)\n5. Condicional (->)\n6. Bicondicional (<->)\n7. Ver tabelas-verdade\n0. Sair\n");
		scanf("%i", &op);
		
		if(op == 0) return;
		if(op == 7) goto tabelas;
		
		printf("Digite o valor de P (0 ou 1): ");
		scanf("%i", &p);
		printf("Digite o valor de Q (0 ou 1): ");
		scanf("%i", &q);
		
		
		
		if((p != 0 && p != 1) || (q != 0 && q != 1)){
			printf("Valor de P ou Q � invalido!!!");
			goto restart;
		}
		
		
		
		switch(op){
			case 1:
				r = (p == 1 && q== 1);
				break;
			case 2:
				r = (p == 1 || q== 1);
				break;
			case 3:
				r = ((p == 1 && q== 0) || (p == 0 && q== 1));
				break;
			case 4:
				printf("!P: %i", !p);
				printf("\n");
				printf("!Q: %i", !q);
				break;
			case 5:
				r = !(p == 1 && q == 0);
				break;
			case 6:
				r = (p == q);
				break;
			default:
				printf("Opera��o Invalida");
				goto restart;
		}
		
		if(op != 4) printf("%i", r);
		
	
	restart:
		getch();
		system("cls");
		goto inicio;
		
	
	tabelas:
		system("cls");
		printf("\nEscolha a op��o para exibir a tabela desejada: ");
		printf("\n1. Tabela verdade da opera��o de conjun��o (AND)\n2. Tabela verdade da opera��o de disjun��o (OR) \n3. Tabela verdade da opera��o de disjun��o exclusiva (XOR) \n4. Tabela verdade da opera��o de nega��o (NOT) \n5. Tabela verdade da opera��o condicional (?)\n6. Tabela verdade da opera��o bicondicional (?)\n0. Voltar\n");
		scanf("%i", &top);
		switch (top){
			case 0: 
				goto restart;
			case 1:
				printf("p q  p ^ q\n");
					p = 0; q = 0; r = p == 1 && q == 1; printf("%i %i    %i\n",p, q, r);
					p = 0; q = 1; r = p == 1 && q == 1; printf("%i %i    %i\n",p, q, r);
					p = 1; q = 0; r = p == 1 && q == 1; printf("%i %i    %i\n",p, q, r);
					p = 1; q = 1; r = p == 1 && q == 1; printf("%i %i    %i\n",p, q, r);
				goto rtabelas;
			case 2:
				printf("p q  p v q\n");
					p = 0; q = 0; r = p == 1 || q == 1; printf("%i %i    %i\n",p, q, r);
					p = 0; q = 1; r = p == 1 || q == 1; printf("%i %i    %i\n",p, q, r);
					p = 1; q = 0; r = p == 1 || q == 1; printf("%i %i    %i\n",p, q, r);
					p = 1; q = 1; r = p == 1 || q == 1; printf("%i %i    %i\n",p, q, r);
				goto rtabelas;
			case 3:
				printf("p q  p XOR q\n");
					p = 0; q = 0; r = ((p==1 && q==0) || (p==0 && q==1)); printf("%i %i   %i\n",p, q, r);
					p = 0; q = 1; r = ((p==1 && q==0) || (p==0 && q==1)); printf("%i %i   %i\n",p, q, r);
					p = 1; q = 0; r = ((p==1 && q==0) || (p==0 && q==1)); printf("%i %i   %i\n",p, q, r);
					p = 1; q = 1; r = ((p==1 && q==0) || (p==0 && q==1)); printf("%i %i   %i\n",p, q, r);
				goto rtabelas;
			case 4:
				printf("p q  �p  �q\n");
					p = 0; q = 0; printf("%i %i   %i   %i\n",p, q, !p, !q);
					p = 0; q = 1; printf("%i %i   %i   %i\n",p, q, !p, !q);
					p = 1; q = 0; printf("%i %i   %i   %i\n",p, q, !p, !q);
					p = 1; q = 1; printf("%i %i   %i   %i\n",p, q, !p, !q);
				goto rtabelas;
			case 5:
				printf("p q  p -> q\n");
					p = 0; q = 0; r = !(p==1 && q==0); printf("%i %i    %i\n",p, q, r);
					p = 0; q = 1; r = !(p==1 && q==0); printf("%i %i    %i\n",p, q, r);
					p = 1; q = 0; r = !(p==1 && q==0); printf("%i %i    %i\n",p, q, r);
					p = 1; q = 1; r = !(p==1 && q==0); printf("%i %i    %i\n",p, q, r);
				goto rtabelas;
			case 6:
				printf("p q  p <-> q\n");
					p = 0; q = 0; r = p == q; printf("%i %i     %i\n",p, q, r);
					p = 0; q = 1; r = p == q; printf("%i %i     %i\n",p, q, r);
					p = 1; q = 0; r = p == q; printf("%i %i     %i\n",p, q, r);
					p = 1; q = 1; r = p == q; printf("%i %i     %i\n",p, q, r);
				goto rtabelas;
			default:
				printf("Opera��o Inv�lida");
				goto rtabelas;
		}
		
	rtabelas:
		getch();
		goto tabelas;
}
