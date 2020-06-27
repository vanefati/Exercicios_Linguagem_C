//idade retorna classe eleitoral

#include<stdio.h>
#include<stdlib.h>

void classe(int idade){
     
     if(idade<16){
        printf("Nao eleitor!\n");
        }else if((idade>=18)&&(idade<=65)){
                 printf("Eleitor obrigatorio!\n");
              }else if((idade>=16)&&(idade<18)||(idade>65)){
                      printf("Eleitor facultativo!\n");
                    }
}

int main(){
    int idade;
    system("color 5F");
    printf("Digite a idade:\n");scanf("%d",&idade);
    classe(idade);

    system("pause");
    return 0;
}
