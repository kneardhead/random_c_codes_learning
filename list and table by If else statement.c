#include<stdio.h>
int main ()
{ //the analysis of the loops has been done. Yields a multiplication table.
    int n = 7;
    int p = 80;
    int i = 0;
    while (i <= 1000) {
        printf("\n%d X %d = %d\t %d X %d = %d \n",n,i,n*i,p,i,p*i);
        i = i+1;
    }


    {int p = 21;
    int i = 0;
    for (i = 0; i <= 123; i = i + 1)
        printf("%d X %d = %d\n",p,i,i*p);}

{
     //analysis of the Permutation through nested loops will be done.

     int a,b,c;
     for (a=1; a<=3; a++) {
        for (b=1; b<=3; b++) {
            for (c = 1; c <= 3; c++) {
                    if ( c != a && b !=a && a !=c && b != c) {
                printf("\n %d, %d, %d\n",a,b,c); //by the inequality, we ensure that the a,b,c are never equal.
                    }
            }
        }
     }
}
{  int a,b,c;
     for (a=1; a<=3; a++) {
        for (b=1; b<=3; b++) {
            for (c = 1; c <= 3; c++) {
                    if (a == c && b == c) {
                printf("\n %d, %d, %d\n",a,b,c);
                    }
            }
        }
     }

}



















}



