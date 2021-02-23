#include<stdio.h>
int main ()

{
    {//problem 2 and 3 from loop
    int n = 1;
    int s = 0;
    int t = 0;
    printf("Please put the limit number:");
    scanf(" %d",&t);
    for (n = 1; n <= t; n++)
        s = s + n;
    printf("Sum is: %d",s);
    }
    {
    }
}
