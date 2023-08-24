#include <stdio.h>

main(){
    //declaracao de variaveis
    int salario, reajuste, novoSalario;

    printf("Digete seu salario atual: ");
    scanf("%d", &salario);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%d", &reajuste);


    //operacao
    novoSalario =  salario + (reajuste / 100.0) * salario;

    //saida
    printf("Salario com reajuste: %d", novoSalario);
    
    return 0;
}