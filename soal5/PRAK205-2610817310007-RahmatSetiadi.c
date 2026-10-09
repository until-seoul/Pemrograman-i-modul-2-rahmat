#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    float hypotenuse, height, base;
    float perimeter, area;

    scanf("%f %f", &a, &b);

    if (a > b)
    {
        hypotenuse = a;
        height = b;
    }
    else
    {
        hypotenuse = b;
        height = a;
    }

    base = sqrt((hypotenuse * hypotenuse) - (height * height));
    perimeter = base + height + hypotenuse;
    area = 0.5 * base * height;

    printf("Alas = %.0f cm\n", base);
    printf("Tinggi = %.0f cm\n", height);
    printf("Keliling = %.0f cm\n", perimeter);
    printf("Luas = %.0f cm^2\n", area);
    return 0;
}
