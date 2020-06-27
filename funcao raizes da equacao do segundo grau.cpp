//FUNÇAO QUE CALCULA AS RAIZES DE UMA EQUAÇÃO DO SEGUNDO GRAU DO TIPO: ax2+bx+c=0.

#include<stdio.h>
#include<stdlib.h>
#include<math>

int raizs (float a, float, float c, float*x1, float *x2){
	float delta;
	delta=b*b-4*a*c;
	if (delta>=0){
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		
}
		if(delta>0){
		   return 0;
		   }else{
			   if(delta==0){
				  return 1;
				  }else{
					  return 0;
}

int main(){
	int b,a,c;
	printf("DIgite o valor de b:\n");scanf("%d",&b);
	printf("Digite o valor de a:\n");scanf("%d",&a);
	printf("Digite o valor de c:\n");scanf("%d",&c);
	
	system("pause");
	return 0;
}