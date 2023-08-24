#include <stdio.h>
#include <math.h>

main() {
    //Declaração
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    //operacao
    area = 3.14 *  (raio * raio) ;

    //Saída
    printf("A area do circulo é: %.2f", area);

    return 0;
}
