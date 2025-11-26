#include <stdio.h>
#include <math.h>

int main(){
    int a = -5;
    int b = 10;
    int c = 15;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    int min = a;
    if (b < min) min =b;
    if (c < min) min = c;
    printf("Gia tri lon nhat la: max=%d", max);
    printf("Gia tri nho nhat la: min=%d", min);
    return 0;

}
