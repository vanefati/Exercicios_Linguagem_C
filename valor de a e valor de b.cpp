//VALOR DE A E B

#include<stdio.h>
#include<stdlib.h>

void soma(int *a,int *b){
	 int soma;
	 soma=*a+*b;
	 *a=soma;
}

int main(){
	int a=2,b=3;
	soma(&a,&b);
	printf("O valor de a eh:%d\n",a);
	printf("O valor de b eh:%d\n",b);

system("pause");
return 0;
}
