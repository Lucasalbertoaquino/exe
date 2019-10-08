#include<stdio.h>

long int fat(long int a){
    long int i,b;
    b=1;
    for(i=1;i<=a;i++){
        b*=i;
    }
    printf("%d\n",b);
return(b);
}
long int calc(long int n,long int p){
    long int r,p2;
    p2=(n)-(p);
    r=(fat(n)/(fat(p)*fat(p2)));
    printf("combinacao de %d a %d: %d\n",n,p,r);
    return(r);
}

int main(void){
    long int p1,p2;
    puts("Calculo de Combinacao de n a p.");
    printf("Digite N: ");
    scanf("%d",&p1);
    printf("Digite P: ");
    scanf("%d",&p2);
    calc(p1,p2);


    //r=calc(n,p);
    //printf("%d\n",r);

return(0);
}
