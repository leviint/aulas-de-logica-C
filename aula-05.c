#include <stdio.h>

int main(){

    int op = 10;
    int num1 = 0;
    int num2 = 0;

    puts("Digite a opcao desejada: (1)Soma (2)Subtracao (3)Multiplicacao (4)Resto de divisao");
    scanf("%d", &op);

    switch(op){
        case 1:
            puts("Voce selecionou soma");
            printf("Selecione um numero para somar: ");
            scanf("%d", &num1);
            printf("Selecione outro numero para somar: ");
            scanf("%d", &num2);
            printf("A soma é igual a %d", num1 + num2);
            break;
        case 2:
            puts("Voce selecionou subtracao");
            printf("Selecione um numero para subtrair: ");
            scanf("%d", &num1);
            printf("Selecione outro numero para subtrair: ");
            scanf("%d", &num2);
            printf("A subtracao é igual a %d", num1 - num2);
            break;
        case 3:
            puts("Voce selecionou Multiplicacao");
            printf("Selecione um numero para multiplicar: ");
            scanf("%d", &num1);
            printf("Selecione outro numero para multiplicar: ");
            scanf("%d", &num2);
            printf("O produto é igual a %d", num1 * num2);
            break;
        case 4:
            puts("Voce selecionou Resto de divisao");
            printf("Selecione um numero: ");
            scanf("%d", &num1);
            printf("Selecione outro numero: ");
            scanf("%d", &num2);
            printf("O resto da divisao é igual a %d", num1 % num2);
            break;
        default:
            puts("Opcao invalida!");
    }
}