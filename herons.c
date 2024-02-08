#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, s, area;
    printf("Enter first side a\n");
    scanf("%f", &a);
    printf("Enter first side b\n");
    scanf("%f", &b);
    printf("Enter first side c\n");
    scanf("%f", &c);
    s = (a+b+c)/2;
    // 6area = ;
    printf("Area of triangle is = %f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;

}