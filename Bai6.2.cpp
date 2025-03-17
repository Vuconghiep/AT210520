#include<stdio.h>
int main(){
	int a,i,Tong=0;
	printf("Nhap gia tri: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	if(a%i==0){
		Tong += i;
	}
	printf("Tong bang %d\n",Tong);
	if(a*2==Tong){
		printf("%d la so hoan hao",a);
	}
	else{
		printf("%d khong la so hoan hao",a);
	}
}