//Funcao que recebe um vetor de inteiro e retorna apenas numeros pares.

#include<stdio.h>
#include<stdlib.h>

void vetor(){
     int vetor[5];
     for(int i=0;i<5;i++){
         printf("informe o numero:\n");scanf("%d",&vetor[i]);
    
     }
     printf("numeros pares:\n");
     for(int i=0;i<5;i++){
         if(vetor[i]%2==0){
            printf("%d\n",vetor[i]);
           }
     }
}
int main(){
    system("color 3E");
    vetor();
    printf("\n");
    system("pause");
    return 0;
}
