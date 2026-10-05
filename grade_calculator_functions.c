#include<stdio.h>
void average(int *ma1,int *ma2,int *ma3, int *avg){
    *avg=(*ma1+*ma2+*ma3)/3;
    printf("Your Average Marks= %d\n",*avg);
}
void uswitc(int *avg){
    int ch=*avg/10;
    switch(ch){
        case 10:
        case 9:
        printf("A grade - Excellent\n");
        break;
        case 8:
        printf("B grade - Very Good\n");
        break;
        case 7:
        printf("C grad - Nice\n");
        break;
        case 6:
        printf("D grade - Good But need to improve\n");
        break;
        case 5:
        printf("E grade - Need improvement\n");
        break;
        case 4:
        printf("F grade - Need Improvemennt\n");
        break;
        case 3:
        case 2:
        case 1:
        case 0:
        printf("F grade - Fail\n");
        break;
        default:
        printf("Enter The Proper Value\n");
    }
}
int main(){
    printf("-------------XXXXXX Welcome To ABC School XXXXXX-------------\n");
    char studuname[50] = "";
    char sec;
    int ma1,ma2,ma3,avg,roll,class;
    printf("Enter Your Name = ");
    scanf("%49s", studuname);
    printf("Enter Student's Class= ");
    scanf("%d",&class);
    printf("Enter Your Section= ");
    scanf(" %c",&sec);
    printf("Enter Your Roll no.= ");
    scanf("%d",&roll);
    if (class>=1 && class<=12){
        printf("Enter a marks of 1st subject= ");
        scanf("%d",&ma1);
        printf("Enter a marks of 2nd subject= ");
        scanf("%d",&ma2);
        printf("Enter a marks of 3rd subject= ");
        scanf("%d",&ma3);
        average(&ma1,&ma2,&ma3,&avg);
        uswitc(&avg);
    }else{
        printf("Enter valid class\n");
    }
printf("-----------------XXXXXX-----------------");
return 0; 
}
