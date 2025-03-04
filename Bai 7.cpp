#include<stdio.h>
int main(){
	int a;
	printf("Nhap diem: ");
	scanf("%d",&a);
	if(a<5){
		printf("Xep loai: Yeu");
	}
	else if(5<=a && a<7){
		printf("Xep loai: TB");
	}
	else if(7<=a && a<8){
		printf("Xep loai: Kha");
	}
	else if(8<=a && a<9){
		printf("Xep loai: Gioi");
	}
	else if(a>=9){
		printf("Xep loai: Xuat sac");
	}
}