#include <stdio.h>
#include <math.h>
// tinh tong cac chu so cua mot so nguyen
int Tongcs(int A, int B=0){
	do{
		B+=A%10;
		A/=10;
	}while(A!=0);
	return B;
}

// tinh chu vi tam giac
float ChuVi(float a, float b, float c, float P=0){
	while(a+b>c && a+c>b && b+c>a){
		P = a + b + c;
		return P;
	}
}

//tinh dien tich tam giac
float DienTich(float a, float b, float c, float S=1){
	while(a+b>c && a+c>b && b+c>a){
		S = sqrt(((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
		return S;
	}
} 

int main(){
	int A;
	printf("nhap so A: ");
	scanf("%d",&A);
	int tongcs_A = Tongcs(A);
	printf("tong cac chu so cua %d la %d\n",A,Tongcs(A));
	
	float a,b,c;
	do{
		printf("nhap canh tam giac a = ");
		scanf("%f",&a);
		printf("nhap canh tam giac b = ");
		scanf("%f",&b);
		printf("nhap canh tam giac c = ");
		scanf("%f",&c);
	}while(!(a+b>c && a+c>b && b+c>a));
	float cv_abc = ChuVi(a,b,c), dt_abc = DienTich(a,b,c);
	printf("chu vi tam giac la %f\n",ChuVi(a,b,c));
	printf("dien tich tam giac la %f",DienTich(a,b,c));
}
