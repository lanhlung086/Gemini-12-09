// nhap n tu ban phim, in ra cac so chan be hon n
#include <stdio.h>
int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		if(i%2==0){
			printf("%d\t", i);
		}
	}
}
