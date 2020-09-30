#include <stdio.h>
// tim boi chung nho nhat cua hai so
int BCNN(int a, int b){
	if(a!=0&&b!=0){
		int bcnn;
		if(a<=b){
			for(int i=1; i<=a; i++){
				if((b*i)%a==0){
					bcnn = b*i;
					break;
				}
			}
		}else{
			for(int i=1; i<=b; i++){
				if((a*i)%b==0){
					bcnn = a*i;
					break;
				}
			}
		}
		return bcnn;
	}
}
		

int main(){
	int a,b,bcnn;
	do{
		printf("nhap so a : ");
		scanf("%d", &a);
		printf("nhap so b : ");
		scanf("%d", &b);
	}while(a<0 || b<0);
	
	if(a==0&&b==0) 
		printf("khong co boi chung nho nhat");
	else if(a==0||b==0)
		printf("boi chung nho nhat la 0");
	else if(a!=0&&b!=0){
		int bcnn_a_b = BCNN(a,b);
		printf("boi chung nho nhat cua %d va %d la %d",a,b,BCNN(a,b));
	}
}
