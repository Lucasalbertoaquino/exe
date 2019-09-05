#include<stdio.h>

int main(void){
    int tanque=50,gasolina=4,km=100,parada=4;
    int precop,kmtot,precov;
    float kmpl;
    kmpl=(float)tanque/km;
    precop=50*4;
    kmtot=km*parada;
    precov=precop*parada;
    printf("A kilometragem obtida por litro de cada parada eh: %5.2f\n",kmpl);
    printf("A km obitida por litro em toda viagem eh: %5.2f\n",(kmtot/precov));
    printf("O custo total de combustivel em toda viagem eh: %d\n",precov);






return(0);
}
