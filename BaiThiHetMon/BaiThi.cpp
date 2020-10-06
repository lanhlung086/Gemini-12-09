#include <stdio.h>
#include <math.h>
bool KT(double a, double b, double c){
	if(a<=0 || b<=0 || c<=0)
		return false;
	else if(a+b<c || a+c<b || b+c<a)
		return false;
	else return true;
}

double ChuVi(double a, double b, double c, double V=0){
	V = a+b+c;
	return V;
}
		
double DienTich(double a, double b, double c, double S=1){
	S = sqrt(((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
	return S;
}

int main(){
	double a,b,c;
	printf("nhap canh a: ");
	scanf("%lf",&a);
	printf("nhap canh b: ");
	scanf("%lf",&b);
	printf("nhap canh c: ");
	scanf("%lf",&c);
	
	if(!KT(a,b,c)){
		printf("do dai canh tam giac khong hop le");
	}else{
		double CV_abc = ChuVi(a,b,c), DT_abc = DienTich(a,b,c);
		printf("chu vi tam giac la %lf\n",ChuVi(a,b,c));
		printf("dien tich tam giac la %lf",DienTich(a,b,c));
	}
}
