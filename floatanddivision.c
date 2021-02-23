#include<stdio.h>
int main ()
{
    float x;
    float y;
    float z;
    printf("The division of the two numbers will be done. Make an Input.\n");

    scanf("%f\n",&x);
    scanf("%f",&y);

    z = x/(0.5*y);
    printf("The value of the division function returns for function \n");
    printf("%f / 0.5 %f = %f",x,y,z);
}
