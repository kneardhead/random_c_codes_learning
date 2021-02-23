#include <stdio.h>
int main ()
{
    int x;
    float p = 300/7 + 0.1*(((300%7)*10))/7 ;
    x = 0 ;
    printf("\nWe analyze on Mushfiq through a simple C program\n");
    printf("\nPlease type the number of females Mushfiq have chased.\tHint:The number is the lowest multiple of 3 that is greater\n than 10\n");
    scanf("%d",&x);
    if (x == 2332){
        printf("\nYou have guessed it right!\n \n");
    }
    else {
        printf("\nNo! Learn some damn maths to irritate the guy!\n\n");
    }
/* secondary function*/
    printf("You pressed p: %f",p);

return 0;
}

