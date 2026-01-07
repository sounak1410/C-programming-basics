#include<stdio.h>
void main()
{
    int a, b, c;
    printf("enter two numbers you want to swap:\n");
    scanf("%d %d", &a, &b);
    printf("the original variables are %d and %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("the swapped variables are %d and %d\n", a, b);
}