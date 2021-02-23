#include<stdio.h>
void main()
{
    int num1,num2,num3;

    printf("Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1,num2,num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("The first number is the greatest among three. \n");
        }
    else
    {
        printf("The third number is the greatest among three. \n");
    }
}
    else if(num2 > num3)
    printf("The second number is the greatest among three \n");

    else
    printf("The third number is the greatest among three \n");
}
