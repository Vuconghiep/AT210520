#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap do dai 3 canh: ");
	scanf("%f %f %f",&a, &b, &c);
	if((a+b > c) && (a+c>b) && (b+c>a)){
		printf("Day la mot tam giac\n");
		
		if((a==b) && (b==c) && (a==c)){
			printf("Day la mot tam giac deu\n");
		}
			else if((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a)){
			printf("Day la mot tam giac can\n");
		}
		
			else if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b) ){
			printf("Day la mot tam giac vuong\n");
		}
			else 
		{
			printf("Day la mot tam giac thuong\n");
		}
	float S,P;
	P=(a+b+c)/2 ;
	S=sqrt((P*(P-a)*(P-b)*(P-c))) ;
	printf("Chu vi cua tam giac la: %.2f\n",2*P);
	printf("Dien tich cua tam giac la: %.2f",S);
	
	
	}
	else{
		printf("Day khong phai mot tam giac\n");
	}
}
