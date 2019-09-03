#include <stdio.h>
#include <stdlib.h>

void main(){
    int v1[]={1,2,3,4};
    imprimir(v1,4);

    criar_vetor(4,1);
    criar_vetor2(4);

    int v1[3] = {2,4,6}; 
    int v2[4] = {3,5,7,9}; 
    int v3[7]; 
    int *v4; 
    v4 = intercala_a(v1, 3, v2, 4); 
    intercala_b(v1, 3, v2, 4, v3);
}
//exercicio 1
void imprimir(int v[],int n){
    printf("[");
    for(int i=0;i<n;i++){
        if(i!=n-1){
            printf("%d,",v[i]);
        }else{
            printf("%d",v[i]);
        }
    }
    printf("]\n");
}
//exercicio 2 
//item a
int criar_vetor(int tam,int valor){
    int *v=(int*)calloc(tam,sizeof(int));
    for(int i=0;i<tam;i++){
       v[i]=valor;
    }
    return v;
}
//item b
int criar_vetor2(int tam){
    int *v=(int*)calloc(tam,sizeof(int));
    for(int i=0;i<tam;i++){
       printf("Digite um valor para posiçao %d do vetor\n",i);
       scanf("%d",&v[i]);
    }
    return v;
}

//exercicio 3
int a_maior(int *v,int tam){
    int maior=0;
    for(int i =0;i<tam;i++){
        if(v[i]>maior){
            v[i]=maior;
        }
    }
    return maior;
}

//exercicio 4
//item a
void intercala_a(int*v,int tam,int*n,int tam2){
    int aux=0;
    int tam_r=tam+tam2;
    int i=0,j=0;
    int *v3=(int*)calloc(tam_r,sizeof(int));
    while (i<tam && j <tam2){
        if(i==aux){
            v3[tam_r]=v[i];
            i++;
            tam_r++;
        }else if(j==aux){
            v3[tam_r]=n[j];
            j++;
            tam_r++;
        }
        aux++;
    }
}

//item b
void intercala_b(int*v,int tam,int*n,int tam2){
    int aux=0;
    int tam_r=tam+tam2;
    int i=0,j=0;
    int *v3=(int*)calloc(tam_r,sizeof(int));
    while (i<tam && j <tam2){
        if(i==aux){
            printf("Digite um valor para posiçao %d do vetor\n",tam_r);
            scanf("%d",&v3[tam_r]);
            i++;
            tam_r++;
        }else if(j==aux){
            printf("Digite um valor para posiçao %d do vetor\n",tam_r);
            scanf("%d",&v3[tam_r]);
            j++;
            tam_r++;
        }
        aux++;
    }
}

