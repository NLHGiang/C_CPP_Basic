#include <stdio.h>
#include<conio.h>
//Bai 1//
int soMax(int x,int y,int z);
int main(){	
    int x, y, z, max;
	printf("\nNhap so x: ");
	scanf("%d", &x);
	printf("Nhap so y: ");
	scanf("%d", &y);
	printf("Nhap so z: ");
	scanf("%d", &z);
	max = soMax(x,y,z);
	printf("Max = %d", max);
	return 0;
}
int soMax(int x,int y,int z){
	int max;
	max=x;
	if(max<y)
		max=y;
	if(max<z)
		max=z;
	return max;
}
//Bai 2//
int checkYear(int year);
int main(){
	int year;
	printf("\nNhap vao nam: ");
	scanf("%d", &year);
	if(checkYear(year) == true){
        printf("%d la nam nhuan", year);
    }else{
        printf("%d khong phai nam nhuan", year);
    }
	return 0; 
}
int checkYear(int year){
	int flag = 0;
    if(year % 400 == 0)
        flag = 1;
    if(year % 4 == 0 && year % 100 != 0)
        flag = 1;
    return flag;
}
//Bai 3//
void hoanvi(int *x, int *y);
int main(){
    int a, b;
	printf("\nNhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
    printf("\nHai so chua hoan vi: a=%d va b=%d",a,b);	
	hoanvi( &a, &b);
	printf("\nHai so da hoan vi: a=%d va b=%d",a,b);
	return 0;
}
void hoanvi(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


























