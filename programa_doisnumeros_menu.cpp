// Programa recebe dois numeros e exibe menu de opcoes

#include<stdio.h>
#include<stdlib.h>
   
float soma(float valor1, float valor2){
      float soma;
      soma=valor1+valor2;
      return soma;
}

float subtracao(float valor1, float valor2){
	  float subtracao;
      subtracao=valor1-valor2;
  	  return subtracao;
}

float dividir(float valor1,float valor2){
      float dividir;
      dividir=valor1/valor2;
      return dividir;
}
float multiplicar(float valor1,float valor2){
      float multiplicar;
      multiplicar=valor1*valor2;
      return multiplicar;
}


int main(){
    int operacao;
    float valor1,valor2;
    system("color 1C");
    printf("Digite o primeiro valor:\n");scanf("%f",&valor1);
    printf("Digite o segundo valor:\n");scanf("%f",&valor2);
    
    printf("------MENU--------\nsoma:1\nsubtracao:2\ndivisao:3\nmuultiplicao:4\n");
    printf("Escolha a operacao:\n");scanf("%d",&operacao);
    
    switch(operacao){
                     case 1:printf("A soma eh:%.2f\n",soma(valor1,valor2)); break;
                     case 2:printf("A subtracao eh:%.2f\n",subtracao(valor1,valor2));break;
                     case 3:printf("A divisao eh:%.2f\n",dividir(valor1,valor2));break;
                     case 4:printf("A multiplicacao eh:%.2f\n",multiplicar(valor1,valor2));break;
    default:printf("opcao invalida");break;
    }

    system("pause");
    return 0;
}
    
    
