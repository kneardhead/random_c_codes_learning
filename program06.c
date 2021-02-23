#include<stdio.h>
 int main ()
 {
     int x,y,z;
    printf("Try putting two values of number, integer only!\n");
     scanf("%d",&x);
     printf("Another one!");
     scanf("%d",&y);
     z = x+y;
     printf("\nThe sum of the two numbers you gave is %d. Press enter to proceed.",z);

     scanf("%d",&x);
     scanf("%d",&y);
     printf("\n%d + %d = %d", x,y,x+y);
     printf("\n%d - %d = %d", x,y, x - y);
     printf("\n%d * %d = %d", x,y, x * y);
     printf("\n%d / %d = %d", x,y, x/y + y%x);
     printf("\nAre you satisfied of the last result? This proves\nI am yet not great at coding.");
     return 0;
 }
