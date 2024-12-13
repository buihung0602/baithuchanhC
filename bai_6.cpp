#include <stdio.h>
#include <math.h>
int main() {
    int n, count = 0, snt = 2, j;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Cac so nguyen to dau tien la: ");
    while (count < n) {
        j = 1; 
        for (int i = 2; i <= sqrt(snt); i++) {
            if (snt % i == 0) {
                j = 0;
                break;
            }
        }
        if (j == 1) { 
            printf("%d ", snt);
            count++;
        }
        snt++;
    }
    return 0;
}

