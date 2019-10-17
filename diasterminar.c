#include<stdio.h>
#include<string.h>
typedef struct data{
  int dia;
  int mes;
  int ano;
}Td;

Td data1(int *v){
  Td Di;
  int s=1;
  //int di,df;
  while(s){
    int cont=0;
    printf("Digite a data inicial\n");
    printf("Dia: ");
    scanf("%d",&Di.dia);
    if((Di.dia<1)||(Di.dia>31)){
      cont++;
    }
    printf("Mes: ");
    scanf("%d",&Di.mes);
    if((Di.mes<1)||(Di.mes>12)){
      cont++;
    }
    printf("Ano: ");
    scanf("%d",&Di.ano);
    if((Di.ano<1900)||(Di.ano>2019)){
      cont++;
    }
    if(cont>0){
      puts("Algo Errado-Digite Novamente!");
    }
    else{
      s=0;
    }
  }
  //printf("%d/%d/%d\n",Di.dia,Di.mes,Di.ano);
return(Di);
}
Td data2(int *v1){
  Td Df;
  int s2=1;
  while(s2){
    int cont=0;
    printf("\nDigite a data Final\n");
    printf("Dia: ");
    scanf("%d",&Df.dia);
    if((Df.dia<1)||(Df.dia>31)){
        cont++;
    }
    printf("Mes: ");
    scanf("%d",&Df.mes);
    if((Df.mes<1)||(Df.mes>12)){
      cont++;
    }
    printf("Ano: ");
    scanf("%d",&Df.ano);
    if((Df.ano<1900)||(Df.ano>2019)){
      cont++;
    }
    if(cont>0){
      puts("Algo Errado-Digite Novamente!");
    }
    else{
      s2=0;
    }
  }
  //printf("%d/%d/%d",Df.dia,Df.mes,Df.ano);
return(Df);
}
void calc(Td Di,Td Df){
  int dano=0,dtano=0;
  dano=Df.ano-Di.ano;
  dtano=dano*365;//dias totais dos anos
  //printf("%d\n",dano);
  //printf("%d\n",dtano);

  int dimes=0,dfmes=0,dtmes=0;
  dimes=Di.mes*31;
  dfmes=Df.mes*31;
  dtmes=((dimes+dfmes)-7);
  printf("%d\n",dimes);
  printf("%d\n",dfmes);
  printf("%d\n",dtmes);

  printf("%d/%d/%d\n",Di.dia,Di.mes,Di.ano);
  printf("%d/%d/%d",Df.dia,Df.mes,Df.ano);
}

int main(void){
  /*programa que calcula o numero de dias entre duas datas*/
  int teste;
  Td d1,d2;
  d1=data1(&teste);
  d2=data2(&teste);
  calc(d1,d2);
return(0);
}
