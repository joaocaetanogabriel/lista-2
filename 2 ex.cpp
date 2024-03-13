#include <stdio.h>
#include <math.h>

int main(){
	 float r1, r2 , reqpararelo, reqserie;
	 
	 printf("informe a resistencia 1:");
	 scanf("%f", &r1);
	  printf("informe a  resistencia 2:");
	 scanf("%f", &r2);
	
	reqserie = r1 + r2;
		 printf("se a resistencia for serie e de %f", reqserie	);
	
	reqpararelo = 1/((1/r1)+(1/r2));
	 printf(" e se a resistencia for paralelo e de %f", reqpararelo);
	 

























return 0;
}
