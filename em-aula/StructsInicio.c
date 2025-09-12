/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-12
Descrição: aprendendo o uso do struct com coordenadas
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto
{
    float x;
    float y;
    float z;
    int a;
};


void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    struct ponto p1;

    printf("digite a coordenada X: ");
    scanf("%f", &p1.x);
    printf("digite a coordenada y: ");
    scanf("%f", &p1.y);
    printf("digite a coordenada z: ");
    scanf("%f", &p1.z);
    printf("digite a coordenada a: ");
    scanf("%d", &p1.a);
    
    printf("ponto %.1f  %.1f  %.1f", p1.x,p1.y,p1.z);
    printf("\nvalor de A: %d", p1.a);
}