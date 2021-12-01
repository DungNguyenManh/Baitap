#include<stdio.h>

void Doi_do(int F) //đổi độ F sang độ C 
{
    printf("%d do F bang voi %d do C ",F ,(9/5)*(F-32));
}

int main()
{
    int F;
    printf("Nhap do F: ");
    scanf("%d",&F);
    Doi_do(F);

    return 0;
}