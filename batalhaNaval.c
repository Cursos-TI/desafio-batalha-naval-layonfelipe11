#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis
    char eixoX[12] = {' ',' ','A','B', 'C', 'D','E','F','G','H','I','J'};
    int eixoY[10] = {1,2,3,4,5,6,7,8,9,10};
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,3,3,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,3,0,0,0},
        {0,0,0,0,0,0,3,0,0,0},
        {0,0,0,0,0,0,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        
        
    };
    
    
    //Iniciando o laço de repetição para mostrar as colunas de (A ate J)
    
    for(int i = 0; i < 12; i++)
    {
        if(eixoX[i]== 'J'){
        printf("%c \n", eixoX[i]);
        }
        else{
        printf("%c ", eixoX[i]);
        }
    }
    
    //Percorrendo as linhas do tabuleiro
    for(int j = 0; j < 10; j++){
        if(j == 9){
            
        printf("%d ", eixoY[j]);
        }
        else{
        printf(" %d ", eixoY[j]);
        }
        for(int k = 0; k < 10; k++){
           
            printf("%d ",tabuleiro[j][k]);
            
            
            }
            printf("\n");
        }

    return 0;
}
