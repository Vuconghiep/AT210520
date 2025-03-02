#include<stdio.h>
#include<math.h>
int main(){
	float S,R,V;
	printf("Nhap ban kinh hinh cau: ");
	scanf("%f", &R);
	
	S = 4 * M_PI *pow(R,2);
	V = 4/3 * M_PI *pow(R,3);
	
	printf("Dien tich hinh cau la: %.2f\n", S );
	printf("The tich hinh cau la: %2f", V);
	

}
