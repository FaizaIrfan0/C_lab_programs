#include <stdio.h>
#define PI 3.14
int main() {
	int radius;
	/*area of circle*/
	printf("enter radius :");
	scanf("%d",&radius);
	int area_c=PI*radius*radius;
	printf("area of circle is :", area_c);
	return 0;
}
int trapezium(){
    int l1, l2, height;
    printf("enterl1, l2, height :");
    scanf("%d %d %d", &l1, &l2, &height);
    int area_t=height*(l1+l2)/2;
    printf("area of trapezium is :",area_t);
    return 0;
}
int rhombus(){
    int side1, side2;
    printf("enter sides :");
    scanf("%d %d", &side1,&side2);
    int area_r=(side1*side2)/2;
    printf("area of rhomnus is :",area_r);
    return 0;
}
int parall(){
    int base,height_1;
    printf("enter base and height :");
    scanf("%d %d",&base,&height_1);
    int area_p=base*height_1;
    printf("area of parallelogram is :", area_p);
    return 0;
}

