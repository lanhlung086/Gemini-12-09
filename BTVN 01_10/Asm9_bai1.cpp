#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	
	char ars[n][20];
	for(int i=0; i<n; i++){
		printf("nhap chuoi thu %d: ",i);
		scanf("%s",ars[i]);
	}
	printf("chuoi sau khi nhap xong: \n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}

	char s[20];	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(strcmp(ars[j],ars[j+1])>0){
				strcpy(s,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],s);
			}
		}
	}
	printf("chuoi sau khi sap xep la: ");
		for(int i=0;i<n;i++){
			printf("\n%s",ars[i]);
		}
}
