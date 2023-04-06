#include<stdio.h>
#include <conio.h>

int room_2=20;
int room_3=15;

int i;
int cmt=0; int CMT[35];
int number=0; int NUMBER[35];
int room_type=0; int ROOM_TYPE[35];
int time=0; int TIME[35];
int price=0; int PRICE[35];

/*
* @Author: giangnlhph26511
* @Description: Hien thi bang gia thue phong cua nha nghi
*/
void PriceChart() {
	printf("\no-----------------------------------------------------o");
	printf("\n|                   | Phong 2 giuong | Phong 3 giuong |");
	printf("\n|-------------------|----------------|----------------|");
	printf("\n|    Hai gio dau    |    80.000 VND  |   100.000 VND  |");
	printf("\n|-------------------|---------------------------------|");
	printf("\n| Moi gio tiep theo |           15.000 VND            |");
	printf("\n|-------------------|---------------------------------|");
	printf("\n|      Qua dem      |   150.000 VND  |   180.000 VND  |");
	printf("\n|    (19h - 9h)     |                |                |");
	printf("\n|-------------------|----------------|----------------|");
	printf("\n|     Mot ngay      |   280.000 VND  |   350.000 VND  |");
	printf("\no-----------------------------------------------------o\n");
	printf("");
}

/*
* @Author: giangnlhph26511
* @Description: Hien thi menu chuong trinh
*/
void PrintMenu() {
	printf("\t\to--------MENU--------o\n");
	printf("\t\t|  1. Dat phong      |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  2. Huy phong      |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  3. Xem thong tin  |\n");
	printf("\t\t|....................|\n");
	printf("\t\t|  4. Thoat          |\n");
	printf("\t\to--------------------o\n");
}

/*Tinh tien*/
int GetPrice(int room_type, int time, char reservation) {
	int get_price;
	switch(reservation) {
		case '1':
			if(room_type==2 && time<=2) 
				get_price=80;			
			if(room_type==2 && time>2) 
				get_price=80+(time-2)*15;			
			if(room_type==3 && time<=2) 
				get_price=100;			
			if(room_type==3 && time>2) 
				get_price=100+(time-2)*15;
			break;
		case '2':
			if(room_type==2)
				get_price=150;
			if(room_type==3)
				get_price=180;
			break;
		case '3':
			if(room_type == 2)
				get_price=time*280;
			if(room_type == 3)
				get_price=time*350;
			break;
	}
	return get_price;
}

/*Dat phong*/
int Reservation() {
	for(int i=1; 1<=35 ; i++) {
		if(CMT[i]==0) {
			printf("Nhap CMT: "); scanf(" %d", &cmt);
			printf("Nhap so nguoi o: "); scanf(" %d", &number);
			
			if( number>0 && number<=2 && room_2>0) {
				room_type=2;
				printf("*Ban duoc xep vao phong 2 giuong ngu*\n");				
			}
			if( number>0 && number<=2 && room_2==0 && room_3>0) {
				room_type=3;
				printf("Hien tai da het phong 2 giuong ngu!\n");
				printf("*Ban duoc xep vao phong 3 giuong ngu*\n");				
			}
			if( number==3 && room_3>0) {
				room_type=3;
				printf("*Ban duoc xep vao phong 3 giuong ngu*\n");				
			}
			if( number==3 && room_3==0) {
				printf("Hien tai da het phong 3 giuong ngu! Chi con phong 2 giuong ngu\n");	
				return 0;			
			}			
			if( number>3) {
				printf("So luong nguoi vuot qua quy dinh! Moi phong chi toi da 3 nguoi\n");	
				return 0;		
			}	
			
			
			printf("\nChon kieu thue phong: \n");
			printf("1. Theo gio\t 2.Qua dem\t 3.Theo ngay\n");
			char reservation = getch();
			printf(" < %c >\n\n", reservation);
		
			switch(reservation) {
				case '1':
					printf("*Thue phong theo gio*\n");
					printf("So gio thue: "); scanf(" %d", &time);
					break;
				case '2':
					printf("*Thue phong qua dem*\n");
					printf("Khong tinh thoi gian\n");
					break;
				case '3':
					printf("*Thue phong theo ngay*\n");
					printf("Khong tinh thoi gian\n");
					printf("So ngay thue: "); scanf(" %d", &time);
					break;
				default: {
					printf("Kieu dat phong khong hop le! Moi dat lai (1/2/3)");
					return 0;
				}
			}
			
			price=GetPrice(room_type, time, reservation);
			printf("|| %10s || %8s || %10s || %15s ||\n", "CMT/CCCD ", "SO NGUOI", "KIEU PHONG", "TONG TIEN (VND)");
			printf("=============================================================\n");
			printf("|| %10d || %8d || %10d || %11d.000 ||\n", cmt, number, room_type, price);
			printf("=============================================================\n");
		
			do {
				printf("\n <?> Xac nhan dat phong (Y/N)? ");
				char confirm = getch();
				printf(" < %c >\n", confirm);
				
				switch(confirm) {
					case 'Y':
						if (room_type == 2)
							room_2--;				
						if (room_type == 3)
							room_3--;				
					
						CMT[i]=cmt;
						NUMBER[i]=number;
						ROOM_TYPE[i]=room_type;
						TIME[i]=time;
						PRICE[i]=GetPrice(room_type, time, reservation);						
						return 1;
					case 'N':
							
						return 0;
					default:
						printf(" <!> Xac nhan khong hop le! Xac nhan lai (Y/N)!\n");
						
				}
			} while(1);
		}	
	}
}

























