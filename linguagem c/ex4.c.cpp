#include<stdio.h>
using namespace std;
//Área de um círculo
//Leia o raio de um círculo e calcule a área:
//Area = PI * r2

int main()
{
    float rc,r2;
    printf("escreva o raio : ");
    scanf("%f", &r2);
    rc=r2*r2;
    printf("a area é:  %f*: ",3.14159*rc);
}