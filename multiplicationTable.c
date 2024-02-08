#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number\n");
    scanf("%d", &n);
    printf("Enter the multplication table for\n");
    scanf("%d", &m);
int a=1;

     for(int i=1; i<=m; i++){
     printf("%d * %d =%d\n",n,a, n*i);
     a++;
}
return 0;
}
     