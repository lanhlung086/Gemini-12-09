// nhap mang n so nguyen, tim chuoi so duong ma co tong lon nhat la bao nhieu
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
	
	int sdlt=0, tongsdlt=0, maxsd=0, maxtd=0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			sdlt++;
			tongsdlt += arr[i];
			if(tongsdlt > maxtd){
				maxtd = tongsdlt;
				maxsd = sdlt;
			}
		}
		else{
			sdlt = 0;
			tongsdlt = 0;
		}
	}
	printf("chuoi so duong co tong lon nhat la %d", maxtd);
}
