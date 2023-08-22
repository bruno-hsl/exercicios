#include <stdio.h>

main(){
    //declarar variaveis
    int largura, comprimento, area;

    printf("Largura da sala: ");
    scanf("%d", &largura);

    printf("Comprimento da sala: ");
    scanf("%d", &comprimento);

    //opreacoes
    area = largura * comprimento;
    //saida de dados
    printf(" Area da sala: %d", area);

    return 0 ;
}