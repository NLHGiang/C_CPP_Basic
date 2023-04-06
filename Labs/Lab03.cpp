#include <stdio.h>
#include<conio.h>

/*
* @Author: giangnlhph26511
* @Description: Hien thi menu chuong trinh
*/
void print_menu() {
	printf("o---------------------------MENU---------------------------o\n");
	printf("|    1. Bang cuu chuong 1                                  |\n");
	printf("|    2. Tich cac so chia het cho 3 trong khoang [2;10]     |\n");
	printf("|    X. Thoat                                              |\n");
	printf("o----------------------------------------------------------o\n");
}

/*
* @Author: giangnlhph26511
* @Description: Hien thi bang cuu chuong 1
*/
int multiplication_table_1() {
    for(int i=0 ; i<=10 ; i++) {	//	So(i): day so tu nhien lien tiep trong khoang [1;10]
    	printf("\t  1 x %d = %d\n", i, 1*i);
    }
}

/*
* @Author: giangnlhph26511
* @Description: Hien thi tich cac so chia het cho 3 trong khoang 
* @Param: start: noi bat dau vong lap
* @Param: end: noi ket thuc vong lap
* @Return: tich cac so
*/
int multiplication(int start, int end) {
	int multiplication=1;
	int i=start;
	
	do {	// Lap cho den khi thua so vuot qua khoang cho phep
		if (i%3==0)// Thua so(i): day so chia het cho 3 lien tiep trong khoang [2;10]
			multiplication=multiplication*i;			
		i++;
	} while (i<=end);
	
	return multiplication;
}

/*
* @Author: giangnlhph26511
* @Description: Xac nhan thoat chuong trinh
* @Return: thoat(1) hoac khong thoat(0)
*/
int exit_confirm() {
	do {	// Lap cho den khi nguoi dung chon phuong an hop le (Y/N)
		// Nguoi dung nhap lua chon
		printf("Ban co chac chan muon THOAT khong (Y/N)? ");
		char confirm = getch();
		printf(" %c\n", confirm);
		
		// Xet lua chon
		switch(confirm) {
			case 'Y':	
				return 1;
			case 'N':
				return 0;
			default:
				printf("<!> LUA CHON KHONG HOP LE! Moi nhap lai (Y/N)!\n\n");
				break;
		}
	} while(1);
}

/*
* @Author: giangnlhph26511
* @Description: Chay chuong trinh Lab03
* @Return: nguoi dung chon thoat(0)
*/
int main() {
	do {	// Lap cho den khi nguoi dung chon thoat
		// Hien thi lua chon cho nguoi dung
		print_menu();
		
		// Nguoi dung nhap lua chon
		printf("Lua chon cua ban: ");
		char choice = getch();
		printf(" %c\n", choice);
		
		// Xet lua chon
		switch(choice) {
			case '1':	
				printf("++++++++++++BANG 1++++++++++++\n");
				multiplication_table_1();
				break;
			case '2': 
				multiplication(2,10);
				printf("Tich cac so chia het cho 3 trong khoang [2;10]: %d\n", multiplication(2,10));	
				break;
			case 'X':	// Neu nguoi dung chon 'X', yeu cau nguoi dung xac nhan
				if (exit_confirm()==1)	// Neu nguoi dung xac nhan
					printf("BAN DA THOAT!");
					return 0;	// Ket thuc chuong trinh <=> ket thuc ham main
				break;
			default:
				printf("<<!>> LUA CHON KHONG HOP LE! Moi nhap lai!\n\n");
				break;
		}
	} while(1);
}








