#include <stdio.h>

int main() {
	printf("-------------AI DUOC 10 DIEM ?-------------\n\n");
	printf("    *Phep toan %% co y nghia gi ?*    \n");
	printf("a. Doi dau 1 so thuc hoac 1 so nguyen\n");
	printf("b. Chia 2 so thuc hoac 2 so nguyen\n");
	printf("c. Lay phan du cua phep chia 2 so nguyen\n");
	printf("d. 1 & 2\n\n");
	printf("Dap an cua ban la: ");
	char choose;
	scanf(" %s", &choose);
	
	switch(choose) {
		case 'a':	printf("=> Ban da chon SAI\n");
		break;
		case 'b':	printf("=> Ban da chon SAI\n");
		break;
		case 'c':	printf("=> Ban da chon DUNG\n");
		break;
		case 'd':	printf("=> Ban da chon SAI\n");
		break;
		default:
			printf("=> Dap an khong hop le! Moi chon lai (a,b,c,d)!\n");
	}	
}
