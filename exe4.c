#include<stdio.h>

int main(void){
    int i,n,fat=1;

    printf("Digite n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fat*=i;
    }
    printf("%d! : %d",n,fat);

return(0);
}
