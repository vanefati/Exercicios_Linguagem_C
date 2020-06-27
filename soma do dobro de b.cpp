//FUNCAO QUE RETORNE A SOMA DO DOBRO DE A E B, E RETORNE O VALOR DE A E B NAS PROPRIAS VARIAVEIS.

#include<stdio.h>
#include<stdlib.h>

int soma(int a, int b){
	int soma;
	a=a*2;
	b=b*2;
	soma=a+b;
return soma;
}

int main(){
	int a,b;
	printf("Digite o primeiro valor:\n");scanf("%d",&a);
	printf("Digite o segundo valor:\n");scanf("%d",&b);
	printf("A soma dos valores eh:%d\n",soma(a,b));

system("pause");
return 0;
}
	