#include <stdio.h>
#include <string.h>

int main(){
char chuoi1[120], chuoi2[20];
printf("nhap chuoi 1: ");
//gets(chuoi)
//scanf("%20s", chuoi1);
//getchar();
gets(chuoi1);
printf("nhap chuoi 2: ");
gets(chuoi2);
/*if(strcmp(chuoi1, chuoi2)==0){
    printf("2 chuoi bang nhau. ");
}else if(strcmp(chuoi1,chuoi2)>0){
    printf("chuoi 1 lon hon chuoi 2. ");
}else{
    printf("chuoi 1 nho hon chuoi 2. ");
}*/
/*printf("xuat chuoi 1 : %s",chuoi1 );
printf("\nxuat chuoi 2: %s", chuoi2);
printf("\nchuoi dao nguoc: %s", strrev(chuoi1));*/
printf("chuoi da nhap la: %s, chuoi1");
printf("\nchuoi chu thuong la: %s",strlwr(chuoi1));
printf("\nchuoi chu hoa la: %s",strupr(chuoi2));
if(strstr(chuoi1, chuoi2)!=NULL)
printf("tim thay");
return 0;
}