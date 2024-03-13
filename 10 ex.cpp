#include <stdio.h>
#include <math.h>
int main(){
	 float n,salario,salariofinal ;
	 printf("informe o salario:");
	 scanf("%f", &salario);
	 
	 printf("informe o ano de trabalho:");
	 scanf("%f", &n);
		
		if(5<n){
			salariofinal = salario*0.1;
			printf("Entao seu aumento salarial e :%f", salariofinal );
			
			
		}else{
			
			if(6<=n,n=10){
				salariofinal = salario*0.15;
				printf("Entao seu aumento salarial e :%f", salariofinal );
				
			}else{
				if( n>180 ){
				salariofinal = salario*0.20;	
			    printf("Entao seu aumento salarial e : %f", salariofinal );
				
				}else{
				printf("entao vc nao se encaixa ainda em anos");
					
				}
			}
			
		}
		  
























return 0;
}
