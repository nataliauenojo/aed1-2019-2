#include <stdio.h>
#include <stdlib.h>
int main(){
short int i = 1; //sugestão de endereço: 192
short int v[4];  //sugestão de endereço: 200
while (i <= 4){
   *(v + i) = i++;
}
for(int x=0;x<4;x++){
    printf("%d ",v[x]);
}
}
