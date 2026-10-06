#include<stdio.h>
void distfare(float *dist,float *fare){
    *fare=*fare**dist;
    
    printf("Your Total Fare is =>\n(distance=%0.2f) x (fare= ₹5)= ₹%0.2f\n",*dist,*fare);
    
}
void tax(float *fare){

    *fare=*fare+((*fare*18.00)/100.00);

    printf("GST is 18%%\nSo, Total Fare after including tax= %0.2f\n",*fare);
}
int main(){

    printf("-------------XXXXX WELCOME TO ABC CAB XXXXX--------------\n");

    float dist; float fare=5.00;

    printf("The Fare per km Is= ₹%0.2f/km\n",fare);
    printf("Enter Total Distance Covered= ");
    scanf("%f",&dist);

    distfare(&dist,&fare);
    tax(&fare);

    printf("Your Total Fare is= ₹%0.2f\n",fare);
    printf("-------------XXXXX Thanku, Welcome Again XXXXX--------------");

    return 0;
}