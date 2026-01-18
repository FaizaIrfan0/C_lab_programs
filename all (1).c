#include <stdio.h>
#define PI 3.14
int cuboid(int length,int breadth,int height){
    int volume=length*breadth*height;
    int surface_area=2*(length*breadth+breadth*height+height*length);
    printf("volume of cuboid is :%d \n",volume);
    printf("surface area of cuboid is :%d \n \n",surface_area);
    return 0;
}
int cone(int radius,int height, int slant){
    int volume=(PI*radius*radius)/3;
    int surface_area=PI*radius*(radius+slant);
    printf("volume of cone is :%d \n", volume);
    printf("surface area of cone is:%d \n \n",surface_area);
    return 0;
}
int sphere(int radius){
    int volume=(PI*4*radius*radius*radius)/3;
    int surface_area=4*PI*radius*radius;
    printf("volume of sphere is :%d \n", volume);
    printf("surface area of sphere is :%d \n",surface_area);
    return 0;
}
int main(){
    int l=10, b=20, h=5,r=3, h1=4, s=5, r1=10;
    cuboid(l,b,h);
    cone(r,h1,s);
    sphere(r1);
    return 0;
}