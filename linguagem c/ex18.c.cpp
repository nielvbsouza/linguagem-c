#include<stdio.h>
using namespace std;

// ✅ 18. Calcular desconto
//Leia o preço de um produto e um percentual de desconto e
//calcule o novo preço com desconto..


int main()
{
    float v,p;
    printf ("escreva o valor do produto: ");
    scanf ("%f", &v);
    printf("escreva a porcentagem de desconto: ");
    scanf("%f", &p);
    printf("o novo preço é: %f ",v-(p/100*v));
    
    
}