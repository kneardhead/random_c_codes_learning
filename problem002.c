#include<stdio.h>
int main ()
{ //1. Write a C program to compute the sum of the two given integer values.
    //If the two values are the same, then return triple their sum
    {int x;
    int y;
    printf("Problem1:\nPut two integer, if same then the sum tripled.\n");

    scanf("%d\n",&x);
    scanf("%d",&y);

    if (x == y){
        printf("%d", 3*(x+y));
    }
    else {
        printf("%d",x+y);
    }}
    {   int p;
        printf("\nProblem4:\nIf input between 100 and 200, then true. Otherwise false.\n");
        scanf("%d",&p);
        if(100 <p && p<200){
            printf("True");
        }
        else {
            printf("False");
        }

    }
{
    int p;
    printf("\nProblem5\nIf the number multiple of 3 or 7, then true. Otherwise false.\n");
    scanf("%d",&p);
    if ( p%7 == 0 || p%3==0){
        printf("\nTrue");
        }
        else
            printf("\nFalse");
}
{

    int x;
    int y;
    int a;
    int b;
    int q;
    printf("\nProblem10\nProgram to find the nearest digit to 100. If equal then 0\n");
    scanf("%d\n%d",&x,&y);
    a = 100-x;
    b = 100-y;
    if (a==b){
        printf("0");
    }
    if (a > b) {
        printf("The nearest to 100 is %d",y);
    }
    if ( a < b) {
        printf("The nearest to 100 is %d",x);
    }


}

{   int a;
    int b;
    int c;
    int sum;
    printf("\nProblem30\nSum of three integer, but if any number is 13 then give sum of only the other two.\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if ( a == 13 ){
        printf("\n%d + %d = %d", b, c, b + c);
    }
    if ( b == 13 ){
        printf("\n%d + %d = %d", a, c, a + c);
    }
    if ( c == 13 ){
        printf("\n%d + %d = %d", a, b, b + a);
    }
    else
        printf("%d + %d + %d = %d",a,b,c,a+b+c);
}

{
    int a;
    int b;
    int c;
    printf("\nProblem33\nPut values so that first is lower than second and second is lower than third.");
    printf("\nTrue if and only if the difference of first and second is equal to second and third\n");

    scanf("%d\n%d\n%d",&a,&b,&c);
    if ( a > b || a > c || b > c){
        printf("Invalid input!");
    }

    if ( (b - a) == (c - b)){
        printf("True!");
    }

    if ( (b - a) != (c - b)) {
        printf("False!");
    }
}















    }

























