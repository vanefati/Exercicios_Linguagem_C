// Funcao que recebe dois ou mais valores e mostra a media.

#include<stdio.h>
#include<stdlib.h>

float media(){
      float vetor[4], soma=0, media;
      for(int i=0;i<=3;i++){
              printf("Digite o valor:\n");scanf("%f",&vetor[i]);
              soma=soma+vetor[i];
      }
      media=soma/4;
      return media;
}

int main(){
    system("color 1D");
    printf("A media eh:%.2f\n",media());
    system("pause");
    return 0;
}

                  
