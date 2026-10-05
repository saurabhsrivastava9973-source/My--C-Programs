#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,avg;
    printf("Enter 1st subject marks");
    scanf("%d",&m1);
    printf("Enter 2nd subject marks");
    scanf("%d",&m2);
    printf("Enter 3rd subject marks");
    scanf("%d",&m3);
    printf("Enter 4th subject marks");
    scanf("%d",&m4);
    printf("Enter 5th subject marks");
    scanf("%d",&m5);
    avg=(m1+m2+m3+m4+m5)/5;
    avg>100?printf("Give Appropiate value"):avg==100?printf("O grade"):avg>90?printf("O Grade"):avg>80?printf("A grade"):avg>80?printf("A grade"):avg>70?printf("B grade"):avg>60?printf("C grade"):avg>50?printf("D grade"):avg>40?printf("E grade"):avg>30?printf("F Grade"):printf("Pleasen Give Appropiate Value");
}