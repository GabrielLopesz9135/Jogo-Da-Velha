#include <stdio.h>
#include <stdlib.h>


int main(){

    int l, c, linha, coluna, jogador = 1, vitoria = 1, jogadas ;
    int jogo[3][3];


   // criando a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            jogo[l][c] = ' ';
        }
    }

    //impressao

        do{
            system("cls");
            printf(" 0     1     2\n");
            for(l = 0; l < 3; l++){
                for(c = 0; c < 3; c++){
                    printf(" %c ", jogo[l][c]);
                    printf(" | ");
                    if(c==2)
                        printf("%d", l);
                }
                printf("\n ----------------\n");
            }

                do{
                printf("\n\JOGADOR 1 = 0\nJOGADOR 2 = 1\n");
                printf("\n Importante*: O primeiro numero a ser digitado representara a coluna.");
                printf("O segundo numero representara a linha\n");
                printf("\n Formato de digitaçao: Number space Number\n");
                printf("\nJOGADOR %d: Digite a Coordenada da jogada: ", jogador);
                scanf("%d%d", &linha, &coluna);
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            // salvar coordenadas
                    if(jogador == 1){
                        jogo[linha][coluna] = '0';
                        jogador++;
                    }
                    else{
                        jogo[linha][coluna] = '1';
                        jogador = 1;
                    }
                    jogadas++;

                // GANHOU NA PRIMEIRA LINHA
                if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
                   jogo[0][0] == '1' && jogo[0][1] == '1' && jogo[0][2] == '1'){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Primeira linha");
                    vitoria = 0;

                   }

                   //GANHOU NA SEGUNDA LINHA
                   if(jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
                      jogo[1][0] == '1' && jogo[1][1] == '1' && jogo[1][2] == '1'){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Segunda linha");
                    vitoria = 0;

                   }

                   //GANHOU NA TERCEIRA LINHA
                   if(jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0' ||
                      jogo[2][0] == '1' && jogo[2][1] == '1' && jogo[2][2] == '1'){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Terceira linha ");
                    vitoria = 0;

                   }
                   //GANHOU NA PRIMERA COLUNA
                   if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
                      jogo[0][0] == '1' && jogo[1][0] == '1' && jogo[2][0] == '1' ){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Primeira Coluna");
                    vitoria = 0;

                   }
                   //GANHOU NA SEGUNDA COLUNA
                   if(jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
                      jogo[0][1] == '1' && jogo[1][1] == '1' && jogo[2][1] == '1'){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Segunda Coluna");
                    vitoria = 0;

                   }
                   //GANHOU NA TERCEIRA COLUNA
                   if(jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0' ||
                      jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '1'){
                    system("cls");
                    printf(" 0     1     2\n");
                    for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                            printf(" %c ", jogo[l][c]);
                            printf(" | ");
                            if(c==2)
                                printf("%d", l);
                        }
                        printf("\n ----------------\n");
                    }
                    printf("\n");
                    printf("Um dos Jogadores ganhou na Terceira Coluna");
                    vitoria = 0;

                   }
                   //GANHOU NA DIAGONAL PRINCIPAL
                    if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0'){
                        system("cls");
                        printf(" 0     1     2\n");
                        for(l = 0; l < 3; l++){
                            for(c = 0; c < 3; c++){
                                printf(" %c ", jogo[l][c]);
                                printf(" | ");
                                if(c==2)
                                    printf("%d", l);
                            }
                            printf("\n ----------------\n");
                        }
                        printf("\n");
                        printf("Um dos Jogadores ganhou na Diagonal Principal");
                        vitoria = 0;
                }

                   //GANHOU NA DIAGONAL SEGUNDARIA
                    if(jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0'){
                        system("cls");
                        printf(" 0     1     2\n");
                        for(l = 0; l < 3; l++){
                            for(c = 0; c < 3; c++){
                                printf(" %c ", jogo[l][c]);
                                printf(" | ");
                                if(c==2)
                                    printf("%d", l);
                            }
                            printf("\n ----------------\n");
                        }
                        printf("\n");
                        printf("Um dos Jogadores ganhou na Diagonal Secondaria");
                        vitoria = 0;
                    }


    }while(vitoria == 1 && jogadas < 9 );

    return 0;
}
