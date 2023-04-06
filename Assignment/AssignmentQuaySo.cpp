#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

const float buy_cost=0.25;
const float sale_cost=0.20;

/*
* @Author: giangnlhph26511
* @Description: So sanh thong tin dang nhap duoc nhap tu ban phim voi thong tin co san
* Thong tin dang nhap co san:
* Ten dang nhap:GIANG
* Mat khau:PH26511
* @Return: nhap dung(1) hoac nhap sai(0)
*/
int SignIn() {
	char ID[]="GIANG";
	char PASS[]="PH26511";

	char id[10];
	char pass[10];

	printf("\nTen dang nhap: ");
	scanf(" %s", &id);
	printf("Mat khau: ");
	scanf(" %s", &pass);
	if((strcmp(id, ID)==0) && (strcmp(pass, PASS)==0))
		return 1;
	else
		return 0;
}

/*
* @Author: giangnlhph26511
* @Description: Luu du lieu nguoi dung vao he thong
* @Param: money: so du
* @Param: chip_now: so chip hien tai
* @Param: NAME: ten file luu tru thong tin nguoi dung
*/
void InputFile(float money, int chip_now, char NAME[50]) {
	FILE *f;
	f = fopen(NAME, "w");
	
	if(f==NULL) {
		printf("\nERROR!");
		return;
	}
	
	fprintf(f, "%.2f\n", money);
	fprintf(f, "%d\n", chip_now);
	fclose(f);
}

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
		printf("\nERROR!");
		return;
	}
	
	fscanf(f, "%f", &money);
	fscanf(f, "%d", &chip_now);
	fclose(f);	
}

/*
* @Author: giangnlhph26511
* @Description: Hien thi menu chuong trinh
*/
void PrintMenu() {
	printf("\t\to--------MENU--------o\n");
	printf("\t\t|  1. Mua chip       |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  2. Ban chip       |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  3. Quay so        |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  4. Xem thong tin  |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  5. Thoat          |\n");
	printf("\t\to--------------------o\n");
}

/*
* @Author: giangnlhph26511
* @Description: Tinh so du sau khi mua chip
* @Param: money: so du
* @Param: chip_buy: so chip muon mua
* @Return: so du cua nguoi dung
*/
float buy_chip(int chip_buy, float money) {
	float bill=chip_buy*buy_cost; // hoa don = chipmuonmua*giamuachip
	money-=bill;
	return money; 
}

/*
* @Author: giangnlhph26511
* @Description: Tinh so du sau khi ban chip
* @Param: money: so du
* @Param: chip_sale: so chip muon ban
* @Return: so du cua nguoi dung
*/
float sale_chip(int chip_sale, float money) {
	float bill=chip_sale*sale_cost;
	money+=bill;
	return money;
}

/*
* @Author: giangnlhph26511
* @Description: Quay so
* @Return: 3 so giong nhau(1), 2 so giong nhau(2), khong co so nao giong nhau (0)
*/
int lucky_wheel() {
	int max=3;
	int a[3];

	time_t t;
	srand((unsigned) time(&t));

	for(int i=1; i<=max; i++) {
		a[i] = rand()%10;
		printf("> %d <\t", a[i]);
	}
	printf("\n");
	
	if (a[1]==a[2] && a[1]==a[3] && a[2]==a[3]) 
		return 1;	
	if ((a[1]==a[2] && a[1]!=a[3] && a[2]!=a[3]) || (a[1]!=a[2] && a[1]==a[3] && a[2]!=a[3]) || (a[1]!=a[2] && a[1]!=a[3] && a[2]==a[3])) 
		return 2;
	if (a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3]) 
		return 0;
}

/*
* @Author: giangnlhph26511
* @Description: Xet thong tin trung thuong cua nguoi dung
* @Param: chip_now: so chip hien tai
* @Return: so chip cua nguoi dung
*/
int result(int chip_now) {

	int award=lucky_wheel();
	if(award==1) {
		printf("Thuong 10 chip\n");
		chip_now+=9;
	}
	if(award==2) {
		printf("Thuong 3 chip\n");
		chip_now+=2;
	}		
	if(award==0) {
		printf("Chuc ban may man lan sau\n");
		chip_now-=1;
	}
	return chip_now;
}

