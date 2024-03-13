//Descrição: Escreva um algoritmo que classifique um número como "Positivo", "Negativo" ou "Zero".
//Entrada: Um número.
//Saída: Classificação do número.




#include <stdio.h>

int main(){
	float N;
	
	printf("clasificacao Positivo, Negativo ou Zero\n");

	scanf("%f", &N);
	
printf("\n");

if (N<0){
	printf("Deteccao do numero NEGATIVO");
}
else{ if (N>0){
printf("deteccao numero POSITIVO");	
}
else{
	printf("ZERO");
}
}

	return 0;
}
