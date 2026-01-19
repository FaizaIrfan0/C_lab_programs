#include <stdio.h>
#include <math.h>
/***********SIMPLE INTEREST************/
int simple_interest(int principal,float rate,int duration){
    float final =principal*(1+(rate*duration));
    printf("%f \n",final);
    return 0;
}
/***********AREA OF TRIANGLE**********/
int area(int base, int side){
    float height=sqrt(side*side-(base*base)/4);
    float area=height*base/2;
    printf("%f",area);
    return 0;
}
/***********HCF OF TWO NUMBERS*************/
int hcf(int no1, int no2, int q){
    while (no2!=0){
        q=no2;
        no2=no1%no2;
        no1=q;
    }
    printf("%d",no1);
    return 0;
}
int main() {
	int p=10000,d=10,b=6,l=5, n1=10,n2=5,q1=1;
	float r=0.05;
	simple_interest(p,r,d);
	area(b,l);
	hcf(n1,n2,q1);
	return 0;
}

