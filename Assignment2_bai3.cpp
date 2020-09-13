#include <stdio.h>
#include <math.h>
int main(){
	int a,b,x;
	printf("nhap thang a = ");
	scanf("%d", &a);
	printf("nhap ngay trong thang b = ");
	scanf("%d", &b);
	
	if(a==1){
		if(1<=b&&b<=31){
			x=b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);			
		}
	}
	
	if(a==2){
		if(1<=b&&b<=28){			
			x=31+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==3){
		if(1<=b&&b<=31){
			x=59+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==4){
		if(1<=b&&b<=31){
			x=90+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==5){
		if(1<=b&&b<=31){
			x=120+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==6){
		if(1<=b&&b<=31){
			x=151+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==7){
		if(1<=b&&b<=31){
			x=181+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==8){
		if(1<=b&&b<=31){
			x=212+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==9){
		if(1<=b&&b<=31){
			x=243+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==10){
		if(1<=b&&b<=31){
			x=273+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==11){
		if(1<=b&&b<=31){
			x=304+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	if(a==12){
		if(1<=b&&b<=31){
			x=334+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
		}
	}
	
	int y=(x%7);
	if(y==0){
		printf("ngay %d thang %d la chu nhat", b,a);
	}
	
	if(y==1){
		printf("ngay %d thang %d la thu hai", b,a);
	}
	
	if(y==2){
		printf("ngay %d thang %d la thu ba", b,a);
	}
	
	if(y==3){
		printf("ngay %d thang %d la thu tu", b,a);
	}
	
	if(y==4){
		printf("ngay %d thang %d la thu nam", b,a);
	}
	
	if(y==5){
		printf("ngay %d thang %d la thu sau", b,a);
	}
	
	if(y==6){
		printf("ngay %d thang %d la thu bay", b,a);
	}	
}
