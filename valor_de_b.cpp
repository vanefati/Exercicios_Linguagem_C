#include<stdio.h>
#include<stdlib.h>
#define DIM 5

void tantofaz(int b[]){
	 int cont;
	 for(cont=0;cont<DIM;cont++){
		 printf("Digite valor%d:\n",cont+1);
		 scanf("%d",&b[cont]);
     }
}
int main(){
	int c[DIM];
	tantofaz(c);
	return 0;
	system("pause");
}