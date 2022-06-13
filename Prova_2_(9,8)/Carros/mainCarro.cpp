#include<stdio.h>
#include "mc.h"


/*funcao main*/
int main(){
    int op, codmarca, codcarro;
    char marca[TAM];
    tipomarca *marcas = NULL;
    tipocarro *carros = NULL;
    
    
    do{
        printf("\n1 - Cadastrar marca");
        printf("\n2 - Cadastrar carro");
        printf("\n3 - Remover carros de uma marca");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        
        if(op == 1){
            printf("Digite o codigo da marca: \n");
            scanf("%d", &codmarca);

            printf("Digite o nome da marca: \n");
            scanf("%s", marca);

            inserirMarca(marcas, codmarca, marca);

            listarMarca(marcas);
        }
        else if(op == 2){
            tipomarca *x;

            printf("Digite o codigo do carro: \n");
            scanf("%d", &codcarro);

            printf("Digite o nome da marca do carro: \n");
            scanf("%s", marca);

            x = buscarMarca(marcas, marca);

            if(x != NULL){
                carros = inserirCarro(carros, codcarro, x->codmarca);
                listarCarro(carros);
            }
            else{
                printf("Marca nao encontrada!\n");
            }
            
        }
        else if(op == 3){
            tipomarca *x;

            printf("Digite o nome da marca para remover: \n");
            scanf("%s", marca);

            x = buscarMarca(marcas, marca);

            if(x != NULL){
                removeCarros(carros, x->codmarca);
            }
            else{
                printf("Marca nao encontrada!\n");
            }
        }
        
    }while(op != 4);
    limparLista(carros);

    return 0;
}
