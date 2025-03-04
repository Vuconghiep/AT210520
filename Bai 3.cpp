#include<stdio.h>
int main (){
	float a,b,S,T,H;
	float C;
	printf("Nhap 2 so nguyen a va b: ");
	scanf("%f %f",&a,&b);
	S=a+b;
	T=a*b;
	H=a-b;
	C=a/b;
	
	printf("Tong 2 so a va b la %.2f\n",S);
	printf("Hieu 2 so a va b la %.2f\n",H);
	printf("Tich 2 so a va b la %.2f\n",T);
	printf("Thuong 2 so a va b la %.2f",C);
}