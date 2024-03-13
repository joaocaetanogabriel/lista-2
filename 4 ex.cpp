#include <stdio.h>
#include <math.h>

int main(){
	 float n ;
	 
	 printf("informe o numero:");
	 scanf("%f", &n);
		if(0<n, n<=25){
			printf("Esta contido no primeiro intervalo");
			
			
		}else{
			
			if(25<n, n<=50){
				printf("Esta contido no segundo intervalo");
				
			}else{
				if(50<n, n<=75 ){
					
				printf("Esta contido terceiro intervalo");
				
				}else{
					if(75<n, n<=100){
						
						printf("Esta contido terceiro intervalo");
						
					} else{
						printf("Nao esta contido em nada ");
					}
					
				}
			}
			
		}
		  
























return 0;
}
