/*
Fa�a um programa que leia 5 valores inteiros separados por pipes (|)
 em uma �nica fun��o scanf. O programa deve apresentar todos os valores lidos. 
 */
 #include<stdio.h>
 #include<conio.h>
 #include<locale.h>
 
 main(){
 	int n1,n2,n3,n4,n5;
 	
 	setlocale (LC_ALL,"");
 	
	printf ("Digite 5 n�meros separados por v�rgula: ");
	scanf ("%d,%d,%d,%d,%d",&n1, &n2, &n3, &n4, &n5);
	printf ("Valores: %d | %d | %d | %d | %d", n1, n2, n3, n4, n5);
	
	getch();
 }
