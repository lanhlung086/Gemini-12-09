// nhap mang n so nguyen, tim so le cuoi cung cua mang
#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("nhap gia tri: ");
		scanf("%d",&arr[i]);
	}
	
	int odd = 0;
	
	for(int i=0; i<n; i++){
		if(arr[i]%2==1){
			odd = arr[i];
		}
	}
	
	if(odd==0){
		printf("mang khong co so le nao");
	}else printf("so le cuoi cung cua mang la %d",odd);
}
