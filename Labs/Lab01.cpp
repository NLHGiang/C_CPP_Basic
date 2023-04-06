#include <stdio.h>
#include <math.h>
#include <string.h>

const float PI=3.14159;

/*
* @Author: giangnlhph26511
* @Description: In thong tin sinh vien
*/
void print_student_information(){
    printf("IT17328 - PH26511 - Nguyen Le Hong Giang");
	printf("\n------------------------------------------\n");
}

/*
* @Author: giangnlhph26511
* @Description: Ma hoa ten va MSSV theo he Oct
*Ho ten: Nguyen Le Hong Giang
    => 116-147-165-171-145-156-40-114-145-40-110-157-156-147-40-107-151-141-156-147-
*MSSV: PH26511
    => 120-110-62-66-65-61-61-
*/

/*
* @Author: giangnlhph26511
* @Description: Tinh chu vi HBH tu thong tin hai canh duoc truyen vao
* @Poram: first_side: chieu dai canh thu nhat
* @Poram: second_side: chieu dai canh thu hai
* @Poram: p: chu vi HBH
* @Return: chu vi HBH
*/
unsigned long int calculate_perimeter_of_parallelogram(unsigned int first_side, unsigned int second_side){
	unsigned long int p = (first_side+second_side)*2;
	return p;
}

/*
* @Author: giangnlhph26511
* @Description: Tinh dien tich HBH tu thong tin chieu cao va chieu dai day duoc truyen vao
* @Poram: height: chieu cao
* @Poram: base: chieu dai day
* @Poram: s: dien tich HBH
* @Return: dien tich HBH
*/
unsigned long int calculate_area_of_parallelogram(unsigned int height, unsigned int base){
	unsigned long int s=height*base;
	return s;
}

/*
* @Author: giangnlhph26511
* @Description: Tinh chu vi hinh tron tu thong tin ban kinh duoc truyen vao
* @Poram: radius: ban kinh
* @Poram: cv: chu vi hinh tron
* @Return: chu vi hinh tron
*/
float calculate_perimeter_of_circle(unsigned int radius){
	float cv=2*radius*PI;
	return cv;
}

/*
* @Author: giangnlhph26511
* @Description: Tinh dien tich hinh tron tu thong tin ban kinh duoc truyen vao
* @Poram: radius: ban kinh
* @Poram: dt: dien tich hinh tron
* @Return: dien tich hinh tron
*/
float calculate_area_of_circle(unsigned int radius){
	float dt=radius*radius*PI;
	return dt;
}

/*
* @Author: giangnlhph26511
* @Description: Chuyen doi tu giay sang phut
* @Poram: seconds: giay
* @Poram: minutes: phut
* @Return: phut
*/
float seconds_to_minutes(float seconds){
	float minutes = seconds / 60;
	return minutes;
}

/* 
* @Author: giangnlhph26511
* @Description: Chuyen doi tu phut sang giay
* @Poram: seconds: giay
* @Poram: minutes: phut
* @Return: giay
*/
float minutes_to_seconds(float minutes) {
	float seconds = minutes * 60;
	return seconds;
}

/*Tong hop cac ham va hoan thanh Lab 1*/
int main(){
	printf("1. Thong tin sinh vien:\n");
	print_student_information();
	
	printf("\n3. Tinh chu vi, dien tich HBH\n");
	unsigned long int p = calculate_perimeter_of_parallelogram(5, 4);
	printf("=>Chu vi HBH = %u\n", p);
	
	unsigned long int s = calculate_area_of_parallelogram(5, 4);
    printf("=>Dien tich HBH =  %u\n",s);
    
	printf("\n4. Tinh chu vi, dien tich hinh tron\n");
	float cv = calculate_perimeter_of_circle(4);
	printf("=>Chu vi hinh tron = %.2f\n",cv);
	
    float dt = calculate_area_of_circle(4);
    printf("=>Dien tich hinh tron = %.2f\n",dt);
    
	printf("\n5.1 Chuyen doi tu giay sang phut\n");
	float minutes = seconds_to_minutes(120);
	printf("=>So phut la %.2f(phut)\n", minutes);
	
	printf("\n5.2 Chuyen doi tu phut sang giay\n");
	float seconds =  minutes_to_seconds(2);
	printf("=>So giay la %.2f(giay)", seconds);
}
