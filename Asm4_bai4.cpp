// nhap dung ba so la 3 canh tam giac roi tinh P va S
#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	do{
		printf("nhap canh a: ");
		scanf("%d",&a);
		printf("nhap canh b: ");
		scanf("%d",&b);
		printf("nhap canh c: ");
		scanf("%d",&c);
	}while(a+b<=c||a+c<=b||b+c<=a);
	
	float P,S;
	P = a + b + c;
	S = sqrt((P/2)*((P/2)-a)*((P/2)-b)*((P/2)-c));
	printf("chu vi tam giac la %f\n",P);
	printf("dien tich tam giac la %f",S);
}
