#include<stdio.h>
int main()
{
	char str[100];
	int i;

	printf("Enter: ");
	scanf("%[^\n]",str);

	for(i=0; str[i] != '\0'; i++);
		
	printf("length of the string is %d", i);

return 0;
}