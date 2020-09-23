// nhap 2 so a,b. tim UCLN cua a,b
#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("nhap so a : ");
		scanf("%d", &a);
		printf("nhap so b : ");
		scanf("%d", &b);
	}while(a<0||b<0);
	
	int u;
	
	if(a==0&&b==0){
		printf("khong co uoc chung lon nhat");
	}else if(a==0&&b!=0){
		printf("uoc chung lon nhat la %d",b);
	}else if(a!=0&&b==0){
		printf("uoc chung lon nhat la %d",a);
	}else if(a!=0&&b!=0){
		for(int i=1; i<=a||i<=b;i++){
			if(a%i==0&&b%i==0){
				u=i;
			}
		}
	}printf("uoc chung lon nhat cua %d va %d la %d",a,b,u);
}
