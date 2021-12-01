#include<stdio.h>

int main()
{
    int a;
    int tram ,chuc ,donvi ,sum = 0;
    do    
    {   
        printf("Nhap vao so nguyen a: ");
        scanf("%d",&a);
        if(a < 100 || a > 999)
        {
            printf("\nNhap sai ");
            printf("\nMoi nhap lai");
        }
    }while(a < 100 || a > 999);
    tram = a / 100;
    chuc = a / 10 % 10;
    donvi = a % 10;
    int temp = a;
    while(temp > 0)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    printf("\nSo hang tram: %d",tram);
    printf("\nSo hang chuc: %d",chuc);
    printf("\nSo hang don vi: %d",donvi);
    printf("\nSo dao nguoc cua %d la: %d",a ,sum);

    return 0;
}