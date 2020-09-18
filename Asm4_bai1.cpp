// nhap n roi tinh S = 1+2+...+n
#include <stdio.h>
int main(){
	int n,S=0;
	do{
		printf("nhap so n: ");
		scanf("%d",&n);
	}while(n<1);
	
	for(int i=1;i<=n;i++){
		S+=i;
	}
	
	printf("tong can tim la %d",S);
}
