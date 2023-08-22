#include <stdio.h>

main(){
    //declarar
    float custo, frete, despesas, venda, lucro, total, porcentagem;

    printf("Custo da mercadoria: ");
    scanf("%f", & custo);

    printf("Custo do  frete: ");
    scanf("%f", & frete);

    printf("Despesas: ");
    scanf("%f", & despesas);

    printf("Valor de venda do produto: ");
    scanf("%f", & venda);

    //operacao
    total = custo + frete + despesas;
    lucro = venda - total;
  
    

    //saida de dados
    printf("%flucro: ", lucro);


    return 0;
}