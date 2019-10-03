typedef struct{
    char cod[6];
    char* nome;
    float* preco;
    int qtde; //qtde de produtos no estoque
    int qtdePrecos; //qtde de precos
}Produto;

typedef struct{
    char* nome;
    Produto** produtos;
    int qtde; //qtde de produtos
    int tam; //tamanho do vetor
}Empresa;

//Prototipos
Produto* novoProduto(char* cod, char* desc, float preco, int qtde);
float mediaDePreco(Empresa* e);
int buscaRemoveDuplicados(Empresa* e, char* cod);

//Implementação
Produto* novoProduto(char* cod, char* desc, float preco, int qtde){
    Produto* novo=(Produto*)malloc(sizeof(Produto));
    novo->cod = (char*) calloc(6, sizeof(char));
    novo->desc = (char*) calloc(strlen(desc) + 1, sizeof(char));
    novo->preco =preco;
    novo->qtde=qtde;
    novo->qtdePrecos=0;
}

float mediaDePreco(Empresa* e){
    float soma=0;
    for(int i=0;i<e->qtde;i++){
        soma=soma+(e->produtos->preco);
    }
    return soma/e->qtde;
}

int buscaRemoveDuplicados(Empresa* e, char* cod){
    Empresa* aux;
    while(e->qtde!=NULL){
        if(e->produtos->cod==cod){
            e->produtos->cod=aux;
            free(aux);
            return 1;
        }
    }
    return 0;
}