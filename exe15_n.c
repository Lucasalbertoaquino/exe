#include<stdio.h>
#include<ctype.h>//para converter em maisculo/minusculo
#include<stdlib.h>
#define DIM 2

typedef struct sexo
         {
          int masculino;
          int feminino;
         }Tsexo;

typedef struct procedencia
        {
         int capital;
         int interior;
         int outro;
        }Tproc;


typedef struct registro
        {
         int ano;
         Tsexo s;
         Tproc p;
        }Treg;

int main(void){
    int i,nt;
    char c;
    Treg v1[DIM];
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO:%d\n",v1[i].ano,v1[i].s.masculino,v1[i].s.feminino,v1[i].p.capital,v1[i].p.interior,v1[i].p.outro);
    }
    for(i=0;i<DIM;i++){
        printf("Digite sua idade: ");
        scanf("%d",&v1[i].ano);
        setbuf(stdin,NULL);
        printf("Digite seu sexo(M-Masculino/F-Feminino): ");
        scanf("%c",&c);
        c=toupper(c);//convete p/ maisculo tolower(arg) p/ minuscula
        printf("%c\n",c);
        switch(c){
            case 'M':
                if(c=='M'){
                v1[i].s.masculino+=1;
                break;
            }
            case 'F':
                if(c=='F'){
                v1[i].s.feminino+=1;
                break;
            }
            default:
                puts("Voce Digitou a letra errado - Digite M-Masculino/ F-Feminino!");
        }
        //setbuf(stdin,NULL);
        printf("Digite sua procedencia:\n0-capital\n1-Interior\n2-outro\nResposta:");
        scanf("%d",&nt);
        printf("%d",nt);
        switch(nt){
            case 0:
                //if(nt==0){
                v1[i].p.capital+=1;break;
                //}
            case 1:
                //if(nt==1){
                v1[i].p.interior+=1;break;
                //}
            case 2:
                //if(nt==2){
                v1[i].p.outro+=1;break;
                //}
            default:
                puts("Algo Errado - Digite:\n0-capital\n1-Interior\n2-outro\n");
        }

    }
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO %d\n",v1[i].ano,v1[i].s.masculino,v1[i].s.feminino,v1[i].p.capital,v1[i].p.interior,v1[i].p.outro);
    }

return(0);
}
