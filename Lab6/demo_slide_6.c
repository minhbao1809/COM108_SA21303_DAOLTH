#include <stdio.h>
void nhapmang2c(int a[5][5]);
void xuatmang2c(int a[5][5]);



int main(){
    // khoi tao mang 1 chieu 
    //int a[5]={9,5,7,6,4};
    // nhap mang 2 chieu
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
            
        }
        
        
    }
    
    //duyet mang 1 chieu
    printf("Xuat mang a[3][3] = ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        
      
    }
    
    return 0;
}