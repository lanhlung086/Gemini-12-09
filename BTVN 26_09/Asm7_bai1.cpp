#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("nhap gia tri arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("nhap so nguyen x: ");
	scanf("%d",&x);
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	if(arr[0]>=x){
		printf("khong co so thoa man dieu kien");
	}else{
		int tcd = arr[0];
		for(int i=0; i<n; i++){
			if(arr[i]<x){
				tcd = arr[i];
			}else break;
		}printf("tiem can duoi cua %d la: %d",x,tcd);
	}	
}
