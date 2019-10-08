#include<stdio.h>
#include<ctype.h>//para converter em maisculo/minusculo
#include<stdlib.h>
#define DIM 2
struct registro{
    int ano;
     struct sexo{
        int masculino;
        int feminino;
    };
    struct procedencia{
        int capital;
        int interior;
        int outro;
    };
};

int main(void){
    int i,nt;
    char c;
    struct registro v1[DIM]={0};
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO:%d\n",v1[i].ano,v1[i].masculino,v1[i].feminino,v1[i].capital,v1[i].interior,v1[i].outro);
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
            case 1:
                if(c=='M'){
                v1[i].masculino+=1;
                break;
            }
            case 2:
                if(c=='F'){
                v1[i].feminino+=1;
                break;
            }
            default:
                puts("Voce Digitou a letra errado - Digite M-Masculino/ F-Feminino!");
        }
        setbuf(stdin,NULL);
        printf("Digite sua procedencia:\n0-capital\n1-Interior\n2-outro\nResposta:");
        scanf("%d",&nt);
        switch(nt){
            case 0:
                //if(nt==0){
                v1[i].capital+=1;
                //}
            case 1:
                //if(nt==1){
                v1[i].interior+=1;
                //}
            case 2:
                //if(nt==2){
                v1[i].outro+=1;
                //}
            default:
                puts("Algo Errado - Digite:\n0-capital\n1-Interior\n2-outro\n");
        }

    }
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO:%d\n",v1[i].ano,v1[i].masculino,v1[i].feminino,v1[i].capital,v1[i].interior,v1[i].outro);
    }
return(0);
}
