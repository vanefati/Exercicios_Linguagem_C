#include<stdio.h>
#include<stdlib.h>

float IMC(float peso, float altura){
      float imc;
      imc=peso/altura*altura;
      return imc;
}

int main(){
    system("color 3F");
    float peso,altura;
    printf("Digite o peso:\n");scanf("%f",&peso);
    printf("Digite a altura:\n");scanf("%f",&altura);

    printf("%.0f\n",IMC(peso,altura));
    
    if(IMC(peso,altura)>25){
        printf("Pessoa acima do peso\n");
    }else{
         printf("Pessoa peso ideal\n");
    }

    system("pause");
    return 0;

}
