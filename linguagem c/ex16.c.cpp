#include<stdio.h>
using namespace std;
//F=(C×9/5)+32
int main()
{
    float f1;
    printf("escreva a tempera °f: ");
    scanf("%f", &f1);
    printf("a temperatura em fahrenheit é:  %f: ",(f1-32)*5/9);
}