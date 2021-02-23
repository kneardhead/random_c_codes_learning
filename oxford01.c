#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.1416
int main ()
{ /* This is a demonstration of the method to use the sine function in the c library */
    double x,i,s;


    x = 30 ;
    i = (x*(pi/180));
    s = sin(i);

    printf("\n The sine is %lf \n",s);
return 0;
}
