#include <stdio.h>
int main(){
	int CHON;
	printf("\n+-----------------------+");
	printf("\n| 1. Xep loai sinh vien |");
	printf("\n| 2. Giai phuong trinh  |");
	printf("\n| 3. Tinh so tien dien  |");
	printf("\n+-----------------------+");
	printf("\n=> Chon: ");
	scanf("%d", &CHON);
	switch(CHON){
		case 1:
          	int m, n;
    	    int i = m;
	        float k=0, tong=0, tb=0;
	        printf("Nhap min = ");
	        scanf("%d", &m);
	        printf("\nNhap max = ");
	        scanf("%d", &n);
	        while(i<=n) {
		        if(i%2==0) {
			    tong+=i;
			    k++;
		        }
		        i++;
	        }
	        printf("\nn = %.2f", k);
	        printf("\nTong = %.2f", tong);
	        tb=tong/k;
	        printf("\nTrung binh = %.2f", tb);
	        break;
		case 2:
		    int count=0;
	        printf("\nNhap a = ");
	        scanf("%d", &a);
	        for(x=2; x<a; x++){
		        if(a%x ==0) {
			        count++;
		            }
	            }
	            if(count ==0) {
		            printf("\n%d la so nguyen to", a);
	                }else{
		            printf("\n%d khong phai la so nguyen to", a);
	                }
	        break;
	
		case 3:
			int y, b;
	        printf("\nNhap b = ");
	        scanf("%d", &x);
	        for(y=1; y<b; y++){
		        if(y*y==b){
		            printf("\n%d la so chinh phuong", b);
	            }else{printf("\n%d khong phai la so chinh phuong", b);
	            }
	    break;
	    }
	    default:{printf("Nhap lai");
	    }
    }
return 0;
}
