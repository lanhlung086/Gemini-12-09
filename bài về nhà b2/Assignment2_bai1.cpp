#include <stdio.h>
int main(){
	int a;
	printf("nhap so a = ");
	scanf("%d", &a);
	if(2<=a&&a<=7){
		printf("day la thu %d", a);
	}else{
		if(a==8){
			printf("day la chu nhat");
		}else{
			printf("khong phai ngay trong tuan");
		}
	}
}
