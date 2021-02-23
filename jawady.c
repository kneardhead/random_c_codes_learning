#include<stdio.h>
int main ()
{
   {

    int t;
    printf("\nWhat is the lowest Prime Number\?\n");
    scanf("%d",&t);

    if (t == 2)
        {
        printf("You are right!");}

  else if (t == 3)
    {
        printf("you`re too close\n");
    }
   else if (t == 1)
    {
        printf("you`re too close\n");
    }
    else
    {
        printf("Wrong!");
    }

   }
   {
    int t,a;
    printf("\n\nThe number for analysis whether it is even or odd.\n");
    printf("Put the number: ");
    scanf("%d",&t);

    if (t <= 0){
        printf("Invalid input. You gave %d, negative number.",t);
    }
    a=t%2;

    if (a == 0){
        printf("The number %d is even!",t);
    }
    else {
        printf("The number %d is odd!",t);
    }

   }























}
