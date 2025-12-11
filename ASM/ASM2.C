#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct sinhvien {
    char ten[50];
    float diem;
    char xeploai[20];
};
void inputStructSV(struct sinhvien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap ten SV %d: ", i + 1);
        getchar();
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

        printf("Nhap diem: ");
        scanf("%f", &sv[i].diem);
    }
}
void printStruct(struct sinhvien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %.2f - %s\n",
               i + 1, sv[i].ten, sv[i].diem, sv[i].xeploai);
    }
}
void xeploai(struct sinhvien sv[], int n) {
    for (int i = 0; i < n; i++) {
        if (sv[i].diem >= 8) strcpy(sv[i].xeploai, "Gioi");
        else if (sv[i].diem >= 6.5) strcpy(sv[i].xeploai, "Kha");
        else if (sv[i].diem >= 5) strcpy(sv[i].xeploai, "Trung binh");
        else strcpy(sv[i].xeploai, "Yeu");
    }
}
void swapStructSV(struct sinhvien *a, struct sinhvien *b) {
    struct sinhvien temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int choice;
    do {
        printf("\n-----ASM2 cua Nguyen Minh Bao PS49729-----\n");
        printf("1. Chuc nang kiem tra so nguyen\n");
        printf("2. Tim UCLN - BCNN\n");
        printf("3. Tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai vay ngan hang\n");
        printf("7. Tinh tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Moi ban nhap chuc nang: ");

        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            float x;
            printf("Nhap x: ");
            scanf("%f", &x);

            if (x == (int)x) {
                int n = (int)x;
                printf("%d la so nguyen.\n", n);

                int isPrime = 1;
                if (n < 2) isPrime = 0;
                for (int i = 2; i <= sqrt(n); i++) {
                    if (n % i == 0) isPrime = 0;
                }

                if (isPrime)
                    printf("%d la so nguyen to.\n", n);
                else
                    printf("%d khong phai so nguyen to.\n", n);

                int can = sqrt(n);
                if (can * can == n)
                    printf("%d la so chinh phuong.\n", n);
                else
                    printf("%d khong phai so chinh phuong.\n", n);

            } else {
                printf("%.2f khong phai so nguyen.\n", x);
            }
            break;
        }
        case 2: {
            int x, y;
            printf("x = "); scanf("%d", &x);
            printf("y = "); scanf("%d", &y);

            int a = abs(x), b = abs(y);
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int ucln = a;
            int bcnn = (ucln == 0) ? 0 : abs((x * y) / ucln);

            printf("UCLN = %d\n", ucln);
            printf("BCNN = %d\n", bcnn);
            break;
        }
        case 3: {
            int bd, kt, gio;
            float tien;
            printf("Nhap gio bat dau: "); scanf("%d", &bd);
            printf("Nhap gio ket thuc: "); scanf("%d", &kt);

            gio = kt - bd;
            if (gio <= 3) tien = gio * 150000;
            else tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;

            if (bd >= 14 && bd <= 17) tien *= 0.9;

            printf("Tong tien: %.0f VND\n", tien);
            break;
        }
        case 4: {
            float kwh, hoadon = 0;
            printf("Nhap so dien: "); scanf("%f", &kwh);

            if (kwh <= 50)
                hoadon = kwh * 1678;
            else if (kwh <= 100)
                hoadon = 50 * 1678 + (kwh - 50) * 1734;
            else if (kwh <= 200)
                hoadon = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
            else if (kwh <= 300)
                hoadon = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
            else
                hoadon = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;

            printf("Tien dien: %.0f VND\n", hoadon);
            break;
        }

        case 5: {
            int money;
            printf("So tien can doi: ");
            scanf("%d", &money);

            int face_value[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

            for (int i = 0; i < 9; i++) {
                int count = money / face_value[i];
                if (count > 0)
                    printf("%d to %d\n", count, face_value[i]);
                money %= face_value[i];
            }
            break;
        }

        case 6:
            printf("Chuc nang dang phat trien...\n");
            break;

        case 7:
            printf("Chuc nang dang phat trien...\n");
            break;

        case 8: {
            printf("\n=== SAP XEP SINH VIEN ===\n");
            int dssv;
            struct sinhvien SA21303[39];
            printf("Nhap so luong sinh vien: ");
            scanf("%d", &dssv);
            inputStructSV(SA21303, dssv);
            xeploai(SA21303, dssv);
            printf("\n--- Danh sach vua nhap ---\n");
            printStruct(SA21303, dssv);
            for (int i = 0; i < dssv - 1; i++) {
                for (int j = i + 1; j < dssv; j++) {
                    if (SA21303[i].diem < SA21303[j].diem) {
                        swapStructSV(&SA21303[i], &SA21303[j]);
                    }
                }
            }
            printf("\n--- Danh sach sau khi sap xep ---\n");
            printStruct(SA21303, dssv);
            break;
        }
        case 9: {
            printf("\n=== GAME FPOLY-LOTT ===\n");
            int so1, so2;
            printf("Nhap 2 so (1–15): ");
            scanf("%d %d", &so1, &so2);
            int r1 = rand() % 15 + 1;
            int r2 = rand() % 15 + 1;
            printf("So trung thuong: %d - %d\n", r1, r2);
            int diem = 0;
            if (so1 == r1 || so1 == r2) diem++;
            if (so2 == r1 || so2 == r2) diem++;
            if (diem == 0) printf("Chuc ban may man lan sau!\n");
            else if (diem == 1) printf("Ban trung giai NHI!\n");
            else printf("Ban trung giai NHAT!\n");
            break;
        }
        case 10:
            printf("Chuc nang dang phat trien...\n");
            break;
        case 0:
            printf("Tam biet!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}