#include <stdio.h>
#include <stdlib.h>

void main(){
    int t[]={1,2,3,4,5};
    clone(t,5);
    clone_1(5);

}

void clone(int *v,int n){
    int r[n];
    for(int i =0;i<tam;i++){
        r[i]=v[i];
    }
}

void clone_1(int n){
    int r[n];
    int c[];
    for(int i =0;i<tam;i++){
        printf("Digite um número para o vetor clone:\n");
        scanf("%d",&r[i]);
        r[i]=c[i];
    }
}



