#include<stdio.h>
int main()
{
    printf("\nWe will test your ability to integers, find if number more than 50 or less.\n");
    int n;
    scanf("%d",&n);

    if(n > 50) {
        printf("\nMore than 50!\n");
    }
    if(n<50){
        printf("\nLess than 50!\n");
    }
    if(n == 50) {
        printf("\nYou equal 50\n");
    }

    return 0;
}
