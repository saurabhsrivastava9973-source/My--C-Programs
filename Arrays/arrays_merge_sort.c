
#include<stdio.h>

void merge_sort(int arrays[],int left, int right );

int main(){

    int element,size;

    printf("Enter no. of elements= ");
    scanf("%d",&size);

    int arrays[size],right=size-1,left=0;

    for(int i=0; i<size;i++){

        printf("Enter a no. in array= ");
        scanf("%d",element);

        arrays[i]=element;

    }



}

void merge_sort(int arrays[],int left,int right){

    if(left==right){

        return;

    }

    merge_sort(arrays,left,right);

    int mid=(left+right)/2;



}




