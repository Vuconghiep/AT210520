#include <stdio.h>

int main() {
    int a, i;

    printf("Nhap so can kiem tra: ");
    scanf("%d", &a);

    if (a < 2) {
        printf("%d khong la so nguyen to\n", a);
        return 0;
    }
    if (a == 2) {
        printf("%d la so nguyen to\n", a);
        return 0;
    }
   for (i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("%d khong la so nguyen to\n", a);
            return 0; 
        }
    }
    printf("%d la so nguyen to\n", a);
    return 0;
}
