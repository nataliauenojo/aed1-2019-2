#include <stdio.h>
#include <stdlib.h>


int potec(int pot,int num){
	int p =1;
	int res=0;
	if(pot==p){
		res=res+num;
	}else{
		for(int i=1;i<=pot;i++){
			res=1;
			res=res*num;
		}
	}
	printf("%d\n",res);
	return res;
}

void ordeminversa(int v[],int n){
	if(v==NULL)return NULL;
	for(int i=n-1;i>=0;i--){
		printf("%d ",v[i]);
	}
	printf("\n");
}

void conceito(int nota){
	if(nota>=9){
		printf("Conceito A\n");
	}else if((nota>=7)&&(nota<9)){
		printf("Conceito B\n");
	}else if((nota>=6)&&(nota<7)){
		printf("Conceito C\n");
	}else{
		printf("Conceito I\n");
		printf("Insuficiente\n");
	}
}
 
void main(){
    int pot = 3;
    int num = 2;
	int v[]={1,2,3,4};
	int x=4;
	int n1= 7.5;

	potec(pot,num);
	ordeminversa(v,x);
	conceito(n1);

}