#include <stdio.h>

//Dados os comprimentos de tr�s linhas, determine se 
//elas podem formar um tri�ngulo. Se sim, especifique 
//se � um tri�ngulo equil�tero, is�sceles ou escaleno.


int main(){
	
	float a, b, c;
	
	printf("||Formado de triangulos.||");
	printf("Insira o valor de cada lado do triangulo. \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(a<(b+c), b<(a+c), c<(a+b)){
		
		printf("E possivel formar um triangulo.\n");
		if((a!=b && b!=c && c!=a)){
			
			printf("O triangulo formado e escaleno. \n");
			
		}else{
			
			if((a==b && b==c)){
				
				printf("O triangulo e equilatero. \n");
				
			}else{
				
				printf("O triangulo e isosceles. \n");
				
			}
			
		}
		
		
	}
	
	return 0;
}
