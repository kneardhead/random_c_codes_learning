#include<stdio.h>
int main(){
    int x;
    int w;
    scanf("%d",&w);
    x = (w) % 2;
    if(x == 0 && w > 2){
        printf("YES");
    }
    else {
        printf("NO");
}
}
 