#include<stdio.h>
int main() {
	int n, m;
	int a[n][m];
	printf("Nhap so hang n: ");
	scanf("%d", &n);
	printf("Nhap so cot m: ");
	scanf("%d", &m);
	printf("Nhap vao ma tran:\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
		    printf("a[%d][%d]=", i, j);
		    scanf("%d", &a[i][j]);	        
        }
    }
	printf("Mang vua nhap:\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			printf("%d \t", a[i][j]);
		}
		printf("\n");
	}
	printf("Mang binh phuong:\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			a[i][j] = a[i][j] * a[i][j];
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

