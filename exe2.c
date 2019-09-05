#include<stdio.h>

int main(void){
    int n,i,cont=0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0){
            cont+=1;
            //printf("%d\n",cont);
        }
    }
    if (cont<2){
        printf("%d eh primo\n",n);
    }
    else{
        printf("%d nao eh primo",n);
    }
return(0);
}
