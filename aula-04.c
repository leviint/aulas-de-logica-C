#include <stdio.h>

int main(void){
    int idade = 0;

    puts("Digite sua idade");
    scanf("%d", &idade);

    if(idade > 0 && idade <= 12){
        puts("Voce e uma crianca");
    }

    else if(idade > 12 && idade < 18){
        puts("Voce e um adolescente");
    }

    else if(idade >= 18 && idade < 24){
        puts("Voce e um jovem adulto");
    }

    else{
        puts("Voce ja e um adulto");
    }
}