#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);

    switch (x){
    case 1: {
    printf("You have 1.");
    break;       }
    case 2: {
    printf("You have 2");
    break;}
    case 3: {
    printf("You have 3");
    break;}
    default:{
    printf("Default set");}
    }

{   int r;
    srand();
    r = (rand() % 4) +1 ;

    printf("\nWe will now work for the Fortune Cookie program, where a random number shall determine a level of luck. Of course a random one.\n");
    printf("\n %d, %d \n" ,r,rand());
    switch (r) {
    case 1: {
    printf("You have a luck A");
    break; }


    case 2: {
    printf("You have a luck B");
    break;}

    case 3: {
    printf("You have a luck C");
    break;}

    case 4: {
    printf("You have a luck D");
    break;}

    default: {
    printf("ERROR");
    }
    }

}




}










