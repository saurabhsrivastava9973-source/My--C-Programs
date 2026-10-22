#include<stdio.h>

int main(){

    int elements,n;

    printf("What's Total no. of Elements= ");
    scanf("%d",&elements);

    int arrays[elements];

    for(int i=0;i<elements;i++){

        printf("Enter %d Elements into Arrays= ",elements);
        scanf("%d",&n);

        arrays[i]=n;

    }

    int max=arrays[0],max2=arrays[1],max3=arrays[2];

    for(int i=0;i<elements;i++){

        if(max<arrays[i]){

            max3=max2;
            max2=max;
            max=arrays[i];

        }else if(arrays[i]>max2 && arrays[i]<max){

            max3=max2;
            max2=arrays[i];

        }else if(arrays[i]>max3 && arrays[i]<max2){

            max3=arrays[i];

        }

    }

    printf("Maximum no. in Arrays Is= %d\n",max);

    printf("Second Maximum no. in Arrays Is= %d\n",max2);

    printf("Third Maximum no. in Arrays Is= %d\n",max3);

    return 0;

}


