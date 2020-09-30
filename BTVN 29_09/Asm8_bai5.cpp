#include <stdio.h>
// tim uoc chung lon nhat cua hai so
int UCLN(int a,int b){
	int ucln;
	if(a!=0&&b!=0){
		if(a<=b){
			for(int i=1; i<=a; i++){
				if(b%i==0&&a%i==0){
					ucln=i;
				}
			}
		}else{
			for(int i=1; i<=b; i++){
				if(a%i==0&&b%i==0){
					ucln=i;
				}
			}
		}
		return ucln;
	}

}

int main(){
	int a,b;
		do{
		printf("nhap so a : ");
		scanf("%d", &a);
		printf("nhap so b : ");
		scanf("%d", &b);
	}while(a<0||b<0);
	
	if(a==0&&b==0)
		printf("khong co UCLN");
	else if(a==0&&b!=0)
		printf("UCLN cua 0 va %d la %d",b,b);
	else if(a!=0&&b==0)
		printf("UCLN cua %d va 0 la %d",a,a);
	else if(a!=0&&b!=0){
		int ucln_a_b = UCLN(a,b);
		printf("uoc chung lon nhat cua %d va %d la %d",a,b,UCLN(a,b));
	}
}
