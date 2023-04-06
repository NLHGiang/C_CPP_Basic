#include<stdio.h>
#include<conio.h>
#include<string.h>

void Menu() {
	printf("+-----------Menu-----------+\n");
	printf("| 1. Thong tin ca nhan     |\n");
	printf("| 2. Tinh tong tu 1 den N  |\n");
	printf("| 3. Tong tin Ti vi        |\n");
	printf("| 0. Thoat                 |\n");
	printf("+--------------------------+\n");	
}

int Summary() {
	int n;
	int a[n];
	int sum;
	
	printf("Nhap N = ");
	scanf(" %d", &n);

	for(int i=1; i<=n; i++) {
		sum+=i;
	}
	
	if(n%2==0) 
		printf("N la so chan\n");
	else
		printf("N la so le\n");	
		
	printf("Tong cac so tu 1 den %d la %d\n", n, sum);
}

float OutputTV(int n, int a[]) {
	float sum=0.00;
	int count=0;
	float average;
	
	for(int i=1; i<=n; i++) {
		sum+=a[i];
		count++;
	}
	
	average=sum/count;
	
	int max=a[1];
	int position;
	
	for(int i=1; i<=n; i++) {
		if(max<a[i]) {
			max=a[i];
			position=i;
		}
	}
	
	printf("+---Xuat thong tin Ti Vi---+\n");
	printf("So luong ti vi: %d\n", n);
	printf("Kich co trung binh ti vi: %.2f\n", average);
	printf("Vi tri ti vi co kich thuoc lon nhat: %d\n", position);
}

float InputTV() {
	int n;
	int a[n];
	
	printf("+---Thong tin Ti Vi cua hang---+\n");
	
	do {	
		printf("Nhap so luong TV: ");
		scanf(" %d", &n);
		if(n<=1){
			printf("\n<!>Nhap so luong ti vi khong hop le! Moi nhap lai!\n");
		}
	} while(n<=1);
	
	for(int i=1; i<=n; i++) {
		printf("Kich co ti vi thu %d : ", i);
		scanf(" %d", &a[i]);
	}
	OutputTV(n, a);
}

int main() {
	char mssv[20];
	char name[50];
	printf("Ma so sinh vien: ");
	scanf(" %s", &mssv);
	printf("Ho va ten: ");
	fflush(stdin);
	fgets(name, sizeof(name), stdin);
	
	do{
		Menu();
		printf("Lua chon cua ban: ");
		char choice=getch();
		printf(" %c\n", choice);
		
		switch(choice) {
			case '1':
				printf(" %s - %s", mssv, name);
				break;
			case '2':
				Summary();
				break;
			case '3':
				InputTV();
				break;
			case '0':
				printf(" BAN DA THOAT! \n");
				return 1;
		}
	} while(1);
}
