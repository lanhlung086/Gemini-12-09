// nhap 1 so n tu ban phim, tim cac so nguyen to nho hon n
#include <stdio.h>
int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	
	if(n<=2){
		printf("khong co so nguyen to nao nho hon %d",n);
	}else{		
		for(int i=2; i<n; i++){
			int u=0;
			for(int j=2; j<=i/2; j++){
				if(i%j==0){
					u++;
				}
			}
			if(u==0) printf("%d\t",i);
		}	
	}
}
