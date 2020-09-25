// nhap mang n so nguyen, tim luong cac so duong lien tiep nhieu nhat
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
	
	int sdlt=0, maxsd=0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			sdlt++;
			if(sdlt>maxsd)
				maxsd=sdlt;
		}
		else sdlt=0;
	}
	printf("luong cac so duong lien tiep nhieu nhat la %d", maxsd);
}
