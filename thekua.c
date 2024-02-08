#include<stdio.h>
int a=3;
int main()
{
    {
      extern  int a=4;
        printf("%d\n",a);

    }
    printf("%d",a);
    //printf("HALLO WORLD");
    return 0;
}
