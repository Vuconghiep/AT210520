#include<stdio.h>
int main(){
	int n=0,c=0,b=0,A=0,B=0,C=0;
	float D=0.0,E=0.0,F=0.0;
	printf("Nhap so luong phan tu cua mang: ");
	scanf( "%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	for(int i=0;i<n;i++){
		A += a[i];
		
		if(a[i]>0){
			B += a[i];
			b++;
		}else if(a[i]<0){
			C += a[i];
			c++;
		}
	if(n>0){
		D = (float)A/n;
	}else{
		printf("Vo li");
	}
	 if(a[i]<0){
		E = C/c;
	}else if (a[i]>0){
		F = B/b;}
		
	}
	printf("Tong tat ca cac so la: %d\n",A);
	printf("Tong tat ca cac so duong la: %d\n",B);
	printf("Tong tat ca cac so am la: %d\n",C);
	printf("Trung binh cong cac so la: %.2f\n",D);
	printf("Trung binh cong cac so am la: %.2f\n",E);
	printf("Trung binh cong cac so duong la: %.2f\n",F);
	return 0;
}