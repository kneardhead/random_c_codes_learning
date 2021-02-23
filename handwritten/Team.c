#include<stdio.h>
int main(){
	int n;
	int m;
	int x;
	int g=0;
	int lim;
	
scanf("%d",&n);
lim = n - 1;
int a[lim];


for (m = 0; m < n; m++) {

scanf("%d",&a[m]);

	if (a[m] == 110 || a[m] == 011 || a[m] == 111){
	g++;
}
	else {
	g = g ;
	}
}
printf("%d",g);
return(0);
}