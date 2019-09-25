#include<stdio.h>
#include<string.h>

void ord(int *vec){
    int i,j,aux;
        for(i=0;i<9;i++){
            for(j=i+1;j<10;j++){
                if(vec[i]>vec[j]){
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
        /*
        printf("Vetor ordenado!\n");
        for(i=0;i<10;i++){
            printf("%d\n",vec[i]);
        }
        */
    }
void copia(int *vec){
    int i,j,vecn[30];
    for(i=0;i<30;i++){
        vecn[i]=(vec[i]);
    }//como retornar um vetor
    printf("\n");
    ord(&vecn);
    for(j=0;j<30;j++){
        printf("%d\n",vecn[j]);
    }
}


int main(void){
    int i,j,v1[10]={7,6,5,10,0,40,4,6,9,1},v2[10]={10,7,4,6,30,1,8,45,2},v3[10]={6,4,7,98,3,80,10,43,100,1};
    int aux,ve[30];
    int *p;

    for(i=0;i<10;i++){
        printf("v1[%i]:%d v2[%i]:%d v3[%i]:%d \n",i,v1[i],i,v2[i],i,v3[i]);
    }
    ord(&v1);
    ord(&v2);
    ord(&v3);

    printf("\n");
    /*
    for(i=0;i<10;i++){
        printf("%d %d %d \n",v1[i],v2[i],v3[i]);
    }
    */
    /*
    #include<stdio.h>
#include<string.h>

void ord(int vec[]){
    int i,j,aux;
        for(i=0;i<9;i++){
            for(j=i+1;j<10;j++){
                if(vec[i]>vec[j]){
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
        /*
        printf("Vetor ordenado!\n");
        for(i=0;i<10;i++){
            printf("%d\n",vec[i]);
        }
        */
    }


int main(void){
    int i,j,v1[10]={7,6,5,10,0,40,4,6,9,1},v2[10]={10,7,4,6,30,1,8,45,2},v3[10]={6,4,7,98,3,80,10,43,100,1};
    int aux,ve[30];
    int vt[3][3]={{1,2,3},{4,5,6},{7,8,9}};// essa e a ideia
    /*
    for(i=0;i<10;i++){
        printf("v1[%i]:%d v2[%i]:%d v3[%i]:%d \n",i,v1[i],i,v2[i],i,v3[i]);
    }
    ord(&v1);
    ord(&v2);
    ord(&v3);

    printf("\n");
    for(i=0;i<10;i++){
        printf("%d %d %d \n",v1[i],v2[i],v3[i]);
    }
 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\n",vt[i][j]);
        }
    }
    
    
return(0);
}
*/
    copia(&v1);
    copia(&v2);
    copia(&v3);
return(0);
}

