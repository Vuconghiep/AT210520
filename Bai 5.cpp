#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x,x1,x2,x3,delta;
	printf("Nhap gia tri a, b, c la: ");
	scanf("%f %f %f", &a,&b,&c);
	
	
	if(a==0){
		x3=-c/b;
		printf("Phuong trinh co nghiem %.2f",x3);
	}
	else{
		delta = pow(b,2)-4*a*c ;
		x1 = (-b-sqrt(delta))/(2*a);
	    x2 = (-b+sqrt(delta))/(2*a);
		if (delta>=0){
		x1 = (-b-sqrt(delta))/(2*a);
	    x2 = (-b+sqrt(delta))/(2*a);

			printf("Phuong trinh co 2 nghiem: %.2f va %.2f",x1,x2 );
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
}
	
		