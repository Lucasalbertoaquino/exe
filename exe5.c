#include<stdio.h>
float ler(){
    int flag=1;
    float valor;
    while(flag){
        printf("Digite o valor em centavos de R$0,01 a R$1,00: ");
        scanf("%f",&valor);
        if((valor>1.00)||(valor<0.01)){
            printf("ERRO - Digite novamente!\n");
        }
        else{
            flag=0;
        }
    }

return(valor);
}

void calc(float valor){
    int conv,i,j;
    int m1r,m50,m25,m10,m5,m1;
    valor*=100;
    //printf("%f\n",valor);
    conv=(int)valor;
    printf("Seu troco eh: \n");
    //printf("%d\n",conv);
    m1r=(conv/100);
    printf("%d moedas de 1 real\n",m1r);
    m50=(conv%100)/50;
    printf("%d moedas de 50 centavos\n",m50);
    m25=((conv%100)%50)/25;
    printf("%d moedas de 25 centavos\n",m25);
    m10=(((conv%100)%50)%25)/10;
    printf("%d moedas de 10 centavos\n",m10);
    m5=((((conv%100)%50)%25)%10)/5;
    printf("%d moedas de 5 centavos\n",m5);
    m1=((((conv%100)%50)%25)%10)%5;
    printf("%d moedas de 1 centavo\n",m1);
}

int main(void){
    float a;

    a=ler();
    //printf("%5.2f",a);
    calc(a);

return(0);
}
