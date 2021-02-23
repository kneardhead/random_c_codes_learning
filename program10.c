#include <stdio.h>
int main ()
{
    int x ;
    int iArray [5];
    for (x = 0; x < 5; x++)
    iArray[x]= (2*(2*x));

       for (x = 0; x < 5; x++)
        printf("The element of iArray %d is %d\n",x,x);
          for (x = 0; x < 5; x++)
          printf("\nThe array, %d",iArray[x]);

}
