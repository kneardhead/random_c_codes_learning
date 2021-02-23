#include <stdio.h>
int main ()
//we find the fibonacci series upto a few billions
{
    int x;
    int y;
    int s;
    x=1;
    y=2;
    s=x+y;
    printf("0\n1\n1\n2\n");
    while (s < 100) {
        printf("%d \n", s);
        x = y;
        y = s;
        s = x + y;
    }
}
