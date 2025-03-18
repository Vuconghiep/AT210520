#include<stdio.h>
int fibonaci(int n){
	if (n<= 1) return n;
	int a = 0,b=1,c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("So fibonaci thu %d la: %d",n,fibonaci(n));
}