// nhap mang n so nguyen, tim so duong nho nhat
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
	
	int x = arr[0];
	for(int i=0; i<n; i++){
		if(x < arr[i]) x = arr[i];
	}
	
	if(x<=0){
		printf("mang khong co so nguyen duong");
	}else{
		for(int i=0; i<n; i++){
			if(arr[i]>0&&arr[i]<x) x=arr[i];
		}
	}
	printf("so duong nho nhat trong mang la %d", x);
}
