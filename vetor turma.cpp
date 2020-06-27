/*função em C que recebe um vetor de notas de alunos e seu tamanho e imprime a maior e menor nota bem como a média desta turma*/

#include<stdio.h>
#include<stdlib.h>

void Nota(int quant){
     float nota[quant],maior=0,menor=10,soma=0;
     for(int i=0;i<=quant-1;i++){
          printf("digite a %d.o nota:\n",i+1);scanf("%f",&nota[i]);
          if(nota[i]>maior){
               maior=nota[i];
          }
          if(nota[i]<menor){
               menor=nota[i];             
          }
          soma=soma+nota[i];
     }
     printf("menor: %.2f\n",menor);
     printf("maior: %.2f\n",maior);
     printf("media: %.2f\n",soma/quant);
     
}

int main(){
    int quant;
    printf("digite  quantidade de notas: \n");scanf("%d",&quant); 
    Nota(quant);
    

    system("pause");
    return 0;
}
      
      
