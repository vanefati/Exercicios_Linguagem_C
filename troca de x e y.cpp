//TROCA  DE X E Y

#include<stdio.h>
#include<stdlib.h>

void troca(int *x,int *y){
	 int troca;
	 troca=*x;
	 *x=*y;
	 *y=troca;
}

int main(){
	int a=1,b=2;
	troca(&a,&b);
system("pause");
return 0;
}
