#include<stdio.h>

int main(){
    int size, value, max;

    printf("Enter a size of array:- ");
    scanf("%d", &size);

    int array[size];
    for(int i = 0; i < size; i++){
        printf("Enter Integer in Array:- ");
        scanf("%d", &value);
        array[i] = value;
    } 
    max=array[size-1];
    printf("Leader:- ");
    printf("%d", max);

    for(int i=size-2;i>=0;i--){
        if (array[i]>max){
            max = array[i];
            printf(",%d",max);
        }
    }
    printf("\n");

    return 0;
}
