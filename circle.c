TITLE: Working with circles in C
DESCRIPTION: This code helps in calculating the area and perimeter of any circle with its user input radius
#include<stdio.h>
#include<math.h>
int main()
{
    int r; float a, p; //r-radius, a-area, p-perimeter
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    a = 3.14 * pow(r, 2);
    p = 2 * 3.14 * r;
    printf("Area of the circle: %.2f \n", a);
    printf("Perimeter of the circle: %.2f \n", p);
    return 0;

}
