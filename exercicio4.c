#include <stdio.h>

main(){
    //declarar variaveis
    float real, dolar, converter;

    printf("Valor do Dolar: ");
    scanf("%f", &dolar);

    printf("Qunato voce tem em reais: ");
    scanf("%f", &real);

    //operacao
    converter = real / dolar;

    //saida de dados
    printf("Voce tem %f Dolares: ", converter);
    return 0;
}