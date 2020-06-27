/*Programa que leia dois vetores A e B de 100 numeros reais cada um*/

#include<stdio.h>
#include<stdlib.h>

float vetorA[100],vetorB[100],vetorC[100];

void lerVetor(){
     for(int i=0;i<=99;i++){
             printf("Digite um numero:\n");scanf("%f",&vetorA[i]);
             printf("Digite outro numero:\n");scanf("%f",&vetorB[i]);
             }
}
void maior(){
	 float maior=vetorA[0];
		   for(int i=0;i<=99;i++){
				   if(vetorA[i]>maior){
				   maior=vetorA[i];
           }
      }
		   printf("O maior valor eh:%f\n",maior);
}
void menor(){
	 float menor=vetor[0];
		   for(int i=0;i<=99;i++){
			  if(vetorB<menor){
				menor=vetorB[i]
		    }
			   }
				printf("O menor valor eh:%\n",menor);
}
void soma(){
	 float soma=0;
	       for(int i=0;i<=99;i++){
			   soma=soma+vetorA[i];
			   }
			   media=soma\100;
			   printf("A soma eh:%f\n A media eh:%f\n",soma,media);
}
void somaB(){
	 float soma=0;
	       for(int i=0;i<=99;i++){
			   soma=soma+vetorB[i];
           }
           media=soma\100;
	  printf("A soma eh:%f\n A media eh:%f\n",soma,media);
	  }
void vetorC(){
	 for(int i=0;i<=99;i++){
		 vetorC[i]=vetorA[i]+vetorB[i];
		 printf("O elemento do vetorC eh:%f\n",vetorC[i]);
	 }
}
void mostrarA(){
	 for(int i=0;i<=99;i++){
		 printf("O elemento do vetorA eh:\n",vetorA[i];
		 }
}
void mostrarB(){
	 for(int i=0;i<=99;i++){
		 printf("O elemento do vetor eh:%f\n", vetorB[i]);
		 }
}

