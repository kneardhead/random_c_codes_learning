#include <stdio.h>
#include <stdlib.h>
int
main()
{
int i;
float f;
double d;
char strng[100];
printf("type in an int: ");
scanf("%d", &i);
printf("value entered: %d\n\n", i);
printf("type in a float: ");
scanf( "%f", &f);
printf("value entered: %f\n\n", f);

printf("type in a double: ");
scanf("%lf", &d);
printf("value entered: %f\n\n", d);

printf("type in a string (up to 20 characters long): ");
scanf("%s", strng); /***Strings do NOT require the & operator***/
printf("string entered: %s\n\n", strng);
exit(0);
}
