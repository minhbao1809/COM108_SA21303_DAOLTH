#include <stdio.h>
#include <string.h>
int main()
{
   /* char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    int i=0;
    int n=0; //dem so nguyen am
    int p=0; //bien de dem so phu am
    while(str[i++]!='\0')
    {
        if(str[i]== 'a' || str[i]=='i' || str[i]=='e'|| str[i]=='u' || str[i] == 'o' )
        {
            n++;
        }
        else
        {
            p++;
        }
    }
    printf("Chuoi %s co chua %d nguyen am va %d phu am",str,n,p);
    */
    // bai 2 
    /*
    char username[50] = "quocvu";
    int password = 1234;
    char user[100];
    int pass;
    printf("Nhap ten: \n");
    scanf("%s", &user);
    printf("Nhap mat khau: \n");
    scanf("%d", &pass);
    if(strcmp(user,username)==0 &&  pass == password)
    {
        printf("Dang nhap thanh cong!");
    }
    else
    {
        printf("Dang nhap that bai kiem tra lai mat khau hoac ten dang nhap");
    }
        */
       char s[5][20];
       char temp[20];
       int i,j;
       printf("Nhap 5 chuoi: \n");
       for(i=0;i<5;i++)
       {
        printf("Chuoi %d ",i);
        scanf("%s", &s[i]);
       }
       for(i=0;i<5;i++)
       {
        for(j=0;j<5;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
       }
       for(i=0;i<5;i++)
       {
        printf("%s \n",s[i]);
       }
    return 0;   
}