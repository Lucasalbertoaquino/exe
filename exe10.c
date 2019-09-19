#include<stdio.h>
#include<string.h>

int main(void){
   char prox[80], vec[11][80]={"lucas","felipe","eulina","walace","lucas","felipe","antonio","ray","luara","ray","ray"};
   int i,j,k,cont=0,contl=0,contn[11]={0};
   char maior[80],aux[80];
   for(i=0;i<10;i++){
        for(j=i+1;j<11;j++){
            if(strlen(vec[i])<strlen(vec[j])){
                strcpy(aux,vec[i]);
                strcpy(vec[i],vec[j]);
                strcpy(vec[j],aux);
            }
        }
   }
   printf("Vetor ordenado!\n");
   for(i=0;i<11;i++){
    printf("%s\n",vec[i]);
   }


   for(i=0;i<11;i++){
        //strcpy(maior,vec[0]);
        //printf("maior %s\n",maior);
        //printf("%s\t",vec[i]);
        //printf("%s\n",vec[i+1]);
        contn[i]+=1;
        //printf("%d\n",contn[i]);
        if(strlen(vec[i])==strlen(vec[i+1])){
            //printf("\n%s e igual que %s\n",vec[i],vec[i+1]);//qtd de letras iguais a outra
            strcpy(prox,vec[i+1]);
            //printf(" prox->%s\n",prox);
            contl=0;
            for(j=0;j<=strlen(vec[i]);j++){
                for(k=0;k<strlen(prox);k++){
                    //printf("1 %c\t",vec[i][j]);
                    //printf("2 %c\n",prox[k]);
                    if(vec[i][j]==prox[k]){
                        //printf("entrei aqui\n");
                        contl++;
                        //printf("%d\n",contl);
                    }
                }
                if(contl==strlen(vec[i])){
                    //printf("contl %d strvec[i] %d\t",contl,strlen(vec[i]));
                    //strcpy(maior,vec[i]);
                    contn[i]+=1;
                }
            }
        }
   }
   puts("\n");
   puts("nome \t Quantidade");
   for(i=0;i<11;i++){
       printf("%s \t %d \n",vec[i],contn[i]);
   }

    //printf("%d %d\n",contl,strlen(vec[i]));
   //printf("A palavra que apareceu mais vezes foi: %s\n",maior);

return(0);
}
