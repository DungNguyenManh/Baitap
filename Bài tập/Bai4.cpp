#include<stdio.h>

void Chuvi(float a ,float b)
{
    printf("Chu vi hcn la: %.1f ",(a + b) * 2);
}

void Dientich(float a ,float b)
{
    printf("\nDien tich hcn la: %.1f",a * b);
}

int main()
{
    float a ,b;
    printf("Nhap chieu rong hcn: ");
    scanf("%f",&a);
    b = a * 1.5;
    Chuvi(a,b);
    Dientich(a,b);
    
    return 0;
}


