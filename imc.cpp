//calculo do imc.

#include<stdio.h>
#include<stdlib.h>

float IMC(float peso, float altura){
      float imc;
      imc=peso/(altura*altura);
      return imc;

}

int main(){
    system("color 2F");
    float resultado,peso,altura;
    char sexo;
    printf("Digite o peso:\n");scanf("%f",&peso);
    printf("Digite a altura:\n");scanf("%f",&altura);
    setbuf(stdin,NULL);
    printf("Digite o seu sexo:\n");scanf("%c",&sexo);
    
    resultado=IMC(peso,altura);

    if(sexo=='M'){
          printf("seu sexo eh:masculino\n");
    }else{
          printf("seu sexo eh:feminino\n");
          
    }  
     if (IMC(peso,altura)>25){
         printf("\nO seu imc eh:%.0f=Pessoa acima do peso\n", resultado);
    }else{
         printf("\nO seu imc eh:%.0f=Pessoa peso ideal\n", resultado);
    }
    system("pause");
    return 0;
  
}
