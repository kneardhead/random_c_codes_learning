#include<stdio.h>
int main ()
{

   // \\an array can be shown by this
   int a[5] = {11,24,36,43,0};
   int i;
   for (i = 0; i <5; i++) {
    printf("%d is the element of Array %d\n",a[i],i+1);
   }
   {
       int a[] = { 51,51,85,67,69,75};
       int b[6];
       int j,i;

       for(i=0, j=5; i<6; i++, j--){
        b[j]=a[i];
       }

       for(i = 0 ; i<6; i++){
        printf("%d\n",a[i]); }
        printf("A reverse order\n");
          for(i = 0 ; i<6; i++){
        printf("%d\n",b[i]);
       }
   }

   //we have to write a code to make a table of pupils marks and doing required calculation.
   {
       int marks[]={89,78,48,79,85,67,77,94,81};
       int ctmarks[]={12,20,13,18,19,20,10,7,16};
       int j;
        printf("Test Marks :");
       for(j=0; j<9 ; j++) {
            printf("%d\t",marks[j]);
       }
        printf("\nCT Marks   :");
        for(j=0; j<9 ; j++) {
            printf("%d\t",ctmarks[j]);
       }

       }
   }


























