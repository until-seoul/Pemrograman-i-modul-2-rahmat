#include <stdio.h>

int main()
{
    char name[100];
    char nim[30];
    char classs[30];
    char birthday[100];
    char address[100];
    char hobby[100];
    char handphone_number[30];

    printf("Nama\t\t\t: ");
    scanf("%[^\n]%*c", name);
    printf("NIM\t\t\t: ");
    scanf("%[^\n]%*c", nim);
    printf("Kelas Paralel\t\t: ");
    scanf("%[^\n]%*c", classs);
    printf("Tempat/Tanggal Lahir\t: ");
    scanf("%[^\n]%*c", birthday);
    printf("Alamat\t\t\t: ");
    scanf("%[^\n]%*c", address);
    printf("Hobby\t\t\t: ");
    scanf("%[^\n]%*c", hobby);
    printf("No. HP\t\t\t: ");
    scanf("%[^\n]%*c", handphone_number);

    printf("\nOutput\n");
    printf("Nama\t\t\t: %s\n", name);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", classs);
    printf("Tempat/Tanggal Lahir\t: %s\n", birthday);
    printf("Alamat\t\t\t: %s\n", address);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", handphone_number);
}
