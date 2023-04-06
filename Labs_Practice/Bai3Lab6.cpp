#include <stdio.h>
#include<conio.h>

int main(){
	int n; 
	int a[n];

	printf("Nhap vao so luong phan tu :");
	scanf(" %d", &n);

	for(int i=0;i<n;i++) {
		printf("a[%d]=", i);
		scanf(" %d", &a[i]);
	}
	
	int temp_1;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(a[i]>a[j]) {				    
                temp_1 = a[i];
                a[i] = a[j];
                a[j] = temp_1;
			}
		}
	}
	
	printf("=> Sap xep theo thu tu giam dan:\n");
	for(int i=0;i<n;i++) {
		printf("Vi tri a[%d]: %d\n", i,a[i]);    
	}
	
	int temp_2;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(a[i]<a[j]) {			    
                temp_2 = a[i];
                a[i] = a[j];
                a[j] = temp_2;
			}
		}
	}
	
	printf("=> Sap xep theo thu tu tang dan:\n");
	for(int i=0;i<n;i++) {
		printf("Vi tri a[%d]: %d\n", i,a[i]);    
	}
	
}
