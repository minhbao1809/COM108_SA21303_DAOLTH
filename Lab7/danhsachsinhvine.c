#include <stdio.h>
#include <string.h>

struct sinhVien {
    int MSSV;
    char HOTEN[50];
    float diem;
    char hocluc[20];
};
void inputstructsinhVien(struct sinhVien x [],int n){
    int i;
    for (i=0; i<n;i++)
    {
        printf("Nhap MSSV[%d]: ",i);
        scanf("%d", &x[i].MSSV);
        getchar();
        printf("Nhap HOTEN[%d]: ",i);
        scanf("%s"; &x[i].hovaten);
        printf("Nhap diem[%d]: ",i);
        scanf("%f"; &x[i].diem)
    }
}
void printfstructsinhvien(struct sinhVien x[],int n){
    int i;   
        printf("Nhap MSSV ");
        printf("Nhap ho va ten: ");
        printf("Nhap diem ");
        printf("Nhap hoc luc ");
for (i=0; i<n;i++)
    {
        printf("%4d", x[i].MSSV);
        printf("%6s", x[i].HOTEN);
        printf("%4.1f"; x[i].diem);
        printf("%9s"; x[i].hocluc)
    }
}
void xeploaihocluc(struct sinhVien x[],int n){
    int i;
    for(i = 0; i < n; i++){
        if(x[i].diem < 5)
            strcpy(x[i].hocLuc, "Yeu");
        else if(x[i].diem < 6.5)
            strcpy(x[i].hocLuc, "TB");
        else if(x[i].diem < 8)
            strcpy(x[i].hocLuc, "Kha");
        else if(x[i].diem < 9)
            strcpy(x[i].hocLuc, "Gioi");
        else
            strcpy(x[i].hocLuc, "Xuat sac");
}
}
int main(){
    struct sinhVien SA2130x[59];
   int slsv;

    printf("Nhap so luong SV: ");
    scanf("%d", &slsv);
    inputstructsinhVien(SA2130x, slsv);
    printstructsinhVien(SA2130x, slsv); 
    xeploaihocluc(SA2130x, slsv); 
    
    printf("Danh sach SV sau khi sort:\n");
    printstructsinhVien(SA2130x, slsv);
    return 0;
}