#include<stdio.h>
int main (){
	int i,Tong,so;
	Tong = 0;
	i = 0 ;
	do {
		printf(" So thu %d la: ",i+1);
		scanf("%d",&so);
		Tong += so;
		i++;}
		while (i< 10);
	printf(" Tong cua 10 so la: %d\n",Tong);}
