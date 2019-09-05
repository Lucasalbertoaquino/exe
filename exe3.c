#include<stdio.h>

int main(void){
    int j,i,n=32767,soma;

    for (j=1;j<=n;j++){
        soma=0;
        for(i=1;i<j;i++){
            if(j%i==0){
                soma+=i;
            }
        }
        if(soma==j){
            printf("o numero %d eh perfeito!\n",j);
        }
    }
return(0);
}
