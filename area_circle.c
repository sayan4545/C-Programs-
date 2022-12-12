#include<stdio.h>
int main()
{
    float d,area,pi;
    pi = 3.14;
    printf("Enter the diameter of the circle : ");
    scanf("%f",&d);
    area = (pi*d*d)/4;
    printf("The area of the circle is %f",area);
    return 0;

}