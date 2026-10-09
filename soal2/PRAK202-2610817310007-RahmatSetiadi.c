#include <stdio.h>

int main()
{
    float no1, no2, result;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &no1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &no2);

    result = no1 + no2;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.3f\" adalah \"%.2f\"\n", no1, no2, result);
    return 0;
}
