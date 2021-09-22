#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

//Andrei & Camila

void main(void){
	
	int op, top;   //Operação
	int p,q, r;
	setlocale(LC_ALL,"");
		
	inicio:
		printf("Qual operação você deseja?\n");
		printf("1. Conjunção (AND)\n2. Disjunção (OR)\n3. Disjunção Exclusiva (XOR)\n4. Negação (NOT)\n5. Condicional (->)\n6. Bicondicional (<->)\n7. Ver tabelas-verdade\n0. Sair\n");
		scanf("%i", &op);
		
		if(op == 0) return;
		if(op == 7) goto tabelas;
		
		printf("Digite o valor de P (0 ou 1): ");
		scanf("%i", &p);
		printf("Digite o valor de Q (0 ou 1): ");
		scanf("%i", &q);
		
		
		
		if((p != 0 && p != 1) || (q != 0 && q != 1)){
			printf("Valor de P ou Q é invalido!!!");
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
				printf("Operação Invalida");
				goto restart;
		}
		
		if(op != 4) printf("%i", r);
		
	
	restart:
		getch();
		system("cls");
		goto inicio;
		
	
	tabelas:
		system("cls");
		printf("\nEscolha a opção para exibir a tabela desejada: ");
		printf("\n1. Tabela verdade da operação de conjunção (AND)\n2. Tabela verdade da operação de disjunção (OR) \n3. Tabela verdade da operação de disjunção exclusiva (XOR) \n4. Tabela verdade da operação de negação (NOT) \n5. Tabela verdade da operação condicional (?)\n6. Tabela verdade da operação bicondicional (?)\n0. Voltar\n");
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
				printf("p q  ¬p  ¬q\n");
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
				printf("Operação Inválida");
				goto rtabelas;
		}
		
	rtabelas:
		getch();
		goto tabelas;
}
