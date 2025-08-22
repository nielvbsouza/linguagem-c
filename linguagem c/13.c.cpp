#include<stdio.h>
using namespace std;

// 13. Porcentagem
//Leia um valor e uma porcentagem e calcule o valor acrescido
//dessa porcentagem.


int main()
{
    float v,p;
    printf ("escreva um numero: ");
    scanf ("%f", &v);
    printf("escreva a porcentagem: ");
    scanf("%f", &p);
    printf("o acrescimo e: %f ",(100/p)+v);
    
    
}