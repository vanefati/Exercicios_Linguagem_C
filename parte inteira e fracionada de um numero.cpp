//PARTE INTEIRA E FRACIONADA DE UM NUMERO

#include<stdio.h>
#include<stdlib.h>

int frac(float num,int*inteiro,float*frac){
	inteiro=num;
	frac=num-inteiro;
	printf("A parte inteira e fracionada do numero eh:\n",inteiro,frac);
}

int main(){
	float n,frac;
	int a;
	printf("Digite um numero:\n");scanf("%f",&n);
	frac(n,a,frac);
	system("pause");
	return 0;
}