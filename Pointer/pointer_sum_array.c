#include<stdio.h>

int SumArray(int *arr,int size);

int main(){

    int size;

    printf("How Many Elements Should Be In Array = ");
    scanf("%d",&size);
    
    int array[size],value;

    for(int i=0;i<size;i++){

        printf("Enter An Integer In an Array- array[%d]= ",i);
        scanf("%d",&value);

        array[i]=value;
    
    }

    printf("The Sum Of Elements is:- %d\n",SumArray(array,size));
    return 0; 
}

int SumArray(int *arr,int size){

    int sum=0;

    for(int j=0;j<size;j++){
        sum=sum +*(arr+j);

    }

    return sum;

}