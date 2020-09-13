#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("nhap so a = ");
	scanf("%d", &a);
	printf("nhap so b = ");
	scanf("%d", &b);
	if(a>=b){
		printf("%f", (a/b));
	}else{
		printf("%d", (a*b));
	}
}
