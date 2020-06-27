#include<stdio.h>

int def_tam(){
  int t;
  printf("Digite o tamanho máximo de cadastros de alunos: ");
  scanf("%d",&t);
  return t;
}

int menu(){
  int r;
  printf(" -------------Menu-------------\n");
  printf("| 1 - Cadastro de Aluno.      |\n");
  printf("| 2 - Consultas de Aluno.     |\n");
  printf("| 3 - Apresentação.           |\n");
  printf("| 4 - Finalização.            |\n");
  printf(" ------------------------------\n");
  scanf("%d",&r);
  return r;
}

void cadastro(float mat[][6], int t, int A){
  int c;
  system("clear");
  mat[0][1] = 0;
  if(A<=t){
    mat[A][1] = mat[A-1][1]+1;
    mat[A][2] = 1;
    for(c=3;c<=6;c++){
      printf("Digite a %d nota: ",c-2);
      scanf("%f",&mat[A][c]);
    }
    printf("Matricula %f feita com sucesso.\n",mat[A][1]);
  }
  else
    printf("Banco de dados completo.\n");
}

int b_sequencial(float mat[][6], int t, int n){
  int achou, i;
  for(i=1;i<=t;i++){
    if(mat[i][1]==n){
      achou = i;
      break;
    }
    else
      achou = -1;
  }
  return achou;
}

void apresenta_b(float mat[][6], int achou){
  int c;
  float soma=0, media;
  printf("\n----------Notas---------\n");
  for(c=3;c<=6;c++){
    printf(" %d nota: %.2f          |\n",(c-2),mat[achou][c]);
    soma = soma+mat[achou][c];
  }
  media = soma/4;
  printf("------------------------\n");
  printf("-Media: %.2f.          |\n",media);
  printf("------------------------\n");
  if(media>=7){
    printf("------------------------\n");
  printf("|    Aprovado          |\n",media);
  printf("------------------------\n");
  }
  else if(media<=4){
    printf("------------------------\n");
  printf("|     Reprovado         |\n",media);
  printf("------------------------\n");
  }
  else{
    printf("------------------------\n");
  printf("|     Exame Final      |\n",media);
  printf("------------------------\n");
  }
}

int menu_b(){
  int r;
  getchar();getchar();
  system("clear");
  printf(" --------Menu-Consulta---------\n");
  printf("| 1 - Situação do aluno.      |\n");
  printf("| 2 - Maior e menor nota.     |\n");
  printf("| 3 - Finalizar.              |\n");
  printf(" ------------------------------\n");
  scanf("%d",&r);
  return r;
}

void apresenta_m(float mat[][6], int achou){
  float maior, menor;
  int c;
  system("clear");
  maior = mat[achou][3];
  menor = maior;
  for(c=4;c<=6;c++){
    if(mat[achou][c]>maior)
      maior = mat[achou][c];
    if(mat[achou][c]<menor)
      menor = mat[achou][c];
  }
  printf("\n\nMaior nota: %.2f.\n",maior);
  printf("Menor nota: %.2f.\n",menor);
}

void m_menor(float mat[][6], int t){
  float n;
  int achou;
  
  printf("Digite a matricula para consulta: ");
  scanf("%f",&n);
  
  achou = b_sequencial(mat,t,n);
  if(achou!=-1){
    printf("\nMatricula %f encontrada no sistema: \n",n);
    apresenta_m(mat, achou);
  }
  else
    printf("\nMatricula %f não encontrada no sistema.\n",n);
}


void c_media(float mat[][6], int t){
  float n;
  int achou;
  system("clear");
  printf("Digite a matricula para consulta: ");
  scanf("%f",&n);
  achou = b_sequencial(mat,t,n);
  if(achou!=-1){
    printf("\nMatricula %f encontrada no sistema: \n",n);
    apresenta_b(mat, achou);
  }
  else
    printf("\nMatricula %f não encontrada no sistema.\n",n);
}

void aciona_b(int op, float mat[][6], int t){
  switch(op){
    case 1:
      c_media(mat,t);
      break;
    case 2:
      m_menor(mat,t);
      break;
  }
}

void busca(float mat[][6], int t){
  int op;
  do{
    op = menu_b();
    aciona_b(op,mat,t);
  }while(op!=3);
  
  printf("Finalizando consulta...\n");
}

void apresenta(float mat[][6], int t){
  system("clear");
  int l, c, cont=0;
  float soma, media;
  for(l=1;l<=t;l++){
    soma = 0;
    if(mat[l][2]==1){
      printf("--------------------------\n");
      printf("Matricula: %f.     |\n",mat[l][1]);
      for(c=3;c<=6;c++){
	printf("%d nota: %.2f.            |\n",(c-2),mat[l][c]);
	soma = soma+mat[l][c];
      }
      media = soma/4;
      printf("-Media : %.2f.           |\n",media);
      printf("--------------------------\n\n");
      cont++;
    }
  }
  printf("Matricula(s) disponivel(is): %d cadastro(s).\n",(t-cont));
}

int aciona(int op, float mat[][6], int t, int A){
  switch(op){
    case 1:
      cadastro(mat,t,A);
      return 1;
      break;
    case 2:
      busca(mat,t);
      return 0;
      break;
    case 3:
      apresenta(mat,t);
      return 0;
      break;
  }
}

int main(){
  float mat[100][6];
  int op, situ, A=1, t;
  
  t = def_tam();
  
  system("clear");
  
  do{
    op = menu();
    situ = aciona(op, mat, t, A);
    A = A+situ;
    getchar();getchar();
    system("clear");
  }while(op!=4);
  
  system("clear");
  printf("\nPrograma finalizado...\n\n");
}