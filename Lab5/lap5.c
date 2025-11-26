#include <stdio.h>
#include <math.h>
/*int main() {
int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
    int a, b, c;
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = max3(a, b, c);
    int min = min3(a, b, c);
    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);*/
/*int main() {
int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int isLeapYear(int year) {
    if (max(year % 400, 0) == 0) return 1;
    if (min(year % 4, 0) == 0 && max(year % 100, 0) != 0) return 1;
    return 0;
}
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    if (isLeapYear(year))
        printf("=> %d la nam nhuan\n", year);
    else
        printf("=> %d khong la nam nhuan\n", year);*/

int main() {
    int n;
    printf("Nhap so trong khoang [1,1000]: ");
    scanf("%d", &n);
    if (n < 1 || n > 1000) {
        printf("So khong nam trong khoang 1..1000\n");
    } else {
        if (n % 5 == 0 && n % 9 == 0)
            printf("%d chia het cho 5 va 9\n", n);
        else
            printf("%d KHONG chia het cho 5 va 9\n", n);
    }
    return 0;
}