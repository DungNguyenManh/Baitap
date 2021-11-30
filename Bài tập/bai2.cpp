#include<stdio.h>
int main()
{
    float n;
    float sum = 0;
    printf("Nhap vao n: ");
    scanf("%f",&n);
    for(float i = 1 ;i <= n ;i++)
    {
        sum += i / (i + 1);
    }
    printf("Tong cua S(n) la: %.2f",sum);
    return 0;
}