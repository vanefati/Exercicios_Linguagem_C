#include<stdio.h>
#include<stdlib.h>

int main(){
	int a=25;
	int *pa=&a;
	int b=*pa+a;
	printf("%d %d %d %d %d %d\n",a,pa,&a,*pa,b,&b);

	system("pause");
	return 0;
}