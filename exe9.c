#include<stdio.h>
#include<string.h>

int main(void){
    char vec[80];
    int i,j,cont=0;

    strcpy(vec,"abc");

    for(i=0;i<strlen(vec);i++){
        for(j=i+1;j<strlen(vec);j++){
            printf("%d\n",vec[j]);
            if(vec[i]!=vec[j]){
                cont++;
                //printf("%d\n",cont);
            }
        }
    }
    //printf("%d",cont);

return(0);
}
