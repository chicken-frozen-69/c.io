#include<stdio.h>
int main()
{
    int arr[5]={1,2,4,5};
    int n=3;
    for (int i = 4; i >=2 ; i--)
    {
      arr[i+1]=arr[i];

    }
    arr[2]=3;
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }


    
    return 0;
}
