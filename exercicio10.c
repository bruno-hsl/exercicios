#include <stdio.h>

main() {
    //Declaração
    int numeroCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarroVendido, comissao, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numeroCarrosVendidos);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite a comissao por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    //operacao
    comissao = numeroCarrosVendidos * valorPorCarroVendido;
    salarioFinal = salarioFixo + comissao + (0.05 * valorTotalVendas);
    //Saída
    printf("\nSalario final do vendedor: %.2f\n", salarioFinal);

    return 0;
}
