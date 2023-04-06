#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
* @Author: giangnlhph26511
* @Description: Hien thi menu chuong trinh
*/
void menu(){
	printf("\n");
	printf("\to------------------MENU------------------o\n");
	printf("\t|   1- Hien thi danh sach sinh vien      |\n");
	printf("\t|........................................|\n");
	printf("\t|   2- Tim sinh vien                     |\n");	
	printf("\t|........................................|\n");
	printf("\t|   3- Thay doi thong tin sinh vien      |\n");
	printf("\t|........................................|\n");
	printf("\t|   4- Sinh vien nho tuoi nhat           |\n");
	printf("\t|........................................|\n");
	printf("\t|   5- Tuoi trung binh cua sinh vien     |\n");
	printf("\t|........................................|\n");
	printf("\t|   6- So sinh vien co tuoi la so chan   |\n");
	printf("\t|........................................|\n");
	printf("\t|   7- Thoat                             |\n");
	printf("\to----------------------------------------o\n");	
}

/*
* @Author: giangnlhph26511
* @Description: Xoa dau enter
* Xoa dau enter cuoi cung sau khi nhap chuoi
* @Param: x[]: chuoi can xoa dau enter
*/
void delete_enter(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

/*
* @Author: giangnlhph26511
* @Description: Thong tin sinh vien(TTSV) gom: MSSV(id), HovaTen(full_name), Tuoi(age)
*/
struct InformationOfStudent{
	char id[10];
	char full_name[30];
	int age;
};
typedef InformationOfStudent IOS;	//Viet tat: InformationOfStudent->IOS

/*
* @Author: giangnlhph26511
* @Description: Nhap thong tin sinh vien(TTSV) 
* @Param: ios: TTSV
*/
void InputIOS(IOS &ios) {
	printf("\nMa so sinh vien: "); scanf(" %s", &ios.id);
	printf("\nHo va ten: "); fflush(stdin); fgets(ios.full_name, sizeof(ios.full_name), stdin); delete_enter(ios.full_name);
	do{
		printf("\nTuoi: "); scanf(" %d", &ios.age);
		if((ios.age<=0 || ios.age>=100))
			printf("Tuoi khong hop le! Nhap lai!\n");
	} while((ios.age<=0 || ios.age>=100));	
}

/*
* @Author: giangnlhph26511
* @Description: Xuat thong tin sinh vien(TTSV) 
* @Param: ios: TTSV
*/
void OutputIOS(IOS ios) {
	printf("| %-10s| %-30s| %-5d|\n", ios.id, ios.full_name, ios.age);
	printf("----------------------------------------------------\n");
}

/*
* @Author: giangnlhph26511
* @Description: Nhap danh sach SV
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
void InputList(IOS list[], int &n){
	do{	//Lap cho den khi nguoi dung nhap so luong SV>0
		printf("Nhap so luong sinh vien:");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=1; i<=n ; i++){	//Lap cho den khi du so luong SV trong danh sach
		printf("\nNhap vao sinh vien thu %d: ", i);
		InputIOS(list[i]);
	}
}

/*
* @Author: giangnlhph26511
* @Description: Xuat danh sach SV 
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
void OutputList(IOS list[], int n){
	printf("+-----------+-------------------------------+------+\n");
	printf("| %-10s| %-30s| %-5s|\n", "MSSV", "HO & TEN", "TUOI");
	printf("+-----------+-------------------------------+------+\n");
	for(int i=1; i<=n ; i++){	//Lap cho den khi du so luong SV trong danh sach
		OutputIOS(list[i]);
	}
}

/*
* @Author: giangnlhph26511
* @Description: Tim TTSV theo MSSV
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
void SearchID(IOS list[], int n) {
	char id[10];
	
	printf("Nhap MSSV : ");
	scanf(" %s", &id);
	delete_enter(id);
	
	printf("+-----------+-------------------------------+------+\n");
	printf("| %-10s| %-30s| %-5s|\n", "MSSV", "HO & TEN", "TUOI");
	printf("+-----------+-------------------------------+------+\n");
	
	for(int i=1; i<=n ; i++) {	//Lap cho den khi du so luong SV thoa man dieu kien
		if(strcmp(id, list[i].id)==0)
			OutputIOS(list[i]);
	}
}

/*
* @Author: giangnlhph26511
* @Description: Thay doi TTSV
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
void ChangeIOS(IOS list[], int n) {
	char id[10];
	
	printf("Nhap MSSV : ");
	scanf(" %s", &id);
	delete_enter(id);
	
	printf("Thong tin sinh vien muon thay doi:\n");
	printf("+-----------+-------------------------------+------+\n");
	printf("| %-10s| %-30s| %-5s|\n", "MSSV", "HO & TEN", "TUOI");
	printf("+-----------+-------------------------------+------+\n");
	
	for(int i=1; i<=n ; i++) {	//Lap cho den khi du so luong SV thoa man dieu kien
		if(strcmp(id, list[i].id)==0) {
			char full_name[30];
			int age;
			OutputIOS(list[i]);
			
			printf("Thay doi thong tin sinh vien:\n");
			printf("\nMa so sinh vien : "); scanf(" %s", &id);
			strcpy(list[i].id, id);
			printf("\nHo va ten: "); fflush(stdin); fgets(full_name, sizeof(full_name), stdin); delete_enter(full_name);
			strcpy(list[i].full_name, full_name);
			
			do {
				printf("\nTuoi: "); scanf(" %d", &age);
				if (age<=0 || age>=100)
					printf("Tuoi khong hop le! Nhap lai!\n");
			} while(age<=0 || age>=100);
			list[i].age=age;
		}
	}
}

/*
* @Author: giangnlhph26511
* @Description: Tim so tuoi nho nhat
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
* @Return: so tuoi nho nhat
*/
int TheYoungest(IOS list[], int n){
	int min = list[0].age;
	for(int i=1; i<=n; i++){
		if(min> list[i].age){
			min = list[i].age;
		}
	}
	return min;
}

/*
* @Author: giangnlhph26511
* @Description: Tim SV co so tuoi nho nhat
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
void SearchTheYoungest(IOS list[], int n) {
		int age;
		age=TheYoungest(list, n);
		
		printf("So tuoi nho nhat: %d\n", age);
		printf("Sinh vien nho tuoi nhat: \n");
		printf("+-----------+-------------------------------+------+\n");
		printf("| %-10s| %-30s| %-5s|\n", "MSSV", "HO & TEN", "TUOI");
		printf("+-----------+-------------------------------+------+\n");
		
		for(int i=1; i<=n ; i++) {		
			if(age==list[i].age)
				OutputIOS(list[i]);
		}
}

/*
* @Author: giangnlhph26511
* @Description: Tinh tuoi TB
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
float AverageAge(IOS list[], int n) {
	float sum=0.00;
	int count=0;
	float average;	
	
	for(int i=1; i<=n ; i++) {		
		sum+=list[i].age;
		count++;
	}
	average=sum/count;
	printf("So tuoi trung binh: %.2f\n", average);
}

/*
* @Author: giangnlhph26511
* @Description: So sinh vien co tuoi la so chan
* @Param: IOS list[]: danh sach SV
* @Param: n: so luong SV
*/
int CountEven(IOS list[], int n){
	int count=0;
	for(int i=1; i<=n ; i++) {		
		if(list[i].age%2==0)
			count++;
	}
	printf("So sinh vien co so tuoi chan: %d\n", count);
}

/*
* @Author: giangnlhph26511
* @Description: Xac nhan thoat chuong trinh
* @Return: thoat(1) hoac khong thoat(0)
*/
int exit_confirm() {
	do {	// Lap cho den khi nguoi dung chon phuong an hop le (Y/N)
		printf("Ban co chac chan muon THOAT khong (Y/N)? ");
		char confirm = getch();
		printf("<%c>\n", confirm);
		
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
* @Description: Chuong trinh quan li SV
* @Return: nguoi dung chon thoat(0)
*/
int main() {
	IOS list[100];
	int n;
	int min;
	InputList(list, n);
	do{	//Lap cho den khi nguoi dung chon thoat
		menu();
		
		printf("Lua chon cua ban: ");
		char choice = getch();
		printf("<%c>\n", choice);
		
		switch(choice){
			case '1': 	//Hien thi danh sach sinh vien 
				OutputList(list, n);
				break;
			case '2': 	//Tim sinh vien     
				SearchID(list, n);
				break;
			case '3': 	//Thay doi thong tin sinh vien
				ChangeIOS(list, n);
				break;
			case '4': 	//Sinh vien nho tuoi nhat    
				SearchTheYoungest(list, n);
				break;
			case '5': 	//Tuoi trung binh cua sinh vien  
				AverageAge(list, n);
				break;
			case '6': 	//So sinh vien co tuoi la so chan
				CountEven(list, n);
				break;			
			case '7':	//Thoat 				
				if (exit_confirm()==1) {	// Neu nguoi dung xac nhan
					printf("BAN DA THOAT!");	
					return 0;	// Ket thuc chuong trinh <=> ket thuc ham main
				}
				break;
			default:
				printf("<<!>> LUA CHON KHONG HOP LE! Moi nhap lai!\n\n");
				break;
		}
	} while(1);
}