/*
* @Author: giangnlhph26511
* @Description: Xac nhan thoat
* @Return: thoat(1) hoac khong thoat(0)
*/
int exit_confirm() {
	do {	// Lap cho den khi nguoi dung chon phuong an hop le (Y/N)
		printf("Ban co muon THOAT khong (Y/N)? ");
		char confirm = getch();
		printf(" < %c >\n", confirm);

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
* @Description: Chay chuong trinh quay so trung thuong
* @Return: nguoi dung thoat(0)
*/
int main() {
	float money;
	int chip_now;
	int chip_buy;
	int chip_sale;
	float can_buy;
	char NAME[]="Assignment.txt";
	
	printf("\t   # MOI BAN DANG NHAP DE TIEP TUC #\n");
	
	do {	//Lap cho den khi nguoi dung nhap dung thong tin dang nhap
		int check=SignIn();
		
		if(check==1) {
			OutputFile(money, chip_now, NAME);
			printf("\n# CHAO MUNG DEN VOI CHUONG TRINH QUAY SO TRUNG THUONG #\n");
			printf("\t     Ban hien co %.2f $ va %d chip\n", money, chip_now);
			
			do {	//Lap cho den khi nguoi dung chon thoat
				PrintMenu();

				printf("Lua chon cua ban: ");
				char choice = getch();
				printf(" < %c >\n\n", choice);

				switch(choice) {
					case '1':
						printf("Nhap so chip muon mua: ");
						scanf(" %d", &chip_buy);
						
						if(chip_buy<0)
							printf("So chip khong hop le!\n");
						if(chip_buy>=0) {
							can_buy=buy_chip(chip_buy, money);

							if(can_buy<0)
								printf("So du cua ban khong du de mua chip!\n");
							if(can_buy>=0) {
								chip_now+=chip_buy;
								money=buy_chip(chip_buy, money);
							}
						}

						printf("Ban hien co %.2f $ va %d chip\n", money, chip_now);
						InputFile(money, chip_now, NAME);
						break;
					case '2':
						if(chip_now==0)
							printf("Ban khong con chip de ban\n");							
						if(chip_now>0){
							printf("Nhap so chip muon ban: ");
							scanf(" %d", &chip_sale);
	
							if(chip_sale>=0) {
								if ((chip_now-chip_sale)<0)
									printf("Ban khong du chip de ban!\n");
								if ((chip_now-chip_sale)>=0) {
									chip_now-=chip_sale;
									money=sale_chip(chip_sale, money);
									printf("Ban hien co %.2f $ va %d chip\n", money, chip_now);
								}
							}
							if(chip_sale<0) 
								printf("So chip khong hop le!\n");
						}
										
						InputFile(money, chip_now, NAME);
						break;
					case '3':
						if (chip_now<=0)
							printf("Ban khong con chip de quay! Hay mua them!\n");	
						if (chip_now>0) {
							chip_now=result(chip_now);
							printf("So chip cua ban: %d chip\n", chip_now);
						}

						InputFile(money, chip_now, NAME);
						break;
					case '4':
						printf("*THONG TIN TAI KHOAN*\n");
						printf("=================================\n");
						printf("|| %5s || %5s ||\n", "SO DU ($)", "SO CHIP (chip)");
						printf("=================================\n");
						printf("|| %9.2f || %14d ||\n", money, chip_now);
						printf("=================================\n");	
						break;
					case '5':
						if (exit_confirm()==1) {	// Neu nguoi dung xac nhan thoat
							InputFile(money, chip_now, NAME);
							printf("BAN DA THOAT!\n");
							return 0;	// Ket thuc chuong trinh <=> ket thuc ham main
						}
						break;
					default:
						printf("\n<!> LUA CHON KHONG HOP LE! MOI CHON LAI (1-5)!\n");
				}
			} while (1);
		} else
			printf("TEN DANG NHAP HOAC MAT KHAU KHONG CHINH XAC!\n");
	} while(1);
}




