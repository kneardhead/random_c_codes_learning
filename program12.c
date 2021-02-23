#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main () {

double x,s;
    x = 0;
    while (x <= 360) {
        printf("\n sin(%lf deg) = %lf ", x, s);
        x = x+0.01;
        s = sin(x*(pi/180));
    }


return 0;







}
