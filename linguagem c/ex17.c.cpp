#include<stdio.h>
using namespace std;
//Calcular IMC
//Leia peso e altura de uma pessoa e calcule o IMC (Pesquisa
//como é o cálculo).
int main()
{
    float f1,a;
    printf("escreva a altura: ");
    scanf("%f", &f1);
    printf("escreva o peso : ");
    scanf("%f", &a);
    printf("seu IMC é:  %f: ",a/f1*2);
}