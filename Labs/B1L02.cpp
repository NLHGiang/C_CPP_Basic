#include <stdio.h>

/*
* @Author: giangnlhph26511
* @Description: So sanh so tuoi voi dieu kien (>18 tuoi)
* Lay so tuoi (= <nam hien tai> - <nam sinh> ) so sanh voi dieu kien
* @Poram: now: nam hien tai
* @Poram: year: nam sinh
* @Poram: age: tuoi
* @Return: true(1) hoac false(0)
*/
int is_enough_age(int year) {
	const int now = 2021;
	int age = now-year;
	if(age>=18)
		return 1;
	else 
		return 0;
}

int main() {
	printf("KIEM TRA DO TUOI PHU HOP\n\n");
	printf("Moi ban nhap nam sinh: ");
	int year;
	scanf(" %d", &year);
	
	int check_age = is_enough_age(year);
	
	if (check_age==0) {
		printf("Ban chua du tuoi!");
	} else {
		printf("Ban da du tuoi!");
	}
}
