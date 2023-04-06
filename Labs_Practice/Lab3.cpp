#include <stdio.h>
#include <math.h>
int main(){
	int CHON;
	printf("\n+-----------------------+");
	printf("\n| 1. Xep loai sinh vien |");
	printf("\n| 2. Giai phuong trinh  |");
	printf("\n| 3. Tinh so tien dien  |");
	printf("\n+-----------------------+");
	printf("\n=> Chon: ");
	scanf("%d", &CHON);
	switch(CHON){
		case 1:
			float diem;
	        printf("Xep loai sinh vien");
	        printf("\nNhap diem cua sinh vien: ");
	        scanf("%f", &diem);
            if((diem>=9.0) && (diem<=10)){printf("Xuat sac");}
            else if((diem>=8.0) && (diem<9.0)){printf("Gioi");}
            else if((diem>=6.5) && (diem<8.0)){printf("Kha");}
	        else if((diem>=5.0) && (diem<6.5)){printf("Trung binh");}
            else if((diem>=3.5) && (diem<5.0)){printf("Yeu");}
	        else if((diem>=0.0) && (diem<3.5)){printf("Kem");}
            else {printf("Khong diem hop le");}
			break;	
		case 2:
			int chon;
			printf("\n1. Giai phuong trinh ax + b = 0");
	        printf("\n2. Giai phuong trinh Ax^2 + Bx + C = 0");
	        printf("\n=> Chon: ");
	        scanf("%d", &chon);
			switch(chon){
			    case 1:
	    	  	    float a, b;
                    printf("\n-------------------------");
                    printf("\nGiai phuong trinh ax + b = 0");
                    printf("\nNhap so a: ");
                    scanf("%f", &a);
                    printf("Nhap so b: ");
                    scanf("%f", &b);
                    if((a == 0) && (b == 0)){
	                    printf("=> Phuong trinh co vo so nghiem");
	                }else if((a == 0) && (b != 0)){
		    	        printf("=> Phuong trinh vo nghiem");
    	            }else{printf("=> Phuong trinh co nghiem x = %.2f", -b/a);
	                }
		           	break;
		        case 2:
        			float A, B, C, delta;
                    printf("\Giai phuong trinh Ax^2 + Bx + C = 0");
	                printf("\nNhap so A: ");
                    scanf("%f", &A);
                    printf("Nhap so B: ");
                    scanf("%f", &B);
                    printf("Nhap so C: ");
                    scanf("%f", &C);
                    delta = B*B - 4*A*C;
                    if(A == 0){
    	                printf("=> Phuong trinh co mot nghiem x = %.2f", -C/B);
                	}else if((A != 0) && (delta > 0)){
                		printf("=> Phuong trinh co hai nghiem x1 = %.2f va x2 = %.2f", -(B + sqrt(delta))/(2*A) , -(B - sqrt(delta))/(2*A));
        	        }else if((A != 0) && (delta == 0)){
        	            printf("=> Phuong trinh co mot nghiem kep x = %f", -B/(2*A));
	                }else{printf("=> Phuong trinh vo nghiem");
                    }	    
	    	    	break;
	        	    }
			break;			
		case 3:
			int soDien, soTien;
            printf("\nNhap so dien tieu thu hang thang: ");
            scanf("%d", &soDien);
            if(soDien<0){
     	        printf("\nHay nhap lai so dien");
    	    }else if(soDien<=50){
    		    soTien=soDien*1678;
    		    printf("So tien phai tra la: %.d", soTien);
    	    }else if(soDien<=100){
    	        soTien=50*1678+(soDien-50)*1734;
    		    printf("So tien phai tra la: %.d", soTien);    	
		    }else if(soDien<=200){
    		    soTien=50*1678+50*1734+(soDien-100)*2014;
    		    printf("So tien phai tra la: %.d", soTien);
    	    }else if(soDien<=300){
    		    soTien=50*1678+50*1734+100*2014+(soDien-200)*2536;
    		    printf("So tien phai tra la: %.d", soTien);
    	    }else if(soDien<=400){
          	    soTien=50*1678+50*1734+100*2014+100*2536+(soDien-300)*2834;
    		    printf("So tien phai tra la: %.d", soTien);    	
		    }else if(soDien>400){
    		    soTien=50*1678+50*1734+100*2014+100*2536+100*2834+(soDien-400)*2927;
    		    printf("So tien phai tra la: %.d", soTien);						  		
		    }
			break;
		default:
			printf("\nGia tri lua chon khong chinh xac. Moi ban chon lai (chon tu 1-5)");
			break;
}

	return 0;
}
