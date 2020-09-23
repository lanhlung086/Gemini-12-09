// nhap 1 so n, tim cac uoc va tong cac uoc cua n
#include <stdio.h>
int main(){
	int n,S=0;
	do{
		printf("nhap so n: ");
		scanf("%d", &n);
	}while(n<1);
	
	for(int i=1; i<=n; i++){
		if(n%i==0){
			printf("%d\t\n",i);
			S+=i;
		}
	}printf("tong cac uoc S = %d",S);
}
