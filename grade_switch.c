#include<stdio.h>
int main(){
    float x;
    int a;
    printf("Enter the Marks = ");
    scanf("%f",&x);
    a=x/10;
    switch(a){
        case 10:
        printf("A grade\n");
        break;
        case 9:
        printf("A grade\n");
        break;
        case 8:
        printf("B grade\n");
        break;
        case 7:
        printf("C grade\n");
        break;
        case 6:
        printf("D grade\n");
        break;
        case 5:
        printf("E grade\n");
        break;
        case 4:
        printf("F grade\n");
        break;
        case 3:
        printf("F grade\n");
        break;
        case 2:
        printf("F grade\n");
        break;
        case 1:
        printf("F grade\n");
        break;
        default:
        printf("Enter The Proper Value\n");
    }
}