#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.1416

int main()
{
    double x,y,a,b;
    x=0;
    a=1;
    double sine( double x);

    while (x <= 360){
        printf("\n sin(%lf) = %lf \t sin(%lf) = %lf ",x, y,a,b) ;
        x = x+2;
        a = a + 2;
        y = sine(x);
        b= sine(a);
}

}
 double sine( double x) //use the double infront of the function and also the variable inside
{
 return  sin(x*(pi/180));
}











