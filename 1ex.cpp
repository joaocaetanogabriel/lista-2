#include<stdio.h>
#include<locale.h>
#include <math.h>

int main(){
	 float p, vmrs, irms, t ;
	 
	 printf("informe a tensao eficaz:");
	 scanf("%f", &vmrs);
	 printf("informe a corrente aparente:");
	 scanf("%f", &irms);
	  printf("informe e o angulo:");
	 scanf("%f", &t);
	p = vmrs*irms*cos(t);
	 printf("se a potencia e de %f", p);
	  
	return 0; 
	
		
}
