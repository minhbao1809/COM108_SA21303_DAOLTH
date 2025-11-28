#include <stdio.h>
#include <math.h>
//định nghĩa hàm 
void giatrilonnhat(int a, int b);
float gia_tri_nhonhat(int a, int b);

// tao ham gia tri lon nhat 
void giatrilonnha(int a, int b){

}
int main(){
    double a = -5;
    double b = 10;
    double c = 15;
    giatrilonnha(a,b);
    /*int max = a;
    if(b>max) max=b;
    if(c>max) max=c;

    int min =a;
    if ( b < min)  min=b;
    if( c < min) min=c;*/
    printf ("Gia tri lon nhat la: max=%lf", fmax(a,b));
    printf ("Gia tri nho nhat la: min=%lf\n", fmin(b,c));
    int x = abs(a);
    printf("GÍA TRỊ TUYỆT ĐỐI CỦA a:%d\n",x);
    return 0;
}