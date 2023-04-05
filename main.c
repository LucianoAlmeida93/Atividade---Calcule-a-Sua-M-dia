/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Calcule a sua Média");
    printf("\nDigite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("A Sua Média é: %.1f\n", media);

    if (media >= 0 && media <= 4.9) {
        printf("A Sua Média Teve o Conceito: D - Você está Reprovado.");
    } else if (media >= 5.0 && media <= 6.9) {
        printf("A Sua Média Teve o Conceito: C - Você está de Recuperação.");
    } else if (media >= 7.0 && media <= 8.9) {
        printf("A Sua Média Teve o Conceito: B - Você está Aprovado.");
    } else if (media >= 9.0 && media <= 10.0) {
        printf("A Sua Média Teve o Conceito: A - Você está Aprovado.");
    } else {
        printf("Media inválida!");
    }

    return 0;
}
