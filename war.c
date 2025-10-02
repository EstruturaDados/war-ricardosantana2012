#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para string

#define MAX_TERRITORIO 5
#define TAM_NOME 30
#define TAM_COR 10

struct territorio{
char nome[TAM_NOME];
char cor[TAM_COR];
int numeroDeTropas;
};

// LIMPAR o bUFFER DE ENTRADA
void limparBufferEntrada() {
    int c;
    while (c = getchar()!= '\n' && c != EOF);    
}

int main(){
    struct territorio cadastroTerritorio[MAX_TERRITORIO];
    int totalLTerritorio = 0;
    int opcao;
    
    do{
        printf("------------------------\n");
        printf("1 - cadastrar um novo territorio\n");
        printf("2 - listar todos os Territorios\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao)
        {
        case 1:
            printf("casdastrar Territorio\n");

                if(totalLTerritorio < MAX_TERRITORIO){
                    printf("Digite o nome do Territorio:\n");
                    fgets(cadastroTerritorio[totalLTerritorio].nome, TAM_NOME,stdin);
                
                    printf("Digite a cor do territorio:\n");
                    fgets(cadastroTerritorio[totalLTerritorio].cor, TAM_COR,stdin);

                    printf("Numero de tropas:\n");
                    scanf("%d", &cadastroTerritorio[totalLTerritorio].numeroDeTropas);

                    totalLTerritorio++;
                    printf("Territorio Cadastrado com sucesso!\n");
                }else{
                    printf("Atingio o numerto maximo de Territorios!\n");
                }
        break;
        case 2:
                 printf("\nLista de Territorio Cadastrasdos:\n");

                if(totalLTerritorio == 0 ){
                    printf("\nNenhum Territorio Cadastrado!\n");
                }else{
                    for(int i =0 ; i<totalLTerritorio; i++){
                        printf("Territrio %d\n", i + 1 );
                        printf("Nome: %s\n", cadastroTerritorio[i].nome);
                        printf("Cor: %s\n", cadastroTerritorio[i].cor);
                        printf("Numero de Tropas: %d\n", cadastroTerritorio[i].numeroDeTropas);
                    }
                }
                printf("Precione enter para continuar");
                getchar();
        break;
        
        default:
            printf("Oppção Invalida!");
            printf("Precione enter para continuar");
            getchar();
            break;
        }
    }while (opcao!=0);

}