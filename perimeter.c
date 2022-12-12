#include<stdio.h>
int main()
{
    float a,b,perimeter; // a and b are the sides of the rectangle 
    printf("Enter the length if the rectangle : ");
    scanf("%f",&a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&b);
    perimeter = 2*(a+b);
    printf("The perimeter of the rectangle is %f",perimeter);
    return 0;

}