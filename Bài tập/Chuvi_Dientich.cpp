#include<stdio.h>

void Chuvi(int a ,int b)
{
    printf("Chu vi hcn la: %d ",(a + b) * 2);
}

void Dientich(int a ,int b)
{
    printf("\nDien tich hcn la: %d",a * b);
}

int main()
{
    int a ,b;
    printf("Nhap chieu dai hcn: ");
    scanf("%d",&a);
    printf("Nhap chieu rong hcn: ");
    scanf("%d",&b);
    Chuvi(a,b);
    Dientich(a,b);
    
    return 0;
}


