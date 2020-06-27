#include<stdio.h>
#include<stdlib.h>

int def_tam(){
  int t;
  printf("\nDigite o tamano maximo de cadastros de alunos: ");
  scanf("%d",&t);
  return t;
}

int menu(){
  int r;
  printf("-----------Menu----------\n");
  printf(" 1 - Cadastro Aluno.    |\n");
  printf(" 2 - Consulta Aluno.    |\n");
  printf(" 3 - Apresentacao.      |\n");
  printf(" 4 - Aprovados.         |\n");
  printf(" 5 - Finalizar.         |\n");
  printf("-------------------------\n");
  scanf("%d",&r);
  return r;
}

void cadastro(float mat[][6], int t, int A){
  int c;
  mat[0][1] = 0;
  if(A<=t){
    mat[A][1] = mat[A-1][1]+1;
    mat[A][2] = 1;
    for(c=3;c<=6;c++){
      printf("Digite a %d nota: ",(c-2));
      scanf("%f",&mat[A][c]);
    }
    printf("Matricula feita com sucesso: %f.\n\n",mat[A][1]);
  }
  else
    printf("Banco de dados completo.\n");
}

void apresentab(float mat[][6], int achou){
  float soma=0, media;
  int c;
  
  printf("\nMatricula: %f.\n",mat[achou][1]);
  printf("Notas cadastradas:\n");
  for(c=3;c<=6;c++){
    printf("%d nota: %.2f.\n",(c-2),mat[achou][c]);
    soma = soma+mat[achou][c];
  }
  media = soma/4;
  if(media>=7){
    printf("Aluno aprovado com media: %.2f.\n",media);
  }
  if(media<4){
    printf("Aluno reprovado com media: %.2f.\n",media);
  }
  if(media>=4 && media<7){
    printf("Aluno em exame final com media: %.2f.\n",media);
  }
}

void busca_complet(float mat[][6], int t){
  int achou, i;
  float n;
  
  printf("Digite a matricula para consulta: ");
  scanf("%f",&n);
  
  for(i=1;i<=t;i++){
    if(n==mat[i][1]){
      achou = i;
      break;
    }
    else
      achou = -1;
  }
  
  if(achou!=-1){
    printf("\n<<Matricula encontrada>>\n");
    apresentab(mat,achou);
  }
  else{
    printf("\n<<Matricula nao encontrada>>\n");
  }
}

void apresenta(float mat[][6], int t){
  int l;
  printf("\n");
  for(l=1;l<=t;l++){
    if(mat[l][2]==1){
      printf("Matricula %f: cadastrada.\n",mat[l][1]);
    }
    else
      printf("Matricula %f: disponivel.\n",mat[l][1]);
  }
  printf("\n");
}

void porcent(float mat[][6], int t, int A){
  int l, l2, c, conta=0, contc=0;
  float porcentaprov, soma, media, conta1, contc1;
  if(A>=2){
  for(l2=1;l2<=t;l2++){
    if(mat[l2][2]==1){
      contc=contc+1;
    }
  }
  
  for(l=1;l<=contc;l++){
    soma = 0;
    media = 0;
    for(c=3;c<=6;c++){
      soma = soma+mat[l][c];
    }
    media = soma/4;
    if(media>=7)
      conta=conta+1;
  }
  
  conta1 = (float)conta;
  contc1 = (float)contc;
  
  porcentaprov = (conta1/contc1)*100;
  printf("Porcentagem de aprovacao.\n");
  printf("%.2f%% do(s) aluno(s).\n",porcentaprov);
  printf("Quantidade do(s) aluno(s) aprovado(s): %d.\n",conta);
  printf("\n");
  }
  else
    printf("Quantidade de alunos cadastrados: %d.\n",conta);
}

int aciona(int op, float mat[][6], int t, int A){
  switch(op){
    case 1:
      cadastro(mat,t,A);
      return 1;
      break;
    case 2:
      busca_complet(mat,t);
      return 0;
      break;
    case 3:
      apresenta(mat,t);
      return 0;
      break;
    case 4:
      porcent(mat,t,A);
      return 0;
      break;
  }
}

int main(){
  float mat[100][6];
  int op, situ, A=1, t;
  
  t = def_tam();
  
  system("cls");
  do{
    op = menu();
    situ = aciona(op, mat, t, A);
    A = A+situ;
    system("pause");
    system("cls");
  }while(op!=5);

  printf("\nPrograma Finaizado.\n");
}
