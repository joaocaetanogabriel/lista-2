#include <stdio.h>
#include <math.h>

int main(){
	 float p, A, v, n , P;
	 
	 printf("informe a eficiencia do conversor:");
	 scanf("%f", &n);
	  
	  printf("informe a  velocidade do vento:");
	 scanf("%f", &v);
	
 printf("informe a  seçao transvrsal:");
	 scanf("%f", &A);
	  
	  printf("informe a  densidade do ar:");
	 scanf("%f", &p);
	
	
	
	P = (1/2)*p*A*v*v*v*n;
	 printf(" a energia produzida e de  %f", P);
	 




















return 0;
}
		  

























