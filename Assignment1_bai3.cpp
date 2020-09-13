#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,S,P;
	printf("nhap canh tam giac a = ");
	scanf("%f", &a);
	printf("nhap canh tam giac b = ");
	scanf("%f", &b);
	printf("nhap canh tam giac c = ");
	scanf("%f", &c);
	if(a<(b+c)){
		if(b<(a+c)){
			if(c<(a+b)){
				P = ((a+b+c)/2);
				S = sqrt(P*(P-a)*(P-b)*(P-c));
				printf("day la ba canh tam giac \n");
				printf("chu vi tam giac la %f \n", (a+b+c));
				printf("dien tich tam giac la %f \n", S);
			}else{
				printf("day khong phai ba canh tam giac");
			}
		}else{
			printf("day khong phai ba canh tam giac");
		}
	}else{
		printf("day khong phai ba canh tam giac");
	}
}
