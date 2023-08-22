#include <stdio.h>
#include <math.h>

main(){
    /*operadores aritmeticos
    soma(+)
    subtracao(-)
    divisao(/)
    multiplicacao
    modulo(%)
    potencia pow(n1,n2)
    */

    //declaracao das variaveis
    int n1, n2, soma, sub, mult, mod, pot;
    float div;

    printf("Digite o primeiro numero");
    scanf("%d", &n1);

    printf("Digite o segundo numero");
    scanf("%d", &n2);

    //montar as operacoes
    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    mod = n1 % n2;
    pot = pow(n1,n2);
    div = (float)n1 / (float)n2;

    //saida dos dados
    printf("\nsoma %d", soma);
    printf("\nsubtracao%d", sub);
    printf("\ndivisao%f", div);
    printf("\n multiplicacao%d", mult);
    printf("\n modulo%d", mod);
    printf("\npotencia%d", pot);


    return 0;
}