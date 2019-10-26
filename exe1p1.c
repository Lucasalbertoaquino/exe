#include<stdio.h>

int primo(int *v){
    int i,cont=0;
    if((*v)==1){
        return(0);
    }
    for(i=1;i<(*v);i++){
        if(((*v)%i==0)&&((*v)%(*v)==0)){
            cont+=1;
        }
    }
    if(cont>=2){
        //printf("%d nao eh primo\n",(*v));
        return(0);
    }
    else{
        //printf("%d eh primo\n",(*v));
        return((*v));
    }
}

int main(void){
    int n,cont=0,np=1,npr;
    printf("Digite n: ");
    scanf("%d",&n);
    puts("Os primeiros n primos sao");
    while(n!=cont){
        npr=primo(&np);
        //printf("%d\n",np);
        if(npr>0){
            cont++;
            printf("%d\t",np);
            np++;
        }
        else{
            np++;
        }
    }

return(0);
}
