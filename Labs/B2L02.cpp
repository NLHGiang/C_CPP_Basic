#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: Kiem tra ki tu nhap tu ban phim co phai so khong
* @Poram: character: ki tu duoc nhap
* @Poram: value: gia tri cua ki tu
* @Return: true(1) hoac false(0)
*/
int is_digit(char character) {
	int value=character;
	if(value>=48 && value<=57)
		return 1;
	else
		return 0;
}

int main() {
	printf("KIEM TRA KI TU NHAP VAO CO PHAI LA SO KHONG\n\n");
	printf("Moi ban nhap 1 ki tu: ");
	char character;
	scanf(" %c", &character);	
	
	is_digit(character);
	int check_is_digit=is_digit(character);	
	
	if (check_is_digit==1)
		printf("Day la so!");
	if (check_is_digit==0)
		printf("Day khong phai la so!");
}
