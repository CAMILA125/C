/*
Faça um programa que apresente o espaço ocupado na memória por todos os 
tipos primitivos disponíveis na linguagem C. Dica: pesquise sobre a função sizeof(). 
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
