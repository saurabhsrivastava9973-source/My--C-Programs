#include<stdio.h>

int main(){

    int size,n,flag=0;

    printf("Enter a Size Of Array:- ");
    scanf("%d",&size);

    int array[size];
    
    for(int i=0;i<size;i++){

        printf("Enter a Integer to an Array= ");
        scanf("%d",&n);

        array[i]=n;
    }
    printf("Leaders: ");
    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){

            if(array[i]>array[j]){
                flag=1;
            
            }else{
                flag=0;
                break;

            }
        }
        if(flag==1){
            if(i!=size-1){
                printf("%d,",array[i]);
            }
        }if(i==size-1){
            printf("%d",array[i]);
            break;
        }
    }
    printf("\n");


}