#include<stdio.h>

int main(){

    int elements,n;

    printf("Enter a no. of elements= ");
    scanf("%d",&elements);

    int arrays[elements+1];

    for(int i=0;i<elements;i++){

        printf("Enter %d out of %d integers to Array= ",i,elements);
        scanf("%d",&n);

        arrays[i]=n;
    }

    int i=0,left=0,right=elements-1;

    while(left<right){

        if(arrays[left]%2==0){
            left++;

        }else if(arrays[right]%2!=0){
            right--;

        }else{
            int temp=arrays[right];
            arrays[right]=arrays[left];
            arrays[left]=temp;

            right--;

            left++;
        }
        
    }

    printf("New Partition Array;- {");

    for(int i=0;i<elements-1;i++){

        if(i!=elements){

            printf("%d",arrays[i]);
            printf(",");

        }else{

            printf("%d",arrays[i]);
        }
    }
    printf("}\n");
    
    return 0;
}

