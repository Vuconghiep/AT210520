#include<stdio.h>
int UCLN(int a,int b){
while(b!=0){
		int UCLN = b;
		b=a%b;
		a=UCLN;
	}
	return a;
}
int BCNN(int a,int b){
	return (a/ UCLN(a,b)) * b;
}

int main(){
	int a,b;

	printf("Nhap 2 so a va b: ");
	scanf("%d %d", &a, &b);
	printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, UCLN(a,b));
	printf("Boi chung nho nhat cua %d va %d la %d\n", a, b, BCNN(a,b));
}