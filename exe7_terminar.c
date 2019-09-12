#include <stdio.h>
struct aluno{
  char nome[10];
  float nota;
};

void preeche(struct aluno*p){
  printf("Digite o nome do aluno: ");
  setbuf(stdin, NULL);//usar essa do que a fflush
  fgets(p->nome,10,stdin);
  printf("Digite a nota do aluno: ");
  scanf("%f",&(p->nota));
}

int main(void){
  struct aluno turma[5];
  int i,j;

  for(i=0;i<5;i++){
    preeche(&turma[i]);
  }
  puts("Nomes \t Notas");
  for(j=0;j<5;j++){
    printf("%s\t %5.2f\n",turma[j].nome,turma[j].nota);
  }
return(0);
}