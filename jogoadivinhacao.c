#include <stdio.h>

int main(void){
    int numeroAdivinhar = 10;
    puts("Adivinhe o número, ele está entre 0 a 10: ");
    scanf("%d", &numeroAdivinhar);

    if(numeroAdivinhar == 10){
        puts("Parabens, esta correto!");
    }
    else{
        puts("Que pena, tente novamente.");
    }
}