#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: Xuat du lieu nguoi dung tu he thong
* @Param: money: so du
* @Param: chip_now: so chip hien tai
* @Param: NAME: ten file luu tru thong tin nguoi dung
*/
void OutputFile(float &money, int &chip_now, char NAME[50]) {
	FILE *f;
	f = fopen(NAME, "r");
	
	if(f==NULL) {
		printf("\nLOI TAO FILE!");
		return;
	}
	
	fscanf(f, "%f", &money);
	fscanf(f, "%d", &chip_now);
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
	char NAME[]="AssignmentQuaySo.txt";
	
	FILE *f;
	f = fopen(NAME, "w");
	
	fprintf(f, "%.2f\n", money);
	fprintf(f, "%d\n", chip_now);	
	fclose(f);
	
	printf("<RESET TAI KHOAN>\n");
	OutputFile(money, chip_now, NAME);
	printf("\n *THONG TIN TAI KHOAN*\n\n");
	printf("=================================\n");
	printf("|| %5s || %5s ||\n", "SO DU ($)", "SO CHIP (chip)");
	printf("=================================\n");
	printf("|| %9.2f || %14d ||\n", money, chip_now);
	printf("=================================\n");	
	return 0;
}
