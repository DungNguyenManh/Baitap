#include<stdio.h>
#include<cmath>

int main()
{
    int a ,b ,sum;
    int binhphuong1 ,binhphuong2;
    printf("Nhap vao so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d",&b);
    binhphuong1 = pow(a,2);
    binhphuong2 = pow(b,2);
    sum = binhphuong1 + binhphuong2;
    printf("Tong binh phuong cua %d va %d la: %d",a ,b ,sum);

    return 0;
}