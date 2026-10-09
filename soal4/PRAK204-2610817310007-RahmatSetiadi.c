#include <stdio.h>

#define PI 22.0 / 7.0

int main()
{
    float r, t;
    float volume, area, perimeter;
    scanf("%f", &r);
    scanf("%f", &t);
    volume = PI * r * r * t;
    area = 2 * PI * r * (r + t);
    perimeter = 2 * PI * r;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", perimeter);
    return 0;
}
