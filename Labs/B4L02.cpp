#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: Nhap thong tin nam tu ban phim
* @Poram: year: nam
* @Return: nam duoc nhap
*/
int enter_year() {
	int year;
	printf("Moi nhap nam: ");
	scanf("%d", &year);
	return year;
}

/*
* @Author: giangnlhph26511
* @Description: Lay chu so cuoi cung cua nam
* @Poram: year: nam
* @Poram: last_digit: chu so cuoi cung
* @Return: chu so cuoi cung cua nam
*/
int get_last_digit_of_year(int year) {
	int last_digit = year%10;
	return last_digit;
}

/*
* @Author: giangnlhph26511
* @Description: Lay chu dau cua nam (Can)
* Tu 0-9 tuong duong: Canh, Tan, Nham, Quy, Giap, At, Binh, Dinh, Mau, Ki
* @Return: chu dau cua nam
*/
void get_Can(int last_digit_of_year) {
	switch(last_digit_of_year) {
		case 0:	printf("CANH");
		break;	
		case 1:	printf("TAN");
		break;
		case 2:	printf("NHAM");
		break;
		case 3:	printf("QUY");
		break;
		case 4:	printf("GIAP");
		break;
		case 5:	printf("AT");
		break;
		case 6:	printf("BINH");
		break;
		case 7:	printf("DINH");
		break;
		case 8:	printf("MAU");
		break;
		case 9: printf("KY");
		break;
	}
}

/*
* @Author: giangnlhph26511
* @Description: Lay chu cuoi cua nam (Chi)
* Tu 0-11 tuong duong: Ti, Suu, Dan, Mao, Thin, Ti, Ngo, Mui, Than, Dau, Tuat, Hoi
* @Return: chu cuoi cua nam
*/
void get_Chi(int year) {
	int Chi = (year+8)%12;
	switch(Chi) {
		case 0:	printf("TI");
		break;
		case 1:	printf("SUU");
		break;
		case 2:	printf("DAN");
		break;
		case 3:	printf("MAO");
		break;
		case 4:	printf("THIN");
		break;
		case 5:	printf("TY");
		break;
		case 6:	printf("NGO");
		break;
		case 7:	printf("MUI");
		break;
		case 8:	printf("THAN");
		break;
		case 9:	printf("DAU");
		break;
		case 10:printf("TUAT");
		break;
		case 11:printf("HOI");
		break;
	}
}

int main() {
	printf("CHUONG TRINH GOI TEN NAM THEO LICH AM\n\n");
	
	while(1) {
		int year = enter_year();
		int last_digit_of_year = get_last_digit_of_year(year);
		
		get_Can(last_digit_of_year);
		printf(" ");
		get_Chi(year);
		printf("\n\n");
	}
}
