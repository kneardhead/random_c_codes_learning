#include<stdio.h>
#include<math.h>

int main ()
{
    double x,y,n,t,g;
    x=2;
    g=0;
    t = (1/x);
    for (n=1; n <= 100; n++) {
        y = pow(t,n);
        t=g;
        g = g+1
        printf("\n %lf",y);
    }

















}
