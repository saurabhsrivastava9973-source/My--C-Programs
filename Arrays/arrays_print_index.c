#include<stdio.h>

int main(){

    int elements,n,search,flag=0;
    printf("Enter a no. of elements= ");
    scanf("%d",&elements);
    printf("\n");

    int arrays[elements];

    for(int i=0;i<elements;i++){
        printf("Enter %d integers= ",elements);
        scanf("%d",&n);
        arrays[i]=n;
    }

    printf("\n");

    printf("Enter Number To Search= ");
    scanf("%d",&search);

    int i=0;

    for(i=0;i<elements;i++){

        if(arrays[i]==search){
            flag=1;
            break;

        }
    }
    if(flag==1){

        printf("Found %d at index %d\n",search,i);
    }else{
        
        printf("Target Not Found In The Array\n");
    }

    return 0;
}