#include<stdio.h>
int main(){
	int a, b;
	int mangthai;
	int muadam;
	printf("Nhap so tuoi hung thu: ");
	scanf("%d",&a);
	printf("Nhap so tuoi nan nhan: ");
    scanf("%d",&b);
    //1
    if(a>=14 && b<10) {
    	printf("Phat tu 20 nam, chung than hoac tu hinh!");
	}
	//2
    else if(a>=14 && b>=10 && b<13) {
    	printf("Co mang thai khong ?");
    	scanf("%d", &mangthai);
    	if(mangthai==0){
    	    printf("Phat tu 7-15 nam!");
	    }else{
		    printf("Phat tu 12-20 nam!");
		    }
	}
	//3
	else if(a>=18 && b>=13 && b<16) {
    	printf("Co mang thai khong ?");
    	scanf("%d", &mangthai);
    	if(mangthai==0){
    	    printf("Phat tu 1-5 nam!");
	    }else{
		    printf("Phat tu 3-10 nam!");
		    }
	}
	//4
	else if(a>=18 && b>=16) {
    	printf("Co phai mua dam khong ?");
    	scanf("%d", &muadam);
    	if(muadam==0){
    	    printf("Khong bi xu li hinh su!");
	    }else{
		    printf("Phat 500.000-1.000.000 VND!");
		    }
	}
	else printf("Nhap lai tuoi!");
}
