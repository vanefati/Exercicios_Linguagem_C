//Funcao que receba inteiro e retorna verdadeiro(1) para numeros primos e falso 0) para numeros nao primos.

#include <stdio.h>
#include <stdlib.h>

int primo(int num) {
	int a=0;
	for(int i=num;i>=1;i--){		
		if (num%i==0){
			a=a+1;//?
		}
	}
	if(a==2){
		return 1;
	}
	return 0;
}

int main(){
    system("color 4B");
	int num;
	printf("Digite o numero: \n");scanf("%d",&num);
	printf("%d\n",primo(num));
	
	system("pause");
	return 0;
}
