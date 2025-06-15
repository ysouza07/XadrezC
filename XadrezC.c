#include <stdio.h>

void moverTorre(int movimento, int casas) { //função para mover a torre, direção e numero de casas.
    int i = 0;  
    printf("\n");
        while (i < casas) {
            if (movimento == 1) {
            printf("Direita.\n\n");
            } else {
            printf("Esquerda.\n\n");
            }
        i++;
        }}

void moverBispo(int movimento, int casas) { //função para mover o bispo, direção e numero de casas.
    int i, j;
        for (i = 1; i <= casas; i++) {
            for (j = 0; j < 2; j++) {
                if (movimento == 1) {
                    printf(j == 0 ? "\nCima.\n" : "Direita.\n");
                } else if (movimento == 2) {
                    printf(j == 0 ? "\nCima.\n" : "Esquerda.\n");
                } else if (movimento == 3) {
                    printf(j == 0 ? "\nBaixo.\n" : "Direita.\n");
                } else {
                    printf(j == 0 ? "\nBaixo.\n" : "Esquerda.\n");
                }
            }
        }
    }
        
void moverRainha(int movimento, int casas) { //função para mover a rainha, direção e numero de casas.
    int i = 0;
        if (movimento == 1) {
            do { 
                printf("Direita.\n");
                i++;
            } while (i < casas);
        } else if (movimento == 2) {
            do { 
                printf("Esquerda.\n");
                i++;
            } while (i < casas);
        } else if (movimento == 3) {
            do { 
                printf("Cima.\n");
                i++;
            } while (i < casas);
        } else if (movimento == 4) {
            do { 
                printf("Baixo.\n");
                i++;
            } while (i < casas);
        } else {
            printf("Opção inválida");
        }
    }

void moverCavalo(int movimento) { //função para mover o cavalo, apenas direção, numero de casas pré-definida pelas regras.
int i, cavalo = 0;
printf("\n");
        if (movimento == 1) {
            for (i = 0; i < 2; i++) {
               printf("Cima.\n");
           }
            if (i == 2) {
                printf("Direita.\n");
            }
        } else if (movimento == 2) {
            for (i = 0; i < 2; i++) {
               printf("Cima.\n");
           }
            if (i == 2) {
                printf("Esquerda.\n");
            }
        } else if (movimento == 3) {
            for (i = 0; i < 2; i++) {
               printf("Baixo.\n");
           }
            if (i == 2) {
                printf("Direita.\n");
            }
        } else {
            for (i = 0; i < 2; i++) {
               printf("Baixo.\n");
           }
            if (i == 2) {
                printf("Esquerda.\n");
            }
        }
    }
        


int main() {
    
    int i = 0, escolha, cavalo = 1, movimento, casas;
    moverTorre;
    moverBispo;
    moverRainha;
    moverCavalo;

    //Cabeçalho do jogo, informação inicial.    
    printf("Bem vindo ao jogo de Xadrez.\n");
    printf("É seu turno, você deve escolhar uma peça e decidir qual movimentação ela irá fazer.\n\n");
    printf("Escolha qual peça você quer movimentar:\n\n");
    printf("1 - Torre.\n2 - Bispo.\n3 - Rainha.\n4 - Cavalo\n");
    scanf("%d", &escolha); //chamada de dados. Usuário deve decidir qual peça baseado no menu acima.
    
    //estrutura de decisão para analisar a opção da chamada acima, drecionado ao switch a continuação do jogo.
    if (escolha == 1) {
        printf("\nVocê escolheu 1 - Torre.\n");
    } else if (escolha == 2) {
        printf("\nVocê escolheu 2 - Bispo.\n");
    } else if (escolha == 3) {
        printf("\nVocê escolheu 3 - Rainha.\n");
    } else if (escolha == 4) {
        printf("\nVocê escolheu 4 - Cavalo.\n");
    } else {
        printf("\nOpção inválida.\n");
    }
    
    //Este "if" impede que a opção selecionada na variável escolha seja "0" ou superior a "4" e que o jogo continue.
    if (escolha >=1 && escolha <= 4) {
        
    //switch para execusão de cada opção selecionada no menu.
    switch (escolha) {
        case 1: //Movimentação da Torre.
        printf("Escolha a direção do movimento:\n1 - Direita.\n2 - Esquerda.\n");
        scanf("%d", &movimento);
            if (movimento == 1 || movimento == 2) {
                printf("Agora digite o número de casas para o movimento.\n");
                scanf("%d", &casas);
                        moverTorre(movimento, casas); //chamada de função recursiva
            } else {
                printf("Opção inválida.\n");
            }
        break;
        
        case 2: //Movimentação do Bispo.
        printf("Escolha a direção do movimento:\n");
        printf("1 - Cima e Direita.\n2 - Cima e Esquerda.\n");
        printf("3 - Baixo e Direita.\n4 - Baixo e Esquerda.\n\n");
        scanf("%d", &movimento); //chamada de dados para decidir a direção.
            if (movimento > 0 && movimento < 5) {
        printf("Agora digite o número de casas para o movimento.\n");
        scanf("%d", &casas);
                moverBispo(movimento, casas); //chamada de função recursiva            
            } else {
                printf("Opção inválida.\n");
            }
        break;
        
        case 3: //Movimentação da Rainha.
        printf("Escolha a direção do movimento:\n");
        printf("1 - Direita.\n2 - Esquerda.\n3 - Cima.\n4 - Baixo.\n5 - Opções na diagonal serão implantadas posteriormente (não selecionar).\n");
        scanf("%d", &movimento); //chamada de dados para decidir a direção.
            if (movimento > 0 && movimento < 5) {
        printf("Agora digite o número de casas para o movimento.\n");
        scanf("%d", &casas);
            moverRainha(movimento, casas); //chamada de função recursiva
            } else {
                printf("Opção Inválida");
            }
        break;
        
        case 4: //Movimentação do Cavalo.
        printf("Escolha a direção do movimento:\n");
        printf("1 - Cima, Cima e Direita.\n2 - Cima, Cima e Esquerda.\n");
        printf("3 - Baixo, Baixo e Direita.\n4 - Baixo, Baixo e Esquerda.\n");
        scanf("%d", &movimento); //chamada de dados para decidir a direção.
            if (movimento > 0 && movimento < 5) {
            moverCavalo(movimento);
            } else {
                printf("Opção inválida.\n");
            }
        break;   
        
        default:
            printf("Opção Inválida.\n");
    }
    } else {
        printf("Infelizmente ainda não temos as demais peças para movimentar.\n");
        printf("Então por favor, reinicie o programa e utilize uma opção entre 1 e 4.\n");
    }

    return 0;

}





