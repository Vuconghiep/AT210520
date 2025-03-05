#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Nhap vao 2 so nam va thang: ");
	scanf("%d %d",&a, &b);
	if((a>0) && (b==2)){
		if((a>0) && (a % 400 == 0) || (a % 4 == 0) && (a % 100 !=0)){
		printf("Thang 2 nam %d co 29 ngay",a);
	}
	else{
		printf("Thang 2 nam %d co 28 ngay",a);
	}
	}
	else if((b==4) || (b==6) || (b==9) || (b==11) ){
		printf("Thang %d nam %d co 30 ngay",b, a);
	}
	else if((b==1) || (b==3) || (b==5) || (b==7) || (b==8) || (b==12) || (b==10)){
		printf("Thang %d nam %d co 31 ngay",b, a);
	}
	else{
		printf("Thang nam khong hop le");
	}
}