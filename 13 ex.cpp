//Descrição: Desenvolva um algoritmo para calcular o Índice de Massa Corporal (IMC) de uma pessoa e classificar seu estado nutricional.
//Entrada: Peso em quilogramas (kg) e altura em metros (m).
//Saída: IMC e a classificação do estado nutricional (Ex.: "Normal", "Sobrepeso", "Obesidade", etc.).
//Fórmula: IMC = peso / (altura²)




#include <stdio.h>

int main(){
	float Kg;
	float M;
	float IMC;
	
	printf("IMC e a classificacao do estado nutricional \n");
	printf("por favor insira seu peso:\n");
	scanf("%f", &Kg);
	printf("por favor insira sua altura:\n");
	scanf("%f", &M);
	
printf("\n");

IMC = Kg / (M*M);

printf("seu IMC e de: %f\n", IMC);

if (IMC>=18.5 , IMC<=20){
	printf("Abaixo do peso");
}else{ if (IMC>=23.5 , IMC<=30){
	printf("peso ideal ");
}else{ if (IMC>=31 , IMC<=39.9){
	printf("Acima do peso");
} else{
	printf("obesidade morbida");
}
	
}
}


	return 0;
}
