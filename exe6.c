#include<stdio.h>

int main(void){
    int tanque=50,gasolina=4,km=100,parada=4,flag=1;
    int precop,kmtot,precov;
    float kmpl;
    while(flag){
        printf("Digite a quantidade de litros do seu tanque: ");
        scanf("%d",&tanque);
        printf("Digite a quantidade de Km ate o posto: ");
        scanf("%d",&km);
        printf("Digite a quantidade de paradas realizadas: ");
        scanf("%d",&parada);
        if((parada<=0)||(tanque<=0)||(km<=0)){
            printf("ERRO-Nenhum dado pode ser deixado com valor 0 ou menor - Digite Novamente!\n");
        }
        else{
            flag=0;
        }
    }
    kmpl=(float)tanque/km;
    precop=tanque*parada;
    kmtot=km*parada;
    precov=precop*parada;
    printf("A kilometragem obtida por litro de cada parada eh: %5.2f\n",kmpl);
    printf("A km obitida por litro em toda viagem eh: %5.2f\n",(kmtot/precov));
    printf("O custo total de combustivel em toda viagem eh: %d\n",precov);

return(0);
}
