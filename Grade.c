#include<stdio.h>
int main(){
    float x;
    printf("Enter the Marks = ");
    scanf("%f",&x);
    if (x>100){
        printf("Enter a value below 100\n");
    }else if (x>=90){
        printf("Student Got A grade\n");
    }else if (x>80){
        printf("Student Got B grade\n");
    }else if (x>70){
        printf("Student Got C grade\n");
    }else if (x>50){
        printf("Student Got D grade\n");
    }else if (x>40){
        printf("Student Got E grade\n");
    }else{
        printf("Student Got F grade\n");
    }
}