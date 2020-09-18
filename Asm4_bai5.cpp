// nhap so nguyen n, kiem tra co phai so nguyen to hay khong
#include <stdio.h>
int main(){
	int n;
	
	do{
		printf("nhap so nguyen n: ");
		scanf("%d",&n);
	}while(n<2);
	
	int u=0;
	
	for(int i=2;i<=(n/2);i++){
		if(n%i==0){
			u++;
		}
	}
	
	if(u==0){
		printf("%d la so nguyen to", n);
	}else printf("%d khong la so nguyen to", n);
}
