// tong cua 100 so le dau tien
#include <stdio.h>
int main(){
	int S=0;

	for(int i=1;i<=100;i++){
		S += (i*2-1);
	}
	
	printf("S = %d", S);
}
