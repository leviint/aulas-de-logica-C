#include <stdio.h>

int main(){
    char nome;
    int nota;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite a sua nota: \n");
    scanf(" %d", &nota);

    printf("Boletim Aluno de Tecnologia\n");
    printf("Nome do Aluno: %s\n", &nome);
    printf("Nota do Aluno: %d\n", &nota);

    if(nota >= 7){
        printf("Status do Aluno: APROVADO\n");
    }else{
        printf("Status do Aluno: REPROVADO\n");
    }

    return 0;
}