#include<stdio.h>
int main(){
	int n, a[n];
	printf("Nhap vao so luong phan tu :");
	scanf("%d", &n);
	//
	for(int i=0;i<n;i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	int max=a[0];
	for(int i=0;i<n;i++) {
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Max=%d", max);
}
