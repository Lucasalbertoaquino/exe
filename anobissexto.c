#include<stdio.h>

void anobis(int *v){
    if(((*v)%400==0)||(*v%4==0)&&((*v)%100!=0)){
        printf("O ano %d eh bissexto!\n",(*v));
    }
}

int main(void){
    int ano;
    printf("Digite um ano: ");
    scanf("%d",&ano);
    anobis(&ano);



return(0);
}
