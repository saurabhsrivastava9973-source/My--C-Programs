#include<stdio.h>
int main(){
    float len,bre,peri,area;
    printf("Enter a lenght Of Rectangle = ");
    scanf("%f",&len);
    printf("Enter a breadth Of Rectangele = ");
    scanf("%f",&bre);
    peri=(2*((len)+(bre)));
    area=(len)*(bre);
    printf("Your Perimetre Is = %f \nYour Area Is = %f\n",peri,area);
    
}