#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: Xuat du lieu nguoi dung tu he thong
* @Param: money: so tien hien tai
* @Param: chip_now: so chip hien tai
* @Param: first_count: so lan trung giai nhat
* @Param: second_count: so lan trung giai nhi
* @Param: last_count: so lan khong trung giai
* @Param: NAME: ten file luu tru thong tin nguoi dung
*/
void OutputFile(float &money, int &chip_now, int &first_count, int &second_count, int &last_count, char NAME[50]) {
	FILE *f;
	f = fopen(NAME, "r");
	
	if(f==NULL) {
		printf("\nLOI TAO FILE!");
		return;
	}
	
	fscanf(f, "%f", &money);
	fscanf(f, "%d", &chip_now);
	fscanf(f, "%d", &first_count);
	fscanf(f, "%d", &second_count);
	fscanf(f, "%d", &last_count);
	fclose(f);	
}

/*
* @Author: giangnlhph26511
* @Description: Reset du lieu nguoi dung theo yeu cau
* Khoi tao file luu du lieu nguoi dung (tien=10($) va chip=0(chip))
*/
int main() {
	float money=10.0;
	int chip_now=0;
	int first_count=0;
	int second_count=0;
	int last_count=0;
	char NAME[]="Assignment.txt";
	
	FILE *f;
	f = fopen(NAME, "w");
	
	fprintf(f, "%.2f\n", money);
	fprintf(f, "%d\n", chip_now);
	fprintf(f, "%d\n", first_count);
	fprintf(f, "%d\n", second_count);
	fprintf(f, "%d\n", last_count);
	
	fclose(f);
	
	printf("<RESET TAI KHOAN>\n");
	OutputFile(money, chip_now, first_count, second_count, last_count, NAME);
	printf("\n *THONG TIN TAI KHOAN*\n\n");
	printf("==========================================================================================\n");
	printf("|| %5s || %5s || %14s || %14s || %14s ||\n", "SO DU ($)", "SO CHIP (chip)", "GIAI NHAT (lan)", "GIAI NHI (lan)", "TRUOT GIAI (lan)");
	printf("==========================================================================================\n");
	printf("|| %9.2f || %14d || %15d || %14d || %16d ||\n", money, chip_now, first_count, second_count, last_count);
	printf("==========================================================================================\n");	
	return 0;
}
