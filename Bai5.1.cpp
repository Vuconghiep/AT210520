#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap so n: ");
	scanf("%d",&n);
	if(n==0){
		printf("0 co vo so uoc la tat ca cac so nguyen khac 0.");
	}
	else{
		for(i=1;i<=n;i++)
		if(n%i==0){
			printf("Uoc cua n la: %d\n",i);
		}
	}
}