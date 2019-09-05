#include<stdio.h>
int func(){
    int a[5]={0};//zera todos os elementos do vetor
    int i,j,aux;
    for(i=0;i<5;i++){
        printf("Digite o elemento %i do vetor: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    printf("\nO maior elemento do vetor : %d \n",a[4]);
    printf("O segundo maior elemento do vetor : %d \n",a[3]);
    printf("\nFim da execucao!\n");
return(0);
}

int main(void){
    int a;
    a=func();
return(0);
}
