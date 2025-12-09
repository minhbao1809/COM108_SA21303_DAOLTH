#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;
    do {

        printf("\n-----ASM2 cua Nguyen Minh Bao PS49729-----\n");
        printf("1. Chuc nang kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi so chung cua 2 con so\n");
        printf("3. Chuc nang tinh tien cho quan karaoke\n");
        printf("4. Chuc nang tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Chuc nang tinh lai vay ngan hang vay tra gop\n");
        printf("7. Chuc nang tinh tien mua xe\n");
        printf("8. Chuc nang sap xep thong tin sinh vien\n"); // GIỮ NGUYÊN
        printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
        printf("10. Chuc nang tinh toan phan so\n");
        printf("0. Thoat ra ngoai\n");
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
                    if (n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime == 1)
                    printf("%d la so nguyen to.\n", n);
                else
                    printf("%d khong phai so nguyen to.\n", n);

                int can = sqrt(n);
                if (can * can == n)
                    printf("%d la so chinh phuong.\n", n);
                else
                    printf("%d khong phai so chinh phuong.\n", n);
            }
            else {
                printf("%.2f khong phai so nguyen.\n", x);
            }
            break;
        }
        case 2: {
            printf("\n>>> Ban da chon chuc nang so 2 <<<\n");
            int x, y;
            printf("x = "); scanf("%d", &x);
            printf("y = "); scanf("%d", &y);

            int a = abs(x);
            int b = abs(y);
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int ucln = a;
            int bcnn = 0;
            if (ucln != 0) bcnn = abs((x * y) / ucln);

            printf("UCLN = %d\n", ucln);
            printf("BCNN = %d\n", bcnn);
            break;
        }
        case 3: {
            printf("\nBan da chon Chuc nang 3\n");
            int bd, kt, gio;
            float tien;
            printf("Nhap gio bat dau: ");
            scanf("%d", &bd);
            printf("Nhap gio ket thuc: ");
            scanf("%d", &kt);

            gio = kt - bd;

            if (gio <= 3) {
                tien = gio * 150000;
            } else {
                tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;
            }

            if (bd >= 14 && bd <= 17)
                tien *= 0.9;
            printf("Tong so tien can thanh toan la: %.0f VND\n", tien);
            break;
        }
        case 4: {
            float kwh, hoadon = 0;
            printf("Nhap so dien tieu thu (kWh): ");
            scanf("%f", &kwh);
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

            printf("Tien dien phai tra: %.0f VND\n", hoadon);
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
            printf("6. Chuc nang tinh lai vay ngan hang vay tra gop\n");
            break;
        case 7:
            printf("7. Chuc nang tinh tien mua xe\n");
            break;
        case 8:
            printf("8. Chuc nang sap xep thong tin sinh vien (dang de trong)\n");
            break;
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
            printf("Chuc nang khong ton tai. Vui long chon lai!\n");
            break;
        }
    } while (choice != 0);
    return 0;
}