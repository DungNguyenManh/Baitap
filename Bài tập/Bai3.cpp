#include<stdio.h>

int main()
{
    int a ,x ,y ,z;
    int sum;
    do
    {
        printf("Nhap vao so nguyen a: ");
        scanf("%d",&a);
    }while(a < 0 || a > 9);
    x = a * 1;;
    y = a * 11;
    z = a * 111;
    sum = x + y + z;
    printf("Tong la: %d",sum);
    return 0;
}