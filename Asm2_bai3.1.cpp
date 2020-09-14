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
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}			
		}
	}
	
	if(a==2){
		if(1<=b&&b<=28){			
			x=31+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==3){
		if(1<=b&&b<=31){
			x=59+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==4){
		if(1<=b&&b<=31){
			x=90+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==5){
		if(1<=b&&b<=31){
			x=120+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==6){
		if(1<=b&&b<=31){
			x=151+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==7){
		if(1<=b&&b<=31){
			x=181+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==8){
		if(1<=b&&b<=31){
			x=212+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==9){
		if(1<=b&&b<=31){
			x=243+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==10){
		if(1<=b&&b<=31){
			x=273+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==11){
		if(1<=b&&b<=31){
			x=304+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}
	
	if(a==12){
		if(1<=b&&b<=31){
			x=334+b;
			printf("ngay %d thang %d la ngay thu %d trong nam \n", b,a,x);
			if((x%7)==0){
				printf("la chu nhat");
			}else{
				printf("la thu %d", ((x%7)+1));
			}	
		}
	}	
}
