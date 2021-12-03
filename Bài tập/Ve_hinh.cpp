#include<stdio.h>

void Hinh1(int n){
    printf("Hinh 1: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i + j <= n + 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh2(int n){
    printf("Hinh 2: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i + j >= n + 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh3(int n){
    printf("Hinh 3: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i + j == n + 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh4(int n){
    printf("Hinh 4: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == n || j == n || i + j == n + 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh5(int n){
    printf("Hinh 5: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh6(int n){
    printf("Hinh 6: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j >= i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh7(int n){
    printf("Hinh 7: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1 || i == n || i == j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh8(int n){
    printf("Hinh 8: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == n || i == 1 || i == j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh11(int n){
    printf("Hinh 11: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("   ");
        }
        for(int j = 1; j <= 2 * n -1; j++){
            if(j == 2 * i - 1 || j == 1 || i == 5){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh12(int n){
    printf("Hinh 12: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            printf("   ");
        }
        for(int j = 1; j <= 2 * n -1; j++){
            if(j == 2 * (n - i) + 1 || j == 1 || i == 1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh9(int n){
    printf("Hinh 9: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("   ");
        }
        for(int j = 1; j <= 2 * n -1; j++){
            if(j >= 1 && j <= 2 * i - 1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh10(int n){
    printf("Hinh 10: \n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            printf("   ");
        }
        for(int j = 1; j <= 2 * n -1; j++){
            if(j >= 1 && j <= 2 * (n - i) + 1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinh13(int n){
    printf("Hinh 13: \n");
    for(int i = 1; i <= n * 2 - 1; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || j == 1 || i + j == 2 * n){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n = 5;
    Hinh1(n);
    Hinh2(n);
    Hinh3(n);
    Hinh4(n);
    Hinh5(n);
    Hinh6(n);
    Hinh7(n);
    Hinh8(n);
    Hinh9(n);
    Hinh10(n);
    Hinh11(n);
    Hinh12(n);
    Hinh13(n);
    return 0;
}