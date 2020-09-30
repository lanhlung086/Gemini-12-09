#include <stdio.h>
// tim so nguyen to lon hon gan nhat voi n
int TimSNT(int n){
	int i=n+1;
	for(i=n+1;;i++){
		int u=0;
		for(int j=2; j<=i/2; j++){
			if(i%j==0){
				u++;
				break;
			}
		}
		if(u==0){
			return i;
			break;
		}
	}
}

int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	
	if(n<=1)
		printf("so nguyen to lon hon gan %d nhat la 2",n);
	else{
		int SNTLHGN_n = TimSNT(n);
		printf("so nguyen to lon hon gan %d nhat la %d",n,TimSNT(n));
	}
}
