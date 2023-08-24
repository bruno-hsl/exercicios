#include <stdio.h>

main(){
    //declaracao de variaveis
    float Cfabrica, distribuidor, imposto;

    printf("Custo de fabrica do veiculo: ");
    scanf("%f", &Cfabrica);

    //operacao
    distribuidor = (Cfabrica * 0.28) + Cfabrica;
    imposto = (distribuidor * 0.45) + distribuidor;

    //saida
    printf("Valor final do veiculo: %f", imposto);
    return 0;
}