#include<stdio.h>
#include<math.h>
int main(){
int n,a,b,c,d;
printf("enter a number");
scanf("%d",&n);
a=n%10;
b=n%100;
c=(b-a)/10;
d=(n-b)/100;
if(pow(a,3)+pow(c,3)+pow(d,3)==n){
    printf("is armstrong number");
}else{
    printf("not an armstrong number");
}
return 0;
}