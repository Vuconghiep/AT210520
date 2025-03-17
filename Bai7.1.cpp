#include<stdio.h>
int main(){
	int i,N;
	float S=0;
	printf("Nhap gia tri N: ");
	scanf("%d",&N);
	if(N<=0){
		printf("N phai lon hon 0");
	}
	for(i=1;i<=N;i++){
	S += 1.0 / i ;	
	}
	printf("Tong S= %f\n",S);
}