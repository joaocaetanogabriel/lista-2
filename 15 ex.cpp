
#include <stdio.h>

int main(){
float n;

printf("me informe um numero qualquer\n\n");
scanf("%f", &n);

if (n<0){
	printf("negativo");
}else{ if (n>0){
	printf("positivo");
}else{
	printf("zero");
}
}


	return 0;
}
