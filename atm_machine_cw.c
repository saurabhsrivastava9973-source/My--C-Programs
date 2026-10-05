#include<stdio.h>
void welcome(){
    printf("-----------##Welcome To ABC Bank##-----------");
}
void balance(int *x){
    printf("Your Bank Balance Is= ₹%d\n",*x);
}
void deposit(int *y, int bal){
    bal=bal+*y;
    balance(&bal);
}
void withdraw(int *z, int bal){
    if (bal>=*z){
        printf("You can withdraw money\n");
        bal=bal-*z;
        printf("You have sucessfully withdraw money of = ₹%d\n",*z);
        balance(&bal);
    }else{
        printf("You Have Insufficient balance");
        balance(&bal);
    }
}
int main(){
    int dep,wd,bal,ch;
    bal=10000;
    welcome();
    printf("\n1=Deposit\n2=Withdraw\n3=check bank balance\n4=Exit\nEnter Your Choice= ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter amount to deposit= ₹");
        scanf("%d",&dep);
        deposit(&dep,bal);
        break;
        case 2:
        printf("Enter amount to withdraw= ₹");
        scanf("%d",&wd);
        withdraw(&wd,bal);
        break;
        case 3:
        balance(&bal);
        break;
        case 4:
        break; 
        default:
        printf("Enter a Proper Value\n");
    }
    printf("--------##Thanku Visit Again##---------\n");
}