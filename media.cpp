#include<stdio.h>
#include<stdlib.h>

float soma(float n1, float n2, float n3){
      float soma=n1+n2+n3;
      return soma;
}
float media(float soma){
      float media;
      media=soma/3;
      return media;
}
      
int main(){
    float n1,n2,n3;
    printf("primeir");scanf("%f",&n1);
    printf("segund");scanf("%f",&n2);
    printf("terceir");scanf("%f",&n3);
    printf("media eh:%f \n", media(soma(n1,n2,n3)));
          
    system("pause");
    return 0;
      
}
