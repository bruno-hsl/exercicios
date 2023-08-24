#include <stdio.h>

main(){
    //declaracao 
    int ano, mes, dia, TotalEmDias;

    printf("\nDigite sua data de nascimento");
    printf("Ano: ");
    scanf("%d",&ano);
    printf("Mes: ");
    scanf("%d", & mes);
    printf("Dia: ");
    scanf("%d", &dia);

    //operacao
    TotalEmDias = ((2023-ano)*365) + (mes*30) + dia;
 
    //saida
    printf("%d", TotalEmDias);


    return 0;
}