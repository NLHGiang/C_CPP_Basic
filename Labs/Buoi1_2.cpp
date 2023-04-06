#include <stdio.h>

void main()
{
    //1. Bài 1: Nh?p vào 3 s? nguyên a, b, c.
    int a;
    int b;
    int c;
    
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap c:");
    scanf("%d",&c);
    
    //? T?o menu cho các yêu c?u trên
    // Hi?n th? menu -> Cho ngu?i dùng l?a ch?n ch?c nang -> Th?c hi?n ch?c nang tuong ?ng
    //
    do
    {
        printf("=========MENU=========");
        printf("1. yc 1");
        printf("2. yc 2");
        printf("0. Thoat");
        printf("Chon chuc nang: ");
        //
        char luaChon;
        scanf("%s", &luaChon);
        //
        switch(luaChon)
        {
            case "1":
                //? YC1: In ra t?ng, hi?u, tích, thuong c?a 3 s?.
                int tong = a+b+c;
                int hieu = a-b-c;
                int tich = a*b*c;
                float thuong = (float)(a/b)/c; // Có th? l? sau d?u ph?y -> int/int => int(0.55->0) float/int => float(0.55=>0.55)
                
                printf("Tong: %d\n", tong);
                printf("Hieu: %d\n", hieu);
                printf("Tich: %d\n", tich);
                printf("Thuong: %f", thuong);
                break;
            case "2":
                //? YC2: Tính (a + b) * c và in ra màn hình.
                int congThuc = (a + b) * c;
                printf("Cong thuc: %d", congThuc);
                break;
            case "0":
                printf("BAN DA THOAT !");
                return;
            default:
                printf("Nhap lai. Danh sach chuc nang 0-2");
                break;
        }

    }while(true);
    
    return;
}
