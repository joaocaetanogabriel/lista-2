//Descrição: Converta uma nota numérica (0 a 100) para um conceito (A, B, C, D, E, F), seguindo um critério pré-definido.
//Condições:
//A: 90 a 100
//B: 80 a 89
//C: 70 a 79
//D: 60 a 69
//E: 50 a 59
//F: abaixo de 50
//Entradas: Nota numérica.
//Saída: Conceito correspondente.


#include<stdio.h>
#include<locale.h>

int main(){
	
	int nota;
	
	printf("porfavor entre com a nota do aluno");
	printf("OBS: entre com numeros de 0 a 100");
	scanf("%d", &nota);
	
	if (90>=nota , nota<=100){
		printf("aluno recebera conceito, A");
	}else{
		if (80>=nota , nota<=89){
			printf("aluno recebera conceito, B");
		}else{
			if (70>=nota , nota<=79){
				printf("aluno recebera conceito, C");
			}else{
				if (60>=nota , nota<=69){
					printf("aluno recebera conceito, D");
				}else{
					if (50>=nota , nota<=59){
						printf("aluno recebera conceito, E");
					}else{
						if (nota<50){
							printf("Parabens aluno recebera conceito, E");
						}
					}
				}
			}
		}
	}
	
	
return 0;	
}

