#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\t\t\t\tEquilateral Triangle Area Calculator\n\n");
    float arm, area;
    printf("Please Enter the Arm of Triangle : ");
    scanf("%f", &arm);
    area = (sqrt(3)*pow(arm,2))/4;
    printf("Area of Equilateral Triangle is = %.2f", area);
    getch();
    return 0;
}
