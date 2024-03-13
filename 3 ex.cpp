#include <stdio.h>
#include <math.h>

int main(){
	 float P, S , FatordePotencia;
	 
	 printf("informe a potencia :");
	 scanf("%f", &P);
	  printf("informe a  potencia aparente:");
	 scanf("%f", &S);
	
	FatordePotencia = P / S;
		
		if(FatordePotencia=1){
			printf("Circuito puramente resistivo");
			
			
		}else{
			
			if(FatordePotencia<1){
				printf("Circuito indutivo");
				
			}else{
				printf("Circuito capacitivo");
			}
			
		}
		  
























return 0;
}
