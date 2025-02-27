#include <stdio.h>

// Uso de recursividade para criar funções de repetição para o bispo, a torre e a rainha.
//bispo
void movBispo() {
    for (int i = 0; i < 5; i++) {
        printf("Cima\t");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
     } 
}  
//torre
void movTorre(int mov) {
    if (mov > 0)  {
        printf("direita\n");
                
        movTorre(mov - 1 );
    }
}  
//rainha
void MovRainha(int mov) {
    if (mov > 0)  {
        printf("Esquerda\n");
                
        MovRainha(mov - 1 );
    }
}  

int main() {
/* chamada das funções de recursividade com o valor de repetição correspondente ao numero de movimentos das peças(torre e rainha),
o numero de movimentos do bispo contido dentro da recursividade.*/
    printf("\nBispo\n");
    movBispo();
    printf("\nTorre\n");
    movTorre(5);
    printf("\nRainha\n");
    MovRainha(8);

// Movimento do cavalo com loops aninhados, multiplas variáveis e uso do break.
printf("\nCavalo\n");
for ( int mov2Cavalo = 0, mov1Cavalo = 10 ; mov2Cavalo <1 ; mov2Cavalo++) { // criacao das duas variáveis de movimento, condicao do mov 2 e iteracao 
    while (mov1Cavalo > 0) { // loop aninhado com o primeiro movimento.
        printf("cima\n");
        mov1Cavalo--;
        if (mov1Cavalo == 8) { 
             break; // limitacao do movimento, parando a repeticao.
        }  
    }
printf("direita\n");
}
    return 0;
}
