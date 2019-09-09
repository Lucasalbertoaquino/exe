#include<stdio.h>
#include<string.h>

int main(void){
    char vec[80];
    int i,cont=0;
    strcpy(vec,"lucas");
    for(i=0;i<strlen(vec);i++){
        if(vec[i]!=vec[i+1]){
            cont++;
        }
    }
    printf("O numero de caracteres presentes no vetor eh: %d",cont);

return(0);
}
