#include<stdio.h>
void sut(float *subtotal,int *qu,float *proprice){
    *subtotal=*qu**proprice;   
}
void discount(float *subtotal){
    if (*subtotal>1500){
        printf("Congratulation You Got 20%% off\n");
        *subtotal=*subtotal-(*subtotal*(20))/100;
        printf("Your Price after discount is=₹%.2f\n",*subtotal);  
    }else{
        printf("Soory You didn't get discount\n");
        printf("Shop ₹%.2f more for 20%% discount\n",1500.0f-*subtotal);
    }
}
void tax(float *subtotal){
    *subtotal=*subtotal+((*subtotal*18)/100);
    printf("After 18%% GST Inclusion\n");
}
int main(){
    printf("----------------------------------XXXXXXXXX----------------------------------\n");
    printf("-------------------XXXXXXXXX Welcome To ABC Shopping Mall XXXXXXXXX-------------------\n");
    float proprice,subtotal;
    int qu;
    printf("Enter a price of product= ₹");
    scanf("%f",&proprice);
    printf("Enter a quantity of product= ");
    scanf("%d",&qu);
    sut(&subtotal,&qu,&proprice);
    printf("----------------------------------XXXXXXXXX----------------------------------\n");
    printf("Your Subtotal= ₹%.2f\n",subtotal);
    discount(&subtotal);
    tax(&subtotal);
    printf("Your Total Amount is = ₹%.2f\n",subtotal);
    printf("----------------XXXXXXXXX Thanku, Welcome Again XXXXXXXXX----------------\n");
    printf("----------------------------------XXXXXXXXX---------------------------------\n");
    return 0;
}