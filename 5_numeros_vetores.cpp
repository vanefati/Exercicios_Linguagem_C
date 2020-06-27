//Crie um programa que peça para o usuário 5 números.

#include<stdio.h>
#include<stdlib.h>
#define DIM 5

void recebe(int b[]){

	 int cont;
		 for(cont=0;cont<DIM;cont++){
			 printf("Entre com o elemento%d:",cont+1);
			 scanf("%d",&original[cont]);
			 }
}

int main(void){
	int original[DIM];
	recebe(original);
	printf("%d",original[0]);
	
	system("pause");
	return 0;
}
			 

