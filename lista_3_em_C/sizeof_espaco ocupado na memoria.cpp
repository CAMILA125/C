/*
Fa�a um programa que apresente o espa�o ocupado na mem�ria por todos os 
tipos primitivos dispon�veis na linguagem C. Dica: pesquise sobre a fun��o sizeof(). 
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){

    printf("Char: %d bytes\n", sizeof(char));
    printf("Int: %d bytes\n", sizeof(int));
    printf("Float: %d bytes\n", sizeof(float));
    printf("Double: %d bytes\n", sizeof(double));
    
    getch();


}
