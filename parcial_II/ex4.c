#include<stdio.h>

main(){
	
	int x=0,i=0,m2=0,m3=0,m5=0,multiplos=0;
	
	
	for(i=1;i<=100;i++){
	
		if (i%2==0) {
			m2++;
		}
		if (i%3==0) {
			m3++;
		}
		if (i%5==0) {
			m5++;
		}
		if ((i%2==0) && (i%3==0) && (i%5==0)){
			multiplos++;
		}
		
	

	}
	printf("sao multiplos de 2:%d \nsao multiplos de 3: %d\nsao multiplos de 5: %d\nsao multiplos de 2, 3 e 5 ao mesmo tempo: %d",m2,m3,m5, multiplos);
}

