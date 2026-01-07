#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c; //a, b, c - sides of the triangle
    float p, e, s; //p - perimeter, e - area, s - semi-perimeter
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    p = a + b + c;
    s = p / 2;
    e = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle: %.2f \n", e);
    printf("Perimeter of the triangle: %.2f \n", p);
    return 0;
}