// nhap n roi tinh S = 1 + 1/2 + 1/3 + ... + 1/n
#include <stdio.h>;
int main(){
	int n;
	do{
		printf("nhap so n: ");
		scanf("%d",&n);
	}while(n<1);
	float S =0;
	for(float i=1;i<=n;i++){
		S+=1/i;
	}
	
	printf("S = %f", S);
}
