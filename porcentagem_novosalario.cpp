//porcentagem novo salario

#include<stdio.h>
#include<stdlib.h>

float novo_salario(float salario, float porcentagem){
      float novo_salario;
      novo_salario=salario*(porcentagem/100)+salario;
      return novo_salario;
}
      
int main(){
    float salario, porcentagem;
    printf("Digite o valor do salario:\n");scanf("%f",&salario);
    printf("Digite o valor da porcentagem:\n");scanf("%f",&porcentagem);
    printf("O novo salario eh:%.2f\n",novo_salario(salario,porcentagem));
          
    system("pause");
    return 0;
      
}
          
          
          
          
