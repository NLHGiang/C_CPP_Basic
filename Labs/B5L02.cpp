#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: Nhap thong tin la con so tu ban phim
* @Poram: message: truyen thong tin
* @Poram: number: so
* @Return: so
*/
int enter_number(char* message) {
	int number;
	printf(message);
	scanf(" %d", &number);
	return number;
}

/*
* @Author: giangnlhph26511
* @Description: Tinh so ngay trong thang
* @Poram: day: ngay
* @Poram: month: thang
* @Poram: year: nam
* @Return: so ngay trong thang
*/
int check_day(int month,int year) {
	int day;
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	 		day=31;
	 		break;
	 		
		case 4:
		case 6:
		case 9:
		case 11:
			day=30;
	 		break;
			
		case 2:
			if ((year%400==0) || (year%4==0 && year%100!=0))
				day=29;
			else 
				day=28;		
			break;
	}
	return day;
}

/*
* @Author: giangnlhph26511
* @Description: Kiem tra ngay, thang, nam co hop le hay khong
* @Poram: day: ngay
* @Poram: month: thang
* @Poram: year: nam
* @Return: true hoac fasle
*/
int validate_date(int day,int month,int year) {
	if (year<1)
		return false;
	if (month<1 || month>12) 
		return false;	
	if (day<1 || day>check_day(month,year)) 
		return false;	
	else	
		return true;
}

int main() {
	printf("CHUONG TRINH KIEM TRA TINH HOP LE CUA NGAY, THANG, NAM\n\n");
	int year = enter_number("Moi nhap nam: ");
	int month = enter_number("Moi nhap thang: ");
	int day = enter_number("Moi nhap ngay: ");
	
	int is_valid = validate_date(day,month,year);
	
	if (is_valid) {
		printf("Hop le!");
	} else {
		printf("Khong hop le!");
	}
}
