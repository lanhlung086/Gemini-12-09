//nhap 2 so a,b voi dk a<b. tim cac so nguyen to trong [a;b]
#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("nhap so a: ");
		scanf("%d",&a);
		printf("nhap so b: ");
		scanf("%d",&b);
	}while(a>b);
	
	for(int i=a;i<=b;i++){
		int u=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				u++;
			}
		}
		if(u==0&&i>1) printf("%d\t",i);
	}
}
