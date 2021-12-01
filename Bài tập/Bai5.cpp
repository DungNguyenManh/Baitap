#include<stdio.h>
#include<math.h>

int main()
{
    float R ;
    printf("Nhap so thuc R: ");
    scanf("%f",&R);
    printf("Tri tuyet doi cua %.f la: %.1f",R ,abs(R));
    if(R > 0)
    {
        printf("\nCan bac hai cua %.f la: %.1f",R ,sqrt(R));
    }
    else
    {
        printf("\nVi R am nen khong co can! ");
    }
    printf("\nSo doi cua %.f la: %.1f",R ,R * -1);

    return 0;
}


