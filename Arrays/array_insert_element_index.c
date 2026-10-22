#include<stdio.h>

int main(){

    int elements,n,index,insert;

    printf("Enter a no. of elements= ");
    scanf("%d",&elements);

    int arrays[elements+1];

    for(int i=0;i<elements;i++){

        printf("Enter %d out of %d integers to Array= ",i,elements);
        scanf("%d",&n);
        arrays[i]=n; 

    }

    printf("Enter Index No. = ");
    scanf("%d",&index);

    printf("Enter No. to index = ");
    scanf("%d",&insert);

    for(int i=elements;i>index;i--){

        arrays[i]=arrays[i-1];

    }

    arrays[index]=insert;

    printf("{");

    for(int i=0;i<=elements;i++){

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



