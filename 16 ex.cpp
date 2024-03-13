#include <stdio.h>

int main(){
	float t1;
	float t2;
	float t3;
	float med; 
	
	printf("app de distribuicao de conseitos para alunos\n");
	printf("para comecar me fale as notas dos tres trimestri\n\n");
	
	printf("primeiro trimestre\n");
	scanf("%f", &t1);
	
	printf("segundo trimestre\n");
	scanf("%f", &t2);
	
	printf("terceiro trimestre\n");
	scanf("%f", &t3);
	
	med = (t1 + t2 + t3)/3;
	
	printf("media das notas obitida pelo aluno sera de: %f\n\n", med );
	
	printf("agora vou adequal a media em forma de conceito que varia entre (A,B,C,D)\n");
	
	if (med>=90 , med<=100){
		printf("Parabens!!!! Voce tirou conceito A");
}
	else{ 
	      if (med>=80, med<=89){
		printf("Parabens voce ficou com B");
}
	else{
	      if (med>=69 , med<=79){
		printf("Voce tirou C passou raspando kkkk");
}
	else{
		printf("Que pena nao foi dessa vez conceito D");
}
}
}
return 0;	
}
