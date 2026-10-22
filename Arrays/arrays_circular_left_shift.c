#include<stdio.h>

int main(){

    int elements,n;

    printf("What's Total no. of Elements= ");
    scanf("%d",&elements);

    int arrays[elements];

    for(int i=0;i<elements;i++){

       printf("Enter %d Integers In Array= ",elements);
       scanf("%d",&n);

       arrays[i]=n;

    }

    int first= arrays[0];

    for(int i=0;i<elements-1;i++){

        arrays[i]=arrays[i+1];

        
    }

    arrays[elements-1]=first;

    for(int i=0;i<elements;i++){

       printf("%d\n",arrays[i]);

    }
    return 0;

}
