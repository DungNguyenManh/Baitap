#include<stdio.h>
int main()
{   
    int a ,b ,tich;
    printf("Nhap vao a: ");
    scanf("%d",&a);
    printf("Nhap vao b: ");
    scanf("%d",&b);
    tich = a * b;
    while(a != b)
        if(a >= b)
        {   
            a -=b;
        }   
        else
        {
            b -= a;
        }
    printf("Uoc chung lon nhat la: %d",a);
    printf("\nBoi chung nho nhat la: %d",tich / a);

    return 0;
}