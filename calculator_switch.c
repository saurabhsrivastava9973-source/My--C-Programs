#include<stdio.h>
int main(){
    float num1,num2;
    int cho;
    printf("Enter 1st Value = ");
    scanf("%f",&num1);
    printf("Enter 2nd Value = ");
    scanf("%f",&num2);
    printf("Press, 1=Add\n2=Subtract\n3=Multiplication\n4=Divide\n");
    printf("Enter The Choice");
    scanf("%d",&cho);
    switch(cho){
        case 1:
        printf("The Sum Of 2 no. is = %.2f\n",num1+num2);
        break;
        case 2:
        printf("The Multiplication Of 2 no. is = %.2f\n",num1*num2);
        break;
        case 3:
        printf("The Sum Of 2 no. is = %.2f\n",num1/num2);
        break;
        case 4:
        printf("The Sum Of 2 no. is = %.2f\n",num1-num2);
        break;
        default:
        printf("Pleaae Enter The Value b/w (1 to 4)\n");

    }   
}
